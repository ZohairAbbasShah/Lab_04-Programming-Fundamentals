#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter number a,b,c: ");
    scanf("%i%i%i",&a,&b,&c);

    if (a>=b && a>=c){
        printf("a is greater");
    }
    else if(b>=a && b>=c){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }
    return 0;
}