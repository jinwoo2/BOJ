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
//q의 사이즈(물리적인 저장 용량이 아닌 원소의 개수)를 리턴
//
//q.empty()
//
//q의 사이즈가 0인지 아닌지를 확인
//
//q.front()
//
//q에 가장 먼저 들어간 원소를 리턴
//
//q.back()
//
//q에 가장 나중에 들어간 원소를 리턴
//
//q.push(val)
//
//q의 위(뒤에 val 추가
//
//	q.pop()
//
//	q에 가장 먼저 들어간 원소를 삭제
//