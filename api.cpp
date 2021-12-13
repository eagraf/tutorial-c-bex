// Implementation of "my_api".
#include "api.h"

#include <vector>
#include <assert.h>

// Do some computations with 'str', return the result.
// This function contains a bug. Can you spot it?
size_t BrokenMethod(std::string str) {
  std::vector<int> Vec({0, 1, 2, 3, 4});
  size_t Idx = 0;
  if (str.size() > 5)
    Idx++;
  if (str.find("foo") != std::string::npos)
    Idx++;
  if (str.find("bar") != std::string::npos)
    Idx++;
  if (str.find("ouch") != std::string::npos)
    Idx++;
  if (str.find("omg") != std::string::npos)
    Idx++;
  return Vec[Idx];
}

void BrokenMethod2(std::string str) {
  if (str[0] != 'q') {return;}
  if (str[1] != 'w') {return;}
  if (str[2] != 'e') {return;}
  if (str[3] != 'r') {return;}
  if (str[4] != 't') {return;}
  if (str[5] != 'y') {assert(0);}
  return;
}
