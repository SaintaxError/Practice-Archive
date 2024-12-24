// December 24, 2024 - with pseudo + function
/* Problem: Write a program that accepts three integer inputs, x, y, and z. Compute x raised to the power of y, find the modulus when divided by z, and multiply by the sum of x and z.
Expected Output: 
Enter x: 2
Enter y: 3
Enter z: 4
Result: 0
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

//OUTPUT result
    printf("Result: %d", resultext(x,y,z));
}//END

int resultext(int x, int y, int z){
// SET result and calculate
// result = pow(x,y)
// result = (int)result % z
// result = result * (x+z)
    int result = (((int)(pow(x,y))%z)*(x+z));
    return result;
}
