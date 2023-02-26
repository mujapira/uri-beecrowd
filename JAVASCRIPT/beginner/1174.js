"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1159
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');
let array = []
for (let i = 0; i < 100; i++) {
    let a = Number(lines[i]);
    if (a <= 10) {
        array.push(a)
        console.log(`A[${i}] = ${a.toFixed(1)}`)
    }
}