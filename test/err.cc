#include "co/all.h"

int main(int argc, char** argv) {
    flag::init(argc, argv);
    log::init();

    for (int i = -3; i < 140; ++i) {
        COUT << "error: " << i << "  str: " << co::strerror(i);
    }

    for (int i = 10060; i < 10063; ++i) {
        COUT << "error: " << i << "  str: " << co::strerror(i);
    }

    return 0;
}
