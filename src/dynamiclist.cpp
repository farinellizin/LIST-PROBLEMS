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
		cout << "\t\t\t\t      " << aux -> data.val << endl;
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
		return true;
	} else {
		// NAO ESTA VAZIA
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

void problem_1_c() {	
    cout << endl << endl << "-------------------------------------------------------------------------------------";
    cout << endl << endl << "\t\t\t\t    Loading..." << endl << endl;
	DList x, y, z;
    
	DFLVazia(&x);
    DFLVazia(&y);
    DFLVazia(&z);
    
    int tam_x, tam_y;

    tam_x = define_list_tam();
    sleep(1);
    tam_y = define_list_tam();

	cout << endl << "\t\t\t  - This is the first list: " << endl << endl;

	//cout << "VALORES DE X" << endl;
    fill_list(&x, tam_x);
    DLImprime(&x);
    
	sleep(1);
    
	cout << endl << "\t\t\t  - This is the second list: " << endl << endl;
	fill_list(&y, tam_y);
    DLImprime(&y);

	cout << endl << "       Now, the lists will be multiplied, following the rule that, if they have" << endl;
	cout << "      different sizes, the 1st position of the bigger one will multiply the last" << endl;
	cout << "     position of the smaller one, until the smaller is empty, then all the values" << endl;
	cout << "      remaining in the bigger one, will be inserted in the end of the new list." << endl << endl;

	if (define_smallest(tam_x, tam_y) == 0) { // x = maior
		cout << endl << "\t\t      ~ The smallest list is the 2nd one ~" << endl;
		fill_final_list(&x, &y, &z);
	} else if (define_smallest(tam_x, tam_y) == 1) { // y = maior
		cout << endl << "\t\t      ~ The smallest list is the 1st one ~" << endl;
		fill_final_list(&y, &x, &z);
	} else { // x = y
		cout << endl << "\t\t      ~ Both lists have the same size ~" << endl;
		fill_final_list(&x, &y, &z);
	}

	cout << "\t\t\t    This is the final list: " << endl << endl;
	DLImprime(&z);
}

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

	cout << "Numbers of evens: " << cont_even;
	cout << endl << "Numerbs of odds: " << cont_odd << endl;
	
}

void problem_1_a() {
	// NUMERO ALEATÓRIO PARA DEFINIR O TAMANHO DA LISTA DINAMICA
	// PREENCHER A LISTA DINAMICA COM NUMEROS ALEATORIOS
	// DEFINIR QUAIS ELEMENTOS SAO PARES E QUAIS SAO IMPARES
	// JOGAR ELEMENTOS PARES EM UMA LISTA E IMPARES EM OUTRAS

	DList main_list, even_list, odd_list;
	DFLVazia(&main_list);
	DFLVazia(&even_list); // par
	DFLVazia(&odd_list); // impar

	int main_list_size;
	main_list_size = define_list_tam();

	cout << "\t\t\tVALUES IN THE MAIN LIST: " << endl << endl;
	fill_list(&main_list, main_list_size);
	DLImprime(&main_list);
	cout << endl << endl;
	break_apart_even_odd(&main_list, &even_list, &odd_list);
	cout << "\t\t\tEVEN VALUES: " << endl << endl;
	DLImprime(&even_list);
	cout << "\t\t\tODD VALUES: " << endl << endl;
	DLImprime(&odd_list);

}