#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int integer;
    long longint;
    char character;
    float floating;
    double doubledouble;
    
    scanf("%d %ld %c %f %lf", &integer, &longint, &character, &floating, &doubledouble);
    printf("%d \n", integer);
    printf("%ld \n", longint);
    printf("%c \n", character);
    printf("%f \n", floating);
    printf("%lf \n", doubledouble);

    return 0;
}