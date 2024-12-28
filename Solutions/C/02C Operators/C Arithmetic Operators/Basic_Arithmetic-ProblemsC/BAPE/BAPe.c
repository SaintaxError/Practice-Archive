// December 23, 2024 - with pseudo

1. Add and Subtract

#include <stdio.h>

int main(){ //START
// SET a = 12, b = 8, c = 5
    int a = 12, b = 8, c = 5;
// DECLARE result
    int result;
    
// SET result = (a + b) - c, Calculate result
    result = (a + b ) - c;
    
// OUTPUT result, "The result is: " result
    printf("The result is: %d", result);
    return 0;
}//END





2. Subtraction and Multiplication

#include <stdio.h>

int main(){ //START
// SET a = 7, b = 20, c = 3
    int a = 7, b = 20, c = 3;
// DECLARE result
    int result;
    
// SET result and calculate, (b-a)*c
    result = (b-a)*c;
    
// OUTPUT result
    printf("The result is: %d", result);
    return 0;
}//END






3. Division and Addition

#include <stdio.h>

int main(){ //START
// SET a = 30, b = 5, c = 12
    int a = 30, b = 5, c = 12;
// DECLARE result
    int result;
    
// SET result and calculate, (a/b)+c
    result = (a / b) + c;
    
// OUTPUT result
    printf("The result is: %d", result);
    return 0;
}//END





4. Multiplication and Sum

#include <stdio.h>

int main(){ //START
// SET a = 4, b = 6, c = 3
    int a = 4, b = 6, c = 3;
// DECLARE result
    int result;
    
// SET result and calculate, add 6 and 3 first, then multiply by 4
// (b+c)*a
    result = (b + c) * a;

// OUTPUT result
    printf("The result is: %d", result);
}//END 






5. Remainder and Addition

#include <stdio.h>

int main(){ // START
// SET a = 27, b = 4, c = 6
    int a = 27, b = 4, c = 6;
// DECLARE result
    int result;
    
// SET result and calculate, use modulo to get the remainder, so
// 27 % 4, then after we get the modulo add 6
// (a%b)+c
    result = (a % b) + c;
    
// OUTPUT result
    printf("The result is: %d", result);
    return 0;
}//END
