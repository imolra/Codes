// 전처리중에서 헤더를 포함시키는 키워드
#include <stdio.h>

// 전처리중에서 매크로
#define PRODUCT (X, Y) ((X) * (Y))

// 함수가 main 함수보다 밑에 있으면 main 함수에서 호출 할 수 없다.
// 따라서 함수 원형을 선언해줘야한다.
void WriteSpace();

// C는 main을 제일 먼저 호출하고 main 함수가 return되면 프로그램이 종료된다. 
// main 함수는 프로그램에서 단 한개만 존재한다. 함수의 매개변수가 입력되는 
// () 괄호속에 있는 void는 이 함수에 전달되는 매개변수가 없다는 걸 의미한다.
int main(void)
{
	printf("Hello world.");

	WriteSpace();

	int number[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int max = GetMaxNum(number, sizeof(number) / sizeof(int));

	WriteSpace();

	printf("%d", max);

	WriteSpace();

	// 0 정상 종료
	// -1 에러 발생
	// 1 이상 정상 종료되었으나 다른 인자가 있음
	// -2 이하 에러가 발생했고 구체적으로 어떤 것인지 나타냄
	return 0;
}

// 반환형이 int이거나 반환형을 명시하지 않는 경우(컴파일러가 int로 취급함.) 
// main 함수보다 밑에 있어도 상관 없다.
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

// main 함수 위에 미리 정의해 놓은 함수를 여기서 구현함. 
// main 함수보다 위에 작성하면 이렇게 정의 부분과 구현 부분을 나눌 필요가 없다.
void WriteSpace()
{
	printf("\n");
}

// [ref]
// C언어로 쉽게 풀어쓴 자료구조 p.14