"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1159
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

let cases = Number(lines[0]);

let numbah = 0
for (let i = 0; i < 1000; i++) {
    console.log(`N[${i}] = ${numbah}`)
    numbah++
    if (numbah == cases) {
        numbah = 0
    }
}