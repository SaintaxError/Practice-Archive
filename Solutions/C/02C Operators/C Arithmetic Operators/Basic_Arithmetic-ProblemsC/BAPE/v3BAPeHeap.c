// May 25 2025 - i wish i was a normal girl </3 

1) Add and Subtract 
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *num1, *num2, *num3;
}numbers;

void AddSub(numbers n){
    printf("%d", (*n.num1 + *n.num2) - *n.num3);
}

int main(){
    numbers n;
    
    n.num1 = malloc(sizeof(int));
    n.num2 = malloc(sizeof(int));
    n.num3 = malloc(sizeof(int));
    
    *n.num1 = 12, *n.num2 = 8, *n.num3 = 5;
    AddSub(n);
    
    free(n.num1); free(n.num2); free(n.num3);
}




COULD BE ++  



#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *val[3]; 
}numbers;

void AddSub(numbers n){
    printf("%d", (*n.val[0] + *n.val[1]) - *n.val[2]);
}

int main(){
    numbers n;
    
    for(int i = 0; i < 3; i++){
        n.val[i] = malloc(sizeof(int));
        if(!n.val[i]){
            printf("Memory allocation failed!"); 
            return 1;
        }
    }
    
    *n.val[0] = 12; *n.val[1] = 8; *n.val[2] = 5;
    AddSub(n);
    
    for(int i = 0; i < 3; i++){
        free(n.val[i]);
    }
}  




2)
3)
4)
5)
