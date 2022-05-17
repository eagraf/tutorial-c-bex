#include "api.h"
#include "fuzzbuzz.hxx"

struct FuzzBrokenMethodClient {
    FuzzBrokenMethodClient(fzbz::Fuzzer &f) {
        auto gen = fzbz::generator::string<std::string>();
        auto target = fzbz::fuzzTarget([&](auto Data) {
            BrokenMethod(Data);
            return 0;
        }, gen);

        f.addFuzzTarget(target);
    }
};