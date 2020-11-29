#include <stdio.h>

int main() {
    int x = 0;

    for ( int i = 0; i < 2000000001; i++ ) {
        if ( i % 2 == 0 ) {
            x += 1;
        } else {
            x -= 1;
        }
    }

    printf("%d\n", x);

    return 0;
}
