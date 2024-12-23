// December 23, 2024 - with pseudo
// Problem: Write a program that accepts two integer inputs, x and y. Find the square of x, divide the result by y, and add 2.
/* Expected Output: 
Sample Output 1:
Enter x: 5
Enter y: 2
Result: 14
*/
#include <stdio.h>
#include <math.h>
int main(){//START
// DECLARE x,y,result
    int x,y,result;
    
// INPUT x, OUTPUT x
    printf("Enter x: ");
    scanf("%d", &x);
// INPUT y, OUTPUT y
    printf("Enter y: ");
    scanf("%d", &y);
    
// SET result and calculate
// (((pow(x,2))/y)+2)
    result = (((pow(x,2))/y)+2);

// OUTPUT result
    printf("Result = %d", result);
}//END 
