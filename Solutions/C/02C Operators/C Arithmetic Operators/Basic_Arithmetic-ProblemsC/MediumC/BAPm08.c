// December 23, 2024 - with pseudo
// Problem: Write a program that accepts one integer input, x. Find the cube of x, then add 5.
/* Expected Output: 
Enter x: 2
Result: 13
*/
#include <stdio.h>
#include <math.h>

int main(){//START
// DECLARE x,result
    int x,result;
    
// INPUT x OUTPUT x
    printf("Enter x: ");
    scanf("%d", &x);
    
// SET result and calculate, (pow(x,3))+5
    result = (pow(x,3))+5;
    
// OUTPUT result
    printf("Result: %d", result);
}//END
