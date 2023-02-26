"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1080

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

for (let k = 1; k <= 9; k += 2) {
    for (let j = 7; j >= 5; j -= 1) {
        console.log((`I=${k} J=${j}`))
    }
}