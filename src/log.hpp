#include <iostream>
#include <stdio.h>
#include <chrono>
#include <iomanip>

namespace dbg {
    // Log-level log (C impl)
    void logc(char* msg);
    // Log-level log (C++ impl)
    void log(std::string str_msg);
    
    // Error-level log (C++ impl)
    void lerr(std::string err_msg);
    // Error-level log (C impl)
    void lerrc(char* err_msg);
}
