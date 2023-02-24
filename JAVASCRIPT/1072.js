"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1068
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var a = Number(lines[0]);
var ki = 0;
var kf = 0;
for (let i = 1; i <= a; i++) {
    var b = Number(lines[i]);
    if (b >= 10 && b <= 20) {
        ki++;
    } else {
        kf++;
    }
}
console.log(`${ki} in\n${kf} out`);