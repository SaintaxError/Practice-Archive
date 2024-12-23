// December 23, 2024 - with pseudo
// Problem: Write a program that accepts four integer inputs, x, y, z, and w. Find the average of x, y, z, and w, then subtract 10. 
/* Expected Output: 
Enter x: 8
Enter y: 12
Enter z: 16
Enter w: 20
Result: 12
*/
#include <stdio.h>

int main(){//START
// DECLARE x,y,z,w, result
    int x,y,z,w,result;
    
// INPUT x,y,z,w OUTPUT x,y,z,w
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    printf("Enter w: ");
    scanf("%d", &w);
    
// SET result and calculate
// (((x+y+z+w)/4)-10)
    result = (((x+y+z+w)/4)-10);
    
// OUTPUT result
    printf("Result: %d", result);
    return 0;
}//END
