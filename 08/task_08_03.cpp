#include <iostream>

#define EVAL_WEIGHT 100

using namespace std;

int main() {
    float weight_price;
    float weight;
    float price;
    float discount;
    float discount_price;
    float final_price;

    cout << "Enter the price per " << EVAL_WEIGHT << " grams: ";
    cin >> weight_price;

    cout << "Enter the weight of the product: ";
    cin >> weight;

    cout << "Enter a discount on the product: ";
    cin >> discount;

    price = (weight_price / EVAL_WEIGHT) * weight;
    discount_price = price * (discount / 100);
    final_price = price - discount_price;

    cout << "Price per " << weight << " grams with discount (" << discount
        << "%): " << final_price << endl;

    return 0;
}