#include<stdio.h>
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    age>= 18 ? printf("adult \n"):
    printf("not adult \n");
    return 0;
}

/*
O/P:-
Enter age: 21
adult 


=== Code Execution Successful ===*/