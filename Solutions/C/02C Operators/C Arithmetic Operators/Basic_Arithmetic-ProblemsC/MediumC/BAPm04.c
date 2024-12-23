// December 23, 2024 - with pseudo
// Problem: Write a program that accepts three integer inputs, x, y, and z. Add x and y, multiply the sum by z, and subtract 10 from the result.  
/* Expected Output: 
Sample Output 1:
Enter x: 2  
Enter y: 4  
Enter z: 3  
Result: 8
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
// (((x+y)*z)-10)
    result = (((x+y)*z)-10);
    
// OUTPUT result
    printf("Result: %d", result);
}//END
