#include "question3.h"
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    bool continue_program = true;
    char user_choice = '\0';
    int length = -1;
    int width = -1;

    while (continue_program){

        while (length < 0){
            cout << "Enter length: ";
            cin >> length;
            if (length < 0){
                cout << "Invalid input. Length must be a positive integer.";
            }
        }

        while (width < 0){
            cout << "Enter width: ";
            cin >> width;
            if (width < 0){
                cout << "Invalid input. Width must be a positive integer.";
            }
        }

        Rectangle1 rectangle(length, width);

        cout << "Rectangle length: " << rectangle.get_length() << "\n";
        cout << "Rectangle width: " << rectangle.get_width() << "\n";
        cout << "Rectangle area: " << rectangle.get_area() << "\n";

        while (user_choice != 'Y' && user_choice != 'N'){
            cout << "Restart program? <y/n> ";
            cin >> user_choice;
            user_choice = toupper(user_choice);
            if (user_choice != 'Y' && user_choice != 'N'){
                cout << "Invalid input. Enter 'n' to quit or 'y' to restart program.";
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

    return 0;
}