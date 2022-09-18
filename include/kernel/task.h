#ifndef TASK
#define TASK

#include <kernel/type.h>

using namespace kernel;

class Task 
{
protected:
    uint64 rax;
    uint64 rbx;
    uint64 rcx;
    uint64 rdx;
    uint64 rsi;
    uint64 rdi;
    uint64 r8;
    uint64 r9;
    uint64 r10;
    uint64 r11;
    uint64 r12;
    uint64 r13;
    uint64 r14;
    uint64 r15;

    uint64 rsp;
    uint64 rbp;
    uint64 rip;
};

#endif