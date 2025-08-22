#include <stdio.h>

int main(void)
{
	/* %d 서식문자는 문자열 내 어느 위치에나 올 수 있음
	   - 문장 중간에 위치 가능 (예: "My age: %d")
	   - 문장 시작에 위치 가능 (예: "%d is my point") */
	printf("My age: %d \n", 23);
	printf("%d is my point \n", 100);

	/* \n 개행문자 사용:
	   - 줄바꿈을 위해 사용
	   - 문자열 중간: 해당 위치에서 줄바꿈
	   - 문자열 끝: 다음 출력을 위한 새로운 줄 준비
	   - 마지막 출력문에도 \n을 넣는 것이 권장됨 (버퍼 비우기 및 깔끔한 출력을 위해) */
	printf("Good \nmorning \neverybody\n");
	return 0;
}