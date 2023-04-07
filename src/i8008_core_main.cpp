#include <stdio.h>

#include "i8008_core.cpp"
using namespace cxxrtl_design;

int main() {
    printf("Beginning i8008 Verification\n");
    p_top mod;

    mod.p_sw.set<24>(0);
    mod.p_reset__n.set<bool>(1);
    mod.p_uart__rx.set<bool>(0);
    mod.step();

    printf("Finished verification run");
	return 0;
}
