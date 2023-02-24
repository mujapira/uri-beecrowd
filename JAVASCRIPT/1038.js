
//https://www.urionlinejudge.com.br/judge/en/problems/view/1038
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const [code, qtd] = lines[0].split(" ").map(douglas => Number(douglas));
const prc = [4.00, 4.50, 5.00, 2.00, 1.50];
const total = prc[code - 1]*qtd;
console.log(`Total: R$ ${total.toFixed(2)}`);