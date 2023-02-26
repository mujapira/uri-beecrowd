//https://www.urionlinejudge.com.br/judge/en/problems/view/1021
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const [a, b, c, d] = lines[0].split(" ").map(num => Number(num));
if (b>c && d>a && c+d>a+b && c > 0 && d > 0 && a % 2 === 0) {
    console.log("Valores aceitos");
} else {
    console.log("Valores nao aceitos");
}
