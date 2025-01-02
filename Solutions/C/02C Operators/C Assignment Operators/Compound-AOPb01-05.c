// December 29, 2024

1. Adding Two Variables

#include <stdio.h>

int addtwo(int x, int y){
    // add y and x and update x
    // x = x + y
    return x += y;
}

int main(){
    int x, y;

    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    
    printf("After addition, x = %d", addtwo(x,y));
    return 0;
}





2. Multiplying and Assigning

#include <stdio.h>

int multiA(int z){
    // multiply z by 5 
    // z = z * 5
    return z *= 5;
}

int main(){
    int z;

    printf("Initial value of z: ");
    scanf("%d", &z);
    
    printf("After multiplication, z = %d", multiA(z));
    return 0;
}





3. Subtract and Assign

#include <stdio.h>

int subA(int m){
    // update the new value of m by subtracting it to 8
    return m -= 8;
}

int main(){
    int m = 20;

    printf("Initial value of m: %d\n", m);

    printf("After subtraction, m = %d", subA(m));
    return 0;
}





4. Modulus and Assign

#include <stdio.h>

int divideA(int n){
    // update the value of n by dividing it by 2, use /=
    return n /= 2;
}

int main(){
    int n;
    
    printf("Initialize value of n: ");
    scanf("%d", &n);

    printf("After division, n = %d", divideA(n));
    return 0;
}





5. Modulus and Assign

#include <stdio.h>

int modulusA(int p){
    // update the value of p by finding the remainder when divided by 3
    return p %= 3;
}

int main(){
    int p;

    printf("Initial value of p: ");
    scanf("%d", &p);

    printf("After modulus operation, p = %d", modulusA(p));
    return 0;
}
