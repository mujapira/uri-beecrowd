//https://www.urionlinejudge.com.br/judge/en/problems/view/1047
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const t = lines[0].split(" ").map(num => Number(num));
var hi = t[0]
var mi = t[1]
var hf = t[2]
var mf = t[3]

if (hi < hf) {
    if (mi == mf) {
        durouH = hf - hi;
        durouM = mi - mf;
    } else if (mi > mf) {
        durouH = (hf - hi) - 1;
        durouM = 60 - (mi - mf);

    } else {
        durouH = hf - hi;
        durouM = mi - mf;
    }
} else if (hi > hf) {
    if (mi == mf) {
        durouH = ((24 - hi) + hf) - 1;
        durouM = mi - mf;
    }
    else if (mi > mf) {
        durouH = ((24 - hi) + hf) - 1;
        durouM = 60 - (mi - mf);
    } else {
        durouH = (24 - hi) + hf;
        durouM = mf - mi;
    }
} else {
    if (mi == mf) {
        durouH = 24;
        durouM = 0;
    } else if (mi > mf) {
        durouH = 23;
        durouM = 60 - (mi - mf);
    } else {
        durouH = 0;
        durouM = mf - mi;
    }
}
console.log(`O JOGO DUROU ${Math.abs(durouH)} HORA(S) E ${Math.abs(durouM)} MINUTO(S)`);