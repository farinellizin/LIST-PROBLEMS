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
            problem_1_a();
        } else if (option == 'B') {
            problem_1_b();
        } else if (option == 'C') {
            problem_1_c();
        } else if (option == 'D') {
            problem_1_d();
        } else {
            cout << "leaving...";
        }
    } while (option != 'E');
}

int main () {
    run();
}