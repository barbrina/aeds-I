# Exercício 1

## Problema Proposto:

<p align="justify">  Faça um diagrama para representar uma inserção, remoção e pesquisa em uma lista linear. </p>

## Desenvolvimento do Problema

<p align="justify">Listas definem uma estrutura composta de operações de inserção, remoção e localização de elementos. Para a criação da TAD lista é necessário um conjunto de operações, sendo esse determinado pela aplicação e/ou problema a ser resolvido </p>

<p align="justify"> O diagrama começa pelo início, em que os dados da lista são lidos pela leitura de um arquivo. </p>

<p align="justify"> Estes dados são inseridos em uma lista através do método de inserção. Este método consiste em inserir valores na última posição de um vetor até que a lista esteja completamente cheia. </p>

<p align="justify"> Para o método de pesquisa, após a lista estar completa, uma variável recebe o valor primeiro. Em seguida, um loop é realizado e é somado a variável +1 quando o vetor[i] não é igual ao valor que se esteja procurando. O loop é encerrado quando se encontra o valor ou quando após percorrer toda a lista, o valor não é encontrado. O diagrama se encerra. </p>

<p align="justify"> Para o método de remoção, após utilizar o método de pesquisa, o índice de onde se encontra o valor é utilizado em outro loop. Neste segundo loop, ele segue o tamanho da lista, a partir do índice encontrado, sempre somando +1 a este. Ou seja, sempre atribui o valor da frente ao valor de trás, a partir do valor que será removido. Por fim, o último valor da lista é subtraído, visto que um elemento da lista foi retirado. O diagrama se encerra. </p>


<img src=https://github.com/barbrina/AEDS-I/blob/master/Tipos%20de%20Dados%20Lista/Exerc%C3%ADcio%201/Diagrama.png>
</p>
  
