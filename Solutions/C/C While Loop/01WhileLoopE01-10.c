// February 23, 2025

1. Countdown Timer

#include <stdio.h>

void check(int num){
    while(num >= 0){
        printf("%d\n", num);
        num--;
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}






2. Factorial Calculator

#include <stdio.h>

void check(int num){
    int i = 1;
    int factorial = 1;
    while(i <= num){
       factorial *= i;
       i++;
    }
    printf("Factorial of %d is %d", num, factorial);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}



3.  Reverse Number
  
#include <stdio.h>

void check(int num){
    int reversed = 0;
    while(num <= 0){
        int lastDigit = num % 10;  // kuha digit
        reversed = reversed * 10 + lastDigit;  // balhin left + digit
        num = num / 10;  // para tangtang last digit
    }
    printf("%d", storage);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}






4. Guess the Number Game

#include <stdio.h>

void check(int num){
    while(1){
        printf("Guess the number: ");
        scanf("%d", &num);
        
        if(num > 3){
            printf("Too high.\n");
        }else if(num < 3){
            printf("Too low.\n");
        }else{
            if(num == 3){
                printf("Correct! The number is 3.\n");
                break;
            }
        }
    }
}

int main(){
    int num;
    check(num);
}







5. Multiplication Table
  
#include <stdio.h>

void check(int num){
    int i = 1;
    while(i <= 10){
        printf("%d x %d = %d\n", num, i, num*i);
        i++;
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}






6. Sum of Digits
  
#include <stdio.h>

void check(int num){
    int i = num;
    int storage = 0;
    int last_digit;
    while(num > 0){
        last_digit = num % 10;
        storage = storage + last_digit;
        num = num/10;
    }
    printf("Sum of digits is %d.", storage);
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

    while (next <= num) {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}






8. Power of a Number

#include <stdio.h>
#include <math.h>

void check(int base, int exponent){
    while(1){
        printf("Enter base: ");
        scanf("%d", &base);
        printf("Enter exponent: ");
        scanf("%d", &exponent);
        
        int result = pow(base, exponent);
        if(result >= 0){
            printf("Result is %d", result);
            break;
        }
    }
}

int main(){
    int base, exponent;
    check(base, exponent);
}








9. Sum of Even Numbers
  
#include <stdio.h>

void check(int num){
    int storage = 0;
    int i = 1;
    while(i <= num){
        if(i % 2 == 0){
            storage = storage + i;
        }
        i++;
    }
    printf("Sum of even numbers: %d.", storage);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}






10. Prime Number Checker

#include <stdio.h>
#include <math.h>

int check(int num) {
    if (num <= 1) return 0; 
    if (num == 2 || num == 3) return 1; 
    if (num % 2 == 0) return 0; 
    
    int limit = (int) sqrt(num);
    int i = 3; 
    
    while (i <= limit) {
        if (num % i == 0) return 0;
        i += 2; 
    }
    return 1; 
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(check(num) == 0){
        printf("Not prime");
    }else{
        printf("Prime");
    }
}
