// December 23, 2024 - with pseudo
// Problem: Write a program that accepts two integer inputs, x and y. Divide x by y, then find the remainder when x is divided by y.  
/* Expected Output: 
Sample Output 1:
Enter x: 17  
Enter y: 4  
Result: 1 
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
/* x%y, ni gamit nakog modulo operator ditso since "find the remainder" naman, if mag 
  divide pako useless when naa may modulo to get the remainder dayon */
    result = x%y;
    
// OUTPUT result
    printf("Result: %d", result);
}//END
