'use strict'
const { AsyncLocalStorage } = require('async_hooks');
const { Console } = require('console');
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

//www.w3resource.com/c-programming-exercises/array/index.php
//2, 3, 4, 5, 19, 23, 30

//[2]
var a = lines[0].split(" ")
var chama = "";
var chamadnv = "";
for (let i = a.length - 1, j = 0; i >= 0; i--, j++) {
    chama += a[i];
    chamadnv += a[j]
}
console.log(chama);
console.log(chamadnv);

//[3]
var a = lines[0].split(" ").map(num => Number(num));
var sum = 0;
for (let i = 0; i < a.length; i++) {
    sum += a[i];
}
console.log(sum);

//[4]
const a = lines[0].split(" ");
var b = [];
for(let i = 0; i < a.length; i++) {
    b[i] = a[i];
}
console.log(`The elements stored in the first array are: \n ${a}`);
console.log(`The elements copied in the second array are: \n ${b}`);

//[5]
const a = lines[0].split(" ");
var k = 0
for (var i = 0; i < a.length; i++) {
    if (a[i] < 0) {
        continue //next
    }
    var aux = k
    k++
    for (var j = i + 1; j < a.length; j++) {
        if (a[i] == a[j]) {
            k++
            a[j] = -a[j]
        }
    }
    if (k === aux + 1) {
        k--
    }
    console.log(`elementos - ${i} : ${Math.abs(a[i])}`);
}
console.log(`Total de repetições: ${k}`);

//[19]
const alfa = [[5, 6, 1], [7, 8, 1]];
const beta = [[1, 2, 1], [3, 4, 1]];
var pinto = ""
for (var i = 0; i < alfa.length; i++) {
    for (var j = 0; j < beta.length; j++) {
        var sub = alfa[i][j] - beta[i][j]
        pinto += sub + " "
    }
  pinto += "\n"
}
console.log(pinto)
