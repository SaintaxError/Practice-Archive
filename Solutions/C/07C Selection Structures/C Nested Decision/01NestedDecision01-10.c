// February 20, 2025 - yati na ankle sprain ni

1. Age Category

#include <stdio.h>
#include <stdbool.h>

void checker(int age){
    bool age1 = age < 13;
    bool age2 = age >= 13 && age <= 17;
    bool age3 = age >= 18;
    if(age1){
        printf("Child.");
    }else if(age2){
        printf("Teenager.");
    }else if(age3){
        if(age < 60){
            printf("Adult.");    
        }else{
            printf("Senior Citizen.");
        }
    }else{
        printf("Invalid age.");
    }
}

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    checker(age);
}







2. Odd or Even Checker

#include <stdio.h>
#include <stdbool.h>

void checker(int num){
    bool num1 = num % 2 == 0;
    
    if(num1){
        if(num % 4 == 0){
            printf("Even and divisible by 4.");
        }else{
            printf("Even but not divisible by 4.");
        }
    }else{
        printf("Odd number.");
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checker(num);
}








3. Triangle Type Checker

#include <stdio.h>
#include <stdbool.h>

void checker(int s1, int s2, int s3) {
    bool isEquilateral = (s1 == s2 && s2 == s3);
    bool isIsosceles = (s1 == s2 || s1 == s3 || s2 == s3);
    bool isScalene = (s1 != s2 && s1 != s3 && s2 != s3);
    bool isInvalid = (s1 <= 0 || s2 <= 0 || s3 <= 0);

    if (isInvalid) {
        printf("Invalid triangle.\n");
    } else {
        if (isEquilateral) {
            printf("Equilateral triangle.\n");
        } else {
            if (isIsosceles) {
                printf("Isosceles triangle.\n");
            } else {
                if (isScalene) {
                    printf("Scalene triangle.\n");
                }
            }
        }
    }
}

int main() {
    int s1, s2, s3;
    printf("Enter three sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    checker(s1, s2, s3);
    return 0;
}









4. Student Grade Evaluation

#include <stdio.h>
#include <stdbool.h>

void check(int grade){
    bool gradeA = grade >= 90 && grade <= 100;
    bool gradeB = grade >= 80 && grade <= 89;
    bool gradeC = grade >= 70 && grade <= 79;
    bool gradeD = grade >= 60 && grade <= 69;
    bool grade60 = grade < 60 && grade >= 0;
    
    if(gradeA){
        printf("A - Excellent.");
    }else{
        if(gradeB){
            printf("B - Good job.");
        }else if(gradeC){
            printf("C - Fair effort.");
        }else if(gradeD){
            printf("D - Needs improvement.");
        }else if(grade60){
            printf("F - Faied. Study harder.");
        }else{
            printf("Invalid grade.");
        }
    }
    
}
int main(){
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    check(grade);
}








5. Salary Tax Calculator

#include <stdio.h>
#include <stdbool.h>

bool check(int salary){
    int total;
    bool salary1 = salary < 20000;
    bool salary2 = salary >= 20000 && salary <= 50000;
    bool salary3 = salary > 50000;
    
    if(salary1){
        printf("No tax applied.");
    }else{
        if(salary2){
            total = salary * .10;
            printf("Tax: %d (10%)", total);
        }else if(salary3){
            total = salary * .20;
            printf("Tax: %d (20%)", total);
        }
    }
}
int main(){
    int salary;
    printf("Enter your salary: ");
    scanf("%d", &salary);
    check(salary);
}








6. Number Comparison

#include <stdio.h>
#include <stdbool.h>

bool compare(int num1, int num2){
    bool compare1 = num1 == num2;
    bool compare2 = num1 > num2;
    
    if(compare1){
        printf("Both numbers are equal.");
    }else{
        if(compare2){
            printf("First number is larger.");
        }else{
            printf("Second number is larger.");
        }
    }
}

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    compare(num1, num2);
}








7. Temperature Classification

#include <stdio.h>
#include <stdbool.h>

void check(int temp){
    bool check1 = temp < 0;
    bool check2 = temp > 0 && temp <= 15;
    bool check3 = temp >= 16 && temp <= 30;
    
    if(check1){
        printf("Freezing.");
    }else{
        if(check2){
            printf("Cold.");
        }else if(check3){
            printf("Moderate.");
        }else{
            printf("Hot.");
        }
    }
}

int main(){
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);
    check(temp);
}







8. ATM Withdrawal

#include <stdio.h>
#include <stdbool.h>

void check(int amount) {
    int balance = 5000;
    bool check1 = amount % 100 != 0;
    bool check2 = amount <= balance;

    if (check1) {
        printf("Invalid amount.\n");
    } else {
        if (check2) {
            printf("Withdrawal successful.\n");
        } else {
            printf("Insufficient balance.\n");
            
        }
    }
}

int main() {
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);
    check(amount);
}









9. Leap Year Checker

#include <stdio.h>
#include <stdbool.h>

void check(int year){
    bool check1 = year % 4 != 0;
    bool check2 = year % 100 == 0 && year % 400 != 0;
    if(check1){
        printf("Not a leap year.");
    }else{
        if(check2){
            printf("Not a leap year.");
        }else{
            printf("Leap year.");
        }
    }
}

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    check(year);
}






10. Password Checker

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void check(int length, char password[]){
    bool has_letter = false, has_digit = false;

    if(length < 6){
        printf("Weak password.");
        return;
    }

    for(int i = 0; password[i] != '\0'; i++){
        if(isalpha(password[i])) has_letter = true;
        if(isdigit(password[i])) has_digit = true;
    }

    if(has_letter && has_digit){
        printf("Strong password.");
    }else{
        printf("Moderate password.");
    }
}

int main(){
    char password[50];
    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; 
    int length = strlen(password);
    check(length, password);
}



