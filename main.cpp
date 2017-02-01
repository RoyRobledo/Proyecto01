#include <iostream>
#include <conio.h>

using namespace std;

int x, y, z;
int suma, resta;

void multiplicacion_division();
void suma_resta();

int main()
{
  cout << endl << "Dame un numero: ";
  cin >> x;
  cout << endl << "Dame un numero: ";
  cin >> y;
  suma_resta();
  cout << endl << endl;
  system("PAUSE");
  return 0;
}

void multiplicacion_division()
{
  cout << endl << x*y;
  cout << endl << x/y;
  return;
}

void suma_resta()
{
 suma = x + y;
 resta = x - y;
 return;
}
