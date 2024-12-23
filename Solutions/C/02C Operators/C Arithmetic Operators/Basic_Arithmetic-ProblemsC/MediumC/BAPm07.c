// December 23, 2024 - with pseudo
// Problem: Write a program that accepts two integer inputs, x and y. Find the square of x, the square of y, and add them together.
/* Expected Output: 
Enter x: 4
Enter y: 5
Result: 41
*/
#include <stdio.h>
#include <math.h>

int main(){//START
// DECLARE x,y,result
    int x,y,result;
    
// INPUT x,y OUTPUT x,y
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    
// SET result and calculate
// ((pow(x,2))+(pow(y,2)))
    result = ((pow(x,2))+(pow(y,2)));
    
// OUTPUT result
    printf("Result: %d", result);
}//END
