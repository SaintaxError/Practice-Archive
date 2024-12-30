// December 30, 2024

1. Both Positive or Negative

#include <stdio.h>

int result(int x, int y){
    if(x > 0 && y > 0){
        return 0;
    }else if(x < 0 && y < 0){
        return 1;
    }else{
        return 2;
    }
}

int main(){//START 
// DECLARE x,y
    int x,y;
// INPUT OUTPUT x,y
    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);
    
    int resultfinal = result(x,y);

    if(resultfinal == 0){
        printf("both positive");
    }else if(resultfinal == 1){
        printf("both negative");
    }else{
        printf("mixed");
    }
    
    return 0;
}//END





2. Both Even or Odd

#include <stdio.h>

int result(int x, int y){
    if(x % 2 == 0 && y % 2 == 0){
        return 1;
    }else if((!(x % 2 == 0)) && (!(y % 2 == 0))){
        return 2;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE x,y
    int x,y;
// INPUT OUTPUT x,y
    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);
    
    int finalresult = result(x,y);
    
    if(finalresult == 1){
        printf("both even");
    }else if(finalresult == 2){
        printf("both odd");
    }else{
        printf("mixed");
    }
    
    return 0;
}//END





3. Nested Conditions with OR
#include <stdio.h>

int result(int x, int y){
    if(x > 0 && y > 0 ){
        return 1;
    }else{
        return 0;
    }
}
int main(){//START
// DECLARE x,y
    int x,y;
// INPUT OUTPUT x,y
    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);
    
// IF x > 0 && y > 0 THEN
   // OUTPUT "none of the conditions met"
// ELSE 
   // OUTPUT "either both negative or at least one is zero"
    if(result(x,y)){
        printf("none of the conditions met");
    }else{
        printf("either both negative or at least one is zero");
    }
}//END





4. Is Leap Year with AND

#include <stdio.h>

int result(int year){
    if(year % 4 == 0 && (!(year % 100 == 0 || year % 400 == 0))){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DELCARE year
    int year;
// INPUT OUTPUT year
    printf("Enter a year: ");
    scanf("%d", &year);

   if(result(year)){
       printf("leap year");
   }else{
       printf("none of the conditions met");
   }
    
    return 0;
}//END 





5. Multiple Conditions with AND

#include <stdio.h>

int result(int x, int y){
    // SET CALCULATE sum, add x and y
    int sum = x + y;
    // IF x > 0 && y > 0 && sum > 10 THEN return 1
    if(x > 0 && y > 0 && sum > 10){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE x,y
    int x,y;
// INTPUT OUTPUT x,y
    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);
    
    if(result(x,y)){
        printf("both postitive and sum greater than 10");
    }else{
        printf("conditions not met");
    }
}//END
