// December 29, 2024

1. Integer Equalizer

#include <stdio.h>

int integerEq(int x, int y){
    if(x == y){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE x, y;
    int x,y;
// INPUT OUTPUT x, y
    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);
    
// if x and y are the same print "equal"
// else print "not equal"
    if(integerEq(x,y)){
        printf("%d %d equal", x,y);
    }else{
        printf("%d %d not equal", x,y);
    }

    return 0;
}//END





2. Even or Od;d

#include <stdio.h>

int result(int x){
    if(x % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE x
    int x;
// INPUT OUTPUT x
    printf("Enter an integer: ");
    scanf("%d", &x);
    
// if number is even print "even"
// else print "odd"
    if(result(x)){
        printf("%d even", x);
    }else{
        printf("%d odd", x);
    }

    return 0;
}//END





3. Divisible by 2 or Not

#include <stdio.h>

int divisible2(int x){
    if(x % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE x
    int x;
// INPUT OUTPUT x  
    printf("Enter an integer: ");
    scanf("%d", &x);
    
    if(divisible2(x)){// IF x is divisible by 2 THEN
        printf("%d divisible by 2", x);// OUTPUT "divisible by 2"
    }else{// ELSE
        printf("%d not divisible by 2", x);// OUTPUT "not divisible by 2"
    }
  
    return 0;
}//END





4. Greater Than 10 or Not

#include <stdio.h>

int greater10(int x){
    if(x > 10){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE x
    int x;
// INPUT OUTPUT x
    printf("Enter an integer: ");
    scanf("%d", &x);
    
    if(greater10(x)){// IF x > 10 THEN
        printf("%d greater than 10", x); // OUTPUT "greater than 10"
    }else{// ELSE
        printf("%d not greater than 10", x);// OUTPUT "not greater than 10"
    }

  return 0;
}//END





5. Multiple of 3 or Not

#include <stdio.h>

int multiple3(int x){
    if(x % 3 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){//START
// DECLARE x
    int x;
// INPUT OUTPUT x
    printf("Enter an integer: ");
    scanf("%d", &x);

    if(multiple3(x)){// IF x is multiple by 3 THEN
        printf("%d multiple of 3", x);// OUTPUT "multiple of 3"
    }else{// ELSE 
        printf("%d not a multiple of 3", x);// OUTPUT "not a multiple by 3"
    }
    return 0;
}//END
