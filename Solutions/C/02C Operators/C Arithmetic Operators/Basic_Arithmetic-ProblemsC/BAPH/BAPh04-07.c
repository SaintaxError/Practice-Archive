// December 23, 2024 - with pseudo + function

4. Complex Arithmetic with Powers

#include <stdio.h>
#include <math.h>

int complexari(int x, int y, int z, int w);
int main(){//START
// DECLARE x,y,z,w;
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
    printf("Result: %d", complexari(x,y,z,w));
}//END

int complexari(int x, int y, int z, int w){
// SET result and calculate
// (((int)(pow(x,y))+(pow(z,2)))-w)%(y+z)
    int result = ((int)((pow(x,y))+(pow(z,2)))-w)%(y+z);
    return result;
}





5. Average, Square, and Subtract

#include <stdio.h>
#include <math.h>

int finalresult(int x, int y, int z, int w);
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





// December 24, 2024 - with pseudo + function

6. Factorials, Modulus, and Division

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





7. Exponents, Squares, and Addition

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
// result = pow(x,y)
// result = result + (pow(z,2))
    result = (pow(x,y))+(pow(z,2));
//  divide result by the factorial of z (loop)
    int product = 1;
    for(int i = 1; i <= z; i++){// FOR int = i to z DO
// product = product * i
    product *= i;
    }// ENDFOR
    
// result = result/product
    result = result/product;
    return result;
}
