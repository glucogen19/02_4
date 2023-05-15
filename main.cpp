#include <cstdio>
#include <iostream>
using namespace std;

class TBook {
public:
	string name;
	string author;
	int count;
	TBook();
	TBook(int newCount);
	void out() {
		cout << "Name: " << name << endl;
		cout << "Author: " << author << endl;
		cout << "Count: " << count << endl;
	}
};	

TBook::TBook() {
	name = "The Dark Forest";
	author = "Liu Cixin";
	count = 400;
}

TBook::TBook(int newCount) {
	name = "The Dark Forest";
	author = "Liu Cixin";
	count = newCount;
}

int main() {
	TBook tbook;
	cout << "Before: " << endl;
	tbook.out();
	TBook tbook2(500);
	cout << endl << "After: " << endl;
	tbook2.out();
	return 0;
}