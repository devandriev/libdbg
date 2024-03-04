#include "log.hpp"

namespace dbg {
    void logc(char* msg) {
        std::cout << msg << std::endl;
    }

    void log(std::string str_msg) {
        std::cout << str_msg << std::endl;
    }

    void lerr(std::string err_msg) {
        std::cout << "ERROR: " << err_msg << std::endl;
    }

    void lerrc(char* err_msg) {
        std::cout << "ERROR ( via lerrc() ): " << err_msg << std::endl;
    }
}

