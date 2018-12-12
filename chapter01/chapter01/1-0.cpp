#include<string>
#include<iostream>

using namespace std;

int main(){

	string first, second, hello,name,greeting;
	cout << "ÇëÊäÈëÄãµÄÃû×Ö£º";
	cin >> name;
	hello = "Hello," + name + "!";
	const string space(hello.size(), ' ');
	const string fill(hello.size(),'*');
	first = "**" + fill + "**";
	second = "* " + space + " *";
	greeting = "* " + hello + " *";

	cout << first << endl;
	cout << second << endl;
	cout << greeting << endl;
	cout << second << endl;
	cout << first << endl;

	return 0;
}