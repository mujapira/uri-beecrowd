//https://www.urionlinejudge.com.br/judge/en/problems/view/1046
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const [a, b] = lines[0].split(" ").map(num => Number(num));
if (a > b) {
    const x = (24 - a) + (b);
    console.log(`O JOGO DUROU ${Math.trunc(x)} HORA(S)`)
} else if (a === 0 & b === 0) {
    console.log("O JOGO DUROU 24 HORA(S)");
} else if (a == b) {
    console.log("O JOGO DUROU 24 HORA(S)");
} else {
    const y = (b - a);
    console.log(`O JOGO DUROU ${Math.trunc(y)} HORA(S)`)}
