#include <iostream>
using namespace std;

int main () {

int meal;
int mealQuantity;
int drink;
int drinkQuantity;
double burger = 20.00;
double polo = 25.00;
double spaghetti = 30.00;
double pesto = 35.00;
double friedrice = 40.00;
double prawns = 50.00;

cout << "\t\t ***Welcome to Reina Foods*** \t\t" <<endl;
cout << "\t\t ~Meal~\t\t" << endl;

cout << " (1) Beef Burger -------------" << " $" << burger << endl;
cout << " (2) Penne Al Polo -----------" << " $" << polo << endl;
cout << " (3) Spaghetti Bolognaise ----" << " $" << spaghetti << endl;
cout << " (4) Prawns Pesto ------------" << " $" << pesto << endl;
cout << " (5) Assorted Friedrice ------" << " $" << friedrice << endl;
cout << " (6) Garlic Buttered Prawns---" << " $" << prawns << endl;
 
cout << "Choose your meal : " << endl;
cin >> meal;
cout << "How many:" << endl;
cin >> mealQuantity;

cout << "\t\t ~Drink~ \t\t" <<endl;

cout << " (1) Purple Summer ---------- " << endl;
cout << " (2) Passion Cup  ----------- " << endl;
cout << " (3) Virgin Francisco ------- " << endl;

cout << " Choose your drinks : " << endl;
cin >> drink;
cout << " How many : " << endl;
cin >> drinkQuantity; 
 
 

return 0;
}
