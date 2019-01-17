#include <iostream>
using namespace std;
int main()
{
	int kahon [5];
	int *turo = kahon;
	
	cout << "Enter 5 integers: ";
	for (int g = 0; g <5; g++){
		cin >> kahon [g];
	}
	
	for ( int j = 0; j < 5; j++)
	{
	cout << *turo << " ";
	*turo++;
	}
}
