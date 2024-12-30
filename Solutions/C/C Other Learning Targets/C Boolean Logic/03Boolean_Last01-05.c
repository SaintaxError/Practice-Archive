// December 30, 2024

1. Quadrant Determiner

#include <stdio.h>

int result(int x, int y){
    if(x > 0 && y > 0){
        return 1;
    }else if(x < 0 && y > 0){
        return 2;
    }else if(x < 0 && y < 0 ){
        return 3;
    }else if(x > 0 && y < 0){
        return 4;
    }else{
        return 0;
    }
}

int main(){

    int x,y;

    printf("Enter x coordinate: ");
    scanf("%d", &x);
    printf("Enter y coordinate: ");
    scanf("%d", &y);
    
    int finalresult = result(x,y);
    
    if(finalresult == 1){
        printf("First Quadrant");
    }else if(finalresult == 2){
        printf("Second Quadrant");
    }else if(finalresult == 3){
        printf("Third Quadrant");
    }else if(finalresult == 4){
        printf("Fourth Quadrant");
    }else{
        printf("On the Axis");
    }

    return 0;
}





// December 31, 2025

2. Discount Eligibility Check

#include <stdio.h>
#include <string.h>

int result(int total, char membership[]){
    if(total >= 100 && strcmp(membership, "true") == 0){
        return 1;
    }else if(total >= 100 && !(strcmp(membership, "true") == 0)){
        return 2;
    }else{
        return 0;
    }
}

int main(){
    int total;
    char membership[10];
    
    printf("Enter total amount: ");
    scanf("%d", &total);
    printf("Enter membership status (true/false): ");
    scanf("%s", membership);
        
    int finalresult = result(total, membership);
        
    if(finalresult == 1){
        printf("eligible for 20%% discount");
    }else if(finalresult == 2){
        printf("eligible for 10%% discount");
    }else{
        printf("not eligible for discount");
    }
        
    return 0;
}





3. Nested Age Group and Height Check

#include <stdio.h>

int result(int age, float height){
    if(age >= 18 && height >= 6){
        return 1;
    }else if(age >= 18 && height < 6){
        return 2;
    }else{
        return 0;
    }
}


int main(){
    int age;
    float height;

    printf("Enter age: ");
    scanf("%d", &age);       
    printf("Enter height in feet: ");
    scanf("%f", &height);
        
    int finalresult = result(age, height);
        
    if(finalresult == 1){
        printf("Adult and Tall");
    }else if(finalresult == 2){
        printf("Adult but Not Tall");
    }else{
        printf("Not an Adult");
    }
        
    return 0;
}





4. Leap Year and Century Year Checker

#include <stdio.h>

int result(int year){
    if(year % 4 == 0 && !(year % 100 == 0) || year % 400 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int year;
        
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if(result(year)){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
        }
        
    return 0;
}





5. Student Admission Criteria

#include <stdio.h>
#include <string.h>

int result(int age, int grade, char extra[]){
    if(age >= 18 && grade >= 80 && strcmp(extra, "true") == 0){
        return 1;               // uses == 0 to indicate strings are identical
    }else{
        return 0;
    }
}

int main(){
    int age, grade;
    char extra[10];

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter grade: ");
    scanf("%d", &grade);
    printf("Enter extracurricular participation (true/false): ");
    scanf("%s", extra);
    
    if(result(age,grade,extra)){
        printf("Eligible for Admission");
    }else{
        printf("Not Eligible for Admission");
    }

    return 0;
}
