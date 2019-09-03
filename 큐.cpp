#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	int n;
	int data,show;
	cin >> n;
	queue<int> q;

	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;

		if (command == "push") {
			cin >> data;
			q.push(data);
		}
		if (command == "pop") {
			if (q.empty() == 0) {
				show = q.front();
				q.pop();
			}
			else {
				show = -1;
			}
			cout << show << endl;
		}
		if (command == "size") {
			cout << q.size() << endl;
		}
		if (command == "empty") {
			cout << q.empty() << endl;
		}
		if (command == "front") {
			if (q.empty() == 0) {
				show = q.front();
			}
			else {
				show = -1;
			}
			cout << show << endl;
		}
		if (command == "back") {
			if (q.empty() == 0) {
				show = q.back();
			}
			else {
				show = -1;
			}
			cout << show << endl;
		}
	}
}



//
//q.size()
//
//q�� ������(�������� ���� �뷮�� �ƴ� ������ ����)�� ����
//
//q.empty()
//
//q�� ����� 0���� �ƴ����� Ȯ��
//
//q.front()
//
//q�� ���� ���� �� ���Ҹ� ����
//
//q.back()
//
//q�� ���� ���߿� �� ���Ҹ� ����
//
//q.push(val)
//
//q�� ��(�ڿ� val �߰�
//
//	q.pop()
//
//	q�� ���� ���� �� ���Ҹ� ����
//