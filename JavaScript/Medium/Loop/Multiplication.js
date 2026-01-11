//Find the multiplication table of given number.

const number = multiplication(5);
 
function multiplication(num) {
    for (let i=1; i<=10; i++){
        console.log(`${num} * ${i} = ${num * i}`);
    }
}