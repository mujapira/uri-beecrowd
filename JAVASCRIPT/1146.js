"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1145

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

for (let i = 0; i < lines.length; i++) {
    let a = Number(lines[i])
    var pimba = ""
    for (let j = 1; j <= a; j++) {
        if (j < a) {
            pimba = pimba + j + " "
        } else if (j == a) {
            pimba = pimba + j
        }
    }
    if (a == 0) {
        break
    }
    console.log(pimba)
}