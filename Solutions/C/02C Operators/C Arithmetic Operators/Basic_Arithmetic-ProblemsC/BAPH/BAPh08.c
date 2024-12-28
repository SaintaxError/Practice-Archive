// December 24, 2024 - with pseudo + function
/* Problem: Write a program that accepts four integer inputs, x, y, z, and w. Compute the product of x and y, subtract the cube of z, divide by w, and add the square of w.
Expected Output: 
Enter x: 4
Enter y: 5
Enter z: 2
Enter w: 3
Result: 13
*/
#include <stdio.h>
#include <math.h>

double resultext(int x, int y, int z, int w);

int main(){//START
// DECLARE x,y,z,w
    int x,y,z,w;
// INPUT x,y,z,w OUTPUT x,y,z,w
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    printf("Enter w: ");
    scanf("%d", &w);
    
// OUTPUT result
  
/* STORY TIME PARA MASABTAN:
    diba ang naas expected outcome kay if integer ang result, integer.
    If decimal, decimal.
    
    mo set ka ug variable, si double result, mo ingon ni external function, 
    "i calculate ni tanan niya ipasa sa akoa ang result pagkahuman"
    
    mao na i calculate niya nya mo balik siya ni double result, nya ug and result integer,
    
        if mo
    
    printf("Result: %d", resultext(x,y,z,w));
        
        ko ditso aww ang expected result na 13 ma 13.0,
        mo sayop siyas test case kay naa may .0
    
    mao na si double result mo duol nila if-else statement,
    mo ingon "tan awa ragud ang result ihatag ni external function, nya ug i integer, i integer, nya if double i double. 
              ikaw nay bahala print after nimo check ana"
    
        nya maoo na i check nila if-else statement
        
        STORY END.
*/
    double result = resultext(x,y,z,w);
    
    if(result == (int)result){
        printf("Result: %d", (int)result);
    }else{
        printf("Result: %.1lf", result);
    }
}//END

double resultext(int x, int y, int z, int w){
// SET result and calculate
// result = x*y
// result = result - (pow(z,3))
// result = (result / w) + (pow(w,2))
    double result = (((x*y)-(pow(z,3)))/w)+(pow(w,2));
    return result;
}
