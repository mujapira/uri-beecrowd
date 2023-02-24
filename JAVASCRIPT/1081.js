"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1080

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');
var total = 0
var coelho = 0
var rato = 0
var sapo = 0
let a = Number(lines[0]);
for (let i = 1; i < lines.length; i++) {
    let b = lines[i].split(" ");
    b[0] = Number(b[0])
    total += b[0];
    if (b[1] == "C") {
        coelho += b[0];
    } else if (b[1] == "R") {
        rato += b[0];
    } else {
        sapo += b[0]
    }
}
var percentC = coelho / total *100
var percentR = rato / total * 100
var percentS = sapo / total * 100
console.log(`Total: ${total} cobaias`);
console.log(`Total de coelhos: ${coelho}`);
console.log(`Total de ratos: ${rato}`);
console.log(`Total de sapos: ${sapo}`);
console.log(`Percentual de coelhos: ${percentC.toFixed(2)} %`);
console.log(`Percentual de ratos: ${percentR.toFixed(2)} %`);
console.log(`Percentual de sapos: ${percentS.toFixed(2)} %`);