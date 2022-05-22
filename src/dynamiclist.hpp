#ifndef DYNAMICLIST_HPP 
#define DYNAMICLIST_HPP

#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;

typedef struct DItem DItem;
typedef struct Block Block;
typedef struct DList DList;

struct DItem{
	int val;
};

struct Block{
	DItem data;
	Block *prox;
};

struct DList{
	Block *first;
	Block *last;
};


void DFLVazia(DList *l);
void DLInsert(DList *l, DItem d);
void DLRemove(DList *l, DItem d);
void DSwap(Block *a, Block *b);
void DLImprime(DList *l);

// FUNÇÕES PARA RESOLUÇÃO DO PROBLEMA 1 - LETRA C

void problem_1_c();
int define_list_tam();
int define_smallest(int x, int y);
void fill_list(DList *l, int tam);
void fill_final_list(DList *biggest, DList *smallest, DList *final);
void list_remove_last(DList *l);
void list_remove_first(DList *l);
bool list_is_empty(DList *l);

// FUNCÇÕES PARA RESOLUÇÃO DO PROBLEMA 1 - LETRA A

void problem_1_a();
// fill_list(DLIst *l, int tam);
// define_list_tam();
void break_apart_even_odd(DList *main, DList *even, DList *odd);

#endif