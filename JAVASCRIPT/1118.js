"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1099

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var k = false
var media = 0
var o = 0
for (let i = 0; i < lines.length; i++) {
    let a = Number(lines[i]);
    if (k == true) {
        if (a == 2) {
            break
        } else if (a == 1) {
            k = false
            media = 0
            o = 0
        } else {
            console.log(`novo calculo (1-sim 2-nao)`)
        }
        continue
    }
    if (a >= 0 && a <= 10) {
        media += a
        o++
        if (o == 2) {
            console.log(`media = ${(media / 2).toFixed(2)}`)
            console.log(`novo calculo (1-sim 2-nao)`)
            k = true
        }
    } else {
        console.log("nota invalida")
    }
}