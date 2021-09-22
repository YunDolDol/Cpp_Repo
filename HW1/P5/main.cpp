#include <iostream>
using namespace std;

#include "Exp.h"

int main() {
	cout << "20181504 ������" << endl;

	Exp a(3, 2); // 3^2 = 9. ���̽� 3, ���� 2
	Exp b(9); // 9^1 = 9. ���̽� 9, ���� 1
	Exp c; // 1^1 = 1. ���̽� 1, ���� 1

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a�� ���̽� " << a.getBase() << ',' << "���� " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}