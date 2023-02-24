"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1131

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var total = 1;
var vInt = 0;
var vGrem = 0;
var draw = 0;
for (let i = 0; i < lines.length; i+=2) {
    let a = lines[i].split(" ").map(num => Number(num));
    console.log("Novo grenal (1-sim 2-nao)");
    if (a[0] > a[1]) {
        vInt++;
    } else if (a[0] < a[1]) {
        vGrem++;
    } else if (a[0] === a[1]) {
        draw++;
    }

    if (lines[i + 1] == 1) {
        total++;
        continue;


    } else {
        console.log(`${total} grenais`);
        console.log(`Inter:${vInt}`);
        console.log(`Gremio:${vGrem}`);
        console.log(`Empates:${draw}`);
        if (vInt > vGrem) {
            console.log(`Inter venceu mais`);
        } else if (vInt < vGrem) {
            console.log(`Gremio venceu mais`);
        }
        break
    }
}
