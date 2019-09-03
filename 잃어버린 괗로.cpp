#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int result = 0, index = 0;
	string str;
	bool minus = false;
	cin >> str;
	int size = str.size();
	for (int i = 0; i < size; i++) {
		if (!minus) {
			if (str[i] == '+') {
				result += stoi(str.substr(index, i - index));
				index = i + 1;
			}
			else if (str[i] == '-') {
				result += stoi(str.substr(index, i - index));
				index = i + 1;
				minus = true;
			}
			else if (i == size - 1) {
				result += stoi(str.substr(index, i + 1 - index));
			}
		}
		else {
			if (str[i] == '-' || str[i] == '+') {
				result -= stoi(str.substr(index, i - index));
				index = i + 1;
			}
			else if (i == size - 1) result -= stoi(str.substr(index, i + i - index));
		}
	}
	printf("%d\n", result);
}