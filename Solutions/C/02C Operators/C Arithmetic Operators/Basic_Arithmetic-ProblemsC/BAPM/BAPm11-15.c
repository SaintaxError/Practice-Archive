// December 23, 2024 - with pseudo

11. Exponentiation and Division 

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
// ((pow(x,y))/10)
    result = ((pow(x,y))/10);
    
// OUTPUT result
    printf("Result: %d", result);
}//END

12. Add, Square, and Divide

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
// (x+y)
// result = (pow(result,2))/2
    result = x+y;
    result = (pow(result,2))/2;
    
// OUTPUT result
    printf("Result: %d", result);
}//END

13. Subtract and Multiply

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
// (y-x)*3
    result = (x-y)*3;
    
//OUTPUT result
    printf("Result: %d", result);
}//END

14. Remainder and Addition

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
// (x%y)+y
    result = (x%y)+y;
    
// OUTPUT result
    printf("Result: %d", result);
}// END


15. Add and Multiply Different Numbers

#include <stdio.h>

int main(){//START
// DECLARE x,y,z,result
    int x, y, z, result;
// INPUT x,y,z OUTPUT x,y,z
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    
// SET result and calculate
// (x+y)*z
    result = (x+y)*z;
    
// OUTPUT result
    printf("Result: %d", result);
}//END
