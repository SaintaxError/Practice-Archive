// February 22, 2025

1. Basic Geometric Sequence
  
#include <stdio.h>

void check(int f1, int cr, int nt){
    for(int i = 1; i <= nt; i++){
        printf("%d ", f1);
        f1 *= cr;
    }
}

int main(){
    int f1, cr, nt;
    printf("Enter the first term: ");
    scanf("%d", &f1);
    printf("Enter the common ratio: ");
    scanf("%d", &cr);
    printf("Enter the number of terms: ");
    scanf("%d", &nt);
    check(f1, cr, nt);
}
#include <stdio.h>

void check(int f1, int cr, int nt){
    for(int i = 1; i <= nt; i++){
        printf("%d ", f1);
        f1 *= cr;
    }
}

int main(){
    int f1, cr, nt;
    printf("Enter the first term: ");
    scanf("%d", &f1);
    printf("Enter the common ratio: ");
    scanf("%d", &cr);
    printf("Enter the number of terms: ");
    scanf("%d", &nt);
    check(f1, cr, nt);
}







2. Geometric Sequence in Reverse
#include <stdio.h>

void check(int f1, int cr, int nt){
    
   
    for(int i = 1; i < nt; i++){
        f1 = f1 * cr;
    }
    
    for(int i = 1; i <= nt; i++){
        printf("%d ", f1);
        f1 = f1 / cr;
    }
}

int main(){
    int f1, cr, nt;
    printf("Enter first term: ");
    scanf("%d", &f1);
    printf("Enter the common ratio: ");
    scanf("%d", &cr);
    printf("Enter the number of terms: ");
    scanf("%d", &nt);
    check(f1, cr, nt);
}






3. Sum of Geometric Sequence
  
#include <stdio.h>

void check(int f1, int cr, int nt){
    int store = 0;
    for(int i = 1; i <= nt; i++){
        store = store + f1; 
        f1 = f1 * cr;
    }    
    printf("%d", store);
}

int main(){
    int f1, cr, nt;
    printf("Enter the first term: ");
    scanf("%d", &f1);
    printf("Enter the common ratio: ");
    scanf("%d", &cr);
    printf("Enter the number of terms: ");
    scanf("%d", &nt);
    check(f1, cr, nt);
}







4. Nth Term in a Geometric Sequence
  
#include <stdio.h>

void check(int f1, int cr, int nt){
    int store = 0;
    for(int i = 1; i < nt; i++){
        f1 = f1 * cr;
    }
    printf("%d", f1);
}

int main(){
    int f1, cr, nt;
    printf("Enter the first term: ");
    scanf("%d", &f1);
    printf("Enter the common ratio: ");
    scanf("%d", &cr);
    printf("Enter the term number: ");
    scanf("%d", &nt);
    check(f1, cr, nt);
}






5. Geometric Sequence with Fractional Ratios

#include <stdio.h>
#include <math.h>

void check(float f1, float cr, float nt){
    for(int i = 1; i <= nt; i++){
          if (fmod(f1, 1.0) == 0){  // mo check ni if ang f1 whole num, fmod is for kanang
            // mocalculate sa remainder of a floating-point division.
            printf("%.0f ", f1); // print without decimals
        }else{
            printf("%.2f ", f1); // print with two decimal places
        } 
        f1 *= cr;
    }
}

int main(){
    float f1, cr, nt;
    printf("Enter the number of term: ");
    scanf("%f", &f1);
    printf("Enter the common ratio: ");
    scanf("%f", &cr);
    printf("Enter the number of terms: ");
    scanf("%f", &nt);
    check(f1, cr, nt);
}
