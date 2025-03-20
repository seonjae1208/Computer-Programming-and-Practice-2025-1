# 문자입력 문자출력 과제

이번 과제에서는 키보드 입력을 받아서 `char` 자료형으로 저장하는 것을 세번 하고, 
입력받은 문자들을 한번에 화면에 출력해봅니다.

과제를 해결하기 위해 input_output.c 소스파일에는 다음과 같은 함수들이 정의되어 있습니다.

`void print_3chars(char a, char b, char c)`는 
화면에 인자로 받은 문자 세개를 모두 출력합니다.

`char input_char ()`는
키보드로 입력받은 내용 중 첫번째 문자를 빼서 반환합니다.

#### 코드 예시:
```c
void print_3chars(char a, char b, char c);
char input_char();

int main() {
   char a = input_char()        /* 키보드로 입력받은 문자 하나를 a에 저장 */
   char b = 'o';                /* char 자료형의 변수 b */
   char c = 'k';                /* char 자료형의 변수 c */
   print_3chars(a, b, c);       /* a, b, c의 값을 화면에 출력 */
   return 0;                    /* 프로그램 종료 */
}
```
