//Program for generate random number b/w 1 to 100

let minNumber = 1;
let maxNumber = 100;

function generateRandomNumber(min, max) {
    const randomNumber = Math.floor( (Math.random() * (max - min + 1)) + min );
    return randomNumber;
}

console.log( generateRandomNumber(minNumber, maxNumber));