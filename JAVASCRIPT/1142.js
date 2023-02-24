"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1132

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var m = 0
var pp = ""
const a = Number(lines[0]);
for (let i = 0; i <= a - 1; i++) {
    pp = ""
    for (let j = 1; j <= 3; j++) {
        pp = pp + (j + m)+" "
    }
    console.log(`${pp}PUM`)
    m+=4
}