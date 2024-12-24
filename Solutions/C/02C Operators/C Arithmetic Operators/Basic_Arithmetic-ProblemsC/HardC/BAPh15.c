// December 24, 2024 - with pseudo + function
/* Problem: Write a program that accepts five integer inputs, x, y, z, a, and b. Multiply x by y, add the square of z, divide by the sum of a and b, then compute the remainder when divided by the cube of b.
Expected Output: 
Enter x: 3
Enter y: 4
Enter z: 5
Enter a: 2
Enter b: 3
Result: 2
*/
#include <stdio.h>
#include <math.h>

int resultext(int x, int y, int z, int a, int b);

int main(){//START
// DECLARE x,y,z,a,b
    int x, y, z, a, b;
// INPUT x,y,z,a,b OUTPUT x,y,z,a,b
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
// OUTPUT result
    printf("Result: %d", resultext(x,y,z,a,b));
}//END

int resultext(int x, int y, int z, int a, int b){
// SET result and calculate
// result = x * y
// result = result + pow(z,2)
// result = result / (a+b)
// result = result %  pow(b,3)
    int result = (int)(((x*y)+(pow(z,2)))/(a+b)) % (int)(pow(b,3));
    return result;
}
