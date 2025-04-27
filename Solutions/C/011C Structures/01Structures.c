// April 27, 2025 - also practicing typedef, kay why not, structures with other libraries + typedef

1.
#include <stdio.h>
#include <string.h>

typedef unsigned int BookID;
typedef struct{
    BookID id;
    char title[50];
    float price;
}Book;

int main(){
    Book book1;
    Book book2;

    book1.id = 1001;
    char title[] = "C Programming for Beginners";
    
     strcpy(book1.title, "C Programming for Beginners");
    /* "ngano di nalng: 
    book1.title = "C Programming for Beginners";
    
    title is an array diba, nya we can't directly assigned a "=" man gahig ulo array murag bata di na makig swap dayon maong gamit ta ug strcpy mag copy nya ibutang sa array
    
    pwede bitaw
    char title[] = "C Programming for Beginners";
    pero para asa pa imong gibutang sa struct na char title[] kung i delcare napud nimos main. redundant hahahahahahhahahaha
    */
    book1.price = 499.99;
    
    book2.id = 1002;
    strcpy(book2.title, "Advanced C Techniques");
    book2.price = 799.50;
    
    printf("Book 1:\n");
    printf("%u\n", book1.id);
    // di ta mag &book1.id ha kay printf nangutana rag value dili address yabag
    printf("%s\n", book1.title);
    printf("%.2f\n\n", book1.price);
    
    printf("Book 2:\n");
    printf("%u\n", book2.id);
    printf("%s\n", book2.title);
    printf("%.2f\n", book2.price);
}





2.

#include <stdio.h>

typedef struct{
    int number;
}guessing;

void printing();

int main(){
    printing();
}

void printing(){
    guessing userGuessed;
    
    do{
    printf("Guess the number between 1 and 100: ");
    scanf("%d", &userGuessed.number);
    
    if(userGuessed.number != 2){ 
        printf("You guess it incorrectly. Please enter a random number again.\n\n");
    }else{
        printf("Congratulations! You guess it right.");
    }
    }while(userGuessed.number != 2);
}






3. //tbc

  
