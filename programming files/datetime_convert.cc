#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{

    // John added bugs
    std::string date_str = "2022-03-17 10:45:30";
    std::tm date_obj = {};
    std::istringstream ss(date_str);
    //bug found on next line &
    ss >> std::get_time(&date_obj, "%y-%m-%d %H:%M:%S");
    std::stringstream formatted_date_ss;
    // Push string to stringstream
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");
    std::string formatted_date = formatted_date_ss.str();

    std::cout << formatted_date << std::endl;

    return 0;
}
