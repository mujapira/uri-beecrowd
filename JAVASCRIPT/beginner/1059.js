//https://www.urionlinejudge.com.br/judge/en/problems/view/1052
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

for (let i = 2; i <= 100; i++) {
    if (i % 2 === 0) {
        console.log(i)
    }
}
//ou
for (let i = 2; i <= 100; i+=2) {
console.log(i)
}