
//https://www.urionlinejudge.com.br/judge/en/problems/view/1043
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var [a, b] = lines[0].split(" ").map(num => Number(num));

if (a > b) {
  if (a % b === 0 || b % a === 0) {
    console.log("Sao Multiplos")
  } else {
    console.log("Nao sao Multiplos")
  }
}
else {
  if (b % a === 0 || a % b === 0) {
    console.log("Sao Multiplos")
  } else {
    console.log("Nao sao Multiplos")
  }
}

