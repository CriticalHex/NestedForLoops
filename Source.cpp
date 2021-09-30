#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i < 5; i++) {
		for (int a = 0; a < i; a++) {
			cout << i;
		}
		cout << endl;
	}
	int c = 1;
	for (int i = 0; i < 5; i++) {
		for (int b = 0; b < i; b++) {
			cout << c << " ";
			c++;
		}
		cout << endl;
	}
	int e = 1;
	char f = ' ';
	int h = 0;
	for (int i = 0; i < 5; i++) {
		for (int g = 4; g > h; g--) {
			cout << f;
		}
		h++;
		for (int d = 0; d < i; d++) {
			cout << e << " ";
			e++;
		}
		cout << endl;
	}
}