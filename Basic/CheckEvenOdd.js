// Program to find whether the number is odd or even

const number = checkEvenOdd(9);

function checkEvenOdd(num) {
    if (num % 2 === 0) {
        console.log(`Number is Even`)
    } else {
        console.log('Number is Odd')
    }
}