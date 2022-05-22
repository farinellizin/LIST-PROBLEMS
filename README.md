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
      Há também de se entender que todas as implementações encontram-se distribuidas em distintos arquivos, sendo esses os evidenciados na figura abaixo, seguida da funcionalidade de cada um deles.
          <p align="center">
            <br>
          <img height="100rem" src="/imgs/files.png">
          </p>
      </p>
  
   - **_main.cpp_**: utilizado como forma de juntar todas as funções e inseri-lás em um menu pelo qual o usuário poderá selecionar qual deseja.
   - **linearlist.hpp_**: utilizado na criação de structs e declaração de funções que visam suprir as necessidades voltadas às **Listas Lineares**.
   - **_linearlist.cpp_**: utilizado como forma de implementar as funções anteriormente criadas voltadas às **Listas Lineares**.
   - **_dynamiclist.hpp_**: utilizado na criação de structs e declaração de funções que visam suprir as necessidades voltadas às **Listas Dinâmicas**.
   - **_dynamiclist.cpp_**: utilizado como forma de implementar as funções anteriormente criadas voltadas às **Listas Dinâmicas**.
  
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
  
  Embora cada proposta demande de lógicas e funções diferentes, há algumas funções que devem ser comentadas devido a constante recorrência e pelos
  motivos de qual a mesma é usada.
  
   - **_run()_**: a função run é do tipo <i>void</i>, e foi criada visando deixar a função principal, <i>main</i>, a mais limpa possível. Tendo isso sendo entendido, na função em questão se encontra o menu que pôde ser visto no tópico **Funcionamento**, alem de condicionais que definirão qual função será chamada, sendo uma para cada proposta.
   - **_rand()_**: rand é uma função built-in presente na biblioteca <i><time.h></i>, e foi constantemente utilizada para gerar qualquer tipo de valor aleatório que fosse necessário, como relatado no tópico **Lógicas gerais**.
   
<h2 align="center">
             Resoluções detalhadas
             </h2>
  
 <h2> Aplicação 1</h2>
 Ainda não feita
 <br>
 <h2> Aplicação 2 </h2>
 Recapitulando o que é pedido na segunda proposta...
  <br><br>
  <strong><i>Crie uma função que simule um pequeno jogo que utiliza duas listas (i.e., L1 e L2). Nesse, cada lista possui tamanho máximo de 3 entradas
e cada posição deve armazenar um número inteiro aleatório entre 1 e 13. Nesse jogo, após preencher ambas as listas, selecione também de forma aleatória
mais um valor entre 1 e 13 e mostre-o na tela. A regra do jogo é a seguinte:
     <ol><li>Ambas as listas devem ser apresentadas por leitura sequencial a partir de suas posições de paridade, ou seja,
    {{L1[0], L2[0]}, {L1[1], L2[1]}, {L1[2], L2[2]}}.</li>
     <li>Cada par deve ser subtraído do valor apresentado e ganha o jogo a lista que apresentar a maior soma final. Mostre o ganhador ao final.</li></i></strong>
    
### Dissecando a proposta
   - A partir do que nos foi dado, inicialmente, sabemos que serão necessário duas **Listas Lineares**, uma vez que nos foi dado o exato tamanho que elas devem ter. Além disso, deve-se ter em mente que será preciso preenchê-lás com valores aleatórios entre 1 e 13. Ademais, precisar-se-á de um número aleatório avulso, também no intervalo de 1 a 13. Será preciso, ainda, imprimi-lás no formato de pares ordenados, e por fim, juntar tudo como forma de concluir o que se pede.
    
### Implementando
Como pontapé inicial, foram criadas funções referentes à manipulaçôes de **Listas**, as quais não serão salientadas haja visto que não representam o foco da proposta.
    Inicialmente, foram feitas duas **Listas Lineares** vazias, por meio da função **create_empty_list()**: <br>
```c++
 void create_empty_list(List *l){
      l -> first = 0;
      l -> last  = 0;
 }
```
Sendo as **Listas**, definitivamente criadas e feitas vazias, por: 
```c++
create_empty_list(&list_1);
create_empty_list(&list_2);
```
Na sequência, como forma de preenchê-lás aleatoriamente, foi utilizada a função **_fill_list_ramdomly()_**:
```c++
void fill_list_ramdomly(List *l) {
    srand(time(NULL));
    int value;
    Item aux;

    for (int i = 0; i < MAXTAM; i++) {
        value = rand() % 13 + 1;
        aux.val = value;
        list_insert(l, aux);
    }
}
```
Sendo as **Listas** definitamente preenchidas por:
```c++
fill_list_ramdomly(&list_1);
sleep(1);
fill_list_ramdomly(&list_2);
```             
Há de se salientar que foi usada a função **sleep(1)** a fim de causar um leve congelamento ao código, uma vez que a execução é muito rápida e a função utilizada para criação obtenção de números aleatório se baseia no horário do próprio computador, se não houvesse uma pausa, os números gerados seriam idênticos para as duas listas.

