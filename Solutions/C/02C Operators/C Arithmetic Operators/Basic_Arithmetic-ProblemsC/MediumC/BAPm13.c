// December 23, 2024 - with pseudo
// Problem: Write a program that accepts two integer inputs, x and y. Subtract y from x, then multiply the result by 3.
/* Expected Output: 
Enter x: 8
Enter y: 3
Result: 15
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
// (y-x)*3
    result = (x-y)*3;
    
//OUTPUT result
    printf("Result: %d", result);
}//END
