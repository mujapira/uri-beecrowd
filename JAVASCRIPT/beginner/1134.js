"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1132

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var a = 0
var g = 0
var d = 0
for (let i = 0; i < lines.length; i++) {
    var q = Number(lines[i])
    if (q == 1) {
        a++
    } else if (q == 2) {
        g++
    } else if (q == 3) {
        d++
    } else if (q == 4) {
        break
    }
}
console.log(`MUITO OBRIGADO`)
console.log(`Alcool: ${a}`)
console.log(`Gasolina: ${g}`)
console.log(`Diesel: ${d}`)

