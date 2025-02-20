# Nested Decision Problems

## Problem 1: Age Category
**Description:**
Ask the user to enter their age and categorize them as follows:
- If age is below 13, print "Child."
- If age is between 13-17, print "Teenager."
- If age is 18 or older, check:
  - If age is below 60, print "Adult."
  - Otherwise, print "Senior Citizen."
- If age is below 0, print "Invalid age."

**Sample Output:**
```
Enter your age: 10
Child.
```
```
Enter your age: 70
Senior Citizen.
```

---

## Problem 2: Odd or Even Checker
**Description:**
Ask the user to enter a number and check if it is odd or even:
- If the number is even, check:
  - If it is also divisible by 4, print "Even and divisible by 4."
  - Otherwise, print "Even but not divisible by 4."
- If the number is odd, print "Odd number."

**Sample Output:**
```
Enter a number: 8
Even and divisible by 4.
```
```
Enter a number: 11
Odd number.
```

---

## Problem 3: Triangle Type Checker
**Description:**
Ask the user to enter three side lengths of a triangle and determine its type:
- If all three sides are equal, print "Equilateral triangle."
- Otherwise, check:
  - If exactly two sides are equal, print "Isosceles triangle."
  - Otherwise, print "Scalene triangle."
- If any side is zero or negative, print "Invalid triangle."

**Sample Output:**
```
Enter three sides: 5 5 5
Equilateral triangle.
```
```
Enter three sides: 7 8 9
Scalene triangle.
```

---

## Problem 4: Student Grade Evaluation
**Description:**
Ask the user for their numeric grade (0-100) and categorize it:
- If the grade is 90 or above, print "A - Excellent."
- Otherwise, check:
  - If it's 80-89, print "B - Good job."
  - If it's 70-79, print "C - Fair effort."
  - If it's 60-69, print "D - Needs improvement."
  - If it's below 60, print "F - Failed. Study harder."
- If the input is negative or above 100, print "Invalid grade."
- Additional Details:
Assume the user's current balance is stored in a variable (e.g., balance = 5000).

**Sample Output:**
```
Enter your grade: 85
B - Good job.
```
```
Enter your grade: 102
Invalid grade.
```

---

## Problem 5: Salary Tax Calculator
**Description:**
Ask the user to enter their salary and calculate tax:
- If salary is below 20,000, print "No tax applied."
- Otherwise, check:
  - If salary is between 20,000 - 50,000, apply a 10% tax.
  - If salary is above 50,000, apply a 20% tax.

**Sample Output:**
```
Enter your salary: 45000
Tax: 4500 (10%)
```
```
Enter your salary: 60,000
Tax: 12,000 (20%)
```

---

## Problem 6: Number Comparison
**Description:**
Ask the user to enter two numbers and compare them:
- If the numbers are equal, print "Both numbers are equal."
- Otherwise, check:
  - If the first number is greater, print "First number is larger."
  - Otherwise, print "Second number is larger."

**Sample Output:**
```
Enter two numbers: 8 12
Second number is larger.
```
```
Enter two numbers: 15 15
Both numbers are equal.
```

---

## Problem 7: Temperature Classification
**Description:**
Ask the user to enter a temperature in Celsius and classify it:
- If below 0, print "Freezing."
- Otherwise, check:
  - If 0-15, print "Cold."
  - If 16-30, print "Moderate."
  - If above 30, print "Hot."

**Sample Output:**
```
Enter temperature: 5
Cold.
```
```
Enter temperature: 35
Hot.
```

---

## Problem 8: ATM Withdrawal
**Description:**
Ask the user for the amount to withdraw:
- If the amount is not a multiple of 100, print "Invalid amount."
- Otherwise, check:
  - If the balance is enough, print "Withdrawal successful."
  - If the balance is insufficient, print "Insufficient balance."

**Sample Output:**
```
Enter amount: 250
Invalid amount.
```
```
Enter amount: 1000
Withdrawal successful.
```

---

## Problem 9: Leap Year Checker
**Description:**
Ask the user to enter a year and check if it is a leap year:
- If not divisible by 4, print "Not a leap year."
- Otherwise, check:
  - If divisible by 100 and not 400, print "Not a leap year."
  - Otherwise, print "Leap year."

**Sample Output:**
```
Enter year: 2024
Leap year.
```
```
Enter year: 1900
Not a leap year.
```

---

## Problem 10: Password Strength Checker
**Description:**
Ask the user to enter a password and evaluate its strength:
- If less than 6 characters, print "Weak password."
- Otherwise, check:
  - If it contains only letters or only numbers, print "Moderate password."
  - If it contains letters and numbers, print "Strong password."

**Sample Output:**
```
Enter password: abc123
Strong password.
```
```
Enter password: abc
Weak password.
```

