"use strict"

const { getSystemErrorMap } = require('util');

//https://www.urionlinejudge.com.br/judge/en/problems/view/1145

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const a = lines[0].split(" ").map(num => Number(num));
var pimba = ""
var k = 0
for (var j = 1; j < a[1] + 1; j++) {
    pimba += j + " "
    k++
    if (k % a[0] == 0) {
        pimba = pimba.slice(0, -1)
        pimba += "\n"
    }
}
process.stdout.write(pimba)