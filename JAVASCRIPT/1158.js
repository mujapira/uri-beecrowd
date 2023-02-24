"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1145
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const a = Number(lines[0]);
for (var i = 1; i <= a; i++) {
    var b = lines[i].split(" ").map(num => Number(num))
    if (b[0] % 2 == 0) {
        var pimba = 0
        var miau = b[0] + 1
        for (var j = 0; j < b[1] * 2; j += 2) {
            pimba = pimba + (miau + j)
        }
        console.log(pimba)
    } else if (b[0] % 2 !== 0) {
        miau = b[0]
        pimba = 0
        for (var m = 0; m < b[1] * 2; m += 2) {
            pimba = pimba + (miau + m)
        }
        console.log(pimba)
    }
}


/* function contaai(a, b, k) {
    if ( b == 0) {
        return 0
    }
    if (b == k) {
        return a
    }
    if (a % 2 == 0) {
        a = a + 1
        return a + contaai(a + 2, b, k + 1)
    } else if (a % 2 !== 0) {
        return a + contaai(a + 2, b, k + 1)
    }
}
console.log(contaai(b[0], b[1], 1)) */