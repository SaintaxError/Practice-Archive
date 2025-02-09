// February 09, 2025 : welcome back

1. Check Positive or Negative
  
#include <stdio.h>
#include <stdbool.h>

bool checker(int num1){
    bool checkme1 = num1 > 0;
    bool checkme2 = num1 < 0;
    if(checkme1){
        printf("Positive.");
    }
    if(checkme2){
        printf("Negative.");
    }
}

int main(){
    int num1;    
    printf("Enter a number: ");
    scanf("%d", &num1);
    checker(num1);   
}





2. Even or Odd Checker
#include <stdio.h>
#include <stdbool.h>

bool check(int num1){
    bool check1 = num1 % 2 == 0;
    bool check2 = num1 % 2 != 0;
    
    if(check1){
        printf("Even number.");
    }
    if(check2){
        printf("Odd number.");   
    }
}

int main(){
    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);
    check(num1);
}





3. Voting Eligibility

#include <stdio.h>
#include <stdbool.h>

bool check(int num1){
    bool check1 = num1 >= 18;
    bool check2 = num1 < 18;
    
    if(check1){
        printf("You are eligible to vote.");
    }
    if(check2){
        printf("You are not eligible to vote.");
    }
}

int main(){
    int num1;
    printf("Enter your age: ");
    scanf("%d", &num1);
    check(num1);
}





4. Pass or Fail

#include <stdio.h>
#include <stdbool.h>

bool check(int score){
    bool check1 = score >= 50;
    bool check2 = score < 50;
    
    if(check1){
        printf("You passed!");
    }
    if(check2){
        printf("You failed.");
    }
}

int main(){
    int score;
    printf("Enter your exam score: ");
    scanf("%d", &score);
    check(score);
}





5. Check Leap Year

#include <stdio.h>
#include <stdbool.h>

bool check(int year){
    bool check1 = year % 400 == 0 || (year % 4 == 0 && !(year % 100 == 0));
    bool check2 = !(year % 400 == 0 || (year % 4 == 0 && !(year % 100 == 0)));
    if(check1){
        printf("Leap year.");
    }    
    if(check2){
        printf("Not a leap year.");
    }
}

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    check(year);
}





6. Largest of Two Numbers

#include <stdio.h>
#include <stdbool.h>

bool check(int num1, int num2){
    bool check1 = num1 > num2;
    bool check2 = num1 < num2;
    
    if(check1){
        printf("The largest number is: %d", num1);
    }
    if(check2){
        printf("The largest number is: %d", num2);
    }
}

int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    check(num1, num2);
}






7. Discount Calculator

#include <stdio.h>
#include <stdbool.h>

bool check(float price){
    bool price_discount = price > 100;
    
    if(price_discount){
        price = price - (price * 0.10);
    }
    
    printf("Final price after discount: $%.2f", price);
}

int main(){
    float price;
    printf("Enter total price: ");
    scanf("%f", &price);
    check(price);
}





8. Temperature Alert

#include <stdio.h>
#include <stdbool.h>

bool check(int temp){
    bool check1 = temp < 0;
    bool check2 = temp > 35;
    bool check3 = temp >= 0 && temp <= 35;
    if(check1){
        printf("Freezing point!");
    }
    if(check2){
        printf("Too hot!");
    }
    if(check3){
        printf("Normal temperature.");
    }
}

int main(){
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);
    check(temp);
}





9. Speed Limit Checker

#include <stdio.h>
#include <stdbool.h>

bool check(int speed){
    bool speed1 = speed > 100;
    bool speed2 = speed <= 100;
    
    if(speed1){
        printf("Over speed limit! Slow down!");
    }
    if(speed2){
        printf("Speed is within limit.");
    }
}

int main(){
    int speed;
    printf("Enter your speed: ");
    scanf("%d", &speed);
    check(speed);
}





10. ATM Withdrawal
#include <stdio.h>
#include <stdbool.h>

bool check(int withdraw){
    bool withdraw1 = withdraw % 100 == 0;
    bool withdraw2 = !(withdraw % 100 == 0);

    if(withdraw1){
        printf("Transaction successful.");
    }
    if(withdraw2){
        printf("Invalid amount. Withdraw in multiples of 100");
    }
}

int main(){
    int withdraw;
    printf("Enter amount to withdraw: ");
    scanf("%d", &withdraw);
    check(withdraw);
}
