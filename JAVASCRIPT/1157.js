"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1145
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

 var a = Number(lines[0]);
for (let i = 1; i <= a; i++) {
    if (a % i == 0){
        console.log(i)
    }
}
