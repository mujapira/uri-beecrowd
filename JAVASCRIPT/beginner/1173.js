"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1159
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

let array = [];
let pimba = Number(lines[0]);
console.log(`N[${0}] = ${pimba}`)
let total = pimba
for (let i = 0; i < 9; i++) {
    if (pimba < 0) {
        total = total * 2;
        array.push(total);
        console.log(`N[${i + 1}] = -${array[i]}`);
    } else {
        total = total * 2;
        array.push(total);
        console.log(`N[${i + 1}] = ${array[i]}`);
    }
}