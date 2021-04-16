#include<iostream>
using namespace std;

void main()
{
	int x;
	cout << "Enter three-digit number:";
	cin >> x;
	int d1, d2, d3, d4,d5;
	d1 = x /100;
	d2 = (x % 100) / 10;
	d3 = x % 10;
	d4 = d1*d1*d1 + d2*d2*d2 + d3*d3*d3;
	d5 = x * x;
	if (d4 == d5) 
	{
		cout << "These numbers are equal"<<endl;
	}
	else
	{
		cout << "These numbers are not equal"<<endl;
	}
}