"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1074

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const a = Number(lines[0]);
for (let i = 1; i <= a; i++) {
    let b = lines[i].split(" ").map(num => Number(num));
    let media = (b[0]*2 + b[1]*3 + b[2]*5)/10
    console.log(media.toFixed(1))
}
