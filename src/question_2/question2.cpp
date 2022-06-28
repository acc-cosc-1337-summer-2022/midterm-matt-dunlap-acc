#include "question2.h"
#include <vector>
#include <iostream>
using std::cout;
using std::vector;

bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int count){ 
    const int default_count = 48;
    const double default_sugar = 1.5;
    const double default_butter = 1.0;
    const double default_flour = 2.75;
    
    double ratio = (double) count / default_count;

    vector<double> ingredients;

    ingredients.push_back(default_sugar * ratio);
    ingredients.push_back(default_butter * ratio);
    ingredients.push_back(default_flour * ratio);

    return ingredients;
}