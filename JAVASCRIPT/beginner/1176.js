"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1159
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

let maior = Math.max(...lines.slice(1));
let fibo = [0, 1];
for (let i = 0; i <= maior; i++){
    let sum = fibo[i] + fibo[i + 1];
    fibo.push(sum);
}

const test_cases = Number(lines[0]);
for (let i = 1; i <= test_cases; i++) {
    let cases = Number(lines[i]);
    console.log(`Fib(${cases}) = ${fibo[cases]}`);
}
