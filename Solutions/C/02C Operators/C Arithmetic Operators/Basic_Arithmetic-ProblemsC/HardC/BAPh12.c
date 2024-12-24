// December 24, 2024 - with pseudo + function
/* Problem: Write a program that accepts three integer inputs, x, y, and z. Compute the factorial of x, raise it to the power of y, and subtract the square of z.
Expected Output: 
Enter x: 3
Enter y: 2
Enter z: 2
Result: 34
*/
#include <stdio.h>
#include <math.h>

int resultext(int x, int y, int z);    

int main(){//START
// DECLARE x,y,z
    int x,y,z;
// INPUT x,y,z OUTPUT x,y,z
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    
// OUTPUT result 
    printf("Result: %d", resultext(x,y,z));
}//END

int resultext(int x, int y, int z){
    // SET result and calculate
    int result;
    int product = 1;
// factorail of x (loop)
    for(int i = 1; i <= x; i++){// FOR int i = 1 <= x DO
// product = product * i
    product *= i;
    }// ENDFOR

// result = pow(product,y) - (pow(z,2))
    result = pow(product,y) - pow(z,2);
    return result; 
}   

