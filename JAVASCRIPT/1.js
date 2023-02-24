"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1145
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

function elevado(num, exp) {  //FUNÇÃO RECURSIVA (COM FIM)
    if (exp === 1) {
        return num;
    }
    return num * elevado(num, exp - 1);
}