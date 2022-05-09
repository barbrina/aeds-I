# Exercício 2

## Problema Proposto:

<p align="justify"> Crie uma lista linear que consiga armazenar um conjunto de 100 nomes quaisquer, os quais serão salvos de forma aleatória. Feito a estrutura crie as seguintes ações: </p>


* Uma função que consiga identificar replicações na lista, ou seja, nomes iguais. Remova todas as réplicas sem mover os ”ponteiros“. 
* Como você gerenciaria os espaços em branco para novas inserções? Qual seria o custo
dessas novas inserções?

## Desenvolvimento do Problema

<p align="justify"> O problema foi desenvolvido da seguinte maneira: </p>

<p align="justify"> 0 - Um arquivo com 100 nomes é criado e uma linha a mais é adicionada ao final do arquivo.

<p align="justify"> 1 - A lista vazia é declarada e seus valores são preenchidos com 0 e recebem uma chave “true”.

<p align="justify"> 2 - Após declarada a lista, o arquivo para leitura de dados é aberto e a lista é preenchida por 100 nomes quaisquer.

<p align="justify"> 3 - A lista é percorrida e os nomes iguais são encontrados e enviados para o método de remoção.

<p align="justify"> 4 - No método de remoção, os nomes repetidos recebem uma chave de valor “false”.
  
<p align="justify"> 5 - Por fim, a lista é mostrado na tela e todos os valores que receberam a chave “false”, ou seja, nomes repetidos, não são mostrados.
  
<p align="center">
<img src=https://github.com/barbrina/AEDS-I/blob/master/Tipos%20de%20Dados%20Lista/Exerc%C3%ADcio%202/img/Lista%20de%20Nomes.png>
</p>

## Perguntas:

<p align="justify"> 1 - Como você gerenciaria os espaços em branco para novas inserções? Qual seria o custo dessas novas inserções?
  
<p align="justify"> Os nomes removidos da lista ainda existem, apenas recebem uma chave “false” para que não sejam mostrados na tela. Dito isso, para novas inserções, o algoritmo faria uma varredura pela lista linear a procuras destas chaves e inseriria um novo nome a elas, assim como setaria novamente o valor da chave para “true”. O custo para estas novas inserções seria n, pois ele só percorre a lista uma única vez para cada nova inserção. </p

