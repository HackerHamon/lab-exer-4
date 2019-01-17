#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	char pangalan[] = "Gabriel";
	char *duro = pangalan;
	
	for (int k=0; k <strlen(pangalan);k++)
	{
		cout << *duro;
		duro++;
	}
}
