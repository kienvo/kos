A simple 64 bits Operating System for x64. Just for fun.

I use C++ and Assembly to develop the OS. I use g++ and Nasm for compiler tools

How to run:
1. Setup cross-compile tools: g++, ld for x64
2. Run with VM: make demo

Timeline:

1. Enter Long mode: check CPU support, setup Memory mapping, setup GDT
2. Create interrupt handler. Using PIC. I have plan to move to APIC later.
3. Create debug functions: print, printNumber, printAddress. 
4. Some simple drivers: Timer, Keyboard, Video Graphics
5. Create DynamicMemory module. Now we use operator: new, delete, new[], delete[]
6. Add datastructure: list. We need to add more data structure like: tree, hashtable...
7. Support multithreading. Schedule tasks
8. ...

Reference: https://wiki.osdev.org/Expanded_Main_Page