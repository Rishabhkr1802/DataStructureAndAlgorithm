// Find the closest number 

const m = 4, n = 29;
closestNumber(m, n);
 
function closestNumber(x, y){
    const quotient = Math.floor(y / x);
    const prevNumber = quotient * x;
    const nextNumber = x * (quotient + 1);
    
    if ((y - prevNumber) > (nextNumber - y)) {
      console.log(`Closest Number of ${n} is : ${nextNumber}`);  
    }else {
        console.log(`Closest Number of ${n} is : ${prevNumber}`);
    }
}