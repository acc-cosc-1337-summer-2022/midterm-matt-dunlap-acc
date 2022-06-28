#include "question4.h"
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    bool continue_program = true;
    char user_choice = '\0';
    double mass = -1.0;
    double velocity = -1.0;    

    while (continue_program){

        while (mass < 0){
            cout << "\nEnter mass: ";
            cin >> mass;
            if (mass < 0){
                cout << "\nInvalid input. Mass must be a positive value.";
            }
        }

        while (velocity < 0){
            cout << "Enter velocity: ";
            cin >> velocity;
            if (velocity < 0){
                cout << "\nInvalid input. Velocity must be a positive value.";
            }
        }

        double kinetic_energy = get_kinetic_energy(mass, velocity);
        cout << "Kinetic energy: " << kinetic_energy;

        while (user_choice != 'Y' && user_choice != 'N'){
            cout << "\n\nRestart program? <y/n> ";
            cin >> user_choice;
            user_choice = toupper(user_choice);
            if (user_choice != 'Y' && user_choice != 'N'){
                cout << "\nInvalid input. Enter 'n' to quit or 'y' to restart the program.";
            } else {
                if (user_choice == 'Y'){
                    continue_program = true;
                } else {
                    continue_program = false;
                }
            }
        }

        user_choice = '\0';
        mass = -1.0;
        velocity = -1.0;

    }

    return 0;
}