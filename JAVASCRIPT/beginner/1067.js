//https://www.urionlinejudge.com.br/judge/en/problems/view/1067
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const a = Number(lines[0]);
for (var i = 1; i <= a; i+=2) {
        console.log(i)
    }