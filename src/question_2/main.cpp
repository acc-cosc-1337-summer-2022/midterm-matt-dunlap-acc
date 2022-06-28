#include "question2.h"
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

int main()
{
    bool continue_program = true;
    char user_choice = '\0';
    int cookie_count = -1;

    while (continue_program){
        cout << "\nEnter number of cookies: ";
        cin >> cookie_count;
        if (cookie_count < 0){
            cout << "\nInvalid input. Number of cookies must be a positive value.";
        } else {
            vector<double> ingredients = get_cookie_ingredients(cookie_count);
            
            cout << "\nCups of Sugar " << ingredients[0] << "\n";
            cout << "Cups of Butter " << ingredients[1] << "\n";
            cout << "Cups of Flour " << ingredients[2] << "\n";

            while (user_choice != 'Y' && user_choice != 'N'){
                cout << "\nRestart program? <y/n> ";
                cin >> user_choice;
                user_choice = toupper(user_choice);
                if (user_choice != 'Y' && user_choice != 'N'){
                    cout << "\nInvalid input. Enter 'n' to quit or 'y' to restart program.";
                } else {
                    if (user_choice == 'Y'){
                        continue_program = true;
                    } else {
                        continue_program = false;
                    }
                }
            }

            user_choice = '\0';
        }

    }


    return 0;
}