"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1145
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');



function tomatoma(s, d){
    if ( d == 100) {
        return s/d
    }
    return s/d + tomatoma (s, d + 1)
}

console.log(tomatoma(1,1).toFixed(2))