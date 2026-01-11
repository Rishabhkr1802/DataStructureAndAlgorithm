// Program to find factorial number

function factorial(number) {
    let fact = 1;
    for (let i = 1; i <= number; i++) {
        fact = fact * i;
    }

    return fact;
}
const fact = factorial(5);
console.log(`Factorial number is : ${fact}`);
