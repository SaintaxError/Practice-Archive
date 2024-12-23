// December 23, 2024 - with pseudo + function
/* Problem: Write a program that accepts three integer inputs, x, y, and z. 
  Compute the factorial of x, add y, raise the result to the power of z, and compute the remainder when divided by y.
Expected Output: 
Enter x: 3
Enter y: 4
Enter z: 2
Result: 0
*/
#include <stdio.h>
#include <math.h>

int finalresult(int x, int y, int z);
int main(){//START
// DECLARE x,y,z;
    int x,y,z;
// INPUT x,y,z OUTPUT x,y,z
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    
// OUTPUT result
    printf("Result: %d", finalresult(x,y,z));
}//END

int finalresult(int x, int y, int z){
    // DECLARE result, product 
    long long result, product = 1;  /* wala ko ga int ga long long ko kay mo overflow siya ug mag int ko, 
                          dili baya ka handle ang int ug taas na range gyud na numbers. pero mo overflow japon
                          siyas dapit sa factorial loop kung ang user mo input ug x > 20
                         
                          pero ga long long ko sa duha tungod sa: 
                              1. Fatorial Loop: if ang result mo overflow during the calculation of the factorial, 
                                  mo-0 value man siya or incorrect values na ang ihatag
                              2. Result: sa pow, possible mo hold raba ang base ug taas na value gikan sa factorial if nasud siya sa 
                              range sa long long, that’s why i need to use long long sa result na part pud.*/

    // FOR i=1 to n DO
    for(int i = 1; i <= x; i++){
    // CALCULATE product, factorial from 1 to n (multiply)
    product = product * i;
    }// ENDFOR

/* pero to avoid overflow pwede ra bitaw mag if statement na if x>20, mo print dayon ug error kay large ra kaayo ang calculation for
factorial */

// result = product + y
// result (pow(result,z))%y  
    result = ((long long)pow((product + y), z)) % y;
/* "why naay long long beside sa pow?" alang pow returns a double number, nya if the result needs to be stored in an integer type 
  (parehas anang long long), labi na nag modulo ka, nya ang modulo only works with integer types (int, long, etc.).
  dapat mo cast gyud ug long long. AYAW BUTANGI DIBA BADLUNGON KAS COMPILER KAY SAYOP kay mismatch */

    return result;
}
