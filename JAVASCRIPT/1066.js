//https://www.urionlinejudge.com.br/judge/en/problems/view/1065
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var pares = 0
var impares = 0
var positivos = 0
var negativos = 0

for (var i = 0; i <= 4; i++) {
    var a = Number(lines[i]);
    if (a < 0) {
        negativos++;
    } else {
        if (a != 0) {
            positivos++;
        }
    }
    if (a % 2 === 0) {
        pares++;
    } else {
        impares++;
    }
}

console.log(`${pares} valor(es) par(es)\n${impares} valor(es) impar(es)`);
console.log(`${positivos} valor(es) positivo(s)\n${negativos} valor(es) negativo(s)`);