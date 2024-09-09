#include <iostream>
using namespace std;
int fun(int n) {

	int a, b = 0;
	int c = 1;
	for (int i = 1; i <= n; i++) {

		a = b;
		b = c;
		c = a + b;
	}
	return c;

}

int main() {

	cout << fun(10);

}