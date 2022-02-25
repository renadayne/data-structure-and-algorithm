#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[10];
	for(int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	sort(a, a + 5);
	int sum = a[0] + a[4];
	cout << sum;
	return 0;
}
