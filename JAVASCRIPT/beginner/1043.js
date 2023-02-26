
//https://www.urionlinejudge.com.br/judge/en/problems/view/1043
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const [a, b, c] = lines[0].split(" ").map(num => Number(num));

if (a < b + c && a > Math.abs(b - c)) {
  const perimetro = (a + b + c);
  console.log(`Perimetro = ${perimetro.toFixed(1)}`);
} else {
  const area = ((a + b)*c)/2;
  console.log(`Area = ${area.toFixed(1)}`);
}