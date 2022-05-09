# Exercício 2

## Problema Proposto:

<p align="justify"> Crie uma lista linear que consiga armazenar um conjunto de 100 nomes quaisquer, os quais serão salvos de forma aleatória. Feito a estrutura crie as seguintes ações: </p>


* Uma função que consiga identificar replicações na lista, ou seja, nomes iguais. Remova todas as réplicas sem mover os ”ponteiros“. 
* Como você gerenciaria os espaços em branco para novas inserções? Qual seria o custo
dessas novas inserções?

## Desenvolvimento do Problema

<p align="justify"> O problema foi desenvolvido da seguinte maneira: </p>

<p align="justify"> 1 - A lista vazia é declarada e seus valores são preenchidos com 0 e é setado o primeiro e último valor como 0.

<p align="justify"> 2 - Após declarada a lista, o arquivo para leitura de dados é aberto e a lista é preenchida por 100 nomes quaisquer.

<p align="justify"> 3 - A lista é percorrida e os nomes iguais são encontrados e enviados para o método de remoção.

<p align="justify"> 4 - No método de remoção, os nomes repetidos recebem uma chave de valor falso.
  
<p align="justify"> 5 - Por fim, a lista é mostrado na tela e todos os valores que receberam a chave falso não são mostrados.

## Perguntas:

<p align="justify"> 1 - Como você gerenciaria os espaços em branco para novas inserções? Qual seria o custo
dessas novas inserções?
  
<p align="justify"> Sim, é possível resolver este problema de outras maneiras. Além da que apresentada neste programa, é possível fazer a alocação dinâmica da matriz.</p

