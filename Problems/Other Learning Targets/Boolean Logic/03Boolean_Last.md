# Last: Boolean Logic

## Problem 1: Quadrant Determiner
### Description:
Ask the user to input the `x` and `y` coordinates of a point. Based on the coordinates, return:
- "First Quadrant" if both `x` and `y` are positive.
- "Second Quadrant" if `x` is negative and `y` is positive.
- "Third Quadrant" if both `x` and `y` are negative.
- "Fourth Quadrant" if `x` is positive and `y` is negative.
- "On the Axis" if either `x` or `y` is zero.

### Sample Output 1:
```
Enter x coordinate: 4
Enter y coordinate: 5
First Quadrant
```
### Sample Output 2:
```
Enter x coordinate: -3
Enter y coordinate: 2
Second Quadrant
```

## Problem 2: Discount Eligibility Check
### Description:
Ask the user to input their total shopping amount and whether they are a member of a loyalty program (true/false). 
- If the total amount is greater than or equal to 100 and they are a member, return "eligible for 20% discount".
- If the total amount is greater than or equal to 100 and they are not a member, return "eligible for 10% discount".
- If the total amount is less than 100, return "not eligible for discount".

### Sample Output 1:
```
Enter total amount: 150 
Enter membership status (true/false): 
true eligible for 20% discount
```
### Sample Output 2:
```
Enter total amount: 50 
Enter membership status (true/false): false 
not eligible for discount
```

## Problem 3: Nested Age Group and Height Check
### Description:
Ask the user to input their age and height. Return:
- "Adult and Tall" if they are at least 18 years old and at least 6 feet tall.
- "Adult but Not Tall" if they are at least 18 years old but less than 6 feet tall.
- "Not an Adult" if they are younger than 18 years old, regardless of their height.

### Sample Output 1:
```
Enter age: 25 
Enter height in feet: 6.2 
Adult and Tall
```
### Sample Output 2:
```
Enter age: 17 
Enter height in feet: 5.8 
Not an Adult
```

## Problem 4: Leap Year and Century Year Checker
### Description:
Ask the user to input a year. Return:
- "Leap Year" if the year is divisible by 4, but not by 100, or if it is divisible by 400.
- "Not a Leap Year" if the year is not divisible by 4, or divisible by 100 but not divisible by 400.

### Sample Output 1:
```
Enter a year: 2020 
Leap Year
```
### Sample Output 2:
```
Enter a year: 1900 
Not a Leap Year
```

## Problem 5: Student Admission Criteria
### Description:
Ask the user to input their age, grade, and extracurricular activity participation (true/false). Return:
- "Eligible for Admission" if the student is at least 18 years old, has a grade of at least 80, and has participated in at least one extracurricular activity.
- "Not Eligible for Admission" if any of the conditions are not met.

### Sample Output 1:
```
Enter age: 19 
Enter grade: 85 
Enter extracurricular participation (true/false): true 
Eligible for Admission
```
### Sample Output 2:
```
Enter age: 16 
Enter grade: 75 
Enter extracurricular participation (true/false): false 
Not Eligible for Admission
```

## Problem 6: Advanced Voting Eligibility
### Description:
Ask the user to input their age, citizenship status (true/false), and criminal record status (true/false). Return:
- "Eligible to Vote" if the user is at least 18 years old, is a citizen, and has no criminal record.
- "Not Eligible to Vote" if any of the conditions are not met.

### Sample Output 1:
```
Enter age: 25 
Enter citizenship status (true/false): true 
Enter criminal record status (true/false): false 
Eligible to Vote
```

### Sample Output 2:
```
Enter age: 16 
Enter citizenship status (true/false): true 
Enter criminal record status (true/false): false 
Not Eligible to Vote
```

## Problem 7: Grade Classification System
### Description:
Ask the user to input their grade percentage. Return:
- "Excellent" if the grade is greater than or equal to 90.
- "Good" if the grade is between 70 and 89.
- "Satisfactory" if the grade is between 50 and 69.
- "Fail" if the grade is less than 50.

### Sample Output 1:
```
Enter grade percentage: 92 
Excellent
```
### Sample Output 2:
```
Enter grade percentage: 60 
Satisfactory
```
## Problem 8: Complex Bank Loan Eligibility
### Description:
Ask the user to input their annual income and credit score. Return:
- "Loan Approved" if their income is at least 50,000 and their credit score is at least 700.
- "Loan Denied" if their income is less than 50,000 and their credit score is below 700.
- "Review Required" if their income is at least 50,000 but their credit score is below 700 or if their income is below 50,000 but their credit score is at least 700.

### Sample Output 1:
```
Enter annual income: 55000 Enter credit score: 750 Loan Approved
```
### Sample Output 2:
```
Enter annual income: 45000 
Enter credit score: 650 Loan Denied
```
## Problem 9: Full Access Permission
### Description:
Ask the user for their age, subscription status (true/false), and whether they have completed a specific task (true/false). Return:
- "Full Access Granted" if the user is at least 18 years old, is subscribed, and has completed the task.
- "Limited Access" if the user is at least 18 years old but has not completed the task.
- "Access Denied" if the user is under 18 years old or has not subscribed.

### Sample Output 1:
```
Enter age: 22
Enter subscription status (true/false): true
Enter task completion status (true/false): true
Full Access Granted
```
### Sample Output 2:
```
Enter age: 16 
Enter subscription status (true/false): true 
Enter task completion status (true/false): false 
Access Denied
```

## Problem 10: Complex Number Classification
### Description:
Ask the user to input a complex number in the form of two integers (real and imaginary parts). Return:
- "Purely Real" if the imaginary part is zero and the real part is not.
- "Purely Imaginary" if the real part is zero and the imaginary part is not.
- "Complex Number" if both parts are non-zero.

### Sample Output 1:
```
Enter real part: 4
Enter imaginary part: 0
Purely Real
```
### Sample Output 2:
```
Enter real part: 0
Enter imaginary part: 5
Purely Imaginary
```
