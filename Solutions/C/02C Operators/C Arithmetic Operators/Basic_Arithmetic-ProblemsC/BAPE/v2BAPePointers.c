// Started: May 23, 2025 - decided to rework all the codes to practice pointers

1)  Add and Subtract
#include <stdio.h>

void AddnSub(int *num1, int *num2, int *num3);

int main(){
    int num1 = 12, num2 = 8, num3 = 5;
    AddnSub(&num1, &num2, &num3);
}

void AddnSub(int *num1, int *num2, int *num3){
    printf("%d", *num1 + *num2 - (*num3));
}






2) Subtraction and Multiplication
#include <stdio.h>

void SubnMult(int *num1, int *num2, int *num3);

int main(){
    int num1 = 7, num2 = 20, num3 = 3;
    SubnMult(&num1, &num2, &num3);
}

void SubnMult(int *num1, int *num2, int *num3){
    printf("%d", (*num2 - *num1) * *num3);
}






3) Divison and Addition
#include <stdio.h>

void DivnAdd(int *num1, int *num2, int *num3);

int main(){
    int num1 = 30, num2 = 5, num3 = 12;
    DivnAdd(&num1, &num2, &num3);
}

void DivnAdd(int *num1, int *num2, int *num3){
    printf("%d", (*num1 / *num2) + *num3);
}








4) Multiplication and Sum
#include <stdio.h>

void MulnSum(int *num1, int *num2, int *num3);

int main(){
    int num1 = 4, num2 = 6, num3 = 3;
    MulnSum(&num1, &num2, &num3);
}

void MulnSum(int *num1, int *num2, int *num3){
    printf("%d\n", (*num2 + *num3) * *num1);
}








5) Remainder and Addition
#include <stdio.h>

void RemnAdd(int *num1, int *num2, int *num3);

int main(){
    int num1 = 27, num2 = 4, num3 = 6;
    RemnAdd(&num1, &num2, &num3);
}

void RemnAdd(int *num1, int *num2, int *num3){
    printf("%d\n", (*num1 % *num2) + *num3);
}
