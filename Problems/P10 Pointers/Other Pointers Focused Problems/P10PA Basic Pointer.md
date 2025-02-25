# **Basic Pointer Problems**
---

## **Problem 1: Increment a Pointer Value**  
**Description:**  
Declare an integer variable with an initial value of **10** and a pointer pointing to it. Increment the value **through the pointer** and print before and after.  

**Fixed Value:** `int num = 10;`

**Sample Output:**  
```
Before increment: 10  
After increment: 11  
```
---

## **Problem 2: Decrement a Pointer Value**  
**Description:**  
Modify a variable's value using a pointer by **decrementing it**. Use an initial value of **30**. Print before and after.  

**Fixed Value:** `int num = 30;`

**Sample Output:**  
```
Before decrement: 30  
After decrement: 29  
```
---

## **Problem 3: Modify a Value Using Call by Reference**  
**Description:**  
Pass an integer variable **(initial value 5)** to a function using a pointer and double its value.  

**Fixed Value:** `int num = 5;`

**Sample Output:**  
```
Before function call: 5  
After function call: 10  
```
---

## **Problem 4: Swapping Two Values Using Pointers**  
**Description:**  
Use pointers to swap two integers **(initial values: a = 15, b = 25)**. Print before and after swapping.  

**Fixed Values:** `int a = 15, b = 25;`

**Sample Output:**  
```
Before swap: a = 15, b = 25  
After swap: a = 25, b = 15  
```
---

## **Problem 5: Changing a Variable via a Double Pointer**  
**Description:**  
Use a **pointer to a pointer (`int **ptr`)** to change a variable’s value. The initial value is **50**, and it should be modified to **100**.  

**Fixed Value:** `int num = 50;`

**Sample Output:**  
```
Original value: 50  
Modified value: 100  
```
---

## **Problem 6: Pointer Address Modification**  
**Description:**  
Print the memory address before and after reassigning a pointer to another variable. Use **two variables (x = 5, y = 10)** and assign the pointer first to `x`, then to `y`.  

**Fixed Values:** `int x = 5, y = 10;`

**Sample Output:**  
```
Pointer before reassignment: 0x7ffe1234  
Pointer after reassignment: 0x7ffe5678  
```
---

## **Problem 7: Pointer Increment (Address)**  
**Description:**  
Print how the address changes when a pointer is incremented. Use an integer variable **array of size 3** to observe address increments.  

**Fixed Values:** `int arr[3] = {1, 2, 3};`

**Sample Output:**  
```
Address before increment: 0x100  
Address after increment: 0x104  
```
---

## **Problem 8: Comparing Two Pointers**  
**Description:**  
Compare two pointers pointing to different variables **(a = 10, b = 20)** and print which one has a greater memory address.  

**Fixed Values:** `int a = 10, b = 20;`

**Sample Output:**  
```
Pointer 1 address: 0x100  
Pointer 2 address: 0x200  
Pointer 2 has a greater address  
```
---

## **Problem 9: Function to Reset a Value to Zero**  
**Description:**  
Pass an integer variable **(initial value 37)** to a function using a pointer and set it to zero.  

**Fixed Value:** `int num = 37;`

**Sample Output:**  
```
Before function call: 37  
After function call: 0  
```
---

## **Problem 10: Check if Two Pointers Point to the Same Address**  
**Description:**  
Compare two pointers and print if they point to the same memory location or not. Use **a single variable (`int num = 55;`) and assign both pointers to it**.  

**Fixed Value:** `int num = 55;`

**Sample Output:**  
```
Pointer 1 address: 0x300  
Pointer 2 address: 0x300  
Pointers are equal  
```
---

## **Problem 11: Swap Two Pointers (Reassigning Memory Addresses)**  
**Description:**  
Swap two pointers' memory addresses. Use variables **x = 100, y = 200**.  

**Fixed Values:** `int x = 100, y = 200;`

**Sample Output:**  
```
Before swap:  
Pointer 1 -> Address 0x500  
Pointer 2 -> Address 0x600  

After swap:  
Pointer 1 -> Address 0x600  
Pointer 2 -> Address 0x500  
```
---

## **Problem 12: Using a Pointer to Modify a Character**  
**Description:**  
Change a character’s value from **'A' to 'B'** using a pointer.  

**Fixed Value:** `char ch = 'A';`

**Sample Output:**  
```
Before modification: A  
After modification: B  
```
---

## **Problem 13: Function That Returns a Pointer**  
**Description:**  
A function should return a pointer to an integer variable with a fixed value **25**.  

**Fixed Value:** `int num = 25;`

**Sample Output:**  
```
Returned value: 25  
```
---

## **Problem 14: Pointer to a Constant Variable**  
**Description:**  
Demonstrate that a pointer to a constant variable **(value 10)** cannot modify the variable’s value but can access it.  

**Fixed Value:** `const int num = 10;`

**Sample Output:**  
```
Constant value: 10  
Attempt to modify... Error!  
```
---

## **Problem 15: Changing a Pointer Value Inside a Function**  
**Description:**  
Modify a pointer inside a function to make it point to a different integer variable. Use **num1 = 99, num2 = 101**.  

**Fixed Values:** `int num1 = 99, num2 = 101;`

**Sample Output:**  
```
Pointer initially points to: 99  
Pointer now points to: 101  
```
---


