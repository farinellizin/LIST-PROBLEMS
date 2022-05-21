<h1 align = "center">
  <strong><em>Aplicação de Listas Dinâmicas e Lineares</em></strong>
</h1>

<h4 align = "center">
  Este repositório contém aplicações práticas relacionada ao contéudo teórico de Listas Dinâmicas e Lineares, lecionadas na matéria Algoritmo e Estrutura 
  de Dados I.
</h4><h2 align="center"><strong><em>Sumário</em></strong></h2>

colocar sumario

<h2 align="center"> Propósito </h2>
    <h4 align="center">
        Por meio desta atividade, busca-se compreender e estar apto a manipular o funcionamento de Listas Dinâmicas e Lineares, verificando o sucesso
        do processo por meio da implementação do que se é pedido.
    <h4>

<h2 align="center"> <strong><em>Proposta</em></strong> </h2>

<i>
<ol>
<small>
<h3>Considerando nossos modelos de lista (i.e., linear e dinâmica), realize as solicitações de implementação a seguir, considerando para isso 
estruturar sua solução da seguinte forma:
<ol type="I">
<li>Uma implementação por letra;</li><li>Uma implementação magma que conecte todas as letras por um
único menu para execução. </li></ol></h3> <br>
<li>Escreva uma função recursiva e outra não recursiva para contar o número de elementos pares e impares contidos em uma lista dinâmica.</li>
<li>Crie uma função que simule um pequeno jogo que utiliza duas listas (i.e., L1 e L2). Nesse, cada lista possui tamanho máximo de 3 entradas
e cada posição deve armazenar um número inteiro aleatório entre 1 e 13. Nesse jogo, após preencher ambas as listas, selecione também de forma aleatória
mais um valor entre 1 e 13 e mostre-o na tela. A regra do jogo é a seguinte:
     <ol><li>Ambas as listas devem ser apresentadas por leitura sequencial a partir de suas posições de paridade, ou seja,
    {{L1[0], L2[0]}, {L1[1], L2[1]}, {L1[2], L2[2]}}.</li>
     <li>Cada par deve ser subtraído do valor apresentado e ganha o jogo a lista que apresentar a maior soma final. Mostre o ganhador ao final.</li></ol>
<li>Escreva uma função que receba duas listas x = [x1 , x2 , . . . , xn ] e y = [y1 , y2 , . . . , yn ] e
retorne uma lista z = [(x1 * yn ), (x2 * yn−1), ... , (xn * y1 )]. Ao final, as listas x e y devem estar vazias. </li>
<li>Escreva uma função que receba pares de listas x = [x1 , x2 , ... , xn ] e y = [y1 , y2 , ... , ym ] com n, m > 0 e n = m. Calcule a distância 
euclidiâna entre os múltiplos pares recebidos e encontre os k pares mais próximos.</li>
</ol></small></i>

 <h2 align="center"> Funcionamento </h2>
      <p>
        Inicialmente, torna-se plausível salientar que o programa apresenta uma interface simples, incluindo somente um menu, o qual será
        responsável por captar a interação entre o software e o usuário, podendo visualizá-lo na imagem abaixo:
          <p align="center">
          <img height="250rem" src="/imgs/menu.png">
          </p>
        Por via do supracitado menu, será escolhido o caminho que a aplicação tomará, presente nele qual tecla deve ser pressionada a fim de escolher
      qual das implementações é a pretendida, sendo as opções idênticas às descritas no tópico <strong> Proposta </strong>. <br><br>
      Ainda vale pontuar que este projeto não depende de interações entre usuário e programa a fim de funcionar, haja visto que todo seu funcionamento
      se dá por base de números gerados aleatoriamente, poupando esforço, tempo e erros que podem providos de falhas humanas. <br><br>
      Há também de se entender que todas as implementações encontram-se distribuidas em distintos arquivos, sendo esses os evidenciados na figura abaixo:
      </p>
  
  <h2 align="center">
             Lógicas gerais
             </h2>
  
Percebe-se, pela proposta da atividade, instruções que podem, ou não, gerar dúvida no leitor. Em virtude disso, alguns conceitos que foram abrangidos
como padrão durante o código serão especificados:
   - **_"... que receba duas listas..."_**: para este tipo de instrução, as **Listas** foram criadas dentro da própria função responsável pela imple
  mentação.
   - **_conteúdo das listas_**: assim como seu tamanho, os valores de cada posição das **Listas** foram gerados de forma completamente aleatória, visando
  sempre apresentar conteúdos diferentes a cada iterção que o usuário desejar.
      
<h2 align="center">
             Funções gerais
             </h2>
  
  Embora cada proposta demande lógicas e funções diferentes, há algumas funções que devem ser comentadas devido ao seu constante aparecimento e pelos
  motivos de qual a mesma é usada.
  
  
  
 <h3> Aplicação 1</h3>
 Ainda não feita
 <br>
 <h3> Aplicação 2 </h3>
 <br>
 <h3> Aplicação 3 </h3>
 <br>
 <h3> Aplicação 4 </h3>
 Ainda não feita
 <br>