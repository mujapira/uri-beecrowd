"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1145
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var a = Number(lines[0]);

function fat(n) {
    if ( n === 1) {
        return n
    }
    return n * fat(n - 1)
}
console.log(fat(a))