"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1159
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const qtd = Number(lines[0]);
for (let i = 1; i <= qtd; i++) {
    let b = lines[i].split(" ").map(num => Number(num));
    let pa = b[0];
    let pb = b[1];
    let ga = b[2];
    let gb = b[3];
    let j = 0
    while (pa <= pb && j <= 100) {
        pa = Math.floor(pa + ((ga / 100) * pa))
        pb = Math.floor(pb + ((gb / 100) * pb))
        j++
    }
    if (j <= 100) {
        console.log(`${j} anos.`)
    } else if (j > 100) {
        console.log(`Mais de 1 seculo.`)
    }

}

/*  
    console.log(b[0])
    console.log(b[1])
    console.log(b[2])
    console.log(b[3])
    console.log(pa)
    console.log(pb)
    console.log(ga)
    console.log(gb) 
    console.log(j)
*/