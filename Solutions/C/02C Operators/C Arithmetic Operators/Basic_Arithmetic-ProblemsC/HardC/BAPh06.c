// December 24, 2024 - with pseudo + function
/* Problem: Write a program that accepts three integer inputs, x, y, and z. Find the factorial of x, divide by y, compute the remainder when divided by z, and add the cube of y.
Expected Output: 
Enter x: 4
Enter y: 3
Enter z: 5
Result: 30
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
}// END

int resultext(int x, int y, int z){
// SET result and calculate
// find the factorial (product 1 to x)
// SET product to 1
    int result, product = 1;
    for(int i = 1; i <= x; i++){// FOR i = 1 to x DO
// product = product * i
    product *= i;
    }// ENDFOR
// result = product / y
// result = (result%z)+(pow(y,3))
    result = product / y;
    result = (result%z)+(pow(y,3));
    return result;
}
