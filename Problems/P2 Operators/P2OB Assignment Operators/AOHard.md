# Hard: Assignment Operators Problems

## Problem 1: Nested Operations with Combined Assignment
### Description:
Write a program that initializes three variables, `a`, `b`, and `c`, with integers. Perform the following nested operations using combined assignment operators:
1. Multiply `a` by the sum of `b` and `c` using `+=` and `*=`.
2. Divide the result by `c` using `/=`.
3. Add the modulus of `a` and `b` to `c` using `+=` and `%=`.

Print the values of all variables after each operation.

### Sample Output 1:
```
Initial values: a = 5, b = 10, c = 2
After nested multiplication and addition: a = 70
After division: a = 35
After modulus and addition: c = 12
```

### Sample Output 2:
```
Initial values: a = 4, b = 8, c = 3
After nested multiplication and addition: a = 44
After division: a = 14.6667
After modulus and addition: c = 12
```

---

## Problem 2: Dynamic Scaling and Remainder Calculation
### Description:
Write a program that initializes a variable `x` with a value. Multiply `x` by 5, then divide it by 3 using combined assignment operators. Finally, calculate the modulus of the result when divided by 7 using `%=`.

Print the value of `x` after each step.

### Sample Output 1:
```
Initial value of x: 6
After multiplication: x = 30
After division: x = 10
After modulus: x = 3
```

### Sample Output 2:
```
Initial value of x: 14
After multiplication: x = 70
After division: x = 23.3333
After modulus: x = 2.3333
```

---

## Problem 3: Circular Operations
### Description:
Write a program where a variable `y` is initialized with a value. Perform these operations in sequence:
1. Add 10 to `y` using `+=`.
2. Multiply by 4 using `*=`.
3. Subtract the result of dividing by 2 using `-=`.
4. Apply modulus 9 using `%=`.

Print the value of `y` after each operation.

### Sample Output 1:
```
Initial value of y: 3
After adding: y = 13
After multiplying: y = 52
After subtracting: y = 26
After modulus: y = 8
```

### Sample Output 2:
```
Initial value of y: 10
After adding: y = 20
After multiplying: y = 80
After subtracting: y = 40
After modulus: y = 4
```

---

## Problem 4: Bitwise Manipulation with Assignment
### Description:
Write a program to initialize two variables `a` and `b`. Perform these bitwise operations:
1. Apply `&=` operator to `a` using `b`.
2. Apply `|=` operator to `b` using `a`.
3. Apply `^=` operator to `a` using `b`.

Print the values of `a` and `b` after each operation.

### Sample Output 1:
```
Initial values: a = 12, b = 10
After AND operation: a = 8
After OR operation: b = 10
After XOR operation: a = 2
```

### Sample Output 2:
```
Initial values: a = 7, b = 3
After AND operation: a = 3
After OR operation: b = 7
After XOR operation: a = 4
```

---

## Problem 5: Nested Arithmetic with Conditions
### Description:
Write a program that initializes a variable `z` and performs these operations conditionally:
1. If `z` is even, multiply by 3 using `*=`.
2. If `z` is odd, add 7 using `+=`.
3. Finally, subtract 5 and find the modulus when divided by 4 using `-=` and `%=`.

Print the value of `z` after each step.

### Sample Output 1:
```
Initial value of z: 8
After multiplication: z = 24
After subtraction and modulus: z = 3
```

### Sample Output 2:
```
Initial value of z: 7
After addition: z = 14
After subtraction and modulus: z = 3
```

---

## Problem 6: Advanced Scaling and Reduction
### Description:
Write a program to initialize a variable `k`. Perform these operations:
1. Multiply `k` by 6 using `*=`.
2. Divide by 5 using `/=`.
3. Add the modulus of `k` with 7 to itself using `+=` and `%=`.

Print the value of `k` after each operation.

### Sample Output 1:
```
Initial value of k: 10
After multiplying: k = 60
After dividing: k = 12
After modulus addition: k = 19
```

