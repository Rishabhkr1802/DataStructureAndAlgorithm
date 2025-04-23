//Check the given number is even or odd.

const number = checkEvenOdd(9);

function checkEvenOdd(num) {
    if (num % 2 === 0) {
        console.log(`Number is Even`)
    } else {
        console.log('Number is Odd')
    }
}