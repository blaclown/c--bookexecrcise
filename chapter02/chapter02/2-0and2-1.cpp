#include<string>
#include<iostream>
using namespace std;
int main(){
	int rows,pad = 1;//pad = 0¾ÍÊÇ2-1
	string name;

	cout << "please enter your name:";
	cin >> name;
	const string greeting = "hello," + name + "!";
	rows = pad * 2 + 3;
	string::size_type cols = greeting.size() + pad * 2 + 2;
	cout << endl;
	for (int r = 0; r != rows; r++)
	{
		string::size_type c = 0;
		while (c!=cols)
		{
			if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
			{
				cout << "*";
				c++;
			}
			else if (r == pad + 1 && c == pad + 1)
			{
				cout << greeting;
				c += greeting.size();
			}
			else
			{
				cout << " ";
				c++;
			}
		}
		cout << endl;
	}

	return 0;
}