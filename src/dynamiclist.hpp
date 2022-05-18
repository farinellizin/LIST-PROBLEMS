#ifndef DYNAMICLIST_HPP 
#define DYNAMICLIST_HPP

#include <iostream>
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


void FLVazia(DList *l);
void LInsert(DList *l, DItem d);
void LRemove(DList *l, DItem d);
void Swap(Block *a, Block *b);
void LImprime(DList *l);

void problem_1_c();

#endif