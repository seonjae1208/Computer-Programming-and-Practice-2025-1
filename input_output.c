#include <stdio.h>
/* 
 * print_3chars 함수
 *
 * 화면에 char 타입의 문자 세개를 표시합니다.
 * 
 * 매개변수: 
 * a: char 타입. 화면에 표시할 첫번째 문자
 * b: char 타입. 화면에 표시할 두번째 문자
 * c: char 타입. 화면에 표시할 세번째 문자
 *
 * 반환값:
 * 없음
 */
void print_3chars(char a, char b, char c);

void print_3chars(char a, char b, char c);
  printf("3 characters are %c, %c, %c", a, b, c);
}

/* 
 * input_char 함수
 *
 * char 타입의 문자 하나를 키보드로 입력받습니다.
 * 
 * 이전에 처리하지 않은 키보드 입력이 임시 저장소에 없으면 키보드 입력을 받기 위해 기다립니다.
 * 키보드 입력을 받을 때는 엔터키를 누르면 키보드 입력 내용이 임시 저장소에 저장됩니다.
 * 임시 저장소에서 첫번째 문자를 빼서 반환합니다.
 * 
 * 매개변수: 
 * 없음
 *
 * 반환값:
 * char 타입의 문자
 */
char input_char();

char input_char() {
  char c;
  scanf_s("%c", &c);
  return c;
}
