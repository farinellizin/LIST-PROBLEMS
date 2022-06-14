<h1 align = "center">
  <strong><em>Aplicação de Listas Dinâmicas e Lineares</em></strong>
</h1>

<h4 align = "center">
  Este repositório contém aplicações práticas relacionada ao contéudo teórico de Listas Dinâmicas e Lineares, lecionadas na matéria Algoritmo e Estrutura 
  de Dados I.
</h4>

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
 Recapitulando o que é pedido na primeira proposta...
 <br> <br>

**_Escreva uma função recursiva e outra não recursiva para contar o número de elementos
pares e impares contidos em uma lista dinâmica._**

### Dissecando a proposta
   - A partir do que nos foi dado, inicialmente, sabemos que serão necessário três **Listas Dinâmicas**, sendo uma **Lista** principal, outra para números pares e, por fim, uma para números ímpares.

#### Implementando

Inicialmente, foram criadas as três **Listas** supracitadas, sendo elas feitas vazias como forma de dar início à manipulação das mesmas:

```c++
DList main_list, even_list, odd_list;
DFLVazia(&main_list);
DFLVazia(&even_list); 
DFLVazia(&odd_list); 
```

Em seguida, é chamada a função **define_list_tam()**, como forma de definir qual será o número de valores contidos na **Lista** principal. A implementação de tal função pode ser visualizada abaixo: 

```c++
int define_list_tam() {
    int tam;
    srand(time(NULL));
    tam = rand() % 10 + 2;

    return tam;
}
```

Sendo o tamanho definido, chega o momento de preencher a **Lista** principal com valores aleatórios. Para isso, foi utilizada a função **fill_list()**: 

```c++
void fill_list(DList *l, int tam) {
    DItem aux;
    srand(time(NULL));
    for (int i = 0; i < tam; i++) {
        aux.val = rand() % 100 + 1;
        DLInsert(l, aux);
    }
}
```

Após a **Lista** ser preenchida, chega ao momento de realizar a contagem de números pares e ímpares, assim como serpará-los em **Listas** diferentes (even_list, odd_list). Para a supracitada proposta, foi utilizada a função **break_apart_even_odd()**:

```c++
void break_apart_even_odd(DList *main, DList *even, DList *odd) {
	Block *aux_final_block;
	DItem aux_final;
	int cont_even = 0, cont_odd = 0;

	aux_final_block = main -> first;
	aux_final.val = aux_final_block -> data.val;

	while (aux_final_block -> prox != NULL) {
		aux_final_block = aux_final_block -> prox;
		aux_final.val = aux_final_block -> data.val;

		if ((aux_final.val % 2) == 0) {
			cont_even++;
			DLInsert(even, aux_final);
		} else {
			cont_odd++;
			DLInsert(odd, aux_final);
		}
	}

	cout << "\n\n\t\t\t\tNumbers of evens: " << cont_even;
	cout << endl << "\t\t\t\tNumerbs of odds: " << cont_odd << endl << endl;
	
}
```

Fim da aplicação 1.


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
Sendo as **Listas** definitivamente preenchidas por:
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
<p align="center">
 <img height="500px" src="/imgs/Exec_1_B.gif">
</p>

<h2> 
    Aplicação 3
</h2>

Recapitulando o que é pedido na segunda proposta...

**_Escreva uma função que receba duas listas $ x = [x_1 , x_2 ,..., x_n ] $ e $ y = [y_1 , y_2 ,..., y_n] $ e retorne uma lista $ z = [(x_1 * y_n ), (x_2 * y_{n−1}),..., (x_n * y_1 )] $. Ao final, as listas x e y devem estar vazias._**

### Dissecando a proposta
   - A partir do que nos foi dado, inicialmente, sabemos que serão necessárias três **Listas Dinâmicas**, uma vez que, duas Listas iniciais (x e y) formarão uma terceira Lista (z). Além do mais, como o tamanho delas não foi especificado, se faz necessário estabelecer um limite para o tamanho, utilizando um número aleatório avulso. Também é necessário que as Listas sejam preenchidas de forma automática e aleatória, a fim de evitar que o usuário tenha que preencher cada um dos valores, podendo ser muitos, o que dependeŕa do número aleatório avulso que definirá o tamanho de cada uma das Listas. Outro passo será realizar a multiplicação do último elemento da menor Lista pelo primeiro elemento da maior Lista e, na medida que essas multiplicações forem realizadas, remover os referidos elementos de suas respectivas Listas. Será necessário, ainda, definir qual das duas listas é a maior, como forma de preencher a Lista final (z), com os valores excedentes da mesma.

