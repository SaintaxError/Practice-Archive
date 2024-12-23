// December 23, 2024 - with pseudo
// Problem: Write a program that accepts three integer inputs, x, y, and z. Add x and y, then multiply the result by z.
/* Expected Output: 
Enter x: 4
Enter y: 5
Enter z: 3
Result: 27
*/
#include <stdio.h>

int main(){//START
// DECLARE x,y,z,result
    int x,y,z,result;
// INPUT x,y,z OUTPUT x,y,z
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    
// SET result and calculate
// (x+y)*z
    result = (x+y)*z;
    
// OUTPUT result
    printf("Result: %d", result);
}//END
