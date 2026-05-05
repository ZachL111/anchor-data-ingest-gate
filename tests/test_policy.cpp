#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{85, 89, 24, 6, 12};
    assert(score_signal(signal_case_1) == 241);
    assert(classify_signal(signal_case_1) == "accept");
    Signal signal_case_2{90, 100, 15, 11, 9};
    assert(score_signal(signal_case_2) == 240);
    assert(classify_signal(signal_case_2) == "accept");
    Signal signal_case_3{71, 91, 26, 8, 6};
    assert(score_signal(signal_case_3) == 171);
    assert(classify_signal(signal_case_3) == "accept");
}
