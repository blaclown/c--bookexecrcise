#include<iostream>

using namespace std;

int compare(int num1, int num2);
int main(){
	int num1, num2,result;
	cout << "please enter number 1:";
	cin >> num1;
	cout << "please enter number 2:";
	cin >> num2;

	result = compare(num1, num2);
	cout << result << " is the max number" << endl;
	return 0;
}

int compare(int num1, int num2)
{
	return num1 > num2 ? num1:num2;
}