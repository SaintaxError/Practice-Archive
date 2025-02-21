// February 21, 2025 


1. Print ASCII of a Character

#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c is %d", ch,ch);
}






2. Get Character from ASCII Code

#include <stdio.h>

int main(){
    int ascii;
    printf("Enter an ASCII value: ");
    scanf("%d", &ascii);
    printf("Character: %c", ascii);
}






3. Convert Lowercase to Uppercase (Using ASCII Arithmetic)

#include <stdio.h>

int main(){
    char ch;
    printf("Enter a lowercase letter: ");
    scanf("%c", &ch);
    printf("Uppercase: %c", ch - 32);
}






4. Convert Uppercase to Lowercase
#include <stdio.h>

int main(){
    char ch;
    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);
    printf("Lowercase: %c", ch + 32);
}






5.  Identify Character Type (Uppercase, Lowercase, Digit, or Symbol)

#include <stdio.h>

void check(char ch){
    if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9'))){
        printf("It is a special symbol.");
    }
}

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    check(ch);
}






6. Print ASCII Table for A-Z

#include <stdio.h>

int main(){
    for(int i = 65; i <= 90; i++){
        printf("%c - %d\n", i, i);
    }
}






7. Find ASCII Difference Between Two Characters

#include <stdio.h>
#include <stdlib.h>
int main(){
    char ch1, ch2;
    printf("Enter first character: ");
    scanf("%c", &ch1);
    getchar();
    printf("Enter second character: ");
    scanf("%c", &ch2);
    
    printf("ASCII difference: %d", abs(ch1-ch2));
   
}






8. Reverse Case of a Character

#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Reversed case: %c", ch - 32);
}






9. Check if Two Characters Are Consecutive in ASCII

#include <stdio.h>
#include <stdbool.h>

void check(char ch1, char ch2){
    bool check1 = ch1 - ch2 == 1 || ch1 - ch2 == -1;
    
    if(check1){
        printf("Yes, they are consecutive in ASCII.");
    }
}

int main(){
    char ch1, ch2;
    printf("Enter first character: ");
    scanf("%c", &ch1);
    getchar();
    printf("Enter second character: ");
    scanf("%c", &ch2);
    check(ch1, ch2);
}






10. Count Vowels and Consonants in a String (Using ASCII Ranges)

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void check(char string[]){
    int vowels = 0;
    int consonants = 0;
    
    for(int i = 0; string[i] != '\0'; i++){
        if(isalpha(string[i])){
            if(string[i] == 65 || string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85 || string[i] == 97 || string[i] == 101 || string[i] == 105 || string[i] == 111 || string[i] == 117){
                vowels++;
            }else{
                 consonants++;
            }
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);
}

int main(){
    char string[20];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string,"\n")] = '\0';
    check(string);
}







11. Find nth Alphabet Using ASCII







12. Check if a Character is a Digit (0-9) Using ASCII

#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= 48 && ch <= 57){
        printf("It is a digit.");
    }
}







13. Print All Digits and Their ASCII Values

#include <stdio.h>

int main(){
    for(int i = 48; i <= 57; i++){
        printf("%c - %d\n", i, i);
    }
}







14. Convert a Sentence to ASCII Values

#include <stdio.h>
#include <string.h>

void check(char str[]){
    for(int i = 0; str[i] != 0; i++){
        printf("%c - %d\n", str[i], str[i]);
    }
}

int main(){
    char str[50];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    check(str);
}






15. Print ASCII Art Using ASCII Values






