#include <iostream>
using namespace std;

int main(void) {
	for (int i = 1; i < 9; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}


	return 0;
}