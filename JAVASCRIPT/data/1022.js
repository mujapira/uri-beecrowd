"use strict";
var input = require("fs").readFileSync("./input.txt", "utf8");
var lines = input.split("\n");

const a = Number(lines[0]);

// numerador = cima

for (let i = 1; i <= a; i++) {
  let newArray = lines[i].split(" ");
  let cima1 = newArray[0];
  let baixo1 = newArray[2];
  let sinal = newArray[3];
  let cima2 = newArray[4];
  let baixo2 = newArray[6];

  let result = 0;
  let frac = [];

  if (sinal === "+") {
    result = cima1 / baixo1 + cima2 / baixo2;
    frac = [cima1 * baixo2 + baixo1 * cima2, baixo1 * baixo2];
  }
  if (sinal === "-") {
    result = cima1 / baixo1 - cima2 / baixo2;
    frac = [cima1 * baixo2 - baixo1 * cima2, baixo1 * baixo2];
  }

  if (sinal === "*") {
    result = ((cima1 / baixo1) * cima2) / baixo2;
    frac = [cima1 * cima2, baixo1 * baixo2];
  }
  if (sinal === "/") {
    result = cima1 / baixo1 / (cima2 / baixo2);
    frac = [cima1 * baixo2, baixo1 * cima2];
  }
  
  function getFraction(decimal) {
    for (var denominador = 1; (decimal * denominador) % 1 !== 0; denominador++);
    return [decimal * denominador, denominador];
  }

  let fracSimples = getFraction(result);

  console.log(`${frac[0]} / ${frac[1]} = ${fracSimples[0]} / ${fracSimples[1]}`);
}
