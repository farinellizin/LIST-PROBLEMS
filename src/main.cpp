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

    // TESTING FUNCTION THAT RETURNS IF A LIST IS EMPTY OR NOT

    // DList a;
    // DFLVazia(&a);
    // cout << endl << "\t\tRight now, list must return that it's empty" << endl << endl;
    // list_is_empty(&a);

    // DItem aux;
    // aux.val = 30;
    // DLInsert(&a, aux);
    // cout << endl << endl << endl << "\t\tRight now, list must return that it isn't empty" << endl << endl;
    // list_is_empty(&a); 
    // cout << endl << endl;
    

    // TESTING FUNCTION THAT REMOVES THE FIRST VALUE OF A LIST

    // DList a;
    // DFLVazia(&a);
    // DItem aux;

    // aux.val = 10;
    // DLInsert(&a, aux);  
    
    // aux.val = 4;
    // DLInsert(&a, aux);
    
    // aux.val = 19;
    // DLInsert(&a, aux);
    
    // aux.val = 31;
    // DLInsert(&a, aux);

    // cout << "LIST BEFORE FIRST VALUE REMOVAL: " << endl << endl;
    // DLImprime(&a);
    
    // list_remove_first(&a);

    // cout << endl;

    // cout << "LIST AFTER FIRST VALUE REMOVAL: " << endl << endl;
    // DLImprime(&a);
    
    // TESTING FUNCTION THAT REMOVES THE FIRST VALUE OF A LIST UNTIL IT'S EMPTY

    DList a;
    DFLVazia(&a);
    DItem aux;

    aux.val = 10;
    DLInsert(&a, aux);  
    
    aux.val = 4;
    DLInsert(&a, aux);
    
    aux.val = 19;
    DLInsert(&a, aux);
    
    aux.val = 31;
    DLInsert(&a, aux);

    cout << "LIST BEFORE FIRST VALUE REMOVAL: " << endl << endl;
    DLImprime(&a);
    cout << endl << endl;

    while (!list_is_empty(&a)) {
        cout << endl << endl << "LIST WHILE IT'S VALUES ARE BEEN REMOVED: " << endl << endl;
        list_remove_first(&a);
        DLImprime(&a);
    }


    //problem_1_c();
}