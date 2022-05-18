#include "linearlist.hpp"

int main () {
    char option;

    cout << endl << endl << "\t\t\t ~ Welcome to the main menu ~" << endl << endl;
    cout << "\t\tA. Counting even or odds in a dynamic list;" << endl << "\t\tB. List mini game;" << endl;
    cout << "\t\tC. Multiplying two lists;" << endl << "\t\tD. Euclidian distance calculation;" << endl;
    cout << "\t\tE. Exit." << endl << endl << "\t\t\t- Your option: ";
    cin >> option;
    option = toupper(option);

    switch (option) {
        case 'A': 
            cout << "not ready yet...";
            break;

        case 'B':
            problem_1_b();
            break;

        case 'C':
            cout << "not ready yet...";
            break;

        case 'D':
            cout << "not ready yet...";
            break;

        case 'E':
            cout << "leaving...";
            break;
    } 

    return 0;
}