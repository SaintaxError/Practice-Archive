// December 24, 2024 - with pseudo + function
/* Problem: Write a program that accepts three integer inputs, x, y, and z. Find the factorial of x, divide it by the square of y, compute the modulus when divided by z, and then add z.
Expected Output: 
Enter x: 4
Enter y: 2
Enter z: 3
Result: 4
*/
#include <stdio.h>
#include <math.h>

int resultext(int x, int y, int z);

int main(){//START
// DECLARE x,y,z
    int x, y, z;
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
// factorial of x (loop)
    for(int i = 1; i <= x; i++){// FOR int i = 1 to x DO
// product = product * i
    product *= i;
    }// ENDFOR

// result = product/(pow(y,2))
// result = (result % z) + z
    result = ((product/(int)(pow(y,2)) % z) + z);
    return result;
}
