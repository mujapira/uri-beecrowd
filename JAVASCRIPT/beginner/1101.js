"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1099

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');


for (let i = 0; i <= lines.length; i++) {
    var maior, menor;
    var soma = 0;
    var pimba = ""
    let a = lines[i].split(" ").map(num => Number(num));
    if (a[0] <= 0 || a[1] <= 0) {
        break
    }
    if (a[0] >= a[1]) {
        maior = a[0]
        menor = a[1]
    } else {
        maior = a[1]
        menor = a[0]
    }
    for (var j = menor; j <= maior; j++) {
        soma += j
        pimba += j + " "
    }
    console.log(`${pimba}Sum=${soma}`)
}
