// December 31. 2024

6. Advanced Voting Eligibility

#include <stdio.h>
#include <string.h>

int result(int age, char citizen[], char criminal[]){
    if(age >= 18 && strcmp(citizen, "true") == 0  && strcmp(criminal, "false") == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
   
    int age;
    char citizen[10], criminal[10];

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter citizenship status (true/false): ");
    scanf("%s", citizen);
    printf("Enter criminal record status (true/false): ");
    scanf("%s", criminal);
    
    if(result(age,citizen, criminal)){
        printf("Eligible to Vote");
    }else{
        printf("Not Eligible to Vote");
    }
   
    return 0;
}





7. Grade Classification System
#include <stdio.h>

int result(int grade){
    if(grade >= 90){
        return 1; 
    }else if(grade > 69 && grade < 90){
        return 2;
    }else if(grade >= 50 && grade <= 69){
        return 3;
    }else{
        return 0;
    }
}

int main(){
   
    int grade;
    
    printf("Enter grade percentage: ");
    scanf("%d", &grade);
    
    switch(result(grade)){
        case 1: 
            printf("Excellent");
            break;
        case 2:
            printf("Good");
            break;
        case 3:
            printf("Satisfactory");
            break;
        case 0:
            printf("Fail");       
    }
    
    return 0;
   
}





8. Complex Bank Loan Eligibility

#include <stdio.h>

int result(int income, int credit){
    if(income >= 50000 && credit >= 700){
        return 1;
    }else if(income < 50000 && credit < 700){
        return 2;
    }else{
        return 0;
    }
}

int main(){
    
    int income, credit;

    printf("Enter annual income: ");
    scanf("%d", &income);
    printf("Enter credit score: ");
    scanf("%d", &credit);
    
    int finalresult = result(income, credit);
    
    if(finalresult == 1){
        printf("Loan Approved");
    }else if(finalresult == 2){
        printf("Loan Denied");
    }else{
        printf("Review Required");
    }
   
    return 0;
}





9. Full Access Permission

#include <stdio.h>
#include <string.h>

int result(int age, char status[], char task[]){
    if(age >= 18 && strcmp(status, "true") == 0 && strcmp(task, "true") == 0){
        return 1;
    }else if(age >= 18 && strcmp(status, "true") == 0 && strcmp(task, "false") == 0){
        return 2;
    }else{
        return 0;
    }
}

int main(){
  
    int age;
    char status[10], task[10];
 
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter subscription status (true/false): ");
    scanf("%s", status);
    printf("Enter task completion task (true/false): ");
    scanf("%s", task);
    
    int finalresult = result(age, status, task);
    
    if(finalresult == 1){
        printf("Full Access Granted");
    }else if(finalresult == 2){
        printf("Limited Access");
    }else{
        printf("Access Denied");
    }
  
  return 0;
}





10. Complex Number Classification

#include <stdio.h>

int result(int real, int imaginary){
    if(imaginary == 0 && real > 0){
        return 1;
    }else if(real == 0 && imaginary > 0){
        return 2;
    }else{
        return 0;
    }
}

int main(){
 
    int real, imaginary;

    printf("Enter real part: ");
    scanf("%d", &real);
    printf("Enter imaginary part: ");
    scanf("%d", &imaginary);
    
    int finalresult = result(real, imaginary);
    
    if(finalresult == 1){
        printf("Purely Real");
    }else if(finalresult == 2){
        printf("Purely Imaginary");
    }else{
        printf("Complex Number");
    }

    return 0;
}
