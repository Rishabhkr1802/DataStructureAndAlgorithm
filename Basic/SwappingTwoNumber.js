//Program to swap to number

let a = 20, b = 30;
 
function swap(x, y) { // using two variables
    x = x + y;
    y = x - y; 
    x = x - y;
    console.log(`New value of A is : ${x}`);
    console.log(`New value of B is : ${y}`);
}

function swapNumber(x,y) {  // using three variables
    let temp;
    temp = x;
    x = y;
    y = temp;
    console.log(`New value of A is : ${x}`);
    console.log(`New value of B is : ${y}`);    
}

swap(a, b);
swapNumber(a, b);