### Sample Output 2:
```
Initial value of k: 15
After multiplying: k = 90
After dividing: k = 18
After modulus addition: k = 25
```

---

## Problem 7: Complex Bitwise Operations
### Description:
Write a program where two integers `x` and `y` are initialized. Perform these operations:
1. Apply the `^=` operator on `x` with `y`.
2. Apply the `|=` operator on `y` with `x`.
3. Apply the `&=` operator on `x` with `y`.

Print the values of `x` and `y` after each operation.

### Sample Output 1:
```
Initial values: x = 5, y = 12
After XOR operation: x = 9
After OR operation: y = 13
After AND operation: x = 9
```

### Sample Output 2:
```
Initial values: x = 7, y = 3
After XOR operation: x = 4
After OR operation: y = 7
After AND operation: x = 0
```

---

## Problem 8: Scaling and Reversion
### Description:
Write a program to initialize a variable `p`. Scale `p` by 5 using `*=`. Then reverse the scaling by dividing by 5 using `/=`. Finally, add 10 using `+=`.

Print the value of `p` after each step.

### Sample Output 1:
```
Initial value of p: 6
After scaling: p = 30
After reversing: p = 6
After addition: p = 16
```

### Sample Output 2:
```
Initial value of p: 8
After scaling: p = 40
After reversing: p = 8
After addition: p = 18
```

---

## Problem 9: Dynamic Accumulation
### Description:
Write a program that initializes a variable `sum` to 0. In a loop, take 5 user inputs and add them to `sum` using the `+=` operator. After the loop, print the total sum.

### Sample Output:
```
Enter number 1: 5
Enter number 2: 10
Enter number 3: 15
Enter number 4: 20
Enter number 5: 25
Total sum: 75
```

---

## Problem 10: Cumulative Product
### Description:
Initialize a variable `product` to 1. Multiply it by numbers from 1 to `n` using `*=` in a loop, where `n` is user input. Print the final value of `product`.

### Sample Output:
```
Enter a number: 5
Cumulative product: 120
```

---

## Problem 11: Adjust Value Until Target
### Description:
Write a program to repeatedly divide a number `x` by 2 using `/=` until the value of `x` is less than 1. Print the value of `x` after each operation.

### Sample Output:
```
Initial value of x: 10
After division: x = 5
After division: x = 2.5
After division: x = 1.25
After division: x = 0.625
```

---

## Problem 12: Conditional Power Scaling
### Description:
Write a program that takes a user input number `n`. If `n` is positive, multiply it by 2 using `*=`. If `n` is negative, divide it by 3 using `/=`. Print the final value of `n`.

### Sample Output 1:
```
Enter a number: 6
Final value: 12
```

### Sample Output 2:
```
Enter a number: -9
Final value: -3
```

---

## Problem 13: Sequential Modulus Reduction
### Description:
Write a program to initialize a variable `m` with a value. Repeatedly find the modulus of `m` by 3 using `%=` until `m` is less than 3. Print the value of `m` after each operation.

### Sample Output:
```
Initial value of m: 17
After modulus: m = 2
```

---

## Problem 14: Alternating Operations
### Description:
Write a program to initialize a variable `v` with a value. Alternate between adding 5 using `+=` and subtracting 3 using `-=` in a loop for 5 iterations. Print the value of `v` after each operation.

### Sample Output:
```
Initial value of v: 10
After adding: v = 15
After subtracting: v = 12
After adding: v = 17
After subtracting: v = 14
After adding: v = 19
```

---

## Problem 15: Reverse Scaling
### Description:
Write a program to initialize a variable `q`. Multiply `q` by 4 using `*=` and then subtract 10 using `-=`. Reverse the multiplication by dividing by 4 using `/=`. Print the value of `q` after each step.

### Sample Output:
```
Initial value of q: 5
After multiplying: q = 20
After subtracting: q = 10
After reversing: q = 2.5
