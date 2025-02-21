// February 21, 2025

1. Character Classification

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void check(char ch){
    bool check1 = ispunct(ch);
    bool check2 = isdigit(ch);
    
    if(check1){
        printf("It is a special symbol.");
    }else{
        if(check2){
            printf("It is a digit.");
        }else{
            printf("It is a letter.");
        }
    }
}

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    check(ch);
}





2. Counting Letter Types

#include <stdio.h>
#include <ctype.h>

void check(char str[]){
    int lower = 0, upper = 0;
    for(int i = 0; str[i] != 0; i++){
        if(islower(str[i])){
            lower++;
        }
        if(isupper(str[i])){
            upper++;
        }
    }
    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d", lower);
    
}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    check(str);
}







3. Identifying Whitespace

#include <stdio.h>
#include <ctype.h>

void check(char ch){
    if(isspace(ch)){
        printf("It is a whitespace character.");
    }else{
        printf("It is not a whitespace character.");
    }
}

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    check(ch);
}






4. Sentence Analysis
  
#include <stdio.h>
#include <ctype.h>

void check(char str[]){
    int counter = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        if(isspace(str[i])){
            counter++;
        }
    }
    printf("Words: %d", counter);
}

int main(){
    char str[70];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    check(str);
}






5. Finding the First Digit
  
#include <stdio.h>
#include <ctype.h>

void check(char str[]){
    int flag = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(!(isdigit(str[i]))){
            continue;
        }else{
            printf("First digit: %c", str[i]);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("No digit found.");
    }
}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    check(str);
}







6. Removing Punctuation

#include <stdio.h>
#include <ctype.h>

void check(char str[]){
    int j = 0;
    for(int i = 0; str[i] != 0; i++){
        if(!(ispunct(str[i]))){
            str[j] = str[i];
            j++;
        }
    }
    printf("Processed string: %s", str);
}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    check(str);
}






7. Case Toggling

#include <stdio.h>
#include <ctype.h>

void check(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }else{
            str[i] = tolower(str[i]);
        }
    }
    printf("Converted string: %s", str);
}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,sizeof(str), stdin);
    check(str);
}






8. Checking for a Digit-Only String

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void check(char str[]){
    int flag = 0;
    for(int i = 0; str[i] != 0; i++){
        if(isdigit(str[i])){
            continue;
        }else{
            printf("The string contains non-digit characters.");
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("The string contains only digits.");
    }
}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    check(str);
}







9. Counting Special Characters

#include <stdio.h>
#include <ctype.h>

void check(char str[]){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
         if(ispunct(str[i])){
             counter++;
         }else{
             continue;
         }
    }
    printf("Special characters: %d", counter);
}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    check(str);
}







10. Checking if a String is All Uppercase

#include <stdio.h>
#include <ctype.h>

void check(char str[]){
    int flag = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        if(!(islower(str[i]))){
            continue;
        }else{
            if(islower(str[i])){
                printf("The string contains lowercase letters.");
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        printf("The string is all uppercase.");
    }
}

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    check(str);
}



