"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1159
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

let array = []
for (let i = 0; i < 20; i++) {
    let a = Number(lines[i]);
    array.unshift(a)
} 
for (let j = 0; j <20; j++){
    console.log(`N[${j}] = ${array[j]}`)
}