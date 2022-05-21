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

void problem_1_c();
int define_list_tam();
int define_smallest(int x, int y);
void fill_list(DList *l, int tam);
void fill_list_z(DList *x, DList *z/*, DList *y, int smallest*/);

#endif