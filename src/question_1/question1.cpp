#include "question1.h"
#include <iostream>
#include <iomanip>
using std::cout;
using std::setprecision;
using std::fixed;

bool test_config()
{
    return true;
}

double Receipt::calculate_tax(){
    return price * tax;
}

double Receipt::calculate_gratuity(){
    return price * gratuity;
}

double Receipt::display_receipt(double tax_amount, double gratuity_amount){        
    double total = tax_amount + gratuity_amount + price;
    
    cout << "\nMeal price: " << fixed << setprecision(2) << price << "\n";
    cout << "Tax:        " << fixed << setprecision(2) << tax_amount << "\n";
    cout << "Gratuity:   " << fixed << setprecision(2) << gratuity_amount << "\n";
    cout << "Total:      " << fixed << setprecision(2) << total << "\n";
}