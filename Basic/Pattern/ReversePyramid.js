/*Program for print triangle
* 
* *
* * *
* * * *
* * * * *
*/

function printPattern(num) {
  for (let i = 1; i <= num; i++) {
    let row = '';
    for (let j = 5; j >= 1; j--) {
      row += '* ';
    }
    console.log(row.trim());
  }
}

printPattern(5)