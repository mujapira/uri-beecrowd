'use strict'
const { Console } = require('console');
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');
/* //www.w3resource.com/c-programming-exercises/for-loop/index.php
//3, 6, 7, 8, 9, 10, 13, 31, 39, 57
//[3]

const a = Number(lines[0]);
var b = "";
var sum = 0
for (let i = 1; i <= a; i++) {
    b += i + " ";
    sum = sum + i
}
console.log(b);
console.log(sum);

//[6]
const a = Number(lines[0]);
for (let i = 1; i <= a; i++) {
    const p = a * i
    console.log(`${a}x${i} = ${p}`)
}
 */
//[7]
var a = Number(lines[0]);
var p = 0;
var b = "";
for (var i = 1; i <= a; i++) {
    for (var j = 1; j <= 10; j++) {
        var p = i * j;
        if (j <= 9 && i <= 9 && p <= 9) {
            b += `0${j}x0${i} = 0${p}`;
        } else if (i >= 10 && j >= 10) {
            b += `${j}x${i} = ${p}`;
        } else if (j == 10) {
            b += `${j}x0${i} = ${p}`;
        } else if (j <= 9 && i <= 9 && p >= 10) {
            b += `0${j}x0${i} = ${p}`;
        } else if (i >= 10 && j < 10) {
            b += `0${j}x${i} = ${p}`;
        } else {
            b += `${j}x${i} = ${p}`;
        }
        if (a * 10 == p) {
            b += ".";
        } else {
            b += ", ";
        }
    }
}
console.log(b) 

/* //[8]
const a = Number(lines[0]);
var b = a * 2;
var c = "";
var sum = 0;
for (let i = 1; i <= b; i += 2) {
    if (i < b - 1) {
        c += i + ", ";
    } else {
        c += i + ".";
    }
}
console.log(c);

//[9]
const a = Number(lines[0]);
for (let i = 1; i <= a; i++) {
    var ast = ""
    for (let j = 1; j <= i; j++) {
        ast += "*" 
    }
    console.log(ast)
}
//[10]

const a = Number(lines[0]);
var m = ""
for (var i = 1; i <= 4; i++) {
    m += i
    console.log(m)
}
//[13]

const altura = Number(lines[0]);
var contador = 1;
for (let i = 1; i <= altura; i++) {
    var line = "";
    for (let j = 0; j < altura; j++) {
        if (j >= altura - i) {
            line += contador + " "
            contador++
        } else {
            line += " "
        }
    }
    console.log(line)
}

//[31]

//[39]
const a = Number(lines[0]);
const b = Number(lines[1]);
var alin = ""
var soma = 0
for (let i = a; i <= b; i++) {
    if (i % 9 == 0) {
        alin += i + " "
        soma = soma + i
    }
}
console.log(alin)
console.log(soma)


//[57]

var a = lines[0].split(" ")
var chama = "";
var chamadnv = "";
for (let i = a.length - 1; i >= 0; i--) {
    chama += a[i];
}

console.log(chama);
console.log(chamadnv); */