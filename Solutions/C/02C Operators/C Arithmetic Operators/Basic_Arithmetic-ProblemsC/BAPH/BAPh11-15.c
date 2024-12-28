// December 23, 2024 - with pseudo + function

11. Cubes, Modulus, and Addition

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





12. Nested Factorials and Exponents

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
// factorail of x (loop)
    for(int i = 1; i <= x; i++){// FOR int i = 1 <= x DO
// product = product * i
    product *= i;
    }// ENDFOR

// result = pow(product,y) - (pow(z,2))
    result = pow(product,y) - pow(z,2);
    return result; 
}   





13. Nested Factorials, Modulus, and Division

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
    int product = 1;
// factorial of x (loop)
    for(int i = 1; i <= x; i++){// FOR int i = 1 to x DO
// product = product * i
    product *= i;
    }// ENDFOR

// result = product/(pow(y,2))
// result = (result % z) + z
    result = ((product/(int)(pow(y,2)) % z) + z);
    return result;
}





14. Complex Exponents and Cubes

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





15. Nested Arithmetic with Mixed Operators

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