Seguindo, pede-se para apresentar as **Listas** em leitura sequencial, ou na forma de pares ordenados, caso prefira, e para tal, foi criada a função **_sequencial_reading()_**:
```c++
void sequencial_reading(List *list_1, List *list_2) {
    cout << endl << "\t\t\t     {";
    for (int i = 0; i < MAXTAM; i++) {
        cout << "(" << list_1 -> vet[i].val << ", " << list_2 -> vet[i].val << ")";
    }
    cout << "}" << endl << endl;
}
```             
Sendo as **Listas** definitivamente lidas de tal forma por:
```c++
sequencial_reading(&list_1, &list_2);
```      
Chegamos a parte de obtermos o valor intermediário, aquele que que será utilizado para realizar as devidas subtrações, como demandado pela proposta. Para isso, mais uma vez recorreremos a função **_rand()_**: 
```c++
intermediate_value = rand() % 13 + 1;
```
Após todos os passos anteriores, basta subtrairmos esse valor em todos os elementos de ambas as **Listas** e, para tal, foi criada a função **_subtracting_intermediate_value()_**, implementada da seguinte forma:
```c++
void subtracting_intermediate_value(List *list, int intermediate_value) {
    for (int i = 0; i < MAXTAM; i++) {
        list -> vet[i].val = list -> vet[i].val - intermediate_value;
    }
}
```
Por fim, apenas é necessário mostrar, sequencialmente, as **Listas** após tal subtração, utilizando-se da função **_sequencial_reading()_**.
    
É mostrado o valor que cada um dos jogadores obteve, por meio da função **_list_sum()_**:
```c++
int list_sum(List *list) {
    int sum = 0;
    for (int i = 0; i < MAXTAM; i++) {
        sum += list -> vet[i].val;
    }

    return sum;
}
```
Sendo seu resultado atribuído à variáveis de inteiro, buscando passá-las como parâmetro para uma ultima função, a qual verificará qual dos jogadores foi o vencedor:
    
```c++
sum_list_1 = list_sum(&list_1);
cout << "\t\t- Player 1, your cards' sum is: " << sum_list_1 << endl;
sum_list_2 = list_sum(&list_2);
cout << "\t\t- Player 2, your cards' sum is: " << sum_list_2 << endl << endl;
```
Finalmente, é utilizada a função **_decide_winner()_**, que de fato, decidirá quem venceu (ou empatou):

```c++
void decide_winner(int sum_list_1, int sum_list_2) {
    if (sum_list_1 > sum_list_2) {
        cout << "\t\t\t ~ Player 1, you won the game! ~" << endl;
    } else if (sum_list_2 > sum_list_1) {
        cout << "\t\t\t ~ Player 2, you won the game! ~" << endl;
    } else {
        cout << "\t\t\t ~ No winners for today, tied game :( ~" << endl;
    }
}
```
    
Chamada na função por:
```c++
decide_winner(sum_list_1, sum_list_2);
```
Todas as funções supracitadas se encontram dentro de uma função chamada **_problem_1_b()_**, sendo todas essas junções podendo ser visualizadas em seu resultado final:
```c++
void problem_1_b() {
    List list_1, list_2;
    int intermediate_value, sum_list_1, sum_list_2;

    cout << endl << endl << "-------------------------------------------------------------------------------------";
    cout << endl << endl << "\t\t\t\t    Loading..." << endl << endl;

    create_empty_list(&list_1);
    create_empty_list(&list_2);

    fill_list_ramdomly(&list_1);
    sleep(1);
    fill_list_ramdomly(&list_2);

    cout << endl << "\t\t- Both lists presented by its parity positions: " << endl;
    sequencial_reading(&list_1, &list_2);
    
    sleep(1);
    intermediate_value = rand() % 13 + 1;
    cout << "\t\t- The intermediate value to run the game is: " << endl << endl;
    cout << "\t\t\t\t\t{" << intermediate_value << "}" << endl << endl;

    subtracting_intermediate_value(&list_1, intermediate_value);
    subtracting_intermediate_value(&list_2, intermediate_value);

    cout << "\t\t- The lists, after being substracted by the " << endl << "\t\t\t  intermediate value, became: " << endl;
    sequencial_reading(&list_1, &list_2);
    
    sum_list_1 = list_sum(&list_1);
    cout << "\t\t- Player 1, your cards' sum is: " << sum_list_1 << endl;
    sum_list_2 = list_sum(&list_2);
    cout << "\t\t- Player 2, your cards' sum is: " << sum_list_2 << endl << endl;

    decide_winner(sum_list_1, sum_list_2);
}
```
    
### Exemplo de execução