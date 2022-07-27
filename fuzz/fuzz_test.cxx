#include "api.h"
#include "fuzzbuzz.hxx"

FZBZ_TARGET_CLASS(FuzzBrokenMethodClient);
struct FuzzBrokenMethodClient {
    FuzzBrokenMethodClient(fzbz::Fuzzer &f) {
        auto gen = fzbz::generator::string<std::string>();
        auto target = fzbz::fuzzTarget([&](auto Data) {
            BrokenMethod2(Data);
            return 0;
        }, gen);

        f.addFuzzTarget(target);
    }
};
