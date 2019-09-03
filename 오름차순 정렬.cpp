#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
//버블 정렬
int main() {
	int c;
	cin >> c;

	int* arr = new int[c];

	for (int i = 0; i < c; i++) {
		cin >> arr[i];
	}
	int tmp;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < c - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

			}
		}
	}

	for (int i = 0; i < c; i++) {
		cout << arr[i] << endl;
	}
	delete[]arr;
	return 0;
}

//insertion sort

int main() {
	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int key;
	for (int i = 1; i < n; i++) {
		int j;
		key = i;
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > key) {
				arr[j + 1] = arr[j];
			}
			else {
				break;
			}

		}
		arr[j + 1] = key;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	delete[]arr;
	return 0;
}

//선택정렬 .c
//
//#include <stdio.h>
//
// 1 <= n <= 1000
//int data[1000];
//
//int main(void) {
//
//	int i, j, min, temp, index, num;
//
//	scanf("%d", &num);
//
//	for (i = 0; i < num; i++) {
//		scanf("%d", &data[i]);
//	}
//
//	for (i = 0; i < num; i++) {
//		min = 1001;
//		for (j = i; j < num; j++) {
//			if (min > data[j]) {
//				min = data[j];
//				index = j;
//			}
//		}
//		temp = data[i];
//		data[i] = data[index];
//		data[index] = temp;
//	}
//
//	for (i = 0; i < num; i++) {
//		printf("%d\n", data[i]);
//	}
//
//	return 0;
//}


#define swap(x, y ,z) 

void selection_sort(int list[], int n) {
	int i, j, least, temp;
	for (i = 0; i < n - 1; i++) {
		least = i;
		for (j = i + 1; j < n; j++) {
			if (list[j] < list[least]) least = j;
			swap(list[i], list[least], temp);
		}
	}
}

int main() {
	int input[1000000];
	scanf("%s", &input);

}