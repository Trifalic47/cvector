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
