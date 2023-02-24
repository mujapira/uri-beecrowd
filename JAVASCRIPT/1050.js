//https://www.urionlinejudge.com.br/judge/en/problems/view/1050
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

//rota 1
var ddd = Number(lines[0]);
const a = ["61", "71", "11", "21", "32", "19", "27", "31"];
const b = ["Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"];
let cidade
for (let i = 0; i <= 7; i++) {
    if (a[i] == ddd) {
        cidade = (b[i])
    }
}
if (cidade == undefined) {
    console.log("DDD nao cadastrado")
} else {
    console.log(cidade)
}

//rota 2
var ddd = Number(lines[0]);
const a = ["61", "71", "11", "21", "32", "19", "27", "31"];
const b = ["Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"];
let cidade
let found = false
for (let i = 0; i <= 7; i++) {
    if (a[i] == ddd) {
        cidade = (b[i])
        found = true
    }
}
if (!found) {
    console.log("DDD nao cadastrado")
} else {
    console.log(cidade)
}
