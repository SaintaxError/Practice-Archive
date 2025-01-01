# Assignment Operators Problems

## Problem 1: Chained Assignment Operations
### Description:
Write a program that performs a series of chained assignment operations on three variables, `a`, `b`, and `c`. Initialize `a` with 10. Assign `a` to `b`, then multiply `b` by 3 and assign it to `c` using the `*=` operator. Print the values of all variables after the operations.

### Sample Output 1:
```
Initial value of a: 10
After operations:
a = 10
b = 10
c = 30
```

### Sample Output 2:
```
Initial value of a: 5
After operations:
a = 5
b = 5
c = 15
```

---

## Problem 2: Combined Arithmetic and Assignment
### Description:
Write a program where two variables, `x` and `y`, are initialized. Subtract `y` from `x` using the `-=` operator, then add the result to itself using the `+=` operator. Finally, divide the updated value of `x` by 2 using the `/=` operator. Print the result at each step.

### Sample Output 1:
```
Initial values: x = 20, y = 5
After subtraction: x = 15
After addition to itself: x = 30
After division: x = 15
```

### Sample Output 2:
```
Initial values: x = 50, y = 25
After subtraction: x = 25
After addition to itself: x = 50
After division: x = 25
```

---

## Problem 3: Modifying with Multiple Assignment Operators
### Description:
Write a program where a variable `z` is initialized with a value. Perform the following operations in sequence: 
1. Add 10 using the `+=` operator.
2. Multiply the result by 2 using the `*=` operator.
3. Subtract 5 using the `-=` operator.
4. Divide by 3 using the `/=` operator.

Print the value of `z` after each operation.

### Sample Output 1:
```
Initial value of z: 5
After adding 10: z = 15
After multiplying by 2: z = 30
After subtracting 5: z = 25
After dividing by 3: z = 8.3333
```

### Sample Output 2:
```
Initial value of z: 12
After adding 10: z = 22
After multiplying by 2: z = 44
After subtracting 5: z = 39
After dividing by 3: z = 13
```

---

## Problem 4: Complex Modulus and Assignment
### Description:
Write a program where a variable `n` is initialized with a value. Perform the following steps:
1. Divide `n` by 5 using the `/=` operator.
2. Find the modulus of the updated `n` when divided by 4 using the `%=` operator.

Print the value of `n` after each step.

### Sample Output 1:
```
Initial value of n: 100
After division: n = 20
After modulus operation: n = 0
```

### Sample Output 2:
```
Initial value of n: 87
After division: n = 17.4
After modulus operation: n = 1.4
```

---

## Problem 5: Swap Using Assignment Operators
### Description:
Write a program to swap the values of two variables, `p` and `q`, using only assignment operators (`+=` and `-=`). Print the values of `p` and `q` before and after the swap.

### Sample Output 1:
```
Before swap: p = 5, q = 10
After swap: p = 10, q = 5
```

### Sample Output 2:
```
Before swap: p = 20, q = 30
After swap: p = 30, q = 20
```

---

## Problem 6: Increment and Reverse Operations
### Description:
Write a program where a variable `a` is initialized. Increment `a` by 10 using the `+=` operator, then decrement it back to its original value using the `-=` operator. Finally, multiply the original value by itself using the `*=` operator. Print the values after each step.

### Sample Output 1:
```
Initial value of a: 5
After incrementing: a = 15
After decrementing: a = 5
After squaring: a = 25
```

### Sample Output 2:
```
Initial value of a: 8
After incrementing: a = 18
After decrementing: a = 8
After squaring: a = 64
```

---

## Problem 7: Nested Assignment Operations
### Description:
Write a program to initialize two variables `x` and `y`. Add `x` to `y` using `+=`, then multiply `y` by the sum of `x` and `y` using `*=`. Print the value of `y` after each operation.

### Sample Output 1:
```
Initial values: x = 2, y = 3
After addition: y = 5
After multiplication: y = 25
```

### Sample Output 2:
```
Initial values: x = 4, y = 6
After addition: y = 10
After multiplication: y = 100
```

