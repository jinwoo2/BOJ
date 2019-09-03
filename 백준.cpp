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
	scanf_s("%d", &n);  //회의실 수 입력
	for (int i = 0; i < n; i++) { //시간입력
		scanf_s("%d %d", &c[i].start, &c[i].end);
	}
	sort(c, c + n, cmp); //시간대를 정렬시킴

	for (int i = 0; i < n; i++) {// 회의실 수까지
		if (c[i].start >= limit) {//첫 시간이 내가 짜논 마지막 시간(limit)보다 크면
			count++;	//맞는 시간대 개수 증가
			limit = c[i].end; //그 다음 시간 의 시작이 limit이니깐 limit에 대입
		}
	}
	printf("%d\n", count);
	return 0;
}

bool cmp(time c1, time c2) {//두개의 시간대를 비교해서
	if (c1.end == c2.end) return c1.start < c2.start; //만약 끝나는 시간이 같으면 시작시간이 
	else return c1.end < c2.end;
}