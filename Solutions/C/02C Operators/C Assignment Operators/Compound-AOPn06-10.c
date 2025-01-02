// January 3, 2025

6. Increment and Reverse Operations

#include <stdio.h>

int inc_dec_sq(int a){
    
    for(int i = 1; i <= 10; i++){
        a += 1;
    }
    printf("After incrementing: a = %d\n", a);
    
    for(int i = 1; i <= 10; i++){
        a -= 1;
    }
    printf("After decrementing: a = %d\n", a);

    printf("After squaring: a = %d", a *= a);
}

int main(){
    int a;
    
    printf("Initial value of a: ");
    scanf("%d", &a);
    
    inc_dec_sq(a);
    return 0;
}





7. Nested Assignment Operations

#include <stdio.h>

void nested(int x, int y){
    printf("After addition: y = %d\n", y += x);
    printf("After multiplication: y = %d", y *= y);
}

int main(){
    int x, y;
    
    printf("Initial value of x: ");
    scanf("%d", &x);
    printf("Initial value of y: ");
    scanf("%d", &y);
    
    nested(x, y);
    return 0;
}

// gikapoy nako sors. review pa nako bitwise

8. Bitwise and Assignment
9. Scaling and Assignment
10. Dividing in Steps
