#include <stdio.h>

int scanSize() {
    int size;

    printf("Please, enter size of array\n");
    scanf("%d", &size);

    return size;
}

int main() {
    int size = scanSize();
    int values[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("%d\n", values[i]);
    }

    return 0;
}