#include<string>
#include<iostream>

using namespace std;
int main(){
	int uppad, leftpad, rightpad, bottompad;
	string name;
	
	cout << "please enter your name:";
	cin >> name;
	cout << "please enter uppad:";
	cin >> uppad;
	cout << "please enter leftpad:";
	cin >> leftpad;
	cout << "please enter bottompad:";
	cin >> bottompad;
	cout << "please enter rightpad:";
	cin >> rightpad;

	const string greeting = "hello," + name + "!";

	const int rows = uppad + bottompad + 3;
	const string::size_type cols = greeting.size() + leftpad + rightpad + 2;

	cout << endl;

	for (int r = 0; r < rows; r++)
	{
		string::size_type c = 0;
		while (c != cols)
		{
			if (r == uppad + 1 && c == leftpad + 1)
			{
				cout << greeting;
				c += greeting.size();
			}
			else
			{
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				c++;
			}
		}
		cout << endl;
	}

	return 0;
}