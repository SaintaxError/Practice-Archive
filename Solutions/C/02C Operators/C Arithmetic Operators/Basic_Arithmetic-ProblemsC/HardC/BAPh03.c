// December 23, 2024 - with pseudo + function
/*  Problem: Write a program that accepts three integer inputs, x, y, and z. Multiply x and y, subtract the factorial of z, then divide by the cube of y.
Expected Output: 
Enter x: 3
Enter y: 2
Enter z: 3
Result: 0
*/
#include <stdio.h>
#include <math.h>

double multidivfacto(int x, int y, int z);

int main(){//START
// DECLARE x,y,z,result
    int x,y,z;
    
// INPUT x,y,z OUTPUT x,y,z
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    
// OUTPUT result
    printf("Result: %.3lf", multidivfacto(x,y,z));
}//END

double multidivfacto(int x, int y, int z){
    // SET r(esult and calculate
        double result;
    // (x*y)
    int product1= x*y;
// SET product = 1;
    int product = 1;

    for(int i = 1; i <= z; i++){// Factorial of z: FOR i=1 to z DO
        product = product*i;
        }// ENDFOR
    printf("%d", product);
// result = (((x*y)-product)/(y^3))
    result = (double)(product1-product)/(pow(y,3));
    return result;
}
