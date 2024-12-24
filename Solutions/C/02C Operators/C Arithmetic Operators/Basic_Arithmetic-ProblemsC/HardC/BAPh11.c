// December 24, 2024 - with pseudo + function
/* Problem: Write a program that accepts three integer inputs, x, y, and z. Compute the cube of x, find the modulus when divided by y, and add the sum of y and z.
Expected Output: 
Enter x: 3
Enter y: 4
Enter z: 5
Result: 12
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
    printf("result: %d", resultext(x,y,z));
}//END

int resultext(int x, int y, int z){
// SET result and calculate
// result = pow(x,3)
// result = (result % y) + (y+z)
    int result = ((int)pow(x,3)%y)+(y+z);
    return result;
}
