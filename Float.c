#include <stdio.h>

#define MY_VALUE        0.42f
#define OHTER_VALUE     0.1231231231231231231278361289351283512389125389d

int main() {
    double a, b, result;

    a = 0.1;
    b = 0.2;

    result = a + b;

    if ( result == 0.3 ) {
        printf("Epic win!\n");
    } else {
        printf("Epic fail!\n");
    }

    printf("%.32g\n", result);

    if ( result > 0.29 & result < 0.31 ) {
        printf("Epic win!\n");
    } else {
        printf("Epic fail!\n");
    }

    printf("%d\n", sizeof(double));

    result += 1000000000;

    result += 0.2;

    result -= 1000000000;

    printf("%.64g\n", result);

    double v1 = 0.1;
    double v2 = 0.2;

    if ( (v1 + v2) == 0.3 ) {
        printf("0.1 + 0.2 == 0.3\n");
    } else {
        printf("0.1 + 0.2 != 0.3\n");
    }

    //[1][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][.]

    return 0;
}