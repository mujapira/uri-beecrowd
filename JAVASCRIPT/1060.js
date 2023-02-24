const { Console } = require('console');

//https://www.urionlinejudge.com.br/judge/en/problems/view/1052
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');


var k = 0
for (j = 0; j <= 6; j++) {
    var a = Number(lines[j])
    if (lines[j] > 0) {
        k++
    }
}
console.log(`${k} valores positivos`)
