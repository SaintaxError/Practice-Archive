// February 09, 2025

1. Check Divisibility by 3 and 7

#include <stdio.h>
#include <stdbool.h>

bool check(int num1){
    bool divisible = num1 % 3 == 0 && num1 % 7 == 0;
    
    if(divisible){
        printf("Divisible by both.");
    }else{
        printf("Not divisible by both.");
    }
}

int main(){
    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);
    check(num1);
}





2. Check for Vowel or Digit

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool typecheck(char ch){
    bool vowel_digit = ((isalpha(ch) && (ch == 'a' || ch == 'e' || ch == 'i' 
    || ch == 'o' || ch == 'u')) || isdigit(ch));
    
    if(vowel_digit){
        printf("Vowel or Digit.");
    }
}

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    typecheck(ch);
}






3. Logical Condition Check

#include <stdio.h>
#include <stdbool.h>

bool logical(int num1){
    bool checker = !(num1 % 5 == 0) || !(num1 > 50);
    if(checker){
        printf("Condition met.");
    }else{
        printf("Condition not met.");
    }
}

int main(){
    int num1;
    
    printf("Enter a number: ");
    scanf("%d", &num1);
    
    logical(num1);
}






4. Teen Group Check with Consent

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool groupcheck(int age, char consent[]){
     bool teen = (age >= 13 && age <= 19) && (strcmp(consent, "Yes") == 0);
    
    if(teen){
        printf("Allowed.");
    }else{
        printf("Not Allowed.");
    }
}

int main(){
    int age;
    char consent[5];
    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();
    printf("Do you have parental consent [Yes/No]: ");
    fgets(consent, sizeof(consent), stdin);
    consent[strcspn(consent, "\n")] = '\0';
    
    groupcheck(age, consent);
}





5. Positive Odd Number Check

#include <stdio.h>
#include <stdbool.h>
bool number_categorization(int num){
    bool p_odd = num > 0 && num % 2 == 1;
    
    if(p_odd){
        printf("Positive Odd Number");
    }else{
        printf("Not Positive Odd Number");
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    number_categorization(num);
}





6. Grade Validation

#include <stdio.h>
#include <stdbool.h>

bool validation(int grade){
    bool check = grade > 0 && grade <= 100 && grade != 50;
    if(check){
        printf("Grade is valid.");
    }else{
        printf("Grade is invalid.");
    }
}

int main(){
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    validation(grade);
}





7. Password Strength Check

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool check(char password[]){
    bool length = strlen(password) >= 12;
    if(length){
        printf("Strong password.");
    }else{
        printf("Weak password.");
    }
}
int main(){
    char password[50];
    printf("Please enter a password: ");
    fgets(password, sizeof(password), stdin);
    check(password);
}





8. Even or Odd Checker

#include <stdio.h>
#include <stdbool.h>

bool check(int num){
    bool check1 = num % 2 == 0;
    
    if(check1){
        printf("Even number.");
    }else{
        printf("Odd number.");
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
}





9. Positive, Negative, or Zero

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





10. Leap Year Checker

#include <stdio.h>
#include <stdbool.h>

bool check(int year){
    bool year_check = year % 400 == 0 || (year % 4 == 0 && !(year % 100 == 0));

    if(year_check){
        printf("Leap year.");
    }else{
        printf("Not a leap year.");
    }
}

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    check(year);
}

