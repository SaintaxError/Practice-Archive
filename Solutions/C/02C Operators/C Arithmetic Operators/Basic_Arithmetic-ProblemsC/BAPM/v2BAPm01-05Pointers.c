// Started: May 23 2025 - 7:30pm 

1) Add, Multiply, and Subtract
#include <stdio.h>

void AddMulSub(int x, int y, int *num1, int *num2);

int main(){
    int x, y;
    int num1 = 3, num2 = 10;
    AddMulSub(x, y, &num1, &num2);
}

void AddMulSub(int x, int y, int *num1, int *num2){
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Results: %d", ((x+y) * 3) - 10);
}


2) Multiply, Divide, and Add
#include <stdio.h>

void MulDivAdd(int x, int y, int *num1, int *num2);

int main(){
    int x, y;
    int num1 = 4, num2 = 5;
    MulDivAdd(x, y, &num1, &num2);
}

void MulDivAdd(int x, int y, int *num1, int *num2){
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Results: %d", ((x*y) / *num1) + *num2);
}





3) Square, Divide, and Add
#include <stdio.h>
#include <math.h>

void SqDivAdd(int x, int y, int *num1);

int main(){
    int x, y, num1 = 2; // double
    SqDivAdd(x, y, &num1);
}

void SqDivAdd(int x, int y, int *num1){
    printf("Enter x: ");
    scanf("%d", &x); // %lf
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Result: %d", ((x*x) / y) + *num1); // if pow(x,2) gamiton, for float precise, if x = 5, y = 2 --> 14.50 result
}






4) Add, Multiply, and Subtract with Input'
#include <stdio.h>

void AddMulSub(int x, int y, int z, int *num1);

int main(){
    int x, y, z, num1 = 10;
    AddMulSub(x, y, z, &num1);
}

void AddMulSub(int x, int y, int z, int *num1){
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    printf("Result: %d", ((x + y) * z) - *num1);
}






5) Divide and Remainder
#include <stdio.h>

void DivRem(int x, int y);

int main(){
    int x, y;
    DivRem(x, y);
}

void DivRem(int x, int y){
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    
    int *pX = &x, *pY = &y;
    printf("Result: %d", *pX % *pY); // brayta nako oii
}

