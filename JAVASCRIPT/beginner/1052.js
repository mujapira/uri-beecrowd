//https://www.urionlinejudge.com.br/judge/en/problems/view/1052
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const n = lines[0]
const a = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"];
console.log(a[n - 1])