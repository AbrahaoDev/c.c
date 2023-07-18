#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}

int mut(int a,int b){
    return a*b;
}

int div(int a, int b){
    return a / b;
}




int main (){
    int a,b;
    char op;
    scanf("%d %c %d", &a,&op,&b);
    if(op=='+'){
        printf("%d\n", add(a,b));

    };

     if(op=='-'){
         printf("%d\n", sub(a,b));
    };

     if(op=='*'){
         printf("%d\n", mut(a,b));

    };

     if(op=='/'){
         printf("%d\n", div(a,b));

    };




}