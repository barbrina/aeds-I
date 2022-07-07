<div style="display: inline-block;">
<img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"/> 
<img src="https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white"/> 
<img src="https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white"/> 
</a> 
</div>

# Tabela Hash

<p> Implementação de duas tabelas hash: </p>

<p> I) endereçamento fechado e; </p>
<p> II) endereçamento aberto por hash dupla. </p>

<p> O trabalho deve receber diretamente no seu código um vetor de no mínimo 20 valores inteiros, os quais serão utilizados como entrada  para as duas estruturas que, por sua vez, são criadas com o dobro do tamanho do vetor (i.e., número primo maior que esse valor dobro). </p>

<p> Feito isso, como resultado da execução deve-se apresentar o número de colisões ocorridas para ambas as estruturas quando o mesmo vetor é armazenado. Por fim, contemplar no README.mb uma breve discussão dos motivos que levaram uma estrutura a apresentar melhores resultados. </p>

## Endereçamento fechado

<p> Também encontrado como Overflow Progressivo Encadeado é um algoritmo que utiliza uma lista encadeada para cada endereço da tabela. Uma vantagem do endereçamento fechado é que o processo de construção é simples e só sinônimos são acessados com maior tempo em uma busca. Uma desvantagem é que é necessário um campo extra para os ponteiros de ligação e de que é necessário um tratamento especial das chaves: as que estão com endereço base e as que estão encadeadas. </p>

<p> No endereçamento fechado a busca é feita, primeiramente, calculando-se o
valor da função hash para a chave apresentada como entrada.
Feito a conversão da chave em uma posição, o dado é encontrado
caminhando-se sequencialmente pela lista linear </p> 


<div align="center">
 <p> </p>
 <img src="img/tabelafechada.png">
 <p> </p>
</div>

<p> Outra desvantagem é A possibilidade de se obter uma lista linear sequêncial. </p>

## Endereçamento aberto

<p> Endereçamento aberto é utilizado quando o número de registros a serem armazenados na tabela puder ser previamente estimados. </p>

> Para que essa estratégia corresponda bem as espectativas é preciso manter o fator M > N, onde, M é o tamanho da tabela e N o número de elementos a serem inseridos.

<p> As características dessa estratégia tornam possível a alocação de todos os registros no próprio espaço da tabela sem a necessidade de listas encadeadas auxiliares </p>

### Endereçamento aberto duplo

> Note que o conceito de hash linear pode não gerar um bom espalhamento dos dados pelo vetor. Para isso, tem-se o hashing duplo ou re-hash

<p> No hash duplo não há incrementos em 1 a cada interação. Nesse, uma segunda
função hash (função auxiliar) é utilizada para calcular a nova posição. </p>

<p> Uma vantagem é que o endereçamento aberto de hash dupla tende a espalhar melhor as chaves pelos endereços disponíveis. Já uma desvantagem é de que os endereços podem estar muito distântes um do outro fazendo com que o princípio da localidade seja violada. Isso provoca seeking adicionais. </p>

## Desenvolvimento do problema

### Hash fechada

### Hash aberta dupla



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