### Implementando

Como pontapé inicial, foram criadas funções referentes à manipulaçôes de **Listas**, as quais não serão salientadas haja visto que não representam o foco da proposta. Inicialmente, foram feitas três **Listas Dinâmicas** vazias, por meio da função **DFLVazia()**: <br>
```c++
void DFLVazia(DList *l){
	l -> first = (Block*) malloc (sizeof(Block));
	l -> last  = l -> first;
	l -> first -> prox = NULL;
}
```
Sendo as **Listas**, definitivamente criadas e feitas vazias, por: 
```c++
DFLVazia(&x);
DFLVazia(&y);
DFLVazia(&z);
```

Na sequência, vizando a necessidade de definir tamanhos diferentes para ambas as **Listas**, foi criada a função **define_list_tam()**, a qual retornará um inteiro aleatório entre 1 e 10, a fim de que às **Listas** não sejam atribuidos valores extremamente altos, como pode ser visualizado abaixo: 

```c++
int define_list_tam() {
    int tam;
    srand(time(NULL));
    tam = rand() % 10 + 1;

    return tam;
}
```
Sendo os tamanhos, de fato, definidos, por:

```c++
tam_x = define_list_tam();
sleep(1);
tam_y = define_list_tam();
```
Há de se salientar, nesse bloco de código, a presença da função **sleep()**. O motivo para tal, é causar um leve congelamento na execução do programa, uma vez que, pelo fato dela (execução) ser demasiada veloz, e a função utilizada para a criação de números aleatórios se baseia no horário do próprio computador, caso não houvesse uma pausa, os números gerados seriam idênticos para ambas as **Listas**.

Após os processos supracitados, chega o momento de preencher ambas as **Listas**, processo realizado pela função **fill_list()**, que pode ser visualizada abaixo:

```c++
void fill_list(DList *l, int tam) {
    DItem aux;
    srand(time(NULL));
    for (int i = 0; i < tam; i++) {
        aux.val = rand() % 100 + 1;
        DLInsert(l, aux);
    }
}
```
Detalhadamente, o processo se inicia recebendo a lista a qual será preenchida, juntamente ao seu tamanho. Um looping for é instanciado, indo de 0, enquanto for menor que o tamanho da **Lista**. Para cada uma dessas iterações, é gerado um número aleatório e, em seguida, é inserido na **Lista**, por meio da função **DLInsert()**. Abaixo, pode ser vista a chamada da função:

```c++
fill_list(&x, tam_x);
sleep(1);
fill_list(&y, tam_y);
```

Novamente, pode ser percebido a presença da função **sleep()**, cujo propósito é o mesmo do anteriormente citado.

Na sequência, é necessário saber qual das **Listas** é maior, haja visto que implicará na ordem da organização da terceira **Lista**. Para tal, foi criada a função **define_smallest()**, a qual retorna três tipos de inteiro:
   - Retorno 0: caso a função retorne o valor 0, significa que a menor **Lista** é a **y**;
   - Retorno 1: caso a função retorne o valor 1, significa que a menor **Lista** é a **x**;
   - Retorno 2: caso a função retorne o valor 2, significa que ambas as **Listas** têm o mesmo tamanho.

Pode ser visualizada a função abaixo:

```c++
int define_smallest(int x, int y) {
    if (x > y) {
        return 0;
    } else if (x < y) {
        return 1;
    } else {
        return 2;
    }
}
```

E a aplicação da mesma a seguir:

