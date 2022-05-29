<div style="display: inline-block;">
<img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"/> 
<img src="https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white"/> 
<img src="https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white"/> 
</a> 
</div>

# A*, BFS e DFS

## Depth-First Search-DFS
<div align="justify">
 A busca em profundidade (DFS) é um algoritmo utilizado para percorrer ou buscar itens dentro das estruturas de dados grafos ou árvores. Sua característica básica é percorrer todos os nós filhos ao nó raiz o mais profundo possível para somente depois retroceder. Iremos compreender a aplicação dessa mecânica no decorrer desse algoritmo.
	<p> </p>	
 Existem várias formas de implementar uma busca em profundidade. Pela natureza de percorrer o grafo ou árvore enquanto houverem filhos não visitados, uma solução natural é utilizar recursão. Outra abordagem é utilizar um algoritmo iterativo e utilizar uma pilha (LIFO) para controlar os nós a serem visitados.
</div>

### A Estrutura Pilha
<div align="justify">
A pilha possue uma regra básica que deve ser obedecida, essa se refere a forma como inserimos e removemos elementos dessa estrutura. Antes de iniciarmos essa discussão, observe um exemplo ilustrativo desse tipo de dados na figura abaixo.</div>

<div align="center">
	<p> </p>
	<img src="img/pilha.png"/> 
	<p> </p>
</div>
 
## Breadth-first search-BFS
<div align="justify">
 A busca em largura (BFS) é um algoritmo utilizado para percorrer ou buscar itens dentro das estruturas de dados grafos ou árvores. Como característica temos que a busca sempre ocorre nos filhos ou nós mais próximos ao nó pelo qual a busca foi iniciada. Vamos entender isso melhor no decorrer desse artigo. A imagem abaixo exemplifica a busca em largura em grafo.

 A busca em largura pode ser implementada de várias formas. As mais utilizadas são através de recursão, que utiliza pilha (LIFO), ou iterativamente, através de uma fila (FIFO), que será o caso desse algoritmo.
</div>

### A Estrutura Fila Dinâmica
<div align="justify">
 Na estrutura fila dinâmica, lidamos com ponteiros, criamos blocos em memória, tratamos do acesso e navegação utilizando o ponteiro próximo ( prox ) e, com isso, definimos e manipulamos os ponteiros frente e fundo sob um modelo circular, como na imagem abaixo. 

<div align="center">
 <p> </p>
 <img src="img/fila.png" alt=RepresentaçãoFila>
 <p> </p>
