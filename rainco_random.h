//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Convert Time integer Time (12:48 => 1248)
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int get_integer_time(auto eTime){
    return (eTime.hour * 100) + eTime.minute;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Convert integer Time to Strimg (1248 => 12:48:00)
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
std::string get_string_time(int rhour, int rminute){
    std::string tstr = "";
    if(rhour < 10){tstr = tstr + "0";}  
    tstr = tstr + std::to_string(rhour);
    tstr = tstr + ":";
    if(rminute < 10){tstr = tstr + "0";}  
    tstr = tstr + std::to_string(rminute);         
    return tstr;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Convert Time to total minutes
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int time_to_minute(int etime) {
    int t_hour = etime / 100;
    int t_minute = etime % 100;
    return ((t_hour * 60) + t_minute);
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Create Random Time
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int random_time (int time_start, int time_end){
    // rand() % (max_number + 1) + minimum_number
    int rstart_value = time_to_minute(time_start);
    int rstop_value = time_to_minute(time_end);
    int rand_value = rand() % (rstop_value + 1 - rstart_value) + rstart_value;
    return rand_value;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// The text that is displayed when the start and end times do not match.
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
std::string random_text_wrong_times(int min_diff_time) {
    std::string tstr = "Start time must be ";
    tstr = tstr + std::to_string(min_diff_time);
    tstr = tstr + " min earlier than the end time.";
    tstr = tstr + " Furthermore, the start and end times must be on the same day!";
    return tstr;
}    
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++