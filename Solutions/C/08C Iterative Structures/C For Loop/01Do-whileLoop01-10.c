// February 24, 2025 - libog japon fibonacci na part

1. Even Numbers Between 1 and N

#include <stdio.h>

void check(int num){
    for(int i = 1; i <= num; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}





2. Square of Numbers

#include <stdio.h>

void check(int num){
    for(int i = 1; i <= num; i++){
        printf("%d ", i*i);
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}






3. Multiples of 3

#include <stdio.h>

void check(int num){
    for(int i = 1; i <= num; i++){
        if (i % 3 == 0) printf("%d ", i);
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}









4. Count Down

#include <stdio.h>

void check(int num){
    for(int i = num; i > 0; i--){
        printf("%d ", i);
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}







5. Powers of 2

#include <stdio.h>
#include <math.h>

void check(int num){
     for(int i = 0; i <= 4; i++){
        printf("%d ", (int)pow(2, i)); 
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}








6. Sum of Odd Numbers

#include <stdio.h>

void check(int num){
    int storage = 0;
    for(int i = 1; i <= num; i++){
        if(i % 2 != 0){
            storage = storage + i;
        }
    }
    printf("Sum of odd numbers: %d", storage);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}







7. Count Digits in a Number
#include <stdio.h>

void check(int num){
    int count = 0;
    for(; num > 0; num /= 10){
        count++;
    }
    printf("Number of digits: %d", count);
}

int main(){
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    check(num);
}








8. Find Largest Factor

#include <stdio.h>

void check(int num){ // maya nako anii oyy, ako nani??
    int largest = 1;
    int sub_large;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sub_large = i;
                if (largest < sub_large) largest = sub_large;
        }
    }
    printf("Largest factor less than %d: %d", num, largest);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}









9. Fibonacci Sum

#include <stdio.h>

void check(int num){
    int first = 0, second = 1, next = 0, storage = 0;

    for( ;next <= num; next = first + second){  
        storage += next;  // Add Fibonacci number to sum
        first = second;  
        second = next;
    }
    printf("Sum of Fibonacci numbers up to %d: %d\n", num, storage);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
    return 0;
}






10. Triangle Stars

#include <stdio.h>

void check(int rows){
    for (int i = 1; i <= rows; i++) {  
        for (int j = 1; j <= i; j++) {  
            printf("*");
        }
        printf("\n");  // pang isbog to the next line after printing "*"
    }
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    check(rows);
}
