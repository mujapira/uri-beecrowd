
//https://www.urionlinejudge.com.br/judge/en/problems/view/1068
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const a = Number(lines[0]);
const b = Number(lines[1]);
var maior, menor;
var soma = 0
if (a >= b) {
    maior = a
    menor = b
} else {
    maior = b
    menor = a
}
for (let i = menor +1; i <= maior -1; i++) {
    if (i % 2 !== 0) {
        soma += i
    }
}
console.log(soma)