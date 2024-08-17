//switch code example
//monday to sunday

#include <stdio.h>

int main() {
    int day;
    printf("Enter day (1-7): ");
    
    // Corrected: Added '&' before 'day' in scanf to store the input in the variable
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Not a valid day\n");
    }

    return 0;  // Added return statement to indicate the program ended successfully
}


/*
O/P:-
Enter day (1-7): 1
Monday


=== Code Execution Successful ===*/