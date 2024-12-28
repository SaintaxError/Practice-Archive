// December 23, 2024 - with pseudo

1. Add, Multiply, and Subtract
    
#include <stdio.h>

int main(){//START
// DECLARE x, y, result
    int x, y, result;

// INPUT x, y OUTPUT x, y
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

// SET result and calculate
// ((x+y)*3)-10)
    result = (((x+y)*3)-10);

// OUTPUT result
    printf("Result: %d", result);
}//END





2. Multiply, Divide, and Add

#include <stdio.h>
int main(){//START
// DECLARE x,y, result
    int x, y, result;
    
// INPUT x, y OUTPUT x, y 
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    
// SET result and calculate
// (((x*y)/4)+5)
    result = (((x*y)/4)+5);

// OUTPUT result
    printf("Result = %d", result);
}//END





3. Square, Divide, and Add

#include <stdio.h>
#include <math.h>
int main(){//START
// DECLARE x,y,result
    int x, y, result;
    
// INPUT x, y OUTPUT x, y
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    
// SET result and calculate
// (((pow(x,2))/y)+2)
    result = (((pow(x,2))/y)+2);

// OUTPUT result
    printf("Result = %d", result);
}//END 





4. Add, Multiply, and Subtract with Input

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
// (((x+y)*z)-10)
    result = (((x+y)*z)-10);
    
// OUTPUT result
    printf("Result: %d", result);
}//END





5. Divide and Remainder

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
/* x%y, ni gamit nakog modulo operator ditso since "find the remainder" naman, if mag 
  divide pako useless when naa may modulo to get the remainder dayon */
    result = x % y;
    
// OUTPUT result
    printf("Result: %d", result);
}//END
