#include "linearlist.hpp"
#include "dynamiclist.hpp"

void run() {
    char option;

    do { 
        cout << endl << endl << "-------------------------------------------------------------------------------------";
        cout << endl << endl << "\t\t\t ~ Welcome to the main menu ~" << endl << endl;
        cout << "\t\tA. Counting even or odds in a dynamic list;" << endl << "\t\tB. List mini game;" << endl;
        cout << "\t\tC. Multiplying two lists;" << endl << "\t\tD. Euclidian distance calculation;" << endl;
        cout << "\t\tE. Exit." << endl << endl << "\t\t\t- Your option: ";
        cin >> option;
        option = toupper(option);

        if (option == 'A') {
            cout << "not ready yet...";
        } else if (option == 'B') {
            problem_1_b();
        } else if (option == 'C') {
            problem_1_c();
        } else if (option == 'D') {
            cout << "not ready yet...";
        } else {
            cout << "leaving...";
        }
    } while (option != 'E');
}

int main () {
    //run();
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
    // cout << endl << endl;

    // while (!list_is_empty(&a)) {
    //     cout << endl << endl << "LIST WHILE IT'S VALUES ARE BEEN REMOVED: " << endl << endl;
    //     list_remove_first(&a);
    //     DLImprime(&a);
    // }

    // TESTING FUNCTION THAT REMOVES THE LAST VALUE OF A LIST UNTIL IT'S EMPTY 

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

    // cout << "LIST BEFORE LAST VALUE REMOVAL: " << endl << endl;
    // DLImprime(&a);
    // cout << endl;
    
    // while (!list_is_empty(&a)) {
    //     cout << endl << endl << "LIST WHILE IT'S VALUES ARE BEING REMOVED: " << endl << endl;
    //     list_remove_last(&a);
    //     DLImprime(&a);
    // }

    // TESTING FUNCTION TO MULTIPLY THE LAST VALUE OF A SMALLER LIST TO THE FIRST VALUE OF A BIGGER ONE 

    // DList maior, menor, final;
    // DFLVazia(&maior);
    // DFLVazia(&menor);
    // DFLVazia(&final);
    // DItem aux;

    // aux.val = 10;
    // DLInsert(&maior, aux);  
    
    // aux.val = 4;
    // DLInsert(&maior, aux);
    
    // aux.val = 19;
    // DLInsert(&maior, aux);
    
    // aux.val = 31;
    // DLInsert(&maior, aux);

    // cout << endl << endl << "\t\t- PRINTING FIRST LIST: " << endl << "\t\t";
    // DLImprime(&maior);

    // aux.val = 21;
    // DLInsert(&menor, aux);  
    
    // aux.val = 19;
    // DLInsert(&menor, aux);
    
    // aux.val = 40;
    // DLInsert(&menor, aux);
    
    // aux.val = 78;
    // DLInsert(&menor, aux);

    // cout << endl << endl << "\t\t- PRINTING SECOND LIST: " << endl << "\t\t";
    // DLImprime(&menor);

    // fill_final_list(&maior, &menor, &final);

    // cout << endl << endl << "\t\t- PRINTING FINAL LIST: " << endl << "\t\t";
    // DLImprime(&final);

    //problem_1_c();
    problem_1_a();
}