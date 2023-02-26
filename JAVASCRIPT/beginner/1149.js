"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1145

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');
var pimba = 0

let a = lines[0].split(" ").map(num => Number(num));
for (let i = 0; i < a[a.length - 1]; i++) {
    pimba = pimba + (a[0] + i)
}
console.log(pimba)