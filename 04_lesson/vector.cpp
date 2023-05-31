#include <iostream>
#include <vector>

using namespace std;
int main() {
	//vector <int> vector1(10);
	vector <int> vector1;
	cout << vector1.size() << endl;
	for (auto i = 0; i < 10; i++) {
		vector1.push_back(2*i+12);
	}
	cout << vector1.size() << endl;
	for (auto i = vector1.begin(); i != vector1.end(); i++) {
		cout << *i << endl;
	}
	cout << "While loop begins" << endl;
	auto i = vector1.begin();
	do {
		cout << *i << endl;
		i++;
	} while (i!=vector1.end());
		return 0;
}
