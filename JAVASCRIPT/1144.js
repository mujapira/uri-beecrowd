"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1132

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const a = Number(lines[0]);
for (let i = 1; i <= a; i++) {
    console.log(`${i} ${i*i} ${i*i*i}\n${i} ${i*i+1} ${i*i*i+1}`)
}