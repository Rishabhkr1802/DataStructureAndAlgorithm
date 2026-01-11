// Find the nth term in A.P

const a = 2, b = 3, n = 4;
 
findNthTermNumber(a,b,n);
function findNthTermNumber(x, y, z) {
    let initialTerm = x;
    let distance = y - x;
    for (let i = 1; i < n; i++ ){
        initialTerm = initialTerm + distance;
    }
    console.log(`Nth Term is : ${initialTerm}`)
}