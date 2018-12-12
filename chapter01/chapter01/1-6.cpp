#include<iostream>
#include<string>

using namespace std;
int main()
{
	string name;
	cout << "what is your name:";
	cin >> name;
	cout << "hello" << name << endl<<"and you?";
	cin >> name;
	cout << "hello" << name << endl;
	return 0;
}
