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

int main(){//START

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
}//END


2. Discount Eligibility Check

3. Nested Age Group and Height Check


4. Leap Year and Century Year Checker

5. Student Admission Criteria
