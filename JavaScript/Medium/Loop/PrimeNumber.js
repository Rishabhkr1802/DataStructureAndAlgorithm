// Program to check whether the number is prime or not
const number = 24;
let isPrime = true;

if (number === 1) {
    console.log('1 is not a prime or composite number');
}
else if (number > 1) {
    for (let i = 2; i <= number / 2; i++) {
        if (number % i === 0) {
            isPrime = false;
            console.log(i)
            break;
        }
    }

    if (isPrime)
        console.log(`${number} is a prime number`);
    else
        console.log(`${number} is not a prime number`);
}
else {
    console.log(`Not a prime number`);
}