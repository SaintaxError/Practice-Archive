// January 3, 2025 - 4:44 am

11. Calculate Total Number of Seconds in a Day

#include <stdio.h>

void seconds_day(){
    int a_day = (24 * 60) * 60; 
    // 1 day == 24 hours, 24 * 60 minutes = 1440 mintues, then, 1440 * 60 seconds = 86400 
    printf("Total number of seconds in a day: %d", a_day);
}

int main(){
    seconds_day();
    return 0;
}





12. Convert Dollars to Euros

#include <stdio.h>

float amount_euros(float amount_dollars){
    return amount_dollars * 0.85;
}

int main(){
    float amount_dollars;
    
    printf("Enter the amount in dollars: ");
    scanf("%f", &amount_dollars);
    
    printf("Amount in euros: %.1f", amount_euros(amount_dollars));
}





13. Average Speed Calculation

#include <stdio.h>

int average(int distance_t, int time_taken){
    return distance_t / time_taken;
}

int main(){
    int distance_t, time_taken;
    
    printf("Enter the distance traveled (km): ");
    scanf("%d", &distance_t);
    printf("Enter the time taken (hours): ");
    scanf("%d", &time_taken);

    printf("Average speed: %d km/h", average(distance_t, time_taken));
    return 0;
}





14. Travel Distance

#include <stdio.h>

void travel(){
    int total_travel;
    printf("%d miles", total_travel = 60*4);
}

int main(){
    travel();
    return 0;
}





15. Car Loan Payment

#include <stdio.h>

int months(){
    int total_months;
    printf("%d months", total_months = 12000/300);
}

int main(){
    months();
    return 0;
}  
