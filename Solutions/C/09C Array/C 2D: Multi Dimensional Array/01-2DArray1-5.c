// Sunday 16 March 2025

1. Sum of All Elements

#include <stdio.h>

int main(){
    int arr[3][2]={
        {1,2},
        {3,4},
        {5,6}
    };
    
    int sum = 0;
    for(int i = 0; i < 3; i++){ // row
        for(int j = 0; j < 2; j++){ // column
            sum = sum + arr[i][j];
        }
    }
    printf("Sum: %d", sum);
}








2. Find Maximum Element
  
#include <stdio.h>

int main(){
    int arr[3][2]={
        {1,7},
        {3,9},
        {2,5}
    };
    
    int max = arr[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }   
        }
    }
    printf("Max: %d", max);
}






3. Find Minimum Element
  
#include <stdio.h>

int main(){
    int arr[3][2]={
        {4,5},
        {2,8},
        {7,1}
    };
    
    int min = arr[0][0];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    printf("Min: %d", min);
}






4. Count Even Numbers
  
#include <stdio.h>

int main(){
    int arr[3][2]={
        {1,2},
        {3,4},
        {5,6}
    };
    
    int count_even = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(arr[i][j] % 2 == 0){
                count_even++;
            }
        }
    }
    printf("Count of even numbers: %d", count_even);
}








5. Count Odd Numbers
  
#include <stdio.h>

int main(){
    int arr[3][2]={
        {1,2},
        {3,4},
        {5,6}
    };
    
    int count_odd = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(arr[i][j] % 2 != 0){
                count_odd++;
            }
        }
    }
    printf("Count of odd numbers: %d", count_odd);
}
