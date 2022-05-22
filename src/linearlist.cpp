#include "linearlist.hpp"

void create_empty_list(List *l){
	l -> first = 0;
	l -> last  = 0;
}

void list_insert(List *l, Item d) {
	if (l -> last >= MAXTAM) {
		cout << "List is full!" << endl;
	} else {
		l -> vet[l -> last] = d;
		l -> last++;
	}
}

void list_print(List *l){
	for(int i = l-> first; i < l->last; i++) {
		cout << "\t\t\t" << l -> vet[i].val << endl; }
}

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

void sequencial_reading(List *list_1, List *list_2) {
    cout << endl << "\t\t\t     {";
    for (int i = 0; i < MAXTAM; i++) {
        cout << "(" << list_1 -> vet[i].val << ", " << list_2 -> vet[i].val << ")";
    }
    cout << "}" << endl << endl;
}

void subtracting_intermediate_value(List *list, int intermediate_value) {
    for (int i = 0; i < MAXTAM; i++) {
        list -> vet[i].val = list -> vet[i].val - intermediate_value;
    }
}

int list_sum(List *list) {
    int sum = 0;
    for (int i = 0; i < MAXTAM; i++) {
        sum += list -> vet[i].val;
    }

    return sum;
}

void decide_winner(int sum_list_1, int sum_list_2) {
    if (sum_list_1 > sum_list_2) {
        cout << "\t\t\t ~ Player 1, you won the game! ~" << endl;
    } else if (sum_list_2 > sum_list_1) {
        cout << "\t\t\t ~ Player 2, you won the game! ~" << endl;
    } else {
        cout << "\t\t\t ~ No winners for today, tied game :( ~" << endl;
    }
}

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

