//https://www.urionlinejudge.com.br/judge/en/problems/view/1049
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const [vertebracao, tipo, alimentacao] = lines;

if (vertebracao === "vertebrado") {
    if (tipo === "ave") {
        if (alimentacao === "carnivoro") {
            console.log("aguia")
        } else {
            console.log("pomba")
        }
    } else {
        if (alimentacao === "onivoro") {
            console.log("homem")
        } else {
            console.log("vaca")
        }
    }
} else {
    if (tipo === "inseto") {
        if (alimentacao === "hematofago") {
            console.log("pulga")
        } else {
            console.log("lagarta")
        }
    } else {
        if (alimentacao === "hematofago") {
            console.log("sanguessuga")
        } else {
            console.log("minhoca")
        }
    }
}