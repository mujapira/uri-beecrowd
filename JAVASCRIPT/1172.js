"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1159
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

let array = []
for (let i = 0; i < 10; i++) {
    let pimba = Number(lines[i]);
    if (pimba <= 0) {
        array.push(1);
    } else if (pimba > 0){
        array.push(pimba);
    }
    console.log(`X[${i}] = ${array[i]}`);
}