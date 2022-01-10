#include <iostream>
using namespace std;

void fonction(int& x) {
	x -= 2;
}

int main() {
	cout << "uwu";

	int i = 48;

	fonction(i);

	cout << i << endl;



	return 0;
}

