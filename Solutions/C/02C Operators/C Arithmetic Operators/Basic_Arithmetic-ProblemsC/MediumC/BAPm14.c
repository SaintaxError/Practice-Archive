// December 23, 2024 - with pseudo
// Problem: Write a program that accepts two integer inputs, x and y. Find the remainder when x is divided by y, then add y to the remainder.
/* Expected Output: 
Enter x: 17
Enter y: 5
Result: 7
*/
#include <stdio.h>

int main(){//START 
// DECLARE x,y,result
    int x,y,result;
    
// INPUT x,y OUTPUT x,y
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    
// SET result and calculate
// (x%y)+y
    result = (x%y)+y;
    
// OUTPUT result
    printf("Result: %d", result);
}// END
