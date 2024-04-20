#include <iostream>

#define EVAL_WEIGHT 100

using namespace std;

int main() {
    float proteins_in_grams;
    float carb_in_grams;
    float proteins;
    float carbohydrates;
    float weight;

    cout << "Enter the amount of protein per " << EVAL_WEIGHT << " grams: ";
    cin >> proteins_in_grams;

    cout << "Enter the amount of carbohydrates per " << EVAL_WEIGHT
        << " grams: ";
    cin >> carb_in_grams;

    cout << "Enter the weight of the product: ";
    cin >> weight;

    proteins = (proteins_in_grams / EVAL_WEIGHT) * weight;
    carbohydrates = (carb_in_grams / EVAL_WEIGHT) * weight;

    cout << "Proteins per " << weight << " grams: " << proteins << endl;
    cout << "Carbohydrates per " << weight << " grams: " << carbohydrates
        << endl;

    return 0;
}