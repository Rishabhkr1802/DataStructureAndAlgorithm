//Find the multiplication table of given number.

const number = multiplication(5);
 
function multiplication(num) {
    let i=1;
    for (i=1; i<=10; i++){
        console.log(`${num} * ${i} = ${num * i}`);
    }
}