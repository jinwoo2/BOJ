#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#define index 100001

typedef struct Time {
	int start;
	int end;
}time;
bool cmp(time, time);

int main(void)
{
	time c[index];
	int n, count=0, limit=0;
	scanf_s("%d", &n);  //ȸ�ǽ� �� �Է�
	for (int i = 0; i < n; i++) { //�ð��Է�
		scanf_s("%d %d", &c[i].start, &c[i].end);
	}
	sort(c, c + n, cmp); //�ð��븦 ���Ľ�Ŵ

	for (int i = 0; i < n; i++) {// ȸ�ǽ� ������
		if (c[i].start >= limit) {//ù �ð��� ���� ¥�� ������ �ð�(limit)���� ũ��
			count++;	//�´� �ð��� ���� ����
			limit = c[i].end; //�� ���� �ð� �� ������ limit�̴ϱ� limit�� ����
		}
	}
	printf("%d\n", count);
	return 0;
}

bool cmp(time c1, time c2) {//�ΰ��� �ð��븦 ���ؼ�
	if (c1.end == c2.end) return c1.start < c2.start; //���� ������ �ð��� ������ ���۽ð��� 
	else return c1.end < c2.end;
}