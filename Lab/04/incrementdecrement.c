#include <stdio.h>
int main(){
    int a;
    printf("enter the number a: ");
    scanf("%d", &a);
    printf("a= %d\n", a);
    printf("value of a after increment= %d\n", ++a);
    printf("valuae of a after decrement= %d\n", --a);

    return 0;
}