/* Description:

• The user entered number should identified whether its a odd or a even number. Mention its sign too.

Pr-requisites:-

• Arithmetic Operators

• Nested if-else construct

Objective: -

• To understand the concept of Nested if-else

Inputs: -

Integer 'N'. 
Sample execution: -

Test Case 1:

user@emertxe] ./even_odd

Enter the value of 'n' : -2

-2 is negative even number

Test Case 2:

Enter the value of 'n' : 2

2 is positive even number

Test Case 3:

Enter the value of 'n' : 0

0 is neither odd nor even */

#include<stdio.h>
int main (){
    int n;
    // Reading the value of n
    scanf("%d", &n);
    if (n == 0){
        // Check if the number is zero
        printf("0 is neither odd nor even\n");
    }else{
        if(n > 0){
            // Check if the number is positive
            if (n % 2 == 0){
                //check if the positive number is even
                printf("%d is positive even number\n", n);
            }else {
                //if the positive number is not even, then it is odd
                printf("%d is positive odd number\n ", n);
            }
        }else{
            // If the number is not positive,it is negative
            if (n % 2 == 0){
                printf("%d is negative even number\n", n);
            }else{
                printf("%d is negative odd number\n", n);
            }
        }
    }
    return 0;
}
