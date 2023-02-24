"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1145
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var a = Number(lines[0]);
var arr = [0, 1, 1];
var pimba;
var i = 2
while (arr.length < a) {
    var pimba = arr[i] + arr[i - 1]
    arr.push(pimba)
    i++
}
console.log(arr.join(" "))