</div>

  Para inserções, utilizamos sempre o ponteiro de fundo. Em contra partida, utilizamos o ponteiro de frente para as remoções. Essa característica torna esse modelo de estrutura em um modelo do tipo First In First Out - FIFO. Mesma regra encontrada em sua vertente estática [vide git](https://github.com/mpiress/linear_queue).

 Com relação às estruturas dinâmicas básicas de lista e pilha, há uma diferença sutil de construção que deve ser observado na fila, a ligação do último elemento inserido à "cabeça" da estrutura. Essa modificação fará com que a estrutura se comporte exatamente da mesma forma de sua variante estática,ou seja, de forma circular.
</div>

Observe que nesse tipo de estrutura há apenas um <b>único ponteiro</b> chamado <b>Topo</b>. Os métodos associados ao tipo pilha, os quais impõem as regras, são chamados PUSH (i.e., empilhar) e POP (i.e., desempilhar).

>Logo, temos como regra básica dessa estrutura: 
> 1. O último elemento que entra sempre será o primeiro a ser removido. 

Como a pilha é definida a partir de um vetor, muitas das caracteristicas de implementação observadas no tipo lista são aproveitados para compor sua execução. A diferença está apenas na composição da regra de manipulação, o que as diferencia em termos de execução. 

</div>

## A*
<div align="justify">
O algoritmo A* é um dos mais utilizados em situações de pathfinding, ou busca de caminhos. Ele otimiza o algoritmo do BFS em dois aspectos para tornar o seu funcionamento mais eficiente:

<ul>
 <li> Ele utiliza uma estrutura de dados chamada Fila de prioridade para organizar as posições que serão exploradas;</li>
<li>Além de salvar os caminhos já calculados (como BFS faz), ele também utiliza heurísticas para estimar em cada ponto quanto ainda falta para o final, buscando direcionar a escolha do próximo vértice.</li>
 </ul>
 
A ideia do algoritmo é tentar acertar o menor caminho o mais rápido possível. Por isso ele olha tanto para o quanto ele já percorreu como para o quanto ainda falta na hora de estimar se um caminho é bom ou não. Ele pode não acertar de primeira, mas ele converge para o menor caminho muito mais rápida e precisamente do que as buscas por DFS e BFS conseguem fazer. De certa forma, esse algoritmo é uma combinação das duas abordagens que foram apresentadas nas seções anteriores dessa aula, utilizando o que há de melhor em cada um dos métodos.

Por convergir mais rápido, o algoritmo A* acaba explorando menos posições para achar a solução, e consequentemente possui uma performance melhor. </div>

### A Fila de Prioridade
<div align="justify">
Nessa estrutura, foi definido um critério de prioridade, e os elementos que mais atendem esse critério são os primeiros a serem acessados em uma consulta à estrutura. Por exemplo, se for definida uma Fila de prioridade para valores inteiros, e que o critério é o menor valor, então o menor valor existente entre os elementos da Fila será o primeiro a ser acessado em uma consulta. Independentemente da sequência em que você realiza a inserção dos valores, o menor valor sempre será o primeiro a sair da Fila. Ou seja, o menor critério sempre fura para o começo da fila, porque tem a prioridade.
</div>

### Distância Euclidiana 

<p> Em matemática, distância euclidiana (ou distância métrica) é a distância entre dois pontos, que pode ser provada pela aplicação repetida do teorema de Pitágoras. Aplicando essa fórmula como distância, o espaço euclidiano torna-se um espaço métrico.</p>

$$d(x,y)=\sqrt{ \left(\sum_{i=1}^n (x_i - y_i)^2 \right) } $$

### Distância Manhattan

<p>A distância de Manhattan (“City Block” ou “Geometria do Táxi”) é uma forma de geometria em que a usual métrica da geometria euclidiana é substituída por uma nova métrica em que a distância entre dois pontos é a soma das diferenças absolutas de suas coordenadas. </p>

$$d(x,y)=\sum_{i=1}^n |x_i - y_i|$$

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
	
<p>Criou-se um um menu onde o usuário escolhe entre dois métodos distintos de busca: o busca em profundidade (DFS) e o busca em largura (BFS). Caso o usuário escolha o método de busca em largura, a matriz será printada na tela e o número de interações necessárias para chegar até o final é mostrado. Caso o usuário escolha o método de busca em profundidade, ele ainda tem mais duas escolhas: se o BFS irá percorrer utilizando o cálculo de heurística ou não e qual o cálculo de heurística desejado, a distância de Manhattan ou a distância Euclidiana. Por fim, a matriz e o número de interações necessária para chegar até o final da matriz é mostrado.</p>
 
 A matriz gerada a partir do arquivo lido será:
  <div style="display: inline-block;" align="center">
   <p> </p>
 <img src=img/matriz.png alt=matriz> 
   <p> </p>
 </div>
	
<p> O programa funciona da seguinte maneira: </p>
	
<ul>
<li>Após a escolha do método de distância, o BFS é chamado e a cada posição da matriz que ele percorre é adicionado a uma fila;</li>
<li>A cada enfileiramento, o cálculo da heurística é feito, e com os valores recebidos, a fila é ordenada;</li>
<li>Quando a fila é ordenada, o caminho mais próximo ao final da matriz se torna o primeiro valor da fila, e as posições em volta dele são avaliados;</li>
<li>Este método se segue até o final da matriz, e o número de interações é demonstrado na tela.
</li>
</ul>	
	
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



