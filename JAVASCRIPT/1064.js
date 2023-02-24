//https://www.urionlinejudge.com.br/judge/en/problems/view/1064
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');
var k = 0
var soma = 0
for (var i = 0; i <= 6; i++) {
    var a = Number(lines[i]);
    if (a > 0) {
        k++
        soma += a
    }
    media = soma/k
}
console.log(`${k} valores positivos\n${media.toFixed(1)}`);