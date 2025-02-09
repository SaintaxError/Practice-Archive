// February 09, 2025

1. Check Number Type

#include <stdio.h>
#include <stdbool.h>

bool check(int num){
    bool check1 = num > 0;
    bool check2 = num < 0;
    
    if(check1){
        printf("Positive number.");
    }else if(check2){
        printf("Negative number.");
    }else{
        printf("Zero.");
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}





2. Grade Categorization

#include <stdio.h>
#include <stdbool.h>

bool check(int grade){
    bool grade1 = grade >= 85;
    bool grade2 = grade >= 65;
    
    if(grade1){
        printf("Excellent.");
    }else if(grade2){
        printf("Pass.");
    }else{
        printf("Fail.");
    }
}

int main(){
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    check(grade);
}





3. Age Group Classification

#include <stdio.h>
#include <stdbool.h>

bool check(int age){
    bool check1 = age >= 0 && age <= 12;
    bool check2 = age >= 13 && age <= 19;
    bool check3 = age >= 20 && age <= 64;
    
    if(check1){
        printf("Child.");
    }else if(check2){
        printf("Teen.");
    }else if(check3){
        printf("Adult.");
    }else{
        printf("Senior.");
    }
}

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    check(age);
}




4. Triangle Type Checker

#include <stdio.h>
#include <stdbool.h>

bool check(int side1, int side2, int side3){
    bool check1 = side1 == side2 && side2 == side3;
    bool check2 = side1 == side2 || side1 == side3 || side2 == side3;
    
    if(check1){
        printf("Equilateral Triangle.");
    }else if(check2){
        printf("Isosceles Triangle.");
    }else{
        printf("Scalene Triangle.");
    }
}

int main(){
    int side1, side2, side3;
    printf("Enter three sides: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    check(side1, side2, side3);
}




5. Weather Classification

#include <stdio.h>
#include <stdbool.h>

bool check(int temp){
    bool temp1 = temp < 15;
    bool temp2 = temp >= 15 && temp <= 30;
    
    if(temp1){
        printf("Cold.");
    }else if(temp2){
        printf("Warm.");
    }else{
        printf("Hot.");
    }
}

int main(){
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);
    check(temp);
}





6. Tax Bracket Checker

#include <stdio.h>
#include <stdbool.h>

bool check(int income){
    bool check1 = income < 10000;
    bool check2 = income >= 10000 && income <= 50000;
    
    if(check1){
        printf("Low tax bracket.");
    }else if(check2){
        printf("Medium tax bracket.");
    }else{
        printf("High tax bracket.");
    }
}

int main(){
    int income;
    printf("Enter your income: ");
    scanf("%d", &income);
    check(income);
}




7. Student Performance Evaluation

#include <stdio.h>
#include <stdbool.h>

bool check(int score){
    bool check1 = score >= 90 && score <= 100;
    bool check2 = score >= 75 && score <= 89;
    bool check3 = score >= 50 && score <= 74;
    
    if(check1){
        printf("Excellent.");
    }else if(check2){
        printf("Good.");
    }else if(check3){
        printf("Needs Improvement.");
    }else{
        printf("Fail.");
    }
}

int main(){
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
    check(score);
}





8. BMI Category Classification

#include <stdio.h>
#include <stdbool.h>

bool check(float bmi){
    bool bmi1 = bmi < 18.5;
    bool bmi2 = bmi >= 18.5 && bmi <= 24.9;
    bool bmi3 = bmi >= 25 && bmi <= 29.9;
    
    if(bmi1){
        printf("Underweight.");
    }else if(bmi2){
        printf("Normal.");
    }else if(bmi3){
        printf("Overweight.");
    }else{
        printf("Obese.");
    }
}

int main(){
    float bmi;
    printf("Enter your BMI: ");
    scanf("%f", &bmi);
    check(bmi);
}




9. Electricity Bill Calculation

#include <stdio.h>
#include <stdbool.h>

bool check(int usage){
    bool usage1 = usage < 100;
    bool usage2 = usage >= 100 && usage <= 300;
    
    if(usage1){
        printf("Low Usage.");
    }else if(usage2){
        printf("Medium Usage.");
    }else{
        printf("High Usage.");
    }
}

int main(){
    int usage;
    printf("Enter electricity usage: ");
    scanf("%d", &usage);
    check(usage);
}




10. Vehicle Speed Classification

#include <stdio.h>
#include <stdbool.h>

bool check(int speed){
    bool speed1 = speed < 40;
    bool speed2 = speed >= 40 && speed < 80;
    bool speed3 = speed >= 80 && speed <= 120;
    
    if(speed1){
        printf("Slow.");
    }else if(speed2){
        printf("Normal.");
    }else if(speed3){
        printf("Fast.");
    }else{
        printf("Very Fast.");
    }
}

int main(){
    int speed;
    printf("Enter vehicle speed: ");
    scanf("%d", &speed);
    check(speed);
}






