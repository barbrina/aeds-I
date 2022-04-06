# Contando Instruções

## Problema Proposto:

<p align="justify"> Elaborar um programa que utilize uma matriz N X N, com o valor de N fornecido como entrada do programa, para executar as seguintes operações: </p>

<p align="justify">1) Preencher a matriz N x N com números inteiros aleatórios de 0 a 99;

<p align="justify">2) Considerar a posição Linha 0 e Coluna 0 (0,0) como início;

<p align="justify">3) Considerar a posição (N, N) como posição final;

<p align="justify">4) Percorrer a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;

<p align="justify">5) O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente;

<p align="justify">5.1) Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima. 

<p align="justify">6) - Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.

<p align="justify">Observe um exemplo logo abaixo para uma matriz com N = 7. </p>

<img>

## Desenvolvimento do Problema

<p align="justify"> O problema foi desenvolvido da seguinte maneira: </p>

<p align="justify"> 1 - A matriz foi criada e padronizada com 7 linhas e 7 colunas.

<p align="justify"> 2 - Após declarar a matriz, seus valores são preenchidos com números randômicos de 0 a 99.

<p align="justify"> 3 - O tratamento das regras do jogo é feito através da monitoração dos valores em volta do valor atual e a checagem do maior valor entre eles.=-

<p align="justify"> 4 - Após a checagem, o caminho da matriz é mostrado na tela, assim como a soma de todos os valores que compõem o maior caminho.

<img>

## Perguntas:

<p align="justify"> 1 - Há mais de uma maneira de resolver esse problema?

<p align="justify"> Sim, é possível resolver este problema de outras maneiras. Além da que apresentada neste programa, é possível fazer a alocação dinâmica da matriz.</p>

<p align="justify"> 2 - Há algoritmos em literatura que resolvam esse problema?

<p align="justify"> Há uma série de algoritmos famosos capazes de resolver este problema. Ex.: Quicksort, Bubblesort, etc.</p>

<p align="justify"> 3 - Pode existir mais de um caminho cujo valor total é o máximo?

<p align="justify"> </p>