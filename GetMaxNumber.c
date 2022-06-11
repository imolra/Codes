// ��ó���߿��� ����� ���Խ�Ű�� Ű����
#include <stdio.h>

// ��ó���߿��� ��ũ��
#define PRODUCT (X, Y) ((X) * (Y))

// �Լ��� main �Լ����� �ؿ� ������ main �Լ����� ȣ�� �� �� ����.
// ���� �Լ� ������ ����������Ѵ�.
void WriteSpace();

// C�� main�� ���� ���� ȣ���ϰ� main �Լ��� return�Ǹ� ���α׷��� ����ȴ�. 
// main �Լ��� ���α׷����� �� �Ѱ��� �����Ѵ�. �Լ��� �Ű������� �ԷµǴ� 
// () ��ȣ�ӿ� �ִ� void�� �� �Լ��� ���޵Ǵ� �Ű������� ���ٴ� �� �ǹ��Ѵ�.
int main(void)
{
	printf("Hello world.");

	WriteSpace();

	int number[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int max = GetMaxNum(number, sizeof(number) / sizeof(int));

	WriteSpace();

	printf("%d", max);

	WriteSpace();

	// 0 ���� ����
	// -1 ���� �߻�
	// 1 �̻� ���� ����Ǿ����� �ٸ� ���ڰ� ����
	// -2 ���� ������ �߻��߰� ��ü������ � ������ ��Ÿ��
	return 0;
}

// ��ȯ���� int�̰ų� ��ȯ���� ������� �ʴ� ���(�����Ϸ��� int�� �����.) 
// main �Լ����� �ؿ� �־ ��� ����.
int GetMaxNum(int number[], int length)
{
	int largest = number[0];
	for (int i = 0; i < length; i++)
	{
		if (number[i] > largest)
		{
			largest = number[i];
		}
	}

	return largest;
}

// main �Լ� ���� �̸� ������ ���� �Լ��� ���⼭ ������. 
// main �Լ����� ���� �ۼ��ϸ� �̷��� ���� �κа� ���� �κ��� ���� �ʿ䰡 ����.
void WriteSpace()
{
	printf("\n");
}

// [ref]
// C���� ���� Ǯ� �ڷᱸ�� p.14