#include "question1.h"
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    double meal_amount = 0.0;
    double gratuity_rate = 0.0;
    bool continue_program = true;
    char user_choice = '\0';

    while (continue_program){
        cout << "\nEnter meal amount: ";
        cin >> meal_amount;
        cout << "\nEnter gratuity rate: ";
        cin >> gratuity_rate;

        Receipt receipt(meal_amount, gratuity_rate);

        double tax_amount = receipt.calculate_tax();
        double gratuity_amount = receipt.calculate_gratuity();

        receipt.display_receipt(tax_amount, gratuity_amount);

        while (user_choice != 'Y' && user_choice != 'N'){
            cout << "\nRestart program? <y/n> ";
            cin >> user_choice;
            user_choice = toupper(user_choice);
            if (user_choice != 'Y' && user_choice != 'N'){
                cout << "\nInvalid input. Please either enter 'n' to quit or 'y' to restart the program.";
            }
        }
        
        if (user_choice == 'Y'){
            continue_program = true;
        } else {
            continue_program = false;
        }
        user_choice = '\0';
    }

    return 0;
}