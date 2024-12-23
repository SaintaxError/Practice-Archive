// December 23, 2024 - with pseudo
// Problem: Write a program that accepts two integer inputs, x and y. First, add x and y, then multiply the sum by 3, and subtract 10 from the result.
/* Expected Output: 
Sample Output 1:
Enter x: 5
Enter y: 3
Result: 14
*/
#include <stdio.h>

int main(){//START
// DECLARE x, y, result
    int x, y, result;

// INPUT x, OUTPUT x
    printf("Enter x: ");
    scanf("%d", &x);
// INPUT y, OUTPUT y
    printf("Enter y: ");
    scanf("%d", &y);

// SET result and calculate
// ((x+y)*3)-10)
    result = (((x+y)*3)-10);

// OUTPUT result
    printf("Result: %d", result);
}//END
