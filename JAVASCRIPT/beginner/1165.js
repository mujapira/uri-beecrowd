"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1159
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

let total = 0
const b = Number(lines[0]);
for (let i = 1; i <= b; i++) {
    const a = Number(lines[i]);
    for (let j = 1; j <= a; j++) {
        if (a % j == 0) {
            total = total + j;
        }
    }
    if (total == a + 1) {
        console.log(`${a} eh primo`)
    } else {
        console.log(`${a} nao eh primo`)
    }
    total = 0
}