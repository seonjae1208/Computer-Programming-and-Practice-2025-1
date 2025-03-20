#include <stdio.h>


/* 
 * repeat_f 함수
 *
 * 함수를 입력받아서 128번 반복해서 실행합니다. 
 * 실행할 함수는 반환 타입이 void고, 매개변수가 int 하나여야 합니다. 
 * i를 0부터 127까지 반복해서 실행합니다. 
 * 
 * 매개변수: 
 * f: 함수 포인터 타입 (반환타입 void, 매개변수타입 int)
 *
 * 반환값:
 * 없음
 */
void repeat_f(void (*f)(int i));

void repeat_f(void (*f)(int i)) {
  int i = 0;
  while (i < 128)
    f(i++);
}

/* 
 * print_char 함수
 *
 * 숫자를 매개변수로 입력받아서 화면에 표시할 내용에 그 숫자에 해당하는 문자를 추가합니다.
 * 
 * 매개변수: 
 * i: int 타입. 화면에 해당하는 문자를 표시할 숫자
 *
 * 반환값:
 * 없음
 */
void print_char(int i);

void print_char(int i) {
  printf("%c", i);
}

/* 
 * print_int 함수
 *
 * 숫자를 매개변수로 입력받아서 화면에 표시할 내용에 그 숫자를 추가합니다.
 * 
 * 매개변수: 
 * i: int 타입. 화면에 표시할 문자
 *
 * 반환값:
 * 없음
 */
void print_int(int i);

void print_int(int i) {
  printf("%d", i);
}
