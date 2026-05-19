/*
* Dynamic memory allocator using C
* It is kinda a clone of std::vector in c++/cpp.
* Made by - Trifalic47. Check my github on -> https://github.com/Trifalic47 and REPO LINK -> https://github.com/Trifalic47/cProgramms
*
* Its Features -> Unline other arrays in C,we can't expand them like if we declared an array using - arr[3] so we could only store 3
* values max but if we try to store more so we will hit an stack error becuase our array could only store 3values,so to fix this
* issue I made an dynamic array programm in C.
*/

#include "utils.h"

int main() {
    Vector *ages;

    int count = 3;

    ages = vector_init(count);
    vector_push(ages,10);
    vector_push(ages,14);
    vector_push(ages,18);

    printf("==================Values=======================\n");
    for (int i = 0; i< count;i++) {
        vector_print(ages, i);
    }

    count += 2;
    vector_expand(ages,2);
    vector_push(ages,28);
    vector_push(ages,12);

    printf("==================Values=======================\n");

    for (int i = 0; i< count;i++) {
        vector_print(ages, i);
    }
    vector_free(ages);

    return 0;
}
