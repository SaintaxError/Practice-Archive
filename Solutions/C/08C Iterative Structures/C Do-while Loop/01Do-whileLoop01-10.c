// February 23, 2025

1. Print Numbers

#include <stdio.h>

void check(int num){
    int i = 1;
    do{
        printf("%d\n", i);
        i++;
    }while(i <= num);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}





2. Sum of Numbers
  
#include <stdio.h>

void check(int num){
    int storage = 0;
    do{
        printf("Enter a number: ");
        scanf("%d", &num);
        storage = storage + num;
    }while(num > 0);
    printf("Sum: %d", storage);
}

int main(){
    int num;
    check(num);
}







3. Factorial Calculation

#include <stdio.h>

void check(int num){
    int i = 1;
    int factorial = 1;
    do{
        factorial *= i;
        i++;
    }while(i <= num);
    printf("Factorial of %d is %d", num, factorial);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}






4. Reverse Number

#include <stdio.h>

void check(int num){
    int modulo;
    int storage = 0;
    do{
        modulo = num % 10;
        storage = storage * 10 + modulo;
        num = num / 10;
    }while(num > 0);
    printf("Reversed number: %d", storage);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}





5. Number Guessing Game
  
#include <stdio.h>

void check(int num){
    do{
        printf("Guess the number (1-100): ");
        scanf("%d", &num);
            num > 40 ? printf("Too high!\n") : 
            (num < 40) ? printf("Too low!\n") : (void) 0;
            if(num == 40){
                printf("Correct! The number is %d", num);
                break;
            }
            
    }while(num > 0);
}

int main(){
    int num;
    check(num);
}





6. Multiplication Table

#include <stdio.h>

void check(int num){
    int i = 1;
    do{
        printf("%d x %d = %d\n", num, i, num*i);
        i++;
    }while(i <= 10);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}






7. Fibonacci Sequence

#include <stdio.h>

void check(int num){
    int first = 0, second = 1, next = 0;
    printf("%d %d ", first, second);
    next = first + second;
    
    int i = 3;
    do{
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }while(next <= num);
}

int main(){
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    check(num);
}





8. Sum of Digits
  
#include <stdio.h>

void check(int num){
    int modulo;
    int storage = 0;
    do{
        modulo = num % 10; 
        storage = storage + modulo;
        num = num / 10;
    }while(num > 0);
    printf("Sum of digits: %d", storage);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}






9. Odd or Even Counter

#include <stdio.h>

void check(int num){
    int odd = 0;
    int even = 0;
    do{
        printf("Enter a number: ");
        scanf("%d", &num);
        
            if(num > 0){
            if (num % 2 == 0) even++;
            else odd++;
            }
    }while(num > 0);
    printf("Even count: %d\nOdd count: %d", even, odd);
}

int main(){
    int num;
    check(num);
}






10. Prime Number Checker
  
#include <stdio.h>
#include <math.h>

int check(int num){
    if (num <= 1) return 0;
    if (num == 2 || num == 3) return 1;
    if (num % 2 == 0) return 0;
    
    int limit = sqrt(num);
    int i = 3;
        do{
            if (num % i == 0) return 0;
            i = i + 2;
        }while(i <= limit);
        return 1;
}

void printer(int value){
    if (value == 0) printf("Not a Prime number.");
    else printf("Prime number.");
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int value = check(num);
    printer(value);
}
