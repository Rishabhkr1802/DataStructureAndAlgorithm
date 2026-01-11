//program to find prime no 

let i, n=9;
for (i=2; i<n; i++) {
    if (n%i === 0) {
        console.log("Not a prime no.");
        break;
    }
}
