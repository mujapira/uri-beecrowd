
//https://www.urionlinejudge.com.br/judge/en/problems/view/1042
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');
const [a, b, c] = lines[0].split(" ").map(num => Number(num));
if (a > b && b > c) {
  console.log(c)
  console.log(b)
  console.log(a)
} else if (a > c && c > b) {
  console.log(b)
  console.log(c)
  console.log(a)
} else if (b > a && a > c) {
  console.log(c)
  console.log(a)
  console.log(b)
} else if (b > c && c > a) {
  console.log(b)
  console.log(c)
  console.log(a)
} else if (c > b && b > a) {
  console.log(a)
  console.log(b)
  console.log(c)
} else if (c > a && a > b) {
  console.log(b)
  console.log(a)
  console.log(c)
} else if (a === b && c > a) {
  console.log(b)
  console.log(a)
  console.log(c)
} else if (a === b && a > c) {
  console.log(c)
  console.log(a)
  console.log(b)
} else if (a === c && b > a) {
  console.log(a)
  console.log(c)
  console.log(b) 
} else if (a === c && b < c) {
  console.log(b)
  console.log(c)
  console.log(a)
} else if (b === c && a > b) {
  console.log(c)
  console.log(b)
  console.log(a)
} else if (b === c && a < c) {
  console.log(a)
  console.log(c)
  console.log(b)
} else {
  console.log(a)
  console.log(c)
  console.log(b)
}
  console.log();
  console.log(b);
  console.log(c);

  