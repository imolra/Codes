#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	clock_t start;
	clock_t stop;
	double duration;

	// ���� ����
	start = clock();

	for (int i = 0; i < 1000000; i++)
	{
		// �ǹ� ���� �ݺ���
	}

	// ���� ����
	stop = clock();

	// ����� �ð� ���ϱ� 
	// (CLOCKS_PER_SEC�� ������ duration�� ������ �ִ� CLOCKS_PER_SEC ������ �Ұ��Ѵ�.)
	duration = (double)(stop - start) / CLOCKS_PER_SEC;

	printf("���� �ð��� %f�� �Դϴ�. \n", duration);

	return 0;
}

// [ref]
// C���� ���� Ǯ� �ڷᱸ�� p.23