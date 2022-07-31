#include <iostream>
#include <stdlib.h>
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
double purpleSummer = 25.00;
double passionCup = 25.00;
double virgin = 25.00;
double totalDrinks;
double totalMeal;
double totalBurger;
double totalPolo;
double totalPesto;
double totalSpaghetti;
double totalPrawns;
double totalFried;

system ("Color F3");

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

cout << " (1) Purple Summer ---------- " << purpleSummer << endl;
cout << " (2) Passion Cup  ----------- " << passionCup << endl;
cout << " (3) Virgin Francisco ------- " << virgin << endl;

cout << " Choose your drinks : " << endl;
cin >> drink;
cout << " How many : " << endl;
cin >> drinkQuantity; 


switch(meal) {
    case 1 :
       cout << " (1) Beef Burger -------------" << " $" << totalBurger << endl;
         totalBurger = burger * mealQuantity;
         break;
    case 2 : 
         cout << " (2) Penne Al Polo -----------" << " $" << totalPolo << endl;
         totalPolo = polo * mealQuantity;
         break;
    case 3 :
         cout << " (3) Spaghetti Bolognaise ----" << " $" << totalSpaghetti << endl;
         totalSpaghetti = spaghetti * mealQuantity;
         break;
    case 4 :
         cout << " (4) Prawns Pesto ------------" << " $" << totalPesto << endl;
         totalPesto = pesto * mealQuantity;
         break;
    case 5 : 
         cout << "(5) Assorted Friedrice ------" << " $" << totalFried << endl;
         totalFried = friedrice * mealQuantity;
         break;
    case 6 : 
         cout << " (6) Garlic Buttered Prawns---" << " $" << totalPrawns << endl;
         totalPrawns = prawns * mealQuantity;
         break;
}
 switch (drink) {
         case 1
         case 2
         case 3
         case 4

}
 

return 0;
}
