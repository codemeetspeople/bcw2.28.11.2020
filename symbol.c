#include <stdio.h>

int main() {
    int offset = 'a' - 'A';

    printf("%c\n", 'b' - offset);

    return 0;
}
