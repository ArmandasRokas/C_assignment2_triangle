#include <stdio.h>

int main() {
    unsigned long a, b, c;
    printf("Enter a, b, c:\n");
    scanf("%ld %ld %ld", &a, &b, &c);
    if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
        printf("A right triangle exists");
    } else {
        printf("A right triangle NOT exists");
    }
    return 0;
}