```c++
if (define_smallest(tam_x, tam_y) == 0) {
		cout << endl << "\t\t      ~ The smallest list is the 2nd one ~" << endl;
		fill_final_list(&x, &y, &z);
	} else if (define_smallest(tam_x, tam_y) == 1) {
		cout << endl << "\t\t      ~ The smallest list is the 1st one ~" << endl;
		fill_final_list(&y, &x, &z);
	} else { 
		cout << endl << "\t\t      ~ Both lists have the same size ~" << endl;
		fill_final_list(&x, &y, &z);
	}
```

Pode-se perceber que há a chamada para mais uma função, sendo ela a **fill_final_list()**, responsável por de fato, implementar o que se é pedido, manipulando as **Listas** de acordo com seu tamanho, armazenando os resultados desejados na **Lista z**:

```c++
void fill_final_list(DList *biggest, DList *smallest, DList *final) {
	DItem aux_biggest;
	DItem aux_smallest;
	DItem aux_final;
	
	Block *aux_biggest_block;
	Block *aux_smallest_block;

	aux_biggest_block = biggest -> first -> prox;
	aux_smallest_block = smallest -> last;

	while (!list_is_empty(smallest)) {
		aux_biggest.val = aux_biggest_block -> data.val;
		aux_biggest_block = aux_biggest_block -> prox;
		
		aux_smallest_block = smallest -> last;
		aux_smallest.val = aux_smallest_block -> data.val;
		
		aux_final.val = aux_biggest.val * aux_smallest.val;
		DLInsert(final, aux_final);

		list_remove_first(biggest);
		list_remove_last(smallest);
	}

	if (!list_is_empty(biggest)) {
		while (!list_is_empty(biggest)) {
			aux_biggest.val = aux_biggest_block -> data.val;
			aux_biggest_block = aux_biggest_block -> prox;
			
			aux_final.val = aux_biggest.val;
			DLInsert(final, aux_final);
			list_remove_first(biggest);
		}
	}
}
```

Ademais, foram utilizadas as funções **list_remove_first()** e **list_remove_last()** como forma de remover a posição desejada, de forma que não seja necessário percorrer toda a **Lista** com um ponteiro até chegar ao fim, assim como para não ser necessário inserir o valor do primeiro elemento da **Lista** para removê-lo. A implementação pode ser visualizada abaixo:

```c++
void list_remove_first(DList *l) {
	Block *aux, *tmp;

	aux = l -> first;
	tmp = aux -> prox;
	l -> first = tmp;
	free(aux);
}
```

```c++
void list_remove_last(DList *l) {
	Block *aux, *tmp;
	
	aux = l -> last;
	tmp = l -> first;

	while (tmp -> prox != NULL) {
		if (tmp -> prox == aux) {
			l -> last = tmp;
			tmp -> prox = NULL;
		} else {
			tmp = tmp -> prox;
		}
	}

	free(aux);	
}
```

<h2> 
    Aplicação 4
</h2>

Recapitulando o que é pedido na segunda proposta...

**_Escreva uma função que receba pares de listas $ x = [x_1 , x_2 , . . . , x_n ] $ e $ y = [y_1 , y_2 , . . . , y_m] $
com $ n, m > 0 $ e $ n = m $. Calcule a distância euclidiâna entre os múltiplos pares recebidos
e encontre os $ k $ pares mais próximos._**

### Dissecando a proposta
   - A partir do que nos foi dado, inicialmente, sabemos que serão necessárias duas **Listas Dinâmicas**, que terão um tamanho igual e aleatório, preenchidas também por valores aleatórios. Sabe-se ainda que as **Listas** serão preenchidas com valores aleatórios positivos e que, para o cálculo da *_distância euclidiana_*, será usada a fórumla $d = \sqrt{(Δi)²+(Δj)²}$, sendo $ Δi $ o tamanho das **Listas** menos o valor da posição, seguindo o mesmo parâmetro para $ Δj $. 

### Implementando

Como pontapé inicial, foram criadas funções referentes à manipulaçôes de **Listas**, as quais não serão salientadas haja visto que não representam o foco da proposta. Inicialmente, foram feitas três **Listas Dinâmicas** vazias, por meio da função **DFLVazia()**: <br>
```c++
void DFLVazia(DList *l){
	l -> first = (Block*) malloc (sizeof(Block));
	l -> last  = l -> first;
	l -> first -> prox = NULL;
}
```
Sendo as **Listas**, definitivamente criadas e feitas vazias, por: 
```c++
DFLVazia(&list_x);
DFLVazia(&list_y);
DFLVazia(&euclidean_list);
```

