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
		else {
			aux = aux -> prox;
		}
	}
}

void DLImprime(DList *l){
	Block *aux;

	aux = l -> first -> prox;
	while(aux != NULL){
		cout << aux -> data.val << "\t";
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
        return 0;
    } else if (x < y) {
        return 1;
    } else {
        return 2;
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

bool list_is_empty(DList *l) {
	if (l -> first == l -> last || l == NULL || l -> first -> prox == NULL){
		// ESTA VAZIA
		//cout << "IS EMPTY" << endl;
		return true;
	} else {
		// NAO ESTA VAZIA
		//cout << "ISN'T EMPTY" << endl;
		return false;
	}
}

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

void list_remove_first(DList *l) {
	Block *aux, *tmp;

	aux = l -> first;
	tmp = aux -> prox;
	l -> first = tmp;
	free(aux);
}

// void fill_list_z(DList *biggest, DList *smallest, DList *final/*, int smallest*/) {
//     Block *aux_biggest;
// 	Block *aux_smallest;;
// 	Block *aux_final;
// 	// aux = x -> first -> prox -> prox;
// 	// cout << aux -> data.val;

// 	aux_biggest = biggest -> first -> prox;
// 	aux_smallest = smallest -> first -> prox;
// 	aux_final = final -> first -> prox;

// 	aux_final -> data.val = aux_biggest -> data.val * aux_smallest -> data.val;
// 	cout << endl << "TESTE ->" << aux_final -> data.val;
// }

void fill_final_list(DList *biggest, DList *smallest, DList *final) {
	// posição final da menor
	// posição inicial da maior
	
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

	//if (!list_is_empty(biggest))
}

void problem_1_c() {	
    DList x, y, z;
    
	DFLVazia(&x);
    DFLVazia(&y);
    DFLVazia(&z);
    
    int tam_x, tam_y;

    tam_x = define_list_tam();
    sleep(1);
    tam_y = define_list_tam();

	cout << "VALORES DE X" << endl;
    fill_list(&x, tam_x);
    DLImprime(&x);
    
	sleep(1);
    
	cout << endl << "VALORES DE Y" << endl;
	fill_list(&y, tam_y);
    DLImprime(&y);

	if (define_smallest(tam_x, tam_y) == 0) { // x = maior
		fill_final_list(&x, &y, &z);
	} else if (define_smallest(tam_x, tam_y) == 1) { // y = maior
		fill_final_list(&y, &x, &z);
	} else { // x = y
		fill_final_list(&x, &y, &z);
	}

	cout << endl << "VALORES NA LISTA FINAL" << endl;
	DLImprime(&z);
	cout << endl;
}