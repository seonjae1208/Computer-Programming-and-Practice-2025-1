#include <stdio.h>
static char format[10] = { 0 };
static int offset = 0;
/* 
 * add_to_format(char c) 함수
 *
 * 입력받은 문자를 포맷에 추가합니다.
 * 현재 포맷에 문자가 10개였으면, 에러 메시지 출력 후 포맷을 초기화합니다.
 * 
 * 매개변수: 
 * c: char 타입. 포맷에 추가할 문자
 *
 * 반환값:
 * 없음
 */
void add_to_format(char c);

void add_to_format(char c){
  if (offset == 10) {
    int i;
    for (i = 0; i < 10; i++) {
      format[i] = 0;
    }
    offset = 0;
  }
  format[offset++] = c;
}

/* 
 * print_formatted(char a, char b) 함수
 *
 * 정해진 포맷에 따라 인자 두개를 화면에 출력합니다.
 * 
 * 매개변수: 
 * a: char 타입. 출력할 첫번째 문자
 * b: char 타입. 출력할 두번째 문자
 * 반환값:
 * 없음
 */
void print_formatted(char a, char b);

void print_formatted(char a, char b){
  printf(format, a, b);
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
  scanf_s("%1c", &c);
  return c;
}
