"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1074

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const b = Number(lines[0]);
for (let i = 1; i <= b; i++) {
    let a = Number(lines[i]);
    if (a % 2 == 0 && a !== 0 ) {
        if (a > 0) {
            console.log("EVEN POSITIVE")
        } else {
            console.log("EVEN NEGATIVE")
        }
    } else if (a == 0) {
        console.log("NULL")
    } else {
        if (a > 0 && a !== 0) {
            console.log("ODD POSITIVE")
        } else {
            console.log("ODD NEGATIVE")
        }
    }
}