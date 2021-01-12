#include <iostream>
using namespace std;

int main() {
  float temperature;
  char choice;

  cout << "Please enter the starting temperature:";
  cin >> temperature;
  
  cout << "Press ‘C’ to convert from Fahrenheit to Centigrade. \n";
  cout << "Press ‘F’ to convert from Centigrate to Fahrenheit. \n";

  cout << "Your choice: ";

  cin >> choice;

  if (choice == 'C' || choice == 'c') {
    cout << temperature << " degrees Fahrenheit is " << (temperature - 32) * 5 / 9 << "\n";
  } else if (choice == 'F' || choice == 'f') {
    cout << temperature << " degrees Centigrade is " << (temperature * 9 / 5) + 32 << "\n";
  }
}