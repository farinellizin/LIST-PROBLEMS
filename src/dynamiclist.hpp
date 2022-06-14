#ifndef DYNAMICLIST_HPP 
#define DYNAMICLIST_HPP

#include <iostream>
#include <time.h>
#include <unistd.h>
#include <cmath>
using namespace std;

typedef struct DItem DItem;
typedef struct Block Block;
typedef struct DList DList;

struct DItem{
	int val;

	int val_x;
	int val_y;
	float distance;
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
// fill_list(DList *l, int tam);
// define_list_tam();
void break_apart_even_odd(DList *main, DList *even, DList *odd);

void problem_1_d();
// define_list_tam();
// fill_list(DList *l, int tam);
void euclidean_calc(DList *list_x, DList *list_y, DList *euclidean_list, int tam);
// void pull_together_both_lists(DList *list_x, DList *list_y, DList *euclidean_list);

#endif