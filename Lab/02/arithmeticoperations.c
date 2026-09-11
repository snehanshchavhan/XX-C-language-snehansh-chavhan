#include <stdio.h>
int main(){
    float a, b;
    printf("enter the first no.");
    scanf("%f", &a);
    printf("enter the secomd no. ");
    scanf("%f", &b);

    printf("the sum is: %f\n", a+b);
    printf("the diff is: %f\n", a-b);
    printf("the product is: %f\n", a*b);
    printf("the division is: %f", a/b);

    return 0;
}