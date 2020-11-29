#include <stdio.h>

int main() {
    char buf[32];
    FILE* myFile = fopen("task.in", "r");

    //for( char* ptr = buf ; fscanf(myFile, "%c", ptr) != EOF; ptr++ );

    for( int i = 0; fscanf(myFile, "%c", &buf[i]) != EOF; i++ );

    printf("%s\n", buf);

    fclose(myFile);

    return 0;
}