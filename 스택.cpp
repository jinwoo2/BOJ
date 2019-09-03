#include <stdio.h>
#include <stdlib.h>
#include "intStack.h"

#include <iostream>
#include <string>
using namespace std;

#define maxVal 10001

class Stack
{
public:
	void push(int x) {
		data[++topstk] = x;
	}
	int pop() {
		if (empty()) return -1;
		else return data[topstk--];
	}
	int size() {
		return topstk + 1;
	}
	int empty() {
		return topstk == -1;
	}
	int top() {
		if (empty()) return -1;
		else return data[topstk];
	}


private:
	int data[maxVal];
	int topstk = -1; // 초기값 -1

};

int main() {

	int n;
	cin >> n;
	string str;
	Stack stk;
	int x = 0; // push에 쓸 변수

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> x;
			stk.push(x);
		}
		else {
			if (str == "top") {
				cout << stk.top() << "\n";
			}
			else if (str == "pop") {
				cout << stk.pop() << "\n";
			}
			else if (str == "size") cout << stk.size() << "\n";
			else if (str == "empty") cout << stk.empty() << "\n";
		}
	}
}
