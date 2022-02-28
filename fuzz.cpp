#include "api.h"

void FuzzBrokenMethod(std::string data) {
    BrokenMethod2(data);
}

void FuzzBrokenMethod2(std::string data) {
    BrokenMethod2(data);
}


void FuzzBrokenMethod3(std::string data) {
    BrokenMethod2(data);
}



void FuzzBrokenMethod4(std::string data) {
    BrokenMethod2(data);
}
