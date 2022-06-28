#include "question1.h"
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    double meal_amount = -1.0;
    double gratuity_rate = -1.0;
    bool continue_program = true;
    char user_choice = '\0';

    while (continue_program){
        while (meal_amount < 0.0){
            cout << "\nEnter meal amount: ";
            cin >> meal_amount;
            if (meal_amount < 0.0){
                cout << "Invalid input. Meal amount cannot be negative.";
            }
        }

        while (gratuity_rate < 0.0){
            cout << "\nEnter gratuity rate: ";
            cin >> gratuity_rate;
            if (gratuity_rate < 0.0){
                cout << "Invalid input. Gratuity rate cannot be negative.";
            }
        }

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
        meal_amount = -1.0;
        gratuity_rate = -1.0;
    }

    return 0;
}