---

## Problem 8: Bitwise and Assignment
### Description:
Write a program to perform bitwise AND on two integers `a` and `b` using the `&=` operator. Initialize `a` and `b` with some values. Print the result after the operation.

### Sample Output 1:
```
Initial values: a = 12, b = 5
After AND operation: a = 4
```

### Sample Output 2:
```
Initial values: a = 7, b = 3
After AND operation: a = 3
```

---

## Problem 9: Scaling and Assignment
### Description:
Write a program to scale a variable `k` by a factor of 2, three times consecutively, using the `*=` operator. Print the value of `k` after each scaling step.

### Sample Output 1:
```
Initial value of k: 3
After first scaling: k = 6
After second scaling: k = 12
After third scaling: k = 24
```

### Sample Output 2:
```
Initial value of k: 5
After first scaling: k = 10
After second scaling: k = 20
After third scaling: k = 40
```

---

## Problem 10: Dividing in Steps
### Description:
Write a program where a variable `m` is initialized. Divide `m` by 2 using `/=` in three consecutive steps. Print the value of `m` after each step.

### Sample Output 1:
```
Initial value of m: 64
After first division: m = 32
After second division: m = 16
After third division: m = 8
```

### Sample Output 2:
```
Initial value of m: 27
After first division: m = 13.5
After second division: m = 6.75
After third division: m = 3.375
```

---

## Problem 11: Progressive Modulus
### Description:
Initialize a variable `x` to a value. Perform three consecutive modulus operations on `x` with different divisors using the `%=` operator. Print the value of `x` after each operation.

### Sample Output 1:
```
Initial value of x: 100
After modulus by 7: x = 2
After modulus by 5: x = 2
After modulus by 3: x = 2
```

### Sample Output 2:
```
Initial value of x: 50
After modulus by 8: x = 2
After modulus by 6: x = 2
After modulus by 4: x = 2
```

---

## Problem 12: Nested Scaling and Reduction
### Description:
Initialize a variable `y` to a value. Multiply `y` by 4 using `*=`. Then divide it by 2 using `/=`. Finally, subtract 10 using `-=`. Print the value of `y` after each operation.

### Sample Output 1:
```
Initial value of y: 10
After multiplying by 4: y = 40
After dividing by 2: y = 20
After subtracting 10: y = 10
```

### Sample Output 2:
```
Initial value of y: 5
After multiplying by 4: y = 20
After dividing by 2: y = 10
After subtracting 10: y = 0
```

---

## Problem 13: Double Increment and Square
### Description:
Write a program where a variable `z` is incremented twice using `+=` with different values. Then square the result using `*=`. Print the value of `z` after each operation.

### Sample Output 1:
```
Initial value of z: 2
After incrementing by 3: z = 5
After incrementing by 2: z = 7
After squaring: z = 49
```

### Sample Output 2:
```
Initial value of z: 4
After incrementing by 1: z = 5
After incrementing by 5: z = 10
After squaring: z = 100
```

---

## Problem 14: Bitwise OR and Assignment
### Description:
Write a program where two integers `a` and `b` are initialized. Perform a bitwise OR operation on `a` using `|=` with `b`. Print the value of `a` after the operation.

### Sample Output 1:
```
Initial values: a = 10, b = 5
After OR operation: a = 15
```

### Sample Output 2:
```
Initial values: a = 12, b = 7
After OR operation: a = 15
```

---

## Problem 15: Alternating Increment and Decrement
### Description:
Initialize a variable `k` to a value. Perform three operations in sequence: increment by 5 using `+=`, decrement by 3 using `-=`, and multiply by 2 using `*=`. Print the value of `k` after each operation.

### Sample Output 1:
```
Initial value of k: 10
After incrementing: k = 15
After decrementing: k = 12
After multiplying: k = 24
```

### Sample Output 2:
```
Initial value of k: 8
After incrementing: k = 13
After decrementing: k = 10
After multiplying: k = 20
```
