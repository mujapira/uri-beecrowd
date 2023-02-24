"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1145
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');



function tomatoma(s, d){
    if ( s == 39) {
        return s/d
    }
    return s/d + tomatoma (s + 2, d*2)
}

console.log(tomatoma(1,1).toFixed(2))