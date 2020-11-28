#include <stdio.h>

int getPlaces(int target, int base) {
    int places = 0;

    for ( ; target != 0; target /= base, places++ );
    return places; 
}

int getBase(int base, int places) {
    int currentBase = 1;

    for ( int i = 1; i < places; i++, currentBase *= base );
    return currentBase;
}

void convert(int target, int base) {
    int places = getPlaces(target, base);

    for ( int i = places; i > 0; i-- ) {
        int currentBase = getBase(base, i);
        int result = 0;

        if ( currentBase <= target ) {
            result = target / currentBase;
        }
        printf("%d", result);
        target -= currentBase * result;
    }
}

int main() {
    int target = 227;

    printf("%d (10):\n", target);
    convert(target, 10);

    printf("%d (2):\n", target);
    convert(target, 2);

    printf("%d (3):\n", target);
    convert(target, 3);

    printf("%d (4):\n", target);
    convert(target, 4);

    printf("%d (5):\n", target);
    convert(target, 5);

    printf("%d (6):\n", target);
    convert(target, 6);

    return 0;
}
