// December 30, 2024

6. Age and Height Check

#include <stdio.h>

int result(int age, int height){
    if(age >= 18 && height >= 5){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE age, height
    int age, height;
// INPUT OUTPUT age, height
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height in feet: ");
    scanf("%d", &height);
    
    if(result(age, height)){
        printf("eligible for participation");
    }else{
        printf("not eligible");
    }

  return 0;
}





7. Age, Height, and Weight Combination

#include <stdio.h>

int result(int age, float height, int weight){
    if(age < 40 && height > 5 && weight < 80){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE age, height, weight
    int age, weight;
    float height;
// INPUT OUTPUT age, height, weight
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height in feet: ");
    scanf("%f", &height);
    printf("Enter weight in kg: ");
    scanf("%d", &weight);
    
    if(result(age, height, weight)){
        printf("eligible for program");
    }else{
        printf("not eligible");
    }
    
    return 0;
}//END





8. Combination of Even, Positive, and Divisibility by 3

#include <stdio.h>

int result(int x){
    if(x % 2 == 0 && x > 0 && x % 3 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE x
    int x;
// INPUT OUTPUT x
    printf("Enter a number: ");
    scanf("%d", &x);

    if(result(x)){
        printf("even, positive, divisible by 3");
    }else{
        printf("conditions not met");
    }
  
  return 0;
}//END





9. Divisible by 2 and Greater Than 10

#include <stdio.h>

int result(int x){
    if(x % 2 == 0 && x > 10){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE x
    int x;
// INPUT OUTPUT x
    printf("Enter a number: ");
    scanf("%d", &x);

    if(result(x)){
        printf("divisible by 2 and greater than 10");
    }else{
        printf("condition not met");
    }
    
    return 0;
}//END





10. Odd and Not Divisible by 5

  #include <stdio.h>

int result(int x){
    if(x % 2 == 1 && (!(x % 5 == 0))){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE x
    int x;
// INPUT OUTPUT x
    printf("Enter a number: ");
    scanf("%d", &x);

    if(result(x)){
        printf("odd and not divisible by 5");
    }else{
        printf("conditions not met");
    }
}//END

