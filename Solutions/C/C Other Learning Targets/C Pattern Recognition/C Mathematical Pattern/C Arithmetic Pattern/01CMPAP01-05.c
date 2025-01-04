// January 4, 2025

1. Arithmetic Progression

#include <stdio.h>

void problem1(int a1, int d, int n){
    for(int i = 1; i <= n; i++){
        printf("%d ", a1);
        a1+=d;
    }
}
 
int main(){
    int a1, d, n;
    
    printf("Enter the first term: ");
    scanf("%d", &a1);
    printf("Enter the common difference: ");
    scanf("%d", &d);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    problem1(a1, d, n);
    return 0;
}





2. Reverse Arithmetic Progression
  
#include <stdio.h>

void problem1(int a1, int d, int n){
    for(int i = 1; i <= n; i++){
        printf("%d ", a1);
        a1+=d;
    }
}
 
int main(){
    int a1, d, n;
    
    printf("Enter the first term: ");
    scanf("%d", &a1);
    printf("Enter the common difference: ");
    scanf("%d", &d);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    problem1(a1, d, n);
    return 0;
}





3. Arithmetic Series Sum
 
#include <stdio.h>

void problem3(int a1, int d, int n){
    int storage = 0;
    for(int i = 1; i <= n; i++){
        storage = storage + a1;
        a1 += d;
    } // PROUD KAY KO ANI SUS FIRST SEM PANI NANGAYO NAKOG CLUE NI CHATGPT HAISTT!! YEHEYY
    printf("%d", storage);
}

int main(){
    int a1, d, n;
    
    printf("Enter the first term: ");
    scanf("%d", &a1);
    printf("Enter the common difference: ");
    scanf("%d", &d);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    problem3(a1, d, n);
    return 0;
}





4. Arithmetic Progression with Variable Difference 

#include <stdio.h>

void problem4(int a1, int d, int n){
    for(int i = 1; i <= n; i++){
         printf("%d ", a1); // i = 1 prints 1 // prints 3 // prints 6 // prints 10
        if(i > 1){ 
                d++; // update so 2 + 1 = 3 // 3 + 1 = 4
                a1 += d; // 3 + 3 = 6  // 6 + 4 = 10
            }else{
                a1 += d; // i = i, update a1 = 3
    } // bale ang i > i, second term palang kay akoa na siyang i increment since para ig i = 3, kay mo update na dayon 3 na dayon ang iyaha common difference.
}

int main(){
    int a1, d, n;
    printf("Enter the first term: ");
    scanf("%d", &a1);
    printf("Enter the initial difference: ");
    scanf("%d", &d);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    problem4(a1, d, n);
    return 0;
}





5. Find the Nth Term in an Arithmetic Progression

#include <stdio.h>

int problem5(int a1, int d, int n){
    return a1 + (n-1) * d;
}

int main(){
    int a1, d, n;
    
    printf("Enter the first term: ");
    scanf("%d", &a1);
    printf("Enter the common differnce: ");
    scanf("%d", &d);
    printf("Enter the term number: ");
    scanf("%d", &n);
    
    printf("%d", problem5(a1, d, n));
    return 0;
}

