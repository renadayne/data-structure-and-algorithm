#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	for(int i = str.size() - 1; i >= 0; i--)
	{
		cout << str[i];
	}
	return 0;
}
