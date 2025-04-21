// Program to find whether the number is odd or even
function getEvenNumber(number) {
    if (number % 2 === 0) {
        return `${number} is even.`
    }
    else {
        return `${number} is odd.`
    }
}

const number = getEvenNumber(22);
console.log(number);

const number1 = getEvenNumber(31);
console.log(number1);
