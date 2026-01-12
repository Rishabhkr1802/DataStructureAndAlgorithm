// program to check the given number is palindrome...

function isPalindrome(num) {
  return num < 0 ? false : num.toString().split('').reverse().join('');
}

const result = isPalindrome(121);
console.log(result);