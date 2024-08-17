//if-else
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age >= 18){
        printf("adult \n");
    }
    else if (age > 13 && age < 18){
    printf("teenagen /n");
    }

    else{
        printf("chaild");
    }
    return 0;

}

/*
O/P:-
Enter your age: 22
adult 


=== Code Execution Successful ===*/