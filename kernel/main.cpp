
#include <kernel/kernel.h>

int main() {
    kernel::Kernel kernel;
    kernel.startKernel();
    kernel.hlt();
}