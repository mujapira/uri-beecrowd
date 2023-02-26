//https://www.urionlinejudge.com.br/judge/en/problems/view/1018
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

let total = Number(lines[0]);
function calculaai(dinheiro) {
    const amount = Math.trunc(total / dinheiro);
    console.log(`${amount} nota(s) de R$ ${Math.trunc(dinheiro)},00`);
    total -= amount * dinheiro;
}
console.log(total);
const notas = [100, 50, 20, 10, 5, 2, 1];
notas.forEach(nota => calculaai(nota));