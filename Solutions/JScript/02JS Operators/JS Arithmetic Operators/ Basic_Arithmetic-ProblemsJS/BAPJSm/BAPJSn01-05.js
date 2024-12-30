// December 28, 2024

1. Add, Multiply, and Subtract

function result1(x, y){
  return (((x + y) * 3) - 10);
}

  let x = prompt("Enter x: "),
      y = prompt("Enter y: ");

x = Number(x);
y = Number(y);

console.log(`Result: ${result1(x,y)}`);





2. Multiply, Divide, and Add

function result2(x,y){
  return ((x * y) / 4) + 5;
}

let x = prompt("Enter x: "),
    y = prompt("Enter y: ");

x = Number(x);
y = Number(y);

console.log(`Result: ${result2(x,y)}`);





// December 31, 2024

3. Square, Divide, and Add

function result3(x,y){
    return ((x**2) / y) + 2;    // ** for exponentiation, pwede pud actually sa JS kay Math.pow(base,exponent)
}

let result,
    x = prompt("Enter x: "),
    y = prompt("Enter y: ");

x = Number(x);
y = Number(y);

result = parseInt(result3(x,y));
        // converts the number to an integer by removing the decimal part
console.log(`Result: ${result}`);





4. Add, Multiply, and Subtract with Input

function result4(x,y,z){
    return (((x + y) * z) - 10); 
}

let x = prompt("Enter x: "),
    y = prompt("Enter y: "),
    z = prompt("Enter z: ");
    
x = Number(x);
y = Number(y);
z = Number(z);

    console.log(`Result: ${result4(x,y,z)}`);





5. Divide and Remainder

function result5(x,y){
    return x % y;
}

    let x = prompt("Enter x: "),
        y = prompt("Enter y: ");
        
x = Number(x);
y = Number(y);
    
    console.log(`Result: ${result5(x,y)}`);
