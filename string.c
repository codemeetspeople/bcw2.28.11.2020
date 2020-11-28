#include <stdio.h>

void strCopy(char source, char destination) {
    for ( ; *source != '\0'; source++, destination++ ) {
        *destination = *source;
    }
    *destination = '\0';
}

void strCopyIndex(char source[], char destination[]) {
    int i = 0;
    
    for ( ; source[i] != '\0'; i++ ) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

void strUpper(char* str) {
    int offset = 'a' - 'A';

    for ( ; *str != '\0'; str++ ) {
        if ( *str >= 'a' && *str <= 'z' ) {
            *str -= offset;
        }
    }
}

int main() {
    char source[16] = "123.devclub.com";
    char copy[16];

    strCopy(source, copy);
    strUpper(copy);

    printf("%s\n", copy);

    return 0;
}
