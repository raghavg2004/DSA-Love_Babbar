#include<iostream>
using namespace std;

void totalNotes(int amount)
{
	int a[8] = {500, 100, 50, 20, 10, 5, 2, 1};
	int i, temp;
	
	temp = amount;
	
	for(i = 0; i < 8; i++)
  	{
		cout << a[i] <<" Notes is =  " << temp / a[i] << endl;
		temp = temp % a[i];
  	}
}
int main()
{
	int amount;
	
	cout << "\nPlease Enter the Amount of Cash =  ";
	cin >> amount;
	
	totalNotes(amount);
		
 	return 0;
}