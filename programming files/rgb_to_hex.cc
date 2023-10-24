#include <iostream>
#include <sstream>
#include <iomanip>

std::string rgb_to_hex(int r, int g, int b)
{
    r = std::max(0, std::min(255, r));
    g = std::max(0, min(255, g));  // this is a bug: should be std::
    b = std::max(0, std::min(255, b));

    // This is a string
    std::stringstream ss;
    ss << std::uppercase << std::hex << std::setfill('0')
       << std::setw(2) << r << std::setw(2) << g << std::setw(2) << b;

    return str(); // bug: should be returning the ss.str()
}

//Test with 
std::string hexColor = rgb_to_hex(255, 127, 0); // returns "FF7F00"
