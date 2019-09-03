//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	string s; //������ �Է��� ����
	string num; //���� �ȿ� ���ڸ� ������ ����
	queue<int> q; //���ڸ� ���� ����
	int ans = 0; //���� ����� ����

	//������ �Է��ϰ� ���ڵ��� ��� ã�Ƽ� ť �ȿ� �־��ش�.
	cin >> s;
	for (unsigned int i = 0; i < s.size(); i++) {
		if ('0' <= s[i] && s[i] <= '9') { //������ ���
			num = num + s[i];
		}
		else { //���ڰ� �ƴ� ���
			q.push(stoi(num)); //���ڸ� ť�� �ִ´�.
			num.clear(); //���ڸ� ���� ���� �ʱ�ȭ
		}
		if (i == s.size() - 1) { //�Ŀ� ������ �����̸�
			q.push(stoi(num)); //���ڸ� ť�� �ִ´�.
			num.clear(); //���ڸ� ���� ���� �ʱ�ȭ
		}
	}
	ans = q.front(); //�켱 ù��° ���� ans�ȿ� �ִ´�. (����� ù��° ���ں��� �ϱ� ���Ͽ�)
	q.pop(); //ť�� ù��° ���Ҹ� ��
	for (unsigned int i = 0; i < s.size(); i++) { //���Ŀ��� -��ȣ�� ������ �� ��� +��ȣ�� ���ϴ� ����
		if (s[i] == '+') { //�����̸�
			ans = ans + q.front(); //ť�� ù��° ���Ҹ� ans�� �����ش�.
			q.pop(); //ť�� ù��° ���Ҹ� ��
		}
		else if (s[i] == '-') { //�����̸�
			break; //Ż��
		}
	}
	while (q.size()) { //ť�� �� ������
		ans = ans - q.front(); //ť �ȿ� ��� ���Ҹ� ���ش�.
		q.pop();
	}
	cout << ans;
}



//int main() {
//	string s;
//	cin >> s;
//	string temp = "";
//	int result = 0;
//	int minus = 0;
//	for (int i = 0; i <= s.size(); i++) {
//		if (s[i] == '+' || s[i] == '-' || s[i] == NULL) {
//			if (minus == 1) { result -= stoi(temp); }
//			else { result += stoi(temp); }
//			temp = "";
//			if (s[i] == '-') { minus = 1; }
//		}
//		else { temp += s[i]; }
//	}
//	cout << result;
//}

//
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int result = 0, index = 0;
//	string str;
//	bool minus = false;
//	cin >> str;
//	int size = str.size();
//	for (int i = 0; i < size; i++) {
//		if (!minus) {
//			if (str[i] == '+') {
//				result += stoi(str.substr(index, i - index));
//				index = i + 1;
//			}
//			else if (str[i] == '-') {
//				result += stoi(str.substr(index, i - index));
//				index = i + 1;
//				minus = true;
//			}
//			else if (i == size - 1) {
//				result += stoi(str.substr(index, i + 1 - index));
//			}
//		}
//		else {
//			if (str[i] == '-' || str[i] == '+') {
//				result -= stoi(str.substr(index, i - index));
//				index = i + 1;
//			}
//			else if (i == size - 1) result -= stoi(str.substr(index, i + i - index));
//		}
//	}
//	printf("%d\n", result);
//}