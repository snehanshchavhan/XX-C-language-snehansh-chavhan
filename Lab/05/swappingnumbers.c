#include <stdio.h>
int main(){
    int A=10, B=20, C;
    printf("value of A is %d and value of B is %d\n", A,B);
    C=A;
    A=B;
    B=C;
    printf("value of A is %d and value of B is %d\n", A,B);

    return 0;
}