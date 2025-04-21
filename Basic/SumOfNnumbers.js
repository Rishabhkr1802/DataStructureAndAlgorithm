// Program to find sum of n numbers
function sumOfNnumbers(number) {
    let i, sum = 0;
    for (i = 0; i <= number; i++) {
        sum = sum + i;
    }
    return sum;
}

const sum = sumOfNnumbers(10);
console.log(sum);
