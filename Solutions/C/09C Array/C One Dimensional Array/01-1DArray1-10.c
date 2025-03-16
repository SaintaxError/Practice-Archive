// Sunday, 16 March 2025

1. Sum of All Elements

#include <stdio.h>

int main(){
    int numbers[5]={1,2,3,4,5};
    int storage = 0;
    for(int i = 0; i <= 4; i++){
        storage = storage + numbers[i];
    }
    printf("Sum : %d", storage);
}







2. Find Maximum Element

#include <stdio.h>

int main(){
    int numbers[]={1, 7, 3, 9, 2};
    int max = numbers[0];
    
    for(int i = 1; i < 5; i++){
        if(max < numbers[i]){ // 1 < 7, true, modify, 7 max (temp)
            max = numbers[i];
        }
    }
    
    printf("Max: %d", max);
}







3. Find Minimum Element

#include <stdio.h>

int main(){
    int numbers[]={4,2,9,1,5};
    int min = numbers[0];
    
    for(int i = 1; i < 5; i++){
        if(min > numbers[i]){ // bale, if 4 > 2, true, modify, 2 kay min
            min = numbers[i];
        }
    }
    
    printf("Max: %d", min);
}









4. Count Even Numbers

#include <stdio.h>

int main(){
    int numbers[] = {1,2,3,4,5,6};
    int count_even = 0;
    int length = sizeof(numbers)/sizeof(numbers[0]);
    for(int i = 0; i < length; i++){
        if(numbers[i] % 2 == 0){
            count_even++;
        }
    }
    printf("Count of even numbers: %d", count_even);
}







5. Count Odd Numbers
  
#include <stdio.h>

int main(){
    int numbers[] = {1,2,3,4,5,6};
    int count_odd = 0;
    for(int i = 0; i < 6; i++){
        if(numbers[i] % 2 != 0){
            count_odd++;
        }
    }
    printf("Count of odd numbers: %d", count_odd);
}








6. Reverse an Array

#include <stdio.h>

int main(){
    int numbers[]={1,2,3,4,5};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    
    for(int i = 0; i < length/2; i++){
        int temp = numbers[i];
        numbers[i] = numbers[length - i - 1];
        numbers[length - i - 1]  = temp;  
        
        // kuan, mura siya kato sa checking palindrome na style gali kato string
    }
    
    printf("Reversed Array: [");
    for (int i = 0; i < length; i++) {
        printf("%d", numbers[i]);  
        if (i < length - 1) {
            printf(", "); 
        }
    }
    printf("]\n"); 
}






7. Find the Average

#include <stdio.h>

int main(){
    int numbers[] = {5,10,15,20};
    int storage = 0;
    int length = sizeof(numbers)/sizeof(numbers[0]);
    for(int i = 0; i < 5; i++){
        storage = storage + numbers[i];
    }
    float average = (float) storage/length;
    printf("Average: %.1f", average);
}






8. Search for an Element

#include <stdio.h>

int main(){
    int numbers[]={1,2,3,4,5};
    int target = 3, flag = 0;
    for(int i = 0; i < 5; i++){
        if(numbers[i] == target){
            flag = 1;
        }
    }
    
    if(flag == 1){
        printf("Found: Yes");
    }else{
        printf("Found: No");
    }
} // shet







9. Remove the Duplicates

#include <stdio.h>

int main(){
    // butang sako sa set of array sa
    int numbers[] = {1,2,2,3,4,4};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    
    for(int i = 0; i < length; i++){
           int isDup = 0; /* gibutang nako sa sud para kanang mo reset siya taga new iteration sa i, if sa gawas man nya madetect dayon naay duplicate maputol 
                             dayon ang array, di siya mo padayon sa next element, the rest array ma ignore */
           
        for(int j = 0; j < i; j++){ 
            // j starts at 0 every new i man sa, so mag sige rajud na siyag start sa first element, then sa if statement, checking if naay repeating.
            // so if 0 < 0, print ang first element ditso,
            if(numbers[i] == numbers[j]){
                isDup = 1;
                break; // if ang current kay duplicate, ma cancel ang  current nga maoy current iteration sa i.
            }
        }

      
        if (!isDup) {  // meaning isDup nako false (0), print and num
            printf("%d ", numbers[i]);
        }
    // then kahuman, kanang we can't directly remove an array man, so mag moving ta
    
    // dayon, kanang, i check nako, if ang current na element ug before ni appear na ba, initialize kog j ani, ug ni appear na ignore.
    }
}








10. Find the Second Largest Element

#include <stdio.h>

int main(){
    int numbers[] = {1,5,7,9,4};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    int largest = numbers[0];
    // for largest element
    // kuhaon sa nakong largest element, manually
    for(int i = 1; i < length; i++){
        if(largest < numbers[i]){
            largest = numbers[i];
        }
    }
    
    /* kahuman kay nakuha naman nako, magita nasad ko from the start for the second largest, and first element as set initial as second largest the compare to others, 
  and kay basta pud lower than the largest, ug di siya equal to largest */
    
    int second_largest = numbers[0];
    for(int j = 1; j < length; j++){
        if(second_largest < largest){ // 1 < 9, yezzir true, 
            if(second_largest < numbers[j + 1]) // 1 < 5, yes
              // SAMOKA LIPAYA NAKO + 1 raman diay, ako najud ni AGWHAHWGAHWGAJWAGWJHAGWHAWAhawgawhgaghwaghwahgwhgawhgaghwawhahwah hahays
            second_largest = numbers[j];

            /* this if statement kay mo check pani for the rest element, not only limited to 1 < 5*/
        }
    }
    
    
printf("Second Largest: %d", second_largest);
}
