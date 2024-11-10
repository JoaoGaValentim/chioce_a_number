# Adivinhação de Número - Jogo em C++

Este é um simples jogo de adivinhação de número implementado em C++. O objetivo do programa é adivinhar o número que o usuário está pensando, dentro de um intervalo determinado.

## Como Funciona?

1. O programa pede para o usuário escolher um número dentro de um intervalo específico (por exemplo, de 1 a 100).
2. O programa faz uma série de perguntas ao usuário (se o número é maior ou menor que um valor sugerido) até que o número correto seja adivinhado.

## Funcionalidades

- Adivinhação do número dentro de um intervalo predeterminado.
- O programa ajusta sua busca baseado nas respostas do usuário.
- Uso de uma técnica de busca binária para tornar o jogo mais eficiente e interessante.

## Pré-requisitos

Para rodar este programa, é necessário ter um compilador C++ instalado em sua máquina. Por exemplo, você pode usar o [g++](https://gcc.gnu.org/) ou [Clang](https://clang.llvm.org/).

## Como Rodar

Clone o repositório ou baixe o arquivo `.cpp`:

```bash
git clone https://github.com/JoaoGaValentim/choice_a_number.git
```

```bash
cd choice_a_number
mkdir build
cd build
cmake ..
```