// December 24, 2024 - with pseudo + function
/* Problem: Write a program that accepts three integer inputs, x, y, and z. Compute x raised to the power of y, add the square of z, and divide the result by the factorial of z.
Expected Output: 
Enter x: 2
Enter y: 3
Enter z: 2
Result: 6
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
// result = pow(x,y)
// result = result + (pow(z,2))
    result = (pow(x,y))+(pow(z,2));
//  divide result by the factorial of z (loop)
    int product = 1;
    for(int i = 1; i <= z; i++){// FOR int = i to z DO
// product = product * i
    product *= i;
    }// ENDFOR
    
// result = result/product
    result = result/product;
    return result;
}
