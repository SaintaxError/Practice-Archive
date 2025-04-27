/* April 26, 2025 - practicing enum with multiple functions to use sa mga mo sunod na problems para maanad mo basag code, 
also practicing clean and organize codes, next will be enums with SELECTION + ARRAYS*/

#include <stdio.h>

enum moodChecker{ // first declaration
    HAPPY,
    SAD,
    ANGRY,
    BORED
};

int main(){
    int userNum;
    printf("Enter a number to check your mood (1-4): ");
    scanf("%d", &userNum);
    
    if(userNum < 1 || userNum > 4){
        printf("This is invalid! Again please choose a number from 1 to 4.");
        return 1;
    }
    
    enum moodChecker yourMood = (enum moodChecker)(userNum - 1); /* did the minus 1 here kay if user input 1 and with 
  the minus 1. 1-1 = 0, then 0 is happy baya kay the result of the input together with the
  -1 dala, converted to enum list, then ma align ra siya. */

  /* and above kay dala nana declaration enum diris main function plus casting, pwede ragud mag una ang enum moodChecker yourMood; 
    then sunod nalng and casting nga yourMood = (enum moodChecker) .. */
  
    if(yourMood == HAPPY){
        printf("Yay! Keep smiling.");
    }else if(yourMood == SAD){
        printf("It's okay to cry.");
    }else if(yourMood == ANGRY){
        printf("Take a deep breath.");
    }else if(yourMood == BORED){
        printf("Time to do something fun.");
    }
    
}




#include <stdio.h>

enum PizzaDay{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY, 
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(){
    int day;
    printf("Enter a day in number (1-7): ");
    scanf("%d", &day);
    
    enum PizzaDay pickDay = (enum PizzaDay)(day-1);
    if(day == SUNDAY || day == MONDAY || day == TUESDAY || day == WEDNESDAY || day == THURSDAY || day == FRIDAY || day == SATURDAY){
        printf("Pizza night!");
    }else{
        printf("No pizza today.Stay strong.");
    }
}




#include <stdio.h>

enum daysWeek{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
    
