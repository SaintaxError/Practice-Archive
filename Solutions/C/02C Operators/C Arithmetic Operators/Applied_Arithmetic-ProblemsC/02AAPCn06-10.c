// January 03, 2025

6. Calculate the Discount Amount

#include <stdio.h>

int discount_amount(int orig_price, int percent){
    return orig_price * (float)percent / 100;
}

int main(){
    int orig_price, percent;
    
    printf("Enter the original price: ");
    scanf("%d", &orig_price);
    printf("Enter the discount price: ");
    scanf("%d", &percent);
    
    printf("Discount amount: %d", discount_amount(orig_price, percent));
    return 0;
}





7. Calculate Total Price with VAT

#include <stdio.h>

int total_price(int price, int vat_rate){
    int vat = price * (float)vat_rate / 100;
    return price + vat;
}

int main(){
    int price, vat_rate;
    
    printf("Ente the price: ");
    scanf("%d", &price);
    printf("Enter the VAT rate: ");
    scanf("%d", &vat_rate);
    
    printf("Total price: %d", total_price(price, vat_rate));
    return 0;
}





8. Convert Hours into Minutes and Seconds

#include <stdio.h>

void minutes_seconds(int given_number){
    int minutes = 60 * given_number; // 60 minutes
    int seconds = minutes * 60; // 60 seconds
    
    printf("Minutes: %d, Seconds: %d", minutes, seconds);
}
int main(){
    int given_number;
    
    printf("Enter the number of hours: ");
    scanf("%d", &given_number);
    
    minutes_seconds(given_number);
    return 0;
}





9. Calculate Final Grade Based on Marks
#include <stdio.h>

int final_grade(int mark1, int mark2, int mark3){
    return (mark1 + mark2 + mark3) / 3;
}

int main(){
    int mark1, mark2, mark3;
    
    printf("Enter marks for subject 1: ");
    scanf("%d", &mark1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &mark2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &mark3);
    
    printf("Final grade: %d", final_grade(mark1, mark2, mark3));
    return 0;
}





10. Convert Kilograms to Pounds

#include <stdio.h>

float in_pounds(int weight){
    return weight * 2.20462; // 1kg = 2.20462 in pounds
}

int main(){
    float weight;
    
    printf("Enter the weight in kilograms: ");
    scanf("%f", &weight);
    
    printf("Weight in pounds: %.3f", in_pounds(weight));
    return 0; 
}
