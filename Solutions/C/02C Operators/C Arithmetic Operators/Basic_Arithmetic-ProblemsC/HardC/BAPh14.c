// December 24, 2024 - with pseudo + function
/* Problem: Write a program that accepts four integer inputs, x, y, z, and w. Compute x raised to the power of y, subtract the cube of z, divide by w, and add the factorial of z.
Expected Output: 
Enter x: 2
Enter y: 3
Enter z: 2
Enter w: 4
Result: 4
*/
#include <stdio.h>
#include <math.h>

int resultext(int x, int y, int z, int w);

int main(){//START
// DECLARE x,y,z,w
    int x, y, z, w;
// INPUT x,y,z,w OUTPUT x,y,z,w
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    printf("Enter w: ");
    scanf("%d", &w);

// OUTPUT result 
    printf("Result: %d", resultext(x,y,z,w));
}//END

int resultext(int x, int y, int z, int w){
// SET result and calculate
// result = pow(x,y)
// result = result - pow(z,3)
    int result = pow(x,y) - pow(z,3);
// factorial of z 
    int product = 1;
    for(int i = 1; i <= z; i++){// FOR i = 1 to z DO
// product = product * i
        product *= i; 
    }// ENDFOR
// result = (result / w) + (factorial z) 
    result = (result/w)+(product);
    return result;
}
