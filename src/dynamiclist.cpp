#include "dynamiclist.hpp"

void Swap(Block *a, Block *b){
	DItem aux;
	aux = a -> data;
	a -> data = b -> data;
	b -> data = aux;
	
}

void FLVazia(DList *l){
	l -> first = (Block*) malloc (sizeof(Block));
	l -> last  = l -> first;
	l -> first -> prox = NULL;
}

void LInsert(DList *l, DItem d){
	l -> last -> prox = (Block*) malloc (sizeof(Block));
	l -> last = l -> last -> prox;
	l -> last -> data = d;
	l -> last -> prox = NULL;
}

void LRemove(DList *l, DItem d){
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

void LImprime(DList *l){
	Block *aux;

	aux = l -> first -> prox;
	while(aux != NULL){
		cout << "%d\n" << aux -> data.val;
		aux = aux->prox;
	}
}

void problem_1_c() {
    
}