// December 26, 2024 - prompt() + using multiline with template literals (` `)

1. User Registration
/* Problem: Prompt the user to enter their first name, last name, and email address, 
and then display their registration details.

Expected Output:
Enter your first name: John
Enter your last name: Doe
Enter your email: john.doe@example.com

Registration Complete:
Name: John Doe
Email: john.doe@example.com
*/
    let fname = prompt("Enter your first name: "),
        lname = prompt("Enter your last name: "),
        email = prompt("Enter your email: ");

console.log(`
Registration Complete:
Name: ${fname} ${lname}
Email: ${email}`);    
    
    
    
2. Weather Forecast Customization
/* Problem: Ask the user for their city, preferred temperature unit (Celsius or Fahrenheit), 
and the number of days they want the forecast for. Display the customization summary.

Expected Output:
Enter your city: London
Preferred temperature unit (C/F): C
Enter the number of forecast days: 5

--- Weather Forecast Settings ---
City: London
Temperature Unit: C
Forecast Days: 5

Your forecast will be prepared shortly!
*/
    let city = prompt("Enter your city: "),
    tempunit = prompt("Preferred temperature unit (C/F): "),
    fdays = prompt("Enter the number of forecast days: ");

console.log(`
--- Weather Forecast Settings ---

City: ${city}
Temperature Unit: ${tempunit}
Forecast Days: ${fdays}`);
    
    
    
    
    
3. Cafe Order Receipt
/* Problem: Collect the name of the customer, their chosen drink, and the total bill. 
Print a receipt with the details.

Expected Output:
Enter your name: Ethan
Enter your drink: Latte
Enter your total bill: 5.25

Cafe Receipt
Customer: Ethan
Order: Latte
Total: $5.25

Thank you!
*/
    let customer = prompt("Enter your name: "),
    drink = prompt("Enter your drink: "),
    bill = prompt("Enter your total bill: ");

console.log(`
Cafe Receipt
Customer: ${customer}
Order: ${drink}
Total: $${bill}`);
    
    
    
    
    
4. Daily Step Goal
/* Problem: Ask the user for their daily step goal and display it.

Expected Output:
What is your daily step goal? 10000

Your daily step goal is 10000 steps. Keep walking!
*/
    let stepg = prompt("What is your daily step goal? ");

console.log(`
Your daily step goal is ${stepg} steps. Keep walking!`);
   
    
    
    
    
5. Movie Night Plan
/* Problem: Ask the user for the name of a movie they want to watch and a snack 
they’ll eat while watching. Display their plan.

Expected Output: 
What movie do you want to watch? Inception
What snack will you eat? Popcorn

Enjoy watching Inception with some Popcorn!
*/
    let moview = prompt("What movie do you want to watch? "),
    snacke = prompt("What snack will you eat? ");

console.log(`
Enjoy watching ${moview} with some ${snacke}!`);
    
