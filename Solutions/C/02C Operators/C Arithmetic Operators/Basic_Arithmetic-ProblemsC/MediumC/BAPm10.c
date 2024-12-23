// December 23, 2024 - with pseudo
// Problem: Write a program that accepts four integer inputs, x, y, z, and w. Add x and y, subtract z, then add w.
/* Expected Output: 
Enter x: 10
Enter y: 5
Enter z: 3
Enter w: 2
Result: 14
*/
#include <stdio.h>

int main(){//START
// DECLARE x,y,z,w,result
    int x,y,z,w,result;
    
// INTPUT x,y,z,q OUTPUT x,y,z,w
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    printf("Enter w: ");
    scanf("%d", &w);
    
// SET result and calculate
// ((x+y)-z)+w
    result = ((x+y)-z)+w;
    
// OUTPUT result
    printf("Result: %d", result);
}//END
