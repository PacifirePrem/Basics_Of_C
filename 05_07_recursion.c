#include<stdio.h>
int factorial(int x);

int main(){
    int a = 5;
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}

int factorial(int number){
    printf("Calling factorial(%d)\n", number);
    if (number==1 || number==0){
        return 1;
    }
    else{
        return number * factorial(number-1);
    }
}