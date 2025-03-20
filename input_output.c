#include <stdio.h>
/* 
 * print_char 함수
 *
 * 문자를 매개변수로 입력받아서 화면에 표시할 내용에 그 문자를 추가합니다.
 * 
 * 매개변수: 
 * c: char 타입. 화면에 표시할 문자
 *
 * 반환값:
 * 없음
 */
void print_char(char c);

void print_char(char c) {
  printf("%c", c);
}
