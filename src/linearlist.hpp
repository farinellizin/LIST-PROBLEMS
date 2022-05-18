#ifndef LINEARLIST_HPP
#define LINEARLIST_HPP
#define MAXTAM 3
#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;

typedef struct Item {
    int val;   
} Item;

typedef struct List {
    Item vet[MAXTAM];
    int first;
    int last;
} List;

void create_empty_list (List *l);
void list_insert(List *l, Item d);
void list_print(List*l);

// FUNÇÕES PARA O EXERCICIO 1: LISTAS

void problem_1_b();
void fill_list_randomly(List *l);
void sequencial_reading(List *list_1, List *list_2);
void subtracting_intermediate_value(List *list, int intermediate_value);
int list_sum(List *list);
void decide_winner(int sum_list_1, int sum_list_2);

#endif