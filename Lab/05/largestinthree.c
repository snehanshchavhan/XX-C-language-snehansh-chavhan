#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the three numbers to check");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is the largest", a);
    }else if(b>a && b>c){
        printf("%d si the largest",b);
    }else if(c>a && c>b){
        printf("%d is largest", c);
    }else{
        printf("all are eqaul");
    }

    return 0;
}