//https://www.urionlinejudge.com.br/judge/en/problems/view/1065
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var k = 0;
for (let i = 0; i <= 4; i++) {
    const a = lines[i];
    if (a % 2 == 0) {
        k++;
    }
}
console.log(`${k} valores pares`);