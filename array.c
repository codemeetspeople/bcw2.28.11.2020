#include <stdio.h>

#define LEN 10

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayZeroFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

void arrayAbs(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}

int main() {
    int array[LEN] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};

    printf("before:\n");
    arrayPrint(array, LEN);

    printf("\n");
    // arrayZeroFill(array, LEN);
    arrayAbs(array, LEN);
    
    printf("after:\n");
    arrayPrint(array, LEN);

    return 0;
}
