#include <iostream>

#define EVAL_WEIGHT 100

using namespace std;

int main() {
    float weight_price;
    float weight;
    float price;

    cout << "Enter the price per " << EVAL_WEIGHT << " grams: ";
    cin >> weight_price;

    cout << "Enter the weight of the product: ";
    cin >> weight;

    price = (weight_price / EVAL_WEIGHT) * weight;

    cout << "Price per " << weight << " grams: " << price << endl;

    return 0;
}