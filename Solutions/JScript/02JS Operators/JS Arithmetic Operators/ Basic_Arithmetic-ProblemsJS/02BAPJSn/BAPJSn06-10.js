// December 31. 2024

6. Average and Subtract
function result6(x,y,z,w){
    return ((x+y+z+w) / 4) - 10;
}

    let x = prompt("Enter x: "),
        y = prompt("Enter y: "),
        z = prompt("Enter z: "),
        w = prompt("Enter w: ");
        
x = Number(x);
y = Number(y);
z = Number(z);
w = Number(w);

let result = parseInt(result6(x,y,z,w));
    console.log(`Result: ${result}`);





7. Sum of Squares
function result7(x,y){
    return Math.pow(x,2) + Math.pow(y,2);
}

    let x = prompt("Enter x: "),
        y = prompt("Enter y: ");
        
    x = Number(x);
    y = Number(y);
    
    console.log(`Result: ${result7(x,y)}`);





8. Cube of a Number and Add

function result8(x){
    return Math.pow(x, 3) + 5;
}
    let x = prompt("Enter x: ");
    x = Number(x);
    
    console.log(`Result: ${result8(x)}`);





9. Multiply, Divide, and Subtract

function result9(x,y){
    return ((x * y) / 4) - 3;
}
    let x = prompt("Enter x: "),
        y = prompt("Enter y: ");
    
    x = Number(x);
    y = Number(y);
    
    console.log(`Result: ${result9(x,y)}`);





10. Add and Subtract Multiple Numbers

function result10(x,y,z,w){
    return ((x+y) - z) + w;
}

    let x = prompt("Enter x: ");
        y = prompt("Enter y; ");
        z = prompt("Enter z: ");
        w = prompt("Enter w: ");

x = Number(x);
y = Number(y);
z = Number(z);
w = Number(w);

console.log(`Result: ${result10(x,y,z,w)}`);


