"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1080

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var m = 0
for (var i = 0; i <= 2; i += 0.2) {
    for (var j = 1 + m; j <= 3 + m; j++) {
        console.log((`I=${i.toFixed(1)} J=${j.toFixed(1)}`))
    }
   m += 0.2
}