
//https://www.urionlinejudge.com.br/judge/en/problems/view/1041
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

let [x, y] = lines[0].split(" ").map(num => Number(num));

if (x === 0 && y === 0) {
  console.log("Origem");
} else if (x > 0 && y > 0) {
  console.log("Q1");
} else if (x < 0 && y > 0) {
  console.log("Q2");
} else if (x < 0 && y < 0) {
  console.log("Q3");
} else if (x > 0 && y < 0) {
  console.log("Q4");
} else if (x === 0) {
  console.log("Eixo Y");
} else {
  console.log("Eixo X"); 
}