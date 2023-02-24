//https://www.urionlinejudge.com.br/judge/en/problems/view/1021
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');
//NOTAS
/* let total = Number(lines[0])
const n100 = Math.trunc(total/100) //5 notas de 100, sobra 76
total -= n100*100 //76
const n50 =  Math.trunc(total/50) //1 nota de 50, sobra 26
total -= n50*50 //26
const n20 = Math.trunc(total/20) //1 nota de 20, sobra 6
total -= n20*20 //6
const n10 = Math.trunc(total/10) //zero notas
total -= n10*10 //6
const n5 = Math.trunc(total/5) //1 nota de 5 sobra 1
total -= n5*5 //1
const n2 = Math.trunc(total/2) //zero notas
total -= n2*2 //1
//MOEDAS 1,75
const m100 = Math.trunc(total/1) //1 moeda de 1, sobra 75
total -= m100*1 //
const m50 = Math.trunc(total/0.5)//1 moeda, sobra 25
total -= m50*.50 // 25
const m25 = Math.trunc(total/0.25)
total -= m25*0.25 // 0
const m10 = Math.trunc(total/0.10)
total -= m10*0.10
const m05 = Math.trunc(total/0.05)
total -= m05*0.05
const m01 = Math.trunc(total/0.01)
total -= m01*0.01
//PRINT
console.log("NOTAS:")
console.log(n100 + " nota(s) de R$ 100.00")
console.log(n50 + " nota(s) de R$ 50.00")
console.log(n20 + " nota(s) de R$ 20.00")
console.log(n10 + " nota(s) de R$ 10.00")
console.log(n5 + " nota(s) de R$ 5.00")
console.log(n2 + " nota(s) de R$ 2.00")
console.log("MOEDAS:")
console.log(m100 + " moeda(s) de R$ 1.00")
console.log(m50 + " moeda(s) de R$ 0.50")
console.log(m25 + " moeda(s) de R$ 0.25")
console.log(m10 + " moeda(s) de R$ 0.10")
console.log(m05 + " moeda(s) de R$ 0.05")
console.log(m01 + " moeda(s) de R$ 0.01") */

let total = Number(lines[0]);
function calculateAndPrint(money) {
    const amount = Math.floor(total / money);
    
    const unit = money > 1 ? "nota" : "moeda";
    
    console.log(`${amount} ${unit}(s) de R$ ${money.toFixed(2)}`);
    
    total = Number((total - (amount * money)).toFixed(2));
}
console.log("NOTAS:");
const notes = [100, 50, 20, 10, 5, 2];
notes.forEach(note => calculateAndPrint(note));

console.log("MOEDAS:");
const coins = [1, 0.5, 0.25, 0.1, 0.05, 0.01];
coins.forEach(coin => calculateAndPrint(coin));