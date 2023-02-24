"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1159
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var k = 0
var i = 0
while (k == 0) {
    var a = Number(lines[i])
    var pimba = 0
    var miau = 0
    if (a == 0) {
        k = 1
    } else if (a % 2 == 0) {
        for (let j = 0; j < 10; j += 2) {
            pimba = pimba + (a + j)
        }
        console.log(pimba)
    } else if (a % 2 !== 0) {
        for (let m = 1; m <= 10; m += 2) {
            miau = miau + (a + m)
        }
        console.log(miau)
    }
    i++
}