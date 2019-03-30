#include <stdio.h>
int isRightTriangle(unsigned long a, unsigned long b, unsigned long c);
int main() {
    unsigned long a, b, c;
    printf("Enter a, b, c:\n");
    scanf("%ld %ld %ld", &a, &b, &c);
    if(isRightTriangle(a,b,c)){
        printf("A right triangle exists");
    } else {
        printf("A right triangle NOT exists");
    }
    return 0;
}

int isRightTriangle(unsigned long a, unsigned long b, unsigned long c){
    if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
        return 1;
    } else {
        return 0;
    }
}