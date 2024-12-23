// December 23, 2024 - with pseudo
// Problem: Write a program that accepts two integer inputs, x and y. Add x and y, then square the sum and divide by 2.
/* Expected Output: 
Enter x: 3
Enter y: 4
Result: 24
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
// (x+y)
// result = (pow(result,2))/2
    result = x+y;
    result = (pow(result,2))/2;
    
// OUTPUT result
    printf("Result: %d", result);
}//END
