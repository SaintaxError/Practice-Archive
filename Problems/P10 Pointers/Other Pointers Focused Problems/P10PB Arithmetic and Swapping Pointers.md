# **Advanced Pointer Arithmetic & Swapping Problems** 
---
 

### **Problem 1: Addition and Modification via Pointers**  
**Description:**  
Declare three integers: **x = 10, y = 20, z = 30**.  
- Add **x and y**, then store the result in **z**.  
- Multiply **z by 2** using a pointer.  
- Subtract **y from z** using another pointer.  

**Sample Output:**  
```
Initial values: x = 10, y = 20, z = 30  
After sum: z = 30  
After multiplication: z = 60  
After subtraction: z = 40  
```

---

### **Problem 2: Swapping and Difference Calculation**  
**Description:**  
Declare two integers **a = 50** and **b = 25**.  
- Swap their values using pointers.  
- Subtract the new **b from a**.  

**Sample Output:**  
```
Before swap: a = 50, b = 25  
After swap: a = 25, b = 50  
After subtraction: a = -25  
```

---

### **Problem 3: Computing Square Root and Difference**  
**Description:**  
Given three integers **p = 36, q = 16, r = 49**,  
- Compute the square root of **p** and **r**, then assign their sum to **q**.  
- Subtract **q from the initial p**.  

**Sample Output:**  
```
Initial values: p = 36, q = 16, r = 49  
Square roots: √p = 6, √r = 7  
Updated q: 13  
Final p: 23  
```

---

### **Problem 4: Multiplication and Modulo Operations**  
**Description:**  
Declare three integers **x = 8, y = 5, z = 3**.  
- Multiply **x by y** using a pointer.  
- Compute **x modulo z** and update **y**.  
- Subtract **y from x**.  

**Sample Output:**  
```
Initial values: x = 8, y = 5, z = 3  
After multiplication: x = 40  
Modulo operation: y = 1  
Final result: x = 39  
```

---

### **Problem 5: Mixed Arithmetic with Pointers**  
**Description:**  
Declare three integers **a = 10, b = 20, c = 30**.  
- Add **b to c**, store it in **a**.  
- Divide **a by 2**.  
- Subtract **c from a**.  

**Sample Output:**  
```
Initial values: a = 10, b = 20, c = 30  
After addition: a = 50  
After division: a = 25  
After subtraction: a = -5  
```

---

### **Problem 6: Absolute Difference Calculation**  
**Description:**  
Declare three integers **x = 20, y = 50, z = 5**.  
- Compute the absolute difference between **x and y**.  
- Subtract **z from this difference**.  

**Sample Output:**  
```
Initial values: x = 20, y = 50, z = 5  
Absolute difference: 30  
After subtraction: 25  
```

---

### **Problem 7: Exponential Operations with Pointers**  
**Description:**  
Declare three integers **a = 2, b = 3, c = 4**.  
- Compute **a^b** (a raised to b).  
- Multiply **the result by c**.  

**Sample Output:**  
```
Initial values: a = 2, b = 3, c = 4  
Exponentiation: 8  
After multiplication: 32  
```

---

### **Problem 8: Modifying Variables in Reverse Order**  
**Description:**  
Declare three integers **p = 10, q = 20, r = 30**.  
- Reverse modify them:  
  - Modify **r using q**,  
  - Modify **q using p**,  
  - Modify **p using the updated values**.  

**Sample Output:**  
```
Initial values: p = 10, q = 20, r = 30  
After step 1: r = 50  
After step 2: q = 30  
After step 3: p = 20  
```

---

### **Problem 9: Combining Operations in a Sequence**  
**Description:**  
Declare four integers **a = 6, b = 2, c = 4, d = 10**.  
- Compute **(a * b) + (c / d)**.  
- Subtract **c from the result**.  

**Sample Output:**  
```
Initial values: a = 6, b = 2, c = 4, d = 10  
Multiplication & Division: 12  
After subtraction: 8  
```

