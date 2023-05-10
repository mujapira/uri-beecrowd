"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1159
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');


let arrayEven1 = [];
let arrayEven2 = [];
let arrayOdd1 = [];
let arrayOdd2 = [];
let kEven1 = 0;
let kEven2 = 0;
let kOdd1 = 0;
let kOdd2 = 0;

for (let i = 0; i < 15; i++) {
    let cases = Number(lines[i]);
    if (cases % 2 == 0) {
        kEven1++;
        if (kEven1 <= 4) {
            arrayEven1.push(cases);
        }
        else if (kEven1 > 4) {
            arrayEven2.push(cases);
            kEven2++;
        }
    } else if (cases % 2 !== 0) {
        kOdd1++
        if (kOdd1 <= 4) {
            arrayOdd1.push(cases);
        }
        else if (kOdd1 > 4) {
            arrayOdd2.push(cases);
            kOdd2++;
        }
    }
}
for (let i = 0; i < 15; i++) {
    console.log(`arrayEven1[j]`)
    console.log(`arrayOdd1[j]`)
    console.log(`arrayEven2[j]`)
    console.log(`arrayOdd2[j]`)
}
