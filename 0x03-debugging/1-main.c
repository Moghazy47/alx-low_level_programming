#include <stdio.h>

int main() {
    int i = 0;

    while (1) {
        // Perform some operations
        i++;

        if (i == 10) {
            printf("Infinite loop avoided! \\o/\n");
            break;
        }
    }

    return 0;
}