    /* why include "enum dayWeek" sa parameter sa function di nalang just "selectedDay"? - alangan kay 
if just selectedDay ra ang nas parameter then if the user prompt 1, the program won't know nga unsa ni na kind of data, 
      nya ang enum type is a custom data type raba. so needed jud siya i state para kabalo si compiler ^_^ */
void functionCall(enum daysWeek selectedDay){
    switch(selectedDay){
        case SUNDAY: printf("Family time"); break;
        case MONDAY: printf("Gym day"); break;
        case TUESDAY: printf("Study day"); break;
        case WEDNESDAY: printf("Meeting day"); break;
        case THURSDAY: printf("Coding day"); break;
        case FRIDAY: printf("Socialize day"); break;
        case SATURDAY: printf("Rest day"); break;
        default: printf("Invalid! Choose again a number.");

      /* 
"ngano naka handle and switch ug "string", kung switch usually handle number and characters mga fixed?? (case 1 & case 'a')."
- internally enums are treated as integers jud sa C. Integers with names. So, switch treats enum values like integers.

like how SUNDAY == 0, MONDAY == 1 and ... // so we can still use case 0, case 1, and case 2 instead of case SUNDAY, case MONDAY, and 
case TUESDAY mas readable and understandable lang gyud if named constant
      */
    }
}

int main(){
    int chosenDay;
    printf("Select a number (1-7): ");
    scanf("%d", &chosenDay);
    
    enum daysWeek selectedDay = (enum daysWeek)(chosenDay - 1);
    
    functionCall(selectedDay);
}


// Resume - April 27, 2025 hahahha nakatug ko

4.
 #include <stdio.h>

enum selectionAnimals {
    DOG,
    CAT,
    COW,
    SHEEP
};

int getAnimal(){
    int numSelect;

    printf("Select an Animal:");
    printf("\n1. Dog");
    printf("\n2. Cat");
    printf("\n3. Cow");
    printf("\n4. Sheep");
    printf("\nEnter choice: ");
    scanf("%d", &numSelect);

  if(numSelect < 1 || numSelect > 4){
    printf("\nOpps! Please try again.\n\n");
    printf("-------------------------------\n\n");
    return -1;
  }
    return numSelect;
}

void forSwitch(int choice){
    enum selectionAnimals selector = (enum selectionAnimals)(choice - 1); 
  // dele "choice" ang i sud sa switch ah kay ga casting man ta nya gi pasa natos selector.
    switch(selector){
        case DOG: printf("\nArf!"); break;
        case CAT: printf("\nMeow!"); break;
        case COW: printf("\nMoo!"); break;
        case SHEEP: printf("\nBaa!"); break;
    }
}

int main(){ // limpyohas main function ahh, me na to 
    int choice = -1; /* ga butang kog value daan -1 para, mapugos ug sud sa loop first. if dili di jud siya mo work. its either 
    invalid imoha input or wala pakay gi input. 
    
    kay if garbage value ni siya like "int choice;" lang
    then ang compiler dili nana siya mangutana mo proceed dayun na, ah wala pa gali ka kapili si user, proceed dayun??
    
    */
  while(choice == -1){ // mag balik balik hantud ma sakto ang input
  /* mura ang while loop mo ask "-1 pa gihapon imohang choice? ah sige balik sa" mao dira mo sulod sa getAnimal() na mo prompt japon ug
  unsay number imoha pilion" */
    choice = getAnimal();
  }
    forSwitch(choice);
}



5. 
#include <stdio.h>

enum ourMenu{
    SMALL,
    MEDIUM,
    LARGE
};

int getCoffee(){
    int whatNumber;
    printf("Coffee Menu:");
    printf("\n1. Small");
    printf("\n2. Medium");
    printf("\n3. Large");
    printf("\nChoose size: ");
    scanf("%d", &whatNumber);
    
    if(whatNumber < 1 || whatNumber > 3){
        printf("\nPlease select a number again.\n\n");
        return -1;
    }
    
    return whatNumber;
}

void getSize(int choice){ // ang void pwede naay parameters, dili lang jud na siya mo return ug any value.
    if(choice == 1){
        printf("\nYou choose SMALL.");
    }else if(choice == 2){
        printf("\nYou choose MEDIUM.);
    }else{
        printf("\nYou choose LARGE.");
    }
}

void ourPricing(int coffeeChoice){
    enum ourMenu customerChoice = (enum ourMenu)(coffeeChoice - 1);
    switch(customerChoice){
        case SMALL: printf(" Price: $3.00"); break;
        case MEDIUM: printf(" Price: $4.00"); break;
        case LARGE: printf(" Price: $5.00"); break;
    }
}

int main(){
    int coffeeChoice = -1;
    while(coffeeChoice == -1){
        coffeeChoice = getCoffee();
    }
    
    getSize(coffeeChoice);
    ourPricing(coffeeChoice);
}


6.
#include <stdio.h>
#include <stdbool.h>

enum daysWeek {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int aDay() {
    int whatDay;
    printf("Choose a Day (1-7): ");
    scanf("%d", &whatDay);

    if (whatDay < 1 || whatDay > 7) {
        printf("\nError. Please choose a day again.\n\n");
        return -1;
    }

    return whatDay;
}

void switchDay1(int choiceDay) {
    enum daysWeek selector = (enum daysWeek)(choiceDay - 1);
    switch (selector) {
        case SUNDAY:
            printf("\nSunday plan: Prepare for the upcoming week by organizing and reflecting.\n");
            break;
        case MONDAY:
            printf("\nMonday plan: Start the week strong with goal setting and task organization.\n");
            break;
        case TUESDAY:
            printf("\nTuesday plan: Focus on productivity and completing tough tasks.\n");
            break;
        case WEDNESDAY:
            printf("\nWednesday plan: Midweek check-in to stay motivated and productive.\n");
            break;
        case THURSDAY:
            printf("\nThursday plan: Deep work day. Focus on studying or tackling long-term projects.\n");
            break;
        case FRIDAY:
            printf("\nFriday plan: Wrap up the week by finishing smaller tasks and reflecting.\n");
            break;
        case SATURDAY:
            printf("\nSaturday plan: Take time to relax and enjoy your personal hobbies.\n");
            break;
    }
}

int askConfirmation() {
    int userChoice;
    printf("Do you accept? (1 = Yes, 2 = No): ");
    scanf("%d", &userChoice);

    bool userAnswered = userChoice == 1;
    if (userAnswered) {
        printf("\nPlan Confirmed.");
        return 1;
    } else {
        printf("\nYou didn't accept the plan. Let's choose another day!\n\n");
        return -2;
    }
}

void switchDay2(int choiceDay) {
    enum daysWeek selector = (enum daysWeek)(choiceDay - 1);
    switch (selector) {
        case SUNDAY: printf(" Get ready for a fresh start!"); break;
        case MONDAY: printf(" Let's set those goals and get things organized!"); break;
        case TUESDAY: printf(" Power through those tough tasks!"); break;
        case WEDNESDAY: printf(" Keep up the momentum."); break;
        case THURSDAY: printf(" Let's dive into some focused work!"); break;
        case FRIDAY: printf(" You've got this. Finish strong!"); break;
        case SATURDAY: printf(" Time to recharge!"); break;
    }
}

int main() {
    int choiceDay = -1;
    int confirmation = -2;

    while (confirmation != 1) { /* kani na loop para ni kanang gahuwat ang compiler na mo confirm si user sa Yes or No na part,
    
    and that's why the condition is confirmation != 1 since our  confirmation = -2 para mapugos ug sud nya we can go inside the loop 
    and activivate all the conditions and functions sa sulod its no only for the compiler to wait that the user will confirm

    boanga brayta nako hays i love coding
    */
        while (choiceDay == -1) {
            choiceDay = aDay();
        }

        switchDay1(choiceDay);
        confirmation = askConfirmation();
        
        if (confirmation != 1) {
            choiceDay = -1; /* if mo NO si user ma trigger ang inner loop, reset choiceDay to -1, so ma activate siya balik maong 
          balik ka sugod */
        }
    }
    
    switchDay2(choiceDay);
}



7.

  // 8 functions
  
#include <stdio.h>

enum listGenre{
    ACTION,
    COMEDY,
    DRAMA,
    HORROR,
    SCI_FI //quick review: if variable names gali invalid ang hyphen ha, maong ga SCI_FI ta instead of SCI-FI
};

void displayGenres(){
    printf("Select a genre:\n");
    printf("1. Action\n");
    printf("2. Comedy\n");
    printf("3. Drama\n");
    printf("4. Horror\n");
    printf("5. Sci-Fi\n");
}

int validateChoice(int picked){
     if(picked < 1 || picked > 5){
        printf("\nError. Choose a genre again.\n\n");
        return -1;
     }else{
        return 1;
     }
}

/*
tried to put the validateChoice() below sa getGenreChoice but error siya, with this mao need nato declare validateChoice 
before using it in getGenreChoice para kabalo si compiler about the function when it encounters the call. mao its best na i declare 
daan tanan functions before gamiton para aware si compiler sa tanan nimo gamiton di siya maglibog sa logic. 

my badddddddddd, next problem ug umaabot nalang ko mag function protyping hehe karon pako kasugat ani,,
*/

int getGenreChoice(){
    int picked;
    displayGenres();
    printf("Enter your choice: ");
    scanf("%d", &picked);
    
     if (validateChoice(picked) == -1) {
        return -1; // invalid choice, return -1 to prompt again
    }
    
    printf("\nRecommended Movie: ");
    
    return picked;
}

void recommendMovie(int userChoice){
    switch(userChoice){
        case ACTION: printf("Mad Max: Fury Road - A post-apocalyptic action-packed thrill ride.\n"); break;
        case COMEDY: printf("Dumb and Dumber - Two extremely naive guys on a cross-country journey.\n"); break;
        case DRAMA: printf("The Shawshank Redemption - A story of hope and redemption inside a prison.\n"); break;
        case HORROR: printf("The Conjuring - Paranormal investigators uncover dark secrets.\n"); break;
        case SCI_FI: printf("Interstellar - A visually stunning film about space exploration and time.\n"); break;
    }
}

int convertToEnum(int finalGenre){
     enum listGenre userChoice = (enum listGenre)(finalGenre - 1);
     return userChoice;
}

int askRetry(){
    int confirmationAnswer;
    
    while(1){
    printf("Want to choose another? (1 = Yes, 2 = No): ");
    scanf("%d", &confirmationAnswer);

        if(confirmationAnswer == 1){
            return 1;
        }else if(confirmationAnswer == 2){
            return 2;
        }else {
            printf("Invalid choice. Please enter 1 for Yes or 2 for No.\n");
        }
    }
    
    /*
    ga while loop ko the infinite one, mo exit rana siyag any return is calledd. what a sigma
    */ 
}

void goodbyeMessage(){
    printf("\nThank you for using the Movie Recommender!");
}

int main(){
    int finalGenre = -1;
    int userRetry = -2;
    
    while(userRetry != 2){
       
        while(finalGenre == -1){
            finalGenre = getGenreChoice();
        }
    
        recommendMovie(finalGenre);
        userRetry = askRetry();
        
        if(userRetry == 1){
            finalGenre = -1; 
            printf("\n");
        }
    }
    
    goodbyeMessage(); //amen     
}





// 15 functions next, last problem

8. //kapoy pa

  

  
