// January 2, 2025

1. Calculate Total Cost
#include <stdio.h>

int total(int cost, int quantity){
    return cost * quantity; 
}

int main(){
    int cost, quantity;
    
    printf("Enter the price of the product: ");
    scanf("%d", &cost);
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    printf("Total cost: %d", total(cost,quantity));
    return 0;
}





2. Calculate Total Area of a Rectangle
  
#include <stdio.h>

int area(int length, int width){
    return length * width;
}
   
int main(){
    int length, width;
    
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: ");
    scanf("%d", &width);
    
    printf("Area: %d", area(length, width));
    return 0;
}





3. Budget Calculation
  
#include <stdio.h>

int moneyleft(int monthly, int groceries, int transportation, int entertainment){
    return monthly - (groceries + transportation + entertainment);
}

int main(){
    int monthly = 500, groceries = 150, transportation = 100, entertainment = 80;

    printf("$%d", moneyleft(monthly, groceries, transportation, entertainment));
    return 0;
}





// January 3, 2025

4. Convert Celsius to Fahrenheit

#include <stdio.h>

int convert(int celsius){
    return (celsius * 1.8) + 32;
}

int main(){
    int celsius;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &celsius);
    
    printf("Temperature in Fahrenheit: %d", convert(celsius));
    return 0;
}





5. Calculate the Age of a Person   
  
#include <stdio.h>

int age(int birthyear){
    return 2025 - birthyear;
}
int main(){
    // DECLARE BIRTHYEAR
    // INPUT OUTPUT BIRTHYEAR
    int birthyear;
    
    printf("Enter the birth year: ");
    scanf("%d", &birthyear);
    
    // SET AND CALCULATE AGE
    // age = current date - birthyear
    
    // OUPUT age
    printf("Your age: %d", age(birthyear));
    return 0;
}
