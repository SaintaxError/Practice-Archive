// December 23, 2024 - with pseudo
// Problem: Write a program that accepts two integer inputs, x and y. Find x raised to the power of y, then divide the result by 10.
/* Expected Output: 
Enter x: 2
Enter y: 3
Result: 4
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
// ((pow(x,y))/10)
    result = ((pow(x,y))/10);
    
// OUTPUT result
    printf("Result: %d", result);
}//END
