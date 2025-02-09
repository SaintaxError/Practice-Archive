// February 09, 2025

1. Day of the Week

#include <stdio.h>

void switcher(int num){
    switch(num){
        case 1: printf("Monday."); break;
        case 2: printf("Tuesday."); break;
        case 3: printf("Wednesday."); break;
        case 4: printf("Thursday."); break;
        case 5: printf("Friday."); break;
        case 6: printf("Saturday."); break;
        case 7: printf("Sunday."); break;
        default: printf("Invalid choice.");
    }
}

int main(){
    int num;
    printf("Enter a number (1-7): ");
    scanf("%d", &num);
    switcher(num);
}






2. Month Name Finder

#include <stdio.h>

void switcher(int num){
    switch(num){
        case 1: printf("January."); break;
        case 2: printf("February."); break;
        case 3: printf("March."); break;
        case 4: printf("April."); break;
        case 5: printf("May."); break;
        case 6: printf("June."); break;
        case 7: printf("July."); break;
        case 8: printf("August."); break;
        case 9: printf("September."); break;
        case 10: printf("October."); break;
        case 11: printf("November."); break;
        case 12: printf("December."); break;
        default: printf("Invalid choice.");
    }
}
int main(){
    int num;
    printf("Enter a number (1-12): ");
    scanf("%d", &num);
    switcher(num);
}







3. Basic Calculator

#include <stdio.h>

void switcher(int num1, int num2, char operator_use){
    int result;
    switch(operator_use){
        case '+':
            result = num1 + num2;
            printf("Result: %d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d", result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result: %d", result);
            break;
        default: 
            printf("Invalid operator.");
    }
}

int main(){
    int num1, num2;
    char operator_use;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    getchar();
    
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator_use);
    switcher(num1, num2, operator_use);
}







4. Grade Evaluator

#include <stdio.h>

void switcher(char ch){
    switch(ch){
        case 'A': printf("Excellent"); break;
        case 'B': printf("Good job!"); break;
        case 'C': printf("Fair effort."); break;
        case 'D': printf("Needs improvement."); break;
        case 'F': printf("Failed. Study harder!"); break;
        default: printf("Invalid grade");
    }
}

int main(){
    char ch;
    printf("Enter your grade: ");
    scanf("%c", &ch);
    switcher(ch);
}







5. Shipping Cost Calculator

#include <stdio.h>

void switcher(int zone){
    switch(zone){
        case 1: printf("Shipping cost: $5"); break;
        case 2: printf("Shipping cost: $10"); break;
        case 3: printf("Shipping cost: $15"); break;
        case 4: printf("Shipping cost: $20"); break;
        case 5: printf("Shipping cost: &25"); break;
        default: printf("Invalid zone."); 
    }
}

int main(){
    int zone;
    printf("Enter shipping zone (1-5): ");
    scanf("%d", &zone);
    switcher(zone);
}







6. Movie Rating Guide

#include <stdio.h>
#include <string.h>

void switcher(int result){
    switch(result){
        case 1: printf("General Audience."); break;
        case 2: printf("Parental Guidance Suggested."); break;
        case 3: printf("Parents Strongly Cautioned."); break;
        case 4: printf("Restricted."); break;
        case 5: printf("Adults Only."); break;
        default: printf("Invalid rating.");
    }
}

int integer_return(char rate[]){
    if(strcmp(rate, "G") == 0){
        return 1;
    }else if(strcmp(rate, "PG") == 0){
        return 2;
    }else if(strcmp(rate, "PG-13") == 0){
        return 3;
    }else if(strcmp(rate, "R") == 0){
        return 4;
    }else if(strcmp(rate, "NC-17") == 0){
        return 5;
    }else{
        return 0;
    }
}

int main(){
    char rate[6];
    printf("Enter movie rating: ");
    fgets(rate, sizeof(rate), stdin);
    rate[strcspn(rate,"\n")] = '\0';
    int result = integer_return(rate);
    switcher(result);
}







7. Coffee Machine

#include <stdio.h>

void switcher(int coffee){
    switch(coffee){
        case 1: printf("You selected Espresso."); break;
        case 2: printf("You selected Latte."); break;
        case 3: printf("You selected Cappuccino."); break;
        case 4: printf("You selected Americano."); break;
        case 5: printf("You selected Mocha."); break;
        default: printf("Invalid choice.");
    }
}

int main(){
    int coffee;
    printf("Enter drink option (1-5): ");
    scanf("%d", &coffee);
    switcher(coffee);
}







8. Currency Converter (USD to Others)

#include <stdio.h>
#include <string.h>

void switcher(int result){
    switch(result){
        case 1: printf("1 USD = 0.75 GBP"); break;
        case 2: printf("1 USD = 0.85 EUR"); break;
        case 3: printf("1 USD = 110.50 JPY"); break;
        default: printf("Invalid currency.");
    }    
}

int returner(char code[]){
    if(strcmp(code,"GBP") == 0){
        return 1;
    }else if(strcmp(code, "EUR") == 0){
        return 2;
    }else if(strcmp(code, "JPY") == 0){
        return 3;
    }else{
        return 0;
    }
    
}
int main(){
    char code[5];
    printf("Enter currency code: ");
    fgets(code, sizeof(code), stdin);
    code[strcspn(code,"\n")] = '\0';
    int result = returner(code);
    switcher(result);
}







9. Internet Data Plan

#include <stdio.h>

void switcher(int data){
    switch(data){
        case 1: printf("You selected 5GB - $10."); break;
        case 2: printf("You selected 10GB - $18"); break;
        case 3: printf("You selectec Unlimited - $30"); break;
        default: printf("Invalid choice.");
    }
}

int main(){
    int data;
    printf("Select a data plan:\n1. 5GB - $10\n2. 10GB - $18\n3. Unlimited - $30\n\n");
    
    printf("Enter data plan (1-3): ");
    scanf("%d", &data);
    switcher(data);
}







10. Vehicle Type Identifier

#include <stdio.h>
#include <string.h>

void switcher(int return_convert){
    switch(return_convert){
        case 1: printf("A four-wheeled motor vehicle.\n"); break;
        case 2: printf("A large vehicle for transporting goods.\n"); break;
        case 3: printf("A two-wheeled motor vehicle.\n"); break;
        case 4: printf("A human-powered two-wheeled vehicle.\n"); break;
        default: printf("Invalid vehicle type.\n");
    }
}

int return_convert(char vehicle[]){

    if(strcmp(vehicle, "Car") == 0){
        return 1;
    }else if(strcmp(vehicle, "Truck") == 0){
        return 2;
    }else if(strcmp(vehicle, "Motorcycle") == 0){
        return 3;
    }else if(strcmp(vehicle, "Bicycle") == 0){
        return 4;
    }else{
        return 0;
    }
}

int main(){
    char vehicle[40];
    printf("Enter vehicle type: ");
    fgets(vehicle, sizeof(vehicle), stdin);  // Read input
    vehicle[strcspn(vehicle, "\n")] = '\0';
    int converted_value = return_convert(vehicle);  
    switcher(converted_value);  
}


