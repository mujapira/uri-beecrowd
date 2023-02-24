"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1080

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

for (let i =  1, j = 60; j >= 0;i+=3, j-=5) {
    console.log(`I=${i} J=${j}`);
}