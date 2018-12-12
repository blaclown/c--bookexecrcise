#include<string>
#include<iostream>

using namespace std;
int main(){
	int pad = 2;
	int length = 5;
	int width = length * 3 + pad * 2;
	const string side(length, '*');
	for (int r = 0; r < length; r++)
	{
		int c = 0;
		while (c!=width )
		{
			if ((r == 0 && c == 0) || (r == 1 && c == length + pad - 1) || (r == 3 && c == length + pad - 1) || (r == 4 && c == 0))
			{
				cout << side;
				c += length;
			}
			else if (((r<4||r>0)&&(c==0||c==length - 1))||((r<4||r>0)&&(c==length + pad -1 || c == length*2+pad-1)))
			{
				cout << "*";
				c++;
			}
			else if ((r == 0&&c ==length*2+pad*2+2)||(r==1&&(c == length*2+pad*2+1||c == length*2 + pad*2 + 3)))
			{
				cout << " ";
				c++;
			}
			else
			{
				cout << " ";
				c++;
			}
		}
		cout << endl;
	}

}