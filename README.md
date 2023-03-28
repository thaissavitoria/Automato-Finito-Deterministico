# Implementando um Autômato Finito Determinístico
![Linguagem](https://img.shields.io/badge/Linguagem-C%2B%2B-blue)
![ISO](https://img.shields.io/badge/ISO-Linux-blueviolet)
[![requirement](https://img.shields.io/badge/IDE-Visual%20Studio%20Code-informational)](https://code.visualstudio.com/docs/?dv=linux64_deb)

## Sumário

<!--ts-->
   * [Problema Proposto](#problema-proposto)
   * [Autômato Finito Determinístico](#autômato-finito-determinístico)
   * [Implementação](#implementação)
   * [Resultados e Análises](#resultados-e-análises)
   * [Compilação e Execução](#compilação-e-execução)
   * [Contato](#contato)
<!--te-->

## Problema Proposto
<div align="justify">Elabore um algoritmo que simule a implementação de Autômato Finito Determinístico.
</div>

## Autômato Finito Determinístico

Um autômato é uma abstração que representa matematicamente o que é possível fazer com um computador. 
Um autômato finito é aquele que possui uma quantidade LIMITADA de memória, tem baixo custo de recursos e exigem um bom planejamento. Também são chamados de máquinas de estados finitos, e são usados em controladores simples e para o reconhecimento de padrão de dados. Normalmente são representados por um diagrama de estados (Figura 1).

<div align="center">
<img src=imgs/diagrama.png><p></p>
Figura 1: Diagrama de estados.
</div>
<br>

Já o autômato finito determinístico, é um 5-upla ($Q$, $\Sigma$, $\delta$, $q_0$, $F$), onde:

- $Q$ = conjunto de estados finitos;
- $\Sigma$ = alfabeto;
- $\delta: Q$ x $\Sigma \rightarrow Q$ = função de transição;
- $q_0$ = estado inicial;
- $F \subseteq Q$ = conjunto de estados finais.

Nesse modelo, para cada símbolo do alfabeto existe exatamente um estado para qual o autômato pode transitar a partir do único estado ativo.


## Implementação
 O autômato escolhido para ser representado foi o com as seguintes características:

 - $Q=q1,q2$;
- $\Sigma = 0,1$;
- $q_1$ = estado inicial;
- $F =q1$.

A função deste autômato pode ser descrita pelo seguinte diagrama:

<div align="center">
<img src=imgs/automato.png><p></p>
Figura 2: Diagrama de estados do autômato implementado.
</div>
</br>

Ou seja:

<div align="center">

| $\delta$ | 0 | 1 |                   
| -----------| --| --|
|  q1        |q1 | q2|
|  q2        |q1 | q2|

</div>

Logo, percebe-se que a linguagem deste autômato se da por:
</br>

<div align="center">

$L(M)=${ $w\in$ {0,1} $^*|$ w é a cadeia vazia ou w termina com 0(pares)}

</div>

#### O código

<div align="justify">

Para desenvolver o problema, foram usadas strings para coletar o estado inicial ($q_1$), o estado ativo e a cadeia que se deseja analisar.
É especificado o alfabeto e a condição para pertencimento à linguagem. Pede-se o usuário a cadeia binária que se deseja testar e guarda-se.
Então, por meio de um for que percorre cada caracter da string, e confere se ele é pertencente ao alfabeto. 
Também, é passado como parâmetro na `função`, que recebe o estado ativo e esse caracter, que é o símbolo que ditará o próximo estado ativo. No momento inicial, o estado ativo é o inicial ($q_1$), e a cada loop do for ele se torna aquele o qual a função devolver.
Quando a execução do loop é encerrada, ou seja, quando a cadeia acaba, confere-se se o estado ativo é o estado final por meio de um if e retorna se a cadeia é aceita ou não. Além de mostrar também a transição de estados pela qual ela passou em cada iteração do loop.
</div>

## Resultados e Análises
 Abaixo, temos alguns exemplos de execução com cadeias de diferentes tamanhos e configurações.

<div align="center">
<img src=imgs/errada.png><p></p>
Figura 3: Cadeia digitada errada e cadeia rejeitada.
</div>
</br>

<p></p>

<div align="center">
<img src=imgs/certa.png><p></p>
Figura 4: Cadeia aceita.
</div>
</br>
  
## Compilação e Execução

<div align="justify">
O algoritmo disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:
</div>
<p></p>
<div align="center">

| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
|  `make m`              | Executa o make e o make run.                                                                      |
|  `make r`              | Executa make clean, make e make run        .                                                      |
</div>

## Contato

<div>
<p align="justify"> Thaissa Vitória</p>
<a href="https://t.me/thaissadaldegan">
<img align="center"  src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/> 

<a href="https://www.linkedin.com/in/thaissa-vitoria-daldegan-6a84b9153/">
<img align="center"  src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/>
</a>
</div>
