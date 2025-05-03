//Find the sum of Natural number given by user.

const number = sumOfNatural(-4);
 
function sumOfNatural(num) {
    if(num <= 0) {
        console.log('Please enter the valid or positive number');
    }
    else {
        let sum = 0, i = 1;
        for (i=1; i<=num; i++) {
            sum = sum + i;
        }
        console.log(`Sum of number is : ${sum}`);
    }
}