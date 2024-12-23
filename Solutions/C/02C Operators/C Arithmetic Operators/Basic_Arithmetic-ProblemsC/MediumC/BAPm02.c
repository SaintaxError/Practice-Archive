// December 23, 2024 - with pseudo
// Problem: Write a program that accepts two integer inputs, x and y. Multiply x and y, then divide the product by 4, and add 5 to the result.
/* Expected Output: 
Sample Output 1:
Enter x: 4
Enter y: 2
Result: 7
*/
#include <stdio.h>
int main(){//START
// DECLARE x,y, result
    int x, y, result;
    
// INPUT x, OUTPUT x
    printf("Enter x: ");
    scanf("%d", &x);
// INPUT y, OUTPUT y
    printf("Enter y: ");
    scanf("%d", &y);
    
// SET result and calculate
// (((x*y)/4)+5)
    result = (((x*y)/4)+5);

// OUTPUT result
    printf("Result = %d", result);
}//END
