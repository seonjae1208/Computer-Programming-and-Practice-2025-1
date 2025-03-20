# 포맷팅된 출력 과제

이번 과제에서는 포맷을 만들고, 포맷에 따라 출력을 해봅니다.
포맷 문법에서 `%c`는 값을 문자로 출력함을 의미하고, 
`%d`는 값을 숫자로 출력함을 의미합니다.
`'%c'==%d`라고 포맷을 정하면, 첫번째 값은 문자로, 두번째 값은 숫자로 출력합니다.
문자를 하나 입력받아서 이에 해당하는 숫자 값이 무엇인지 
`'%c'==%d` 포맷으로 화면에 출력해봅니다.

과제를 해결하기 위해 input_output.c 소스파일에는 다음과 같은 함수들이 정의되어 있습니다.

`void add_to_format(char c)`는 입력받은 문자를 포맷에 추가합니다.

`void print_formatted(char a, char b)`는 정해진 포맷에 따라 문자 두개를 출력합니다.

`char input_char ()`는 키보드로 입력받은 내용 중 첫번째 문자를 빼서 반환합니다.

#### 코드 예시:
```c
void add_to_format(char c);
void print_formatted(char a, char b);
char input_char();

int main() {
   char a = 'k';                /* char 자료형의 변수 a */
   char b = input_char();       /* 키보드로 입력받은 문자 하나를 b에 저장 */
   add_to_format('!');          /* 실행 후 포맷: ! */
   add_to_format('%');          /* 실행 후 포맷: !% */
   add_to_format('c');          /* 실행 후 포맷: !%c */
   print_formatted(a, b);       /* 화면에 !k가 출력됨 */
   return 0;                    /* 프로그램 종료 */
}
```
