//Guess the opposite number of dice from 1 to 6

const dice = findOppositeFaceOFDice(2);
function findOppositeFaceOFDice(number){
    let answer = 7 - number;
    console.log(`Opposite number of ${number} is : ${answer}`);
}