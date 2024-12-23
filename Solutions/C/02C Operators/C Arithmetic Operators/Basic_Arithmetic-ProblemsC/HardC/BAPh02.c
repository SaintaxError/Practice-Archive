// December 23, 2024 - with pseudo + function
/*  Problem: Write a program that accepts three integer inputs, x, y, and z. 
    Compute the cube of x, add y, subtract the cube of z, and compute the modulus when divided by the sum of x and z.
Expected Output: 
Enter x: 2
Enter y: 3
Enter z: 4
Result: -5
*/
#include <stdio.h>
#include <math.h>

int nestedcubesnmodulo(int x, int y, int z);

int main(){//START
// DECLARE x,y,z, result
    int x,y,z;
// INPUT x,y,z OUTPUT x,y,z
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    
// OUTPUT result 
    printf("Result: %d", nestedcubesnmodulo(x,y,z));
}//END

int nestedcubesnmodulo(int x, int y, int z){
// SET result and calculate
// ((((int)pow(x,3))+y-((int)pow(z,3)))%(x+z));
    int result = (((int)pow(x, 3)) + y - ((int)pow(z, 3))) % (x + z);
    
    return result;
}

/* 
    EXTRA infos:
    the code is correct but if need nato 
    i-non-negative ang result like if mao required sa expected output, in C, ang modulo operations can return 
    negative values unlike sa other languages like Python kay the 
    modulo operation automatically returns a positive result 
    
    since if ingana gali, to ensure na the
    result is non-negative: 
    
     if (result < 0) {
        result = result + (x + z);  // i addjust to make result positive
        }
*/
