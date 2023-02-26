"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1159
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

let cases = Number(lines[0]);
let numbah = cases
for (let i = 0; i < 100; i++) {
    console.log(`N[${i}] = ${round(numbah, 4)}`)
    numbah = (numbah / 2)

}
function round(num, frac) {
    let str = String(num);

    if (str.includes('e')) {
        return '0.' + ''.padEnd(frac, '0');
    }

    if (!str.includes('.')) {
        return str + '.' + ''.padEnd(frac, '0');
    }
    
    str = str.slice(0, str.indexOf('.')) + str.slice(str.indexOf('.')).padEnd(frac + 2, '0');

    str = str.slice(0, str.indexOf('.')+frac+2);
    const lastNum = Number(str[str.length - 1]);
    
    if (lastNum >= 5) {
        str = str.split('');
        str[str.length - 2] = Number(str[str.length - 2]) + 1;
        str = str.join('');
    }

    return str.slice(0, str.length - 1);
}