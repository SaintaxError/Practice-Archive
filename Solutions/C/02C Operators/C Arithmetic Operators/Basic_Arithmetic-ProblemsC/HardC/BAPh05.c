// December 23, 2024 - with pseudo + function
/*  Problem: Write a program that accepts four integer inputs, x, y, z, and w. Compute the average of x, y, z, and w, 
              subtract the square of w, and add the factorial of x.
Expected Output: 
Enter x: 3
Enter y: 5
Enter z: 7
Enter w: 1
Result: 9
*/
#include <stdio.h>
#include <math.h>

int finalresult(int x, int y, int z, int w);
int main(){//START
// DECLARE x,y,z,w
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

// OUTPUT finalres
    printf("Result: %d", finalresult(x,y,z,w));
}// END

int finalresult(int x, int y, int z, int w){
// SET result and calculate
// result = (((x+y+z+w)/4)-(pow(w,2)));
    int result = (((x+y+z+w)/4)-(pow(w,2)));
// set product = 1
    int product = 1;
    for(int i = 1; i <= x; i++){// FOR int i = 1 to x DO
// product = product*i
    product *= i;
}// ENDFOR

// finalres = result + product
    int finalres = result + product;
    return finalres;
}
