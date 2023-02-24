//https://www.urionlinejudge.com.br/judge/en/problems/view/1052
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

function fixCalc(value) {
    return Number(Math.floor(value));
}

const diaI = Number(lines[0].slice(4));
const temI = lines[1].split(" : ").map(num => Number(num));
const horasi = temI[0];
const minutosi = temI[1];
const segundosi = temI[2];
const diaF = Number(lines[2].slice(4));
const temF = lines[3].split(" : ").map(num => Number(num));
const horasf = temF[0];
const minutosf = temF[1];
const segundosf = temF[2];
var w = 0
var x = 0
var y = 0

const a = diaI * 86400 + horasi * 3600 + minutosi * 60 + segundosi;
const b = diaF * 86400 + horasf * 3600 + minutosf * 60 + segundosf;
var c = Math.abs(a - b);

w = fixCalc(c / 86400)
c -= w * 86400
x = fixCalc(c / 3600)
c -= x * 3600
y = fixCalc(c / 60)
c -= y * 60

console.log(`${fixCalc(w)} dia(s)\n${fixCalc(x)} hora(s)\n${fixCalc(y)} minuto(s)\n${fixCalc(c)} segundo(s)`);