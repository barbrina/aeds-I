# Exercício 3

<div style="display: inline-block;">
<img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"/> 
<img src="https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white"/> 
<img src="https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white"/> 
</a> 
</div>
  
## Problema Proposto:

<p align="justify"> O problema da máxima cadeia. Elabore um programa que receba uma cadeias de DNA. Cada posição da cadeia deve conter um códon, ou seja, uma triade de nucleotídeos → T, A, G, C. Feito isso, leia de um arquivo uma sequência de nucleotídios (i.e., ACGTGGCTCTCTAACGTACGTACGTACGGGGTTATATTCGAT) e tente identificar a maior cadeia da lista que se relaciona a essa entrada.
 </p>

## Desenvolvimento do Problema

<p align="justify"> O problema foi desenvolvido da seguinte maneira: </p>

<p align="justify"> 0) Dois arquivos, um contendo uma base de DNA e o outro contendo uma substring de DNA foram criados. Para o funcionamento correto do programa, os arquivos devem estar preenchidos com caracteres de letras maiúsculas, em sequencia e uma linha a mais deve ser adicionada ao final, como segue o exemplo abaixo:
  
<p align="center">
<img src= https://github.com/barbrina/AEDS-I/blob/master/Tipos%20de%20Dados%20Lista/Exerc%C3%ADcio%203/img/Arquivo.PNG>
</p>

<p align="justify"> 1) A lista vazia é declarada e seus valores são preenchidos com 0.

<p align="justify"> 2) Após declarada a lista, o arquivo para leitura de dados é aberto e cada posição da lista é preenchida por 3 bases de DNA, assim formando uma tríade.

<p align="justify"> 3) O mesmo procedimento é realizado com a lista auxiliar, que contém a substring de DNA.

<p align="justify"> 4) Após ambas as listas serem declaradas, começa-se o processo de percorrer a lista de DNA a procura de bases idênticas a lista auxiliar. Quando uma base idêntica é encontrada, seu valor inicial é salvo e a soma de quantidade de bases seguintes idênticas também. Se a sequência encontrada não for igual o tamanho total da substring, o algoritmo continua a percorrer a DNA, a procura da sequência maior, sempre comparando com a maior sequência anterior.
  
<p align="justify"> 5) Por fim, a lista de DNA é mostrada na tela, assim como a maior sequência de códons idênticas a lista auxiliar. 
  
  
## Compilação e Execução

A lista linear disponibilizada possui um arquivo makefile que realiza todo o procedimento de compilação e execução. Para tanto, as seguintes diretrizes devem ser executadas em ordem:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |

## Contatos

<div style="display: inline-block;">
<a href="https://t.me/barbrinas">
<img src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/> 
</a>

<a href="https://www.linkedin.com/in/barbara-gualberto/">
<img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/>
</a>

</div>

<p> </p>


<a style="color:black" href="mailto:barbarabgual@gmail.com?subject=[GitHub]%20Lista%20Linear">
✉️ <i>barbarabgual@gmail.com</i>
</a>

