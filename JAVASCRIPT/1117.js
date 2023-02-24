"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1099

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');
var media = 0
var k = 0
for (let i = 0; i < lines.length; i++) {
    let a = Number(lines[i]);

    if (a >= 0 && a <= 10) {
        media += a
        k++
    } else {
        console.log("nota invalida")
    }
    if ( k === 2) {
        break
    }
}
console.log(`media = ${media/2}`)