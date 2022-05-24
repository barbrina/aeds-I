<div style="display: inline-block;">
<img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"/> 
<img src="https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white"/> 
<img src="https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white"/> 
</a> 
</div>

# A*, BFS e DFS


## Algoritimo
<div align="justify">
Em nosso algoritmo, utilizaremos o método BFS para encontrar o caminho de saída de uma matriz quadrática que é um labirinto, onde as posições poderão ter dois valores possíveis:
 <ul>
  <li> 0 - Representa os lugares onde pode se passar;</li>
  <li> 1 - Representa os lugares onde NÃO pode se passar, ou seja, as barreiras do labirinto.</li>
 </ul>

Lê-se um arquivo .txt onde:
<ul>
 <li> A primeira linha do arquivo é o tamanho da matriz, e apresenta o número de linhas e número de colunas, respectivamente;</li>
 <li> As outras linhas são as posições onde são encontradas as barreiras do labirinto, ou seja, os locais por onde ele não pode passar.</li>
</ul>
 
 >*Observações:* 
 > - A primeira e a última posição da matriz NÃO podem ter o valor 1 (valor de barreira)
 > - O método de leitura do arquivo permite apenas matrizes menores ou iguais a 9.
>

 Como exemplo, temos o arquivo abaixo, o programa irá ler esse arquivo "Matriz.txt":
 <div style="display: inline-block;" align="center">
  <p> </p>
 <img src=img/arquivo.png alt=arquivo.txt>
  <p> </p>
 </div>
 
 A matriz gerada a partir do arquivo lido será:
  <div style="display: inline-block;" align="center">
   <p> </p>
 <img src=img/matriz.png alt=matriz> 
   <p> </p>
 </div>


# Compilação e Execução

O algoritmo disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

<div>

| Comando                |  Função                                                                                           |
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |

</div>

# Contatos

<div>
<p align="justify"> Thaissa Vitória</p>
<a href="https://t.me/thaissadaldegan">
<img align="center"  src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/> 

<a href="https://www.linkedin.com/in/thaissa-vitoria-daldegan-6a84b9153/">
<img align="center"  src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/>
</a>
</div>


<div>
<p align="justify"> Bárbara Gualberto</p>
<a href="https://t.me/barbrinas">
<img align="center" src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/> 

<a href="https://www.linkedin.com/in/barbara-gualberto/">
<img align="center" src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/>
</a>
</div>



