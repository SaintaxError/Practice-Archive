// December 23, 2024 - with pseudo + function
/*  Problem: Write a program that accepts four integer inputs, x, y, z, and w. Raise x to the power of y, add the square of z, subtract w, and compute the modulus when divided by the sum of y and z.
Expected Output: 
Enter x: 2
Enter y: 3
Enter z: 4
Enter w: 5
Result: 0
*/
#include <stdio.h>
#include <math.h>

int complexari(int x, int y, int z, int w);
int main(){//START
// DECLARE x,y,z,w;
    int x,y,z,w;
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
    printf("Result: %d", complexari(x,y,z,w));
}//END

int complexari(int x, int y, int z, int w){
// SET result and calculate
// (((int)(pow(x,y))+(pow(z,2)))-w)%(y+z)
    int result = ((int)((pow(x,y))+(pow(z,2)))-w)%(y+z);
    return result;
}
