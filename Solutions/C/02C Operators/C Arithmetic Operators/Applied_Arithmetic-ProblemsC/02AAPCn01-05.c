// January 3, 2025

1. Calculate Monthly Salary
  
#include <stdio.h>

int new_amount(int gross_salary){
    int net_salary, discount;
    
    if(gross_salary > 3000){
        return net_salary = gross_salary - (gross_salary * .10);
    }else if(gross_salary >= 1500 && gross_salary <= 3000){
        return net_salary = gross_salary - (gross_salary * .05);
    }else{
        return gross_salary;
    }
}

int main(){
    int gross_salary;
    
    printf("Enter the gross salary: ");
    scanf("%d", &gross_salary);

    printf("New salary: %d", new_amount(gross_salary));
    return 0;
}





2. Calculate BMI (Body Mass Index)

#include <stdio.h>
#include <math.h>

float bmi(int weight, float height){
    return weight / pow(height,2);
}

int main(){
    int weight;
    float height;
    
    printf("Enter the weight (kg): ");
    scanf("%d", &weight);
    printf("Enter the height (m): ");
    scanf("%f", &height);
    
    printf("BMI: %.2f", bmi(weight, height));
}





3. Calculate Discount on a Product
#include <stdio.h>

int discounted(int orig_price, int percent){
    return orig_price - (orig_price * ((float)percent / 100));
}                            /* ga float ko diri, since if wala integer raba ang 10 tas i divide nimo ug 100,
                            10/100 kay mo 0 value siya dili siya .10 since integer and 10/100 mao na usee ko ug float
                            abi nako ako logic sayop grabe naman lang jud */
int main(){
    int orig_price, percent;
    
    printf("Enter the original price: ");
    scanf("%d", &orig_price);
    printf("Enter the discount percentage: ");
    scanf("%d", &percent);
    
    printf("Discounted price: %d", discounted(orig_price, percent));
}





4. Calculate the Time to Reach Destination

#include <stdio.h>

int time(int distance, int speed){
    return distance / speed;
}

int main(){
    int distance, speed;
    
    printf("Enter the distance (km): ");
    scanf("%d", &distance);
    printf("Enter the speed (km/h): ");
    scanf("%d", &speed);
  
    printf("Time: %d hours", time(distance, speed));
    return 0;
}





5. Total Cost of Goods

#include <stdio.h>

int total_price(int bought, int tax){
    int totalprice_items = bought * 15;
    return totalprice_items + (totalprice_items * (float)tax/100);
}

int main(){
    int bought = 10, tax = 10;
    printf("$%d", total_price(bought, tax));
}
