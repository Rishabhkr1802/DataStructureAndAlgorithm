// Program to find maximum or greater number 
function greater(x, y) {
    let max = 0;
    if (x > y) {
        max = x;
    }
    else {
        max = y;
    }
    console.log(`Greater number between ${x} & ${y} is : ${max}`);
}

const max = greater(4, 40);
