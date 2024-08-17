#include<stdio.h>
int main(){
    int number;
    printf("enter number: ");
    scanf("%d",&number);


if(number >= 0){
    printf("positive \n");
    if(number %2 == 0){
        printf("even \n");
    }else
    {
        printf("odd \n");
    }
}
}

/*
O/P:-
enter number: 55
positive 
odd 


=== Code Execution Successful ===*/