Na sequência, vizando a necessidade de definir tamanhos iguais para ambas as **Listas**, foi criada a função **define_list_tam()**, a qual retornará um inteiro aleatório entre 1 e 10, a fim de que às **Listas** não sejam atribuidos valores extremamente altos, como pode ser visualizado abaixo: 

```c++
int define_list_tam() {
    int tam;
    srand(time(NULL));
    tam = rand() % 10 + 1;

    return tam;
}
```

Após tal procedimento, faz-se necessário que as **Listas** sejam preenchidas, mais uma vez, por meio de valores aleatórios. Para tal, foi utilizada, mais uma vez, a função **fill_list()**, a qual já foi mencionada nesta documentação, porém, vale destacá-la mais uma vez:

```c++
void fill_list(DList *l, int tam) {
    DItem aux;
    srand(time(NULL));
    for (int i = 0; i < tam; i++) {
        aux.val = rand() % 100 + 1;
        DLInsert(l, aux);
    }
}
```

Sendo, de fato chamada na função principal, por:

```c++
fill_list(&list_x, tam);
sleep(1);
fill_list(&list_y, tam);
```

Pode-se perceber o uso da função **sleep()** novamente, com o mesmo propósito - visando que as duas **Listas** não recebam valores idênticos.

Tendo sido preenchidas ambas as **Listas**, foi chamada a função **euclidean_calc()**, responsável por, de fato, realizar o cálculo da distância Euclidiana, utilizando da fórmula anteriormente citada, armazenando todos os valores, coordenadas e distâncias, em um *_Bloco_* da **Lista**. A aplicação pode ser visualizada abaixo: 

```c++
void euclidean_calc(DList *list_x, DList *list_y, DList *euclidean_list, int tam) {
	Block *auxx, *auxy;
	int aux_x, aux_y;
	float distance;
	DItem aux;

	auxx = list_x -> first -> prox;
	auxy = list_y -> first -> prox;

	while (auxx != NULL) {
		aux_x = auxx -> data.val;
		aux_y = auxy -> data.val;

		distance = sqrt(pow(abs(tam - aux_x), 2) + pow(abs(7 - aux_y), 2));
		aux.distance = distance;
		aux.val_x = aux_x;
		aux.val_y = aux_y;
		aux.val = 0;

		DLInsert(euclidean_list, aux);

		auxx = auxx -> prox;
		auxy = auxy -> prox;
	}
}
```

Tendo sido o cálculo realizado e os valores devidamente armazenados, é realizada uma ordenação por meio do *_Método da Bolha_*, na função **euclidean_sort()**, buscando ordenar a partir dos menores valores de distância, consequentemente, passando as menores distâncias à frente: 

```c++
void euclidean_sort(DList *l) {
    Block *i, *j;

    i = l -> first -> prox;

    while (i != NULL) {
        j = i -> prox;
        while (j != NULL) {
            if (j -> data.distance < i -> data.distance) {
                swap(i, j);
            }
            j = j -> prox;
        }
        i = i -> prox;
    }
}
```

Por fim, é chamada a função **closest_pairs()**. A mesma é responsável por imprimir os pares mais próximos, imprimindo sempre $ N / 2 $ pares, sendo N o tamanho das **Listas**: 

```c++
void closest_pairs(DList *euclidean_list, int tam) {
	Block *aux = euclidean_list->first->prox;

	cout << "\n\n\t\t\t\tThese are the " << (tam / 2) << " closest pairs: " << endl << endl;
	cout << "\t\tEuclidean Distance \t\t X Value \t\t Y Value\n\n";
	for (int i = 0; i < (tam / 2); i++) {
		cout << "\t\t\t" << aux->data.distance << "\t\t\t   " << aux->data.val_x << "\t\t\t    " << aux->data.val_y << endl;
		aux = aux -> prox;
	}
}
```

## Alunos
- Lucas Farinelli
- Felipe Campos
- Caio Dias
- João Marcelo