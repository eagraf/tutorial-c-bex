#include "api.h"

void FuzzBrokenMethod(std::string data) {
    BrokenMethod2(data);
}
