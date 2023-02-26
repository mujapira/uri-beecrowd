//https://www.urionlinejudge.com.br/judge/en/problems/view/1048
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const s = Number(lines[0]);
var plata = 0
var novaplata = 0
if (s <= 2000.00) {
    console.log("Isento")
} else {
    if (s <= 3000.00) {
        novaplata = s - 2000
        plata = novaplata * 0.08
    } else if (s <= 4500.00) {
        plata = 80 + (s - 3000) * 0.18
    } else {
        plata = 80 + 180 + (s - 4500) * 0.28
    }
    console.log(`R$ ${plata.toFixed(2)}`);
}