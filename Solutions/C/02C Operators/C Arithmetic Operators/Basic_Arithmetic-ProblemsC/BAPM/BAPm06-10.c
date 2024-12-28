// December 23, 2024 - with pseudo

6. Average and Subtract

#include <stdio.h>

int main(){//START
// DECLARE x,y,z,w, result
    int x, y, z, w, result;
    
// INPUT x,y,z,w OUTPUT x,y,z,w
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    printf("Enter w: ");
    scanf("%d", &w);
    
// SET result and calculate
// (((x+y+z+w)/4)-10)
    result = (((x+y+z+w)/4)-10);
    
// OUTPUT result
    printf("Result: %d", result);
    return 0;
}//END





7. Sum of Squares

#include <stdio.h>
#include <math.h>

int main(){//START
// DECLARE x,y,result
    int x, y, result;
    
// INPUT x,y OUTPUT x,y
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    
// SET result and calculate
// ((pow(x,2))+(pow(y,2)))
    result = ((pow(x,2))+(pow(y,2)));
    
// OUTPUT result
    printf("Result: %d", result);
}//END





8. Cube of a Number and Add

#include <stdio.h>
#include <math.h>

int main(){//START
// DECLARE x,result
    int x, result;
    
// INPUT x OUTPUT x
    printf("Enter x: ");
    scanf("%d", &x);
    
// SET result and calculate, (pow(x,3))+5
    result = (pow(x,3))+5;
    
// OUTPUT result
    printf("Result: %d", result);
}//END





9. Multiply, Divide, and Subtract

#include <stdio.h>

int main(){//START 
// DECLARE x,y,result
    int x, y, result;
    
// INPUT x,y OUTPUT x,y
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    
// SET result and calculate
// ((x*y)/4)-3
    result = (((x*y)/4)-3);
    
//OUTPUT result
    printf("Result: %d", result);
}//END





10. Add and Subtract Multiple Numbers

#include <stdio.h>

int main(){//START
// DECLARE x,y,z,w,result
    int x, y, z, w, result;
    
// INTPUT x,y,z,q OUTPUT x,y,z,w
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    printf("Enter w: ");
    scanf("%d", &w);
    
// SET result and calculate
// ((x+y)-z)+w
    result = ((x+y)-z)+w;
    
// OUTPUT result
    printf("Result: %d", result);
}//END
