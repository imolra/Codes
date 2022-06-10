#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	clock_t start;
	clock_t stop;
	double duration;

	// 측정 시작
	start = clock();

	for (int i = 0; i < 1000000; i++)
	{
		// 의미 없는 반복문
	}

	// 측정 종료
	stop = clock();

	// 경과한 시간 구하기 
	// (CLOCKS_PER_SEC로 나눠서 duration에 곱해져 있는 CLOCKS_PER_SEC 단위를 소거한다.)
	duration = (double)(stop - start) / CLOCKS_PER_SEC;

	printf("수행 시간은 %f초 입니다. \n", duration);

	return 0;
}

// [ref]
// C언어로 쉽게 풀어쓴 자료구조 p.23