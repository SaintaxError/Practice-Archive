// December 29, 2024

1. Adding Two Variables

#include <stdio.h>

int addtwo(int x, int y){
    // add y and x and update x
    // x = x + y
    return x += y;
}

int main(){ //START
// DECLARE x,y
    int x, y;
// INPUT OUTPUT x,y
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    
// OUTPUT x
    printf("After addition, x = %d", addtwo(x,y));
    return 0;
}//END





2. Multiplying and Assigning

#include <stdio.h>

int multiA(int z){
    // multiply z by 5 
    // z = z * 5
    return z *= 5;
}

int main(){//START
// DECLARE z
    int z;
// INPUT OUTPUT z
    printf("Initial value of z: ");
    scanf("%d", &z);
    
// OUTPUT z
    printf("After multiplication, z = %d", multiA(z));
}//END





3. Subtract and Assign

#include <stdio.h>

int subA(int m){
    // update the new value of m by subtracting it to 8
    return m -= 8;
}

int main(){//START
// DECLARE and SET m = 20
    int m = 20;
// OUTPUT m
    printf("Initial value of m: %d\n", m);
// OUTPUT m
    printf("After subtraction, m = %d", subA(m));
}//END





4. Modulus and Assign

#include <stdio.h>

int divideA(int n){
    // update the value of n by dividing it by 2, use /=
    return n /= 2;
}

int main(){//START
// DECLARE n;
    int n;
// INPUT OUTPUT n
    printf("Initialize value of n: ");
    scanf("%d", &n);
// OUTPUT n
    printf("After division, n = %d", divideA(n));
}//END





5. Modulus and Assign

#include <stdio.h>

int modulusA(int p){
    // update the value of p by finding the remainder when divided by 3
    return p %= 3;
}

int main(){//START
// DECLARE p 
    int p;
// INPUT OUTPUT p
    printf("Initial value of p: ");
    scanf("%d", &p);
// OUTPUT p
    printf("After modulus operation, p = %d", modulusA(p));
}//END
