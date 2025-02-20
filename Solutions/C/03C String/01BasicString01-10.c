// February 21, 2025 - 5:07 am good morning :)) ggs

1. String Input & Output

#include <stdio.h>

void check(char str[]){
    printf("You entered: %s", str);
}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    check(str);
}






2. String Length 

#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Length of the string: %d", strlen(str));
}






3. String Comparison 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void check(char str1[], char str2[]){
    bool check1 = strcmp(str1, str2) == 0;
    
    if(check1){
        printf("Strings are equal!");
    }else{
        printf("Strings are not equal!");
    }
}

int main(){
    char str1[50], str2[50];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    check(str1, str2);
}






4. String Reversal

#include <stdio.h>
#include <string.h>

void check(char str[]){
    int length = strlen(str);
    for(int i = length - 1; i >= 0; i--){  
        printf("%c", str[i]);  
    }
}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    check(str);
}






5. Counting Vowels in a String

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void check(char str[]){
    int count;
    for(int i = 0; str[i] != '\0'; i++){
        if(isalpha(str[i]) && (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')){
            count++;
        }
    }
    printf("Number of vowels: %d", count);
}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    check(str);
}

6. Converting to Uppercase
#include <stdio.h>
#include <string.h>

void check(char str[]){
    printf("Uppercase: ");
    for(int i = 0; str[i] != '\0'; i++){
        if ((int)str[i] >= 97 && (int)str[i] <= 122) {
             str[i] = str[i] - 32; 
        }
        printf("%c", str[i]);
    }
}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    check(str);
}

7. Checking if a String is a Palindrome

#include <stdio.h>
#include <string.h>

int check(char str[]){
    int length = strlen(str);
    for(int i = 0; i < length/2; i++){
        if(str[i] != str[length - 1 - i]){
            return 0;
        }
    }
}

int main(){
    char str[40];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    if(check(str) == 0){
        printf("It is not a palindrome.");
    }else{
        printf("It is a palindrome.");
    }
}


8. Counting Words in a String

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void check(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(isspace(str[i])){
            count++;
        }
    }
    printf("Number of words: %d", count);
}

int main(){
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    check(str);
}


9. Finding a Character in a String

#include <stdio.h>
#include <string.h>

void check(char ch, char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("Character found at position: %d", i+1);
            break;
        }else{
            printf("Character not found.");
            break;
        }
    }
}

int main(){
    char ch, str[50];
    printf("Enter a string: ");
    fgets(str,sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter a character: ");
    scanf("%c", &ch);
    check(ch, str);
}


10. Removing Spaces from a String

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check(char str[]){
    int new_store = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(!isspace(str[i])){
                str[new_store] = str[i];
                new_store++;
            }
            
        }
    str[new_store] = '\0';
    printf("String without spaces: %s\n", str);
}

int main(){
    char str[40];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    check(str);
}
