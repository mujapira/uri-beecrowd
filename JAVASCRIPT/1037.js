//https://www.urionlinejudge.com.br/judge/en/problems/view/1037
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const a = Number(lines [0]);
if (a < 0 || a > 100) {
    console.log("Fora de intervalo");
} else if (a >= 0 && a <= 25) {
    console.log("Intervalo [0,25]");
} else if (a >= 25 && a <= 50) {
    console.log("Intervalo (25,50]");
} else if (a >= 50 && a <= 75) {
    console.log("Intervalo (50,75]");
} else if (a >= 75 && a <= 100) {
    console.log("Intervalo (75,100]");
}