---

### **Problem 10: Complex Pointer Arithmetic**  
**Description:**  
Declare three integers **x = 15, y = 5, z = 3**.  
- Compute **x squared**.  
- Divide **the result by y**, then subtract **z**.  

**Sample Output:**  
```
Initial values: x = 15, y = 5, z = 3  
Squared: 225  
After division: 45  
After subtraction: 42  
```

---

## **Problems 11-15: Swapping + Increment-Based Operations**  


### **Problem 11: Increment, Swap & Multiplication Chain**  
**Description:**  
Declare **x = 5, y = 10, z = 2**.  
1. Increment **x**.  
2. Swap **x and y**.  
3. Multiply **x by z**.  
4. Add **y to the result**.  
5. Increment **y** twice.  
6. Subtract **y from the final result**.  

**Sample Output:**  
```
Before: x = 5, y = 10, z = 2  
After increment: x = 6  
After swap: x = 10, y = 6  
After multiplication: x = 20  
After addition: x = 26  
After y increment: y = 8  
After final subtraction: x = 18  
```

---

### **Problem 12: Double Swap, Exponentiation & Modular Operation**  
**Description:**  
Declare **a = 4, b = 7, c = 2**.  
1. Swap **a and b**.  
2. Increment **a**.  
3. Compute **b raised to c** (**b^c**).  
4. Subtract **a from the exponent result**.  
5. Compute the **modulo of the result by c**.  
6. Add **the new value of c to a**.  

**Sample Output:**  
```
Before: a = 4, b = 7, c = 2  
After swap: a = 7, b = 4  
After increment: a = 8  
Exponentiation: b^c = 16  
After subtraction: result = 8  
Modulo operation: result = 0  
After addition: a = 10  
```

---

### **Problem 13: Increment, Swap, and Multi-step Calculations**  
**Description:**  
Declare **p = 3, q = 6, r = 9**.  
1. Increment **p** twice.  
2. Swap **p and r**.  
3. Compute **the sum of p and q**.  
4. Multiply **r by the sum**.  
5. Compute the **square root of the result**.  
6. Swap **q and p**, then subtract **q from p**.  

**Sample Output:**  
```
Before: p = 3, q = 6, r = 9  
After increment: p = 5  
After swap: p = 9, r = 5  
Sum of p and q: 15  
Multiplication: r * sum = 75  
Square root: 75 = 8  
After final swap: p = 6, q = 9  
Final subtraction: p = -3  
```

---

### **Problem 14: Multi-step Swap, Increment, and Square Root Operations**  
**Description:**  
Declare **m = 12, n = 8, o = 4**.  
1. Swap **m and o**.  
2. Increment **n** three times.  
3. Compute **the sum of m and n**.  
4. Multiply **the sum by o**.  
5. Compute the **square root of the result**.  
6. Swap **m and n**, then subtract **m from n**.  

**Sample Output:**  
```
Before: m = 12, n = 8, o = 4  
After swap: m = 4, o = 12  
After increments: n = 11  
Sum of m and n: 15  
Multiplication: sum * o = 180  
Square root: 180 = 13  
After swap: m = 11, n = 4  
Final subtraction: n = -7  
```

---

### **Problem 15: The Ultimate Complex Multi-Step Pointer Challenge**  
**Description:**  
Declare **x = 10, y = 15, z = 5**.  
1. Swap **x and y**.  
2. Increment **z**.  
3. Compute **the sum of x and y**.  
4. Multiply the **sum by z**.  
5. Compute **the square root of the multiplication result**.  
6. Swap **z and y**, then subtract **z from y**.  

**Sample Output:**  
```
Before: x = 10, y = 15, z = 5  
After swap: x = 15, y = 10  
After increment: z = 6  
Sum of x and y: 25  
Multiplication: sum * z = 150  
Square root: 150 = 12  
After swap: y = 6, z = 10  
Final subtraction: y = -4  
```

---
