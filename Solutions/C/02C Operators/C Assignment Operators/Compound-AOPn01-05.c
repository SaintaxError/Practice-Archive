// December 29, 2024

1.  Chained Assignment Operations

#include <stdio.h>

void chainA(int a){
    // DECLARE b,c
    // give the value of a to b
    int b = a;
    // give value to c by multiplying b to 3
    int c = b * 3;
    printf("After operations:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d", c);
}

int main(){
    int a = 10;

    printf("Initial value of a: ");
    scanf("%d", &a);

    chainA(a);
    return 0;
}





2. Combined Arithmetic and Assignment

#include <stdio.h>

void combined(int x, int y);

int main(){
    int x, y;
    
    printf("Initial value of x: ");
    scanf("%d", &x);
    printf("Initial value of y: ");
    scanf("%d", &y);
    
    combined(x,y);
    return 0;
}

void combined(int x, int y){
// update the value of x, subract y from x
    x -= y;
    printf("After subtraction: x = %d\n", x);
// update the value of x, by i-add nimo ang result sa itself
    x += x;
    printf("After addition to itself: x = %d\n", x);
// update the value of x, by divided it by 2
    x /= 2;
    printf("After division: x = %d", x);
// print each result at each step
}





3. Modifying with Multiple Assignment Operators

#include <stdio.h>

void problem3(int z);

int main(){
    int z;

    printf("Initialize value of z: ");
    scanf("%d", &z);

    problem3(z);
    return 0;
}

void problem3(int z){
// update the value of z, by adding 10
    z += 10;
    printf("After adding 10: z = %d\n", z);
// update the value of z, multiply 2
    z *= 2;
    printf("After multiplying by 2: z = %d\n", z);
// update the value of z, subtract 5
    z -= 5;
    printf("After subtracting 5: z = %d\n", z);
// update the value of z, divide by 3
    z /= 3;
    printf("After dividing by 3: z = %d", z);
}





4. Complex Modulus and Assignment

  #include <stdio.h>

void complexmod(int n);

int main(){
    int n;

    printf("Initial value of n: ");
    scanf("%d", &n);

    complexmod(n);
    return 0;
}

void complexmod(int n){
// update the value of n, divide by 5
    n /= 5;
    printf("After division: n = %d\n", n);
// update the n, by finding the remainder when divided by 4
    n %= 4;
    printf("After modulus operation: n = %d", n);
}





5. Swap Using Assignment Operators

#include <stdio.h>

void swap(int p, int q){
    printf("Before swap: p = %d, q = %d\n", p, q);
    q -= p; // gi una nakong q ug subtract, kay ug mauna kos p, di nako makuhang result, KATAW ANAN NA PROBLEM
            // sige kog bali2 sa p nga akoa giuna, unahon ra diayng q, maya jud nako oy !!!
    p += q; 

    printf("After swap: p = %d, q = %d", p, q);
}

int main(){
    int p, q;
    
    printf("Enter p: ");
    scanf("%d", &p);
    printf("Enter q: ");
    scanf("%d", &q);

    swap(p,q);
    return 0;
}
