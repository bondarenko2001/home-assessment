#include <iostream>
 
using namespace std;
 
int main()
{
  int number;
 
  cout << "Введите число: ";
  cin >> number;
  cin.ignore();
  cout << "Вы ввели: "<< number <<"\n";
  cin.get();
}