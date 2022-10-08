#include <iostream>

using namespace std;

int main() {
    //restaurant bill
    float code, quantity, currency, per_kg_price = 0, meal_price, total_price = 0;
    float sales_tax;

    cout << "Restaurant\n\n";
    cout << "Code\t\tMeal\t\t\tPer kg Pkr\n";
    cout << "1\t\tFire Hot Steak\t\t1800\n2\t\tSole Meuniere\t\t2000\n3\t\tTexas Barbecue\t\t2200\n4\t\tMaxican Corn Salad\t500\n5\t\tCreamy Mushroom\t\t2500\n";
    cout << "\nEnter the meal code\t";
    cin >> code;

    if (code >= 1 && code <= 5) {
        cout << "\nEnter the quantity of the dish that you want to buy in kilograms \t";
        cin >> quantity;

        if (quantity > 0) {
            cout << "\nEnter the currency for payment (1 for rupee, 2 for euro, and 3 for dollar)\t";
            cin >> currency;

            if (currency == 1 || currency == 2 || currency == 3) {
                if (code == 1) {
                    per_kg_price = 1800;
                }
                else if (code == 2) {
                    per_kg_price = 2000;
                }
                else if (code == 3) {
                    per_kg_price = 2200;
                }
                else if (code == 4) {
                    per_kg_price = 500;
                }
                else {
                    per_kg_price = 2500;
                }

                meal_price = per_kg_price * quantity;
                if (meal_price <= 1000) {
                    sales_tax = 0;
                }
                else if (meal_price > 1000 && meal_price <= 3000) {
                    sales_tax = (2.0/100) * meal_price;
                }
                else if (meal_price > 3000) {
                    sales_tax = (5.0 / 100) * meal_price;
                }
                else {
                    cout << "Invalid Input";
                }
                total_price = meal_price + sales_tax;

            }
            else {
                cout << "Inavlid Input";
            }
        }
        else {
            cout << "\nInvalid Quantity";
        }
        if (currency == 1) {
            total_price *= 1;
            meal_price *= 1;
            sales_tax *= 1;

            cout << "Total Price of The Meal = Rs " << float(total_price) << endl;
            cout << "The Meal Price = Rs " << float(meal_price) << endl;
            cout << "The Sales Tax of The Meal = Rs " << float(sales_tax) << endl;
        }
        else if (currency == 2) {
            total_price = (1.0 / 222) * total_price;
            meal_price = (1.0 / 222) * meal_price;
            sales_tax = (1.0 / 222) * sales_tax;

            cout << "Total Price of The Meal = €" << float(total_price) << endl;
            cout << "The Meal Price = €" << float(meal_price) << endl;
            cout << "The Sales Tax of The Meal = €" << float(sales_tax) << endl;
        }
        else {
            total_price = (1.0 / 200) * total_price;
            meal_price = (1.0 / 200) * meal_price;
            sales_tax = (1.0 / 200) * sales_tax;

            cout << "Total Price of The Meal = $" << float(total_price) << endl;
            cout << "The Meal Price = $" << float(meal_price) << endl;
            cout << "The Sales Tax of The Meal = $" << float(sales_tax) << endl;
        }
    }
    else {
        cout << "Invalid Input";
    }



    return 0;
}