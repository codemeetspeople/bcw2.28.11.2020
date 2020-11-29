#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Vector;

void vectorIncrement(Vector *this, Vector other) {
    this->x += other.x;
    this->y += other.y;
}

int vectorEqual(Vector a, Vector b) {
    return a.x == b.x && a.y == b.y;
}

Vector vectorSum(Vector a, Vector b) {
    Vector sum = a;

    vectorIncrement(&sum, b);
    
    return sum;
}

Vector vectorSum2(Vector a, Vector b) {
    Vector sum;
    
    sum.x = a.x + b.x;
    sum.y = a.y + b.y;

    return sum;
}

Vector vectorSum3(Vector a, Vector b) {
    Vector sum = {a.x + b.x, a.y + b.y};
    return sum;
}

double vectorLen(Vector this) {
    return hypot(this.x, this.y);
}

void vectorPrint(Vector this) {
    printf("(%g, %g)\n", this.x, this.y);
}

int main() {
    Vector v1 = {0.0, 0.0};
    Vector v2 = {1.0, 1.0};
    Vector v3 = vectorSum(v1, v2);

    vectorPrint(v1);
    vectorPrint(v2);
    vectorPrint(v3);

    if ( vectorEqual(v2, v3) ) {
        printf("vectors are equal!\n");
    }

    printf("%g\n", vectorLen(v2));

    vectorIncrement(&v2, v3);
    vectorPrint(v2);

    return 0;
}
