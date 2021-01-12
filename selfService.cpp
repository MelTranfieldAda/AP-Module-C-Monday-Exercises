#include <iostream>
using namespace std;

int main() {
  const float taxRate = 0.055;
  float subtotal;

  for (int i = 1; ; i++) {
    cout << "Please enter a quantity for item " << i << " (or 0 to finish):";

    int quantity;
    float cost;

    cin >> quantity;

    if (quantity == 0) {
      break;
    }

    cout << "Please enter item " << i << " cost: \n";

    cin >> cost;

    subtotal += cost * quantity;
  }

  cout << "Thank you." << "\n";

  cout << "Subtotal " << subtotal << "\n";

  float tax = subtotal * taxRate;

  cout << "Shopping tax: " << tax << "\n";

  cout << "Total is: " << (tax + subtotal);
}