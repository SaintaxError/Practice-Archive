// December 31, 2024

11. Exponentiation and Division
function result11(x,y){
    return Math.pow(x,y) / 10;
}
    let x = prompt("Enter x: ");
        y = prompt("Enter y: ");
        
    x = Number(x);
    y = Number(y);
    
    let result = parseInt(result11(x,y));
    console.log(`Result: ${result}`);





12. Add, Square, and Divide

function result12(x,y){
    return Math.pow((x+y),2) / 2;
}
    let x = prompt("Enter x: ");
        y = prompt("Enter y: ");
        
    x = Number(x);
    y = Number(y);
    
    let result = parseInt(result12(x,y));
    console.log(`Result: ${result}`);





13. Subtract and Multiply

function result13(x,y){
    return (x - y) * 3;
}
    let x = prompt("Enter x: ");
        y = prompt("Enter y: ");
        
    x = Number(x);
    y = Number(y);
    
    console.log(`Result: ${result13(x,y)}`);





14. Remainder and Addition

function result14(x,y){
    return (x % y) + y;
}
    let x = prompt("Enter x: ");
        y = prompt("Enter y: ");
    
    x = Number(x);
    y = Number(y);
    
    console.log(`Result: ${result14(x,y)}`);





15. Add and Multiply Different Numbers

function result15(x,y,z){
    return ( x + y ) * z;
}
    let x = prompt("Enter x: ");
        y = prompt("Enter y: ");
        z = prompt("Enter z: ");
        
    x = Number(x);
    y = Number(y);
    z = Number(z);
    
    console.log(`Result: ${result15(x,y,z)}`);
