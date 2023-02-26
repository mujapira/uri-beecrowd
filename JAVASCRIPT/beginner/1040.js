
//https://www.urionlinejudge.com.br/judge/en/problems/view/1040
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const [n1, n2, n3, n4] = lines[0].split(" ").map(nume => Number(nume));
const n5 = Number(lines[1]) || 0;
var media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
var novamedia = (media + n5) / 2;
console.log(`Media: ${media.toFixed(1)}`);

if (media >= 7) {
  console.log("Aluno aprovado.")
} else if (media < 5) {
  console.log("Aluno reprovado.")
} else {
    console.log("Aluno em exame.")
    console.log("Nota do exame: " + n5.toFixed(1))
    if (novamedia >= 5) {
      console.log("Aluno aprovado.")
      console.log(`Media final: ${novamedia.toFixed(1)}`)
    } else {
      console.log("Aluno reprovado.")
      console.log(`Media final: ${novamedia.toFixed(1)}`)
    }
}
//gap nos floats entre 5 e 4.9 tem 100 mil numeros