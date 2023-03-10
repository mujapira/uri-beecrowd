//https://www.urionlinejudge.com.br/judge/en/problems/view/1023
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const [a, b, c] = lines[0].split(" ").map(numero => Number(numero));
const delta = (b*b)-(4*a*c);
if (delta < 0 || a <= 0) {
    console.log("Impossivel calcular")
} else {
    const x1 = (-b + Math.sqrt(delta))/(2*a);
    const x2 = (-b - Math.sqrt(delta))/(2*a);
    console.log("R1 = " + x1.toFixed(5));
    console.log("R2 = " + x2.toFixed(5));
}