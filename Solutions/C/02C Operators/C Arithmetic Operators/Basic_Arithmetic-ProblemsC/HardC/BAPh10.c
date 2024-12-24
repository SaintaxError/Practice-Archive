// December 24, 2024 - with pseudo + function
/* Problem: Write a program that accepts three integer inputs, x, y, and z. Compute the factorial of x, 
            find the remainder when divided by y, add the square of z, and subtract y.
Expected Output: 
Enter x: 4
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
    int product = 1;
// factorial of x (loop)
    for(int i = 1; i <= x; i++){// FOR i = 1 to x DO
// product = product * i
        product *= i;
    }// ENDFOR

// result = product % y
// result = (result + (pow(z,2))) - y   
    result = ((product%y) + (pow(z,2)))-y;
    return result;
}
