"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1099

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');


for (let i = 0; i < lines.length; i++) {
    const a = Number(lines[i]);

    if (a === 2002) {
        console.log("Acesso Permitido")
        break
    } else {
        console.log("Senha Invalida")
    }

}