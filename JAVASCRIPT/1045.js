
//https://www.urionlinejudge.com.br/judge/en/problems/view/1045
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const [x, y, z] = lines[0].split(" ").map(num => Number(num));

let a, b, c;
if (x > y && x > z) {
    a = x
    if (y > z) {
        b = y
        c = z
    } else {
        b = z
        c = y
    }
} else if (y > x && y > z) {
    a = y
    if (x < z) {
        b = z
        c = x
    } else {
        b = x
        c = z
    }
} else {
    a = z
    if (y > x) {
        b = y
        c = x
    } else {
        b = x
        c = y
    }
}
if (a >= b + c) {
    console.log("NAO FORMA TRIANGULO");
} else {
    if ((a * a) == (b * b) + (c * c)) {
        console.log("TRIANGULO RETANGULO");
    }
    if ((a * a) > (b * b) + (c * c)) {
        console.log("TRIANGULO OBTUSANGULO");
    }
    if ((a * a) < (b * b) + (c * c)) {
        console.log("TRIANGULO ACUTANGULO");
    }
    if (a === b && b === c) {
        console.log("TRIANGULO EQUILATERO");
    }
    if ((a == b && a !== c) || (a == c && a !== b) || (c == a && a !== b) || (c == b && c !== a)) {
        console.log("TRIANGULO ISOSCELES");
    }
}