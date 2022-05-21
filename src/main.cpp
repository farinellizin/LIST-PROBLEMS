#include "linearlist.hpp"
#include "dynamiclist.hpp"

int main () {
    // char option;

    // cout << endl << endl << "\t\t\t ~ Welcome to the main menu ~" << endl << endl;
    // cout << "\t\tA. Counting even or odds in a dynamic list;" << endl << "\t\tB. List mini game;" << endl;
    // cout << "\t\tC. Multiplying two lists;" << endl << "\t\tD. Euclidian distance calculation;" << endl;
    // cout << "\t\tE. Exit." << endl << endl << "\t\t\t- Your option: ";
    // cin >> option;
    // option = toupper(option);

    // switch (option) {
    //     case 'A': 
    //         cout << "not ready yet...";
    //         break;

    //     case 'B':
    //         problem_1_b();
    //         break;

    //     case 'C':
    //         problem_1_c();
    //         //cout << "not ready yet...";
    //         break;

    //     case 'D':
    //         cout << "not ready yet...";
    //         break;

    //     case 'E':
    //         cout << "leaving...";
    //         break;
    // } 

    // return 0;

    // DList a;
    // DItem aux;
    // FLVazia(&a);
    // aux.val = 30;
    // LInsert(&a, aux);
    // LImprime(&a);

    DList a;
    DFLVazia(&a);
    cout << endl << "\t\tRight now, list must return that it's empty" << endl << endl;
    list_is_empty(&a);

    DItem aux;
    aux.val = 30;
    DLInsert(&a, aux);
    cout << endl << endl << endl << "\t\tRight now, list must return that it isn't empty" << endl << endl;
    list_is_empty(&a); 
    cout << endl << endl;


    //problem_1_c();
}