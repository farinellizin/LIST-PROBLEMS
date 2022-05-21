#include "dynamiclist.hpp"

void DSwap(Block *a, Block *b){
	DItem aux;
	aux = a -> data;
	a -> data = b -> data;
	b -> data = aux;
	
}

void DFLVazia(DList *l){
	l -> first = (Block*) malloc (sizeof(Block));
	l -> last  = l -> first;
	l -> first -> prox = NULL;
}

void DLInsert(DList *l, DItem d){
	l -> last -> prox = (Block*) malloc (sizeof(Block));
	l -> last = l -> last -> prox;
	l -> last -> data = d;
	l -> last -> prox = NULL;
}

void DLRemove(DList *l, DItem d){
	Block *aux, *tmp;

	if(l -> first == l -> last || l == NULL || l -> first -> prox == NULL){
		cout << "LISTA VAZIA!\n";
		return;
	}
	
	aux = l -> first;
	while(aux -> prox != NULL){
		if (aux -> prox -> data.val == d.val){
			tmp = aux;
			aux = aux->prox;
			tmp -> prox = aux -> prox;
			if (aux == l -> last)
				l -> last = tmp;
			free(aux);
			aux -> prox = NULL;
		}
		else
			aux = aux -> prox;
	}
}

void DLImprime(DList *l){
	Block *aux;

	aux = l -> first -> prox;
	while(aux != NULL){
		cout << aux -> data.val << endl;
		aux = aux->prox;
	}
}

int define_list_tam() {
    int tam;
    srand(time(NULL));
    tam = rand() % 10 + 1;

    return tam;
}

int define_smallest(int x, int y) {
    if (x > y) {
        return y;
    } else if (x < y) {
        return x;
    } else {
        return x;
    }
}   

// retornar 0: maior = x;
// retornar 1: maior = y;
// retornar 2: x = y;

void fill_list(DList *l, int tam) {
    DItem aux;
    srand(time(NULL));
    for (int i = 0; i < tam; i++) {
        aux.val = rand() % 100 + 1;
        DLInsert(l, aux);
    }
}

void fill_list_z(DList *x, DList *z/*, DList *y, int smallest*/) {
    Block *aux_x;
	//Block *aux_y;;
	Block *aux_z;
	// aux = x -> first -> prox -> prox;
	// cout << aux -> data.val;

	aux_x = x -> first -> prox;
	aux_z = z -> first -> prox;
	//aux_y = y -> first -> prox;

	aux_z -> data.val = aux_x -> data.val;
	cout << endl << "TESTE ->" << aux_z -> data.val;
}

void problem_1_c() {	
    DList x, y, z;
    DFLVazia(&x);
    DFLVazia(&y);
    DFLVazia(&z);
    
    int tam_x, tam_y, smallest = 0;

    tam_x = define_list_tam();
    sleep(1);
    tam_y = define_list_tam();

    //cout << "TAMANHO X: " << tam_x << endl << "TAMANHO Y: " << tam_y << endl;

    smallest = define_smallest(tam_x, tam_y);
    cout << endl << "MENOR: " << smallest << endl;
	cout << "VALORES DE X" << endl;
    fill_list(&x, tam_x);
    DLImprime(&x);
    sleep(1);
    // fill_list(&y, tam_y);
    // LImprime(&y);
	DItem aux;
	aux.val = 30;
    DLInsert(&z, aux);

    // Block *aux;
    // aux =  -> first;
    // cout << aux -> prox -> data.val;

    //fill_list_z(&x, &y, &z, smallest);
	fill_list_z(&x, &z);
}