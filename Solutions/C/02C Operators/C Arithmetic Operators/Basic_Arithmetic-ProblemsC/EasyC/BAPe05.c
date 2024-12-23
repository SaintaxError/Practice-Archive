// December 23, 2024 - with pseudo
// Problem: Find the remainder when 27 is divided by 4, then add 6.
// Expected Output: 9
#include <stdio.h>

int main(){// START
// SET a = 27, b = 4, c = 6
    int a = 27;
    int b = 4;
    int c = 6;
    
// DECLARE result
    int result;
    
// SET result and calculate, use modulo to get the remainder, so
// 27 % 4, then after we get the modulo add 6
// (a%b)+c
    result = (a%b)+c;
    
// OUTPUT result
    printf("The result is: %d", result);
}//END
