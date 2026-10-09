#include <stdio.h>
int main(){
    int A=5,B=15;
    printf("before swapping A is %d and B is %d\n",A,B);

    A=A+B;
    B=A-B;
    A=A-B;
    printf("after swapping A is %d and B is %d\n",A,B);

    return 0;
}