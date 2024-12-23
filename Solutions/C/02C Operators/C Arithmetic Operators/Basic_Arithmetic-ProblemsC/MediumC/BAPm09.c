// December 23, 2024 - with pseudo
// Problem: Write a program that accepts two integer inputs, x and y. Multiply x and y, divide the result by 4, then subtract 3.
/* Expected Output: 
Enter x: 10
Enter y: 4
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
// ((x*y)/4)-3
    result = (((x*y)/4)-3);
    
//OUTPUT result
    printf("Result: %d", result);
}//END
