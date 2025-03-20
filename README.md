# 문자 반복 출력 과제

이번 과제에서는 1부터 127까지 숫자가 어떤 문자를 나타내는지 출력을 해봅니다.

과제를 해결하기 위해 input_output.c 소스파일에는 다음과 같은 함수들이 정의되어 있습니다.

`void repeat_f(void (*f)(int i))`는 입력받은 함수를 반복해서 실행합니다. 
인자는 0부터 127까지의 숫자를 한번씩 씁니다. 

`void print_char(int i)`는 숫자에 해당하는 문자를 화면에 출력합니다.

`void print_int(int i)`는 숫자를 화면에 출력합니다.

#### 코드 예시:
```c
void repeat_f(void (*f)(int i));
void print_char(int i);
void print_int(int i);

/* int 타입 매개변수를 화면에 출력하고, 해당하는 문자도 화면에 출력하는 함수 */
void print_int_and_char(int i) {
   print_int(int i);                /* 숫자를 화면에 출력 */ 
   print_char(int i);               /* 숫자에 해당하는 문자를 화면에 출력 */
   print_char('\n');                /* 줄바꿈 문자를 화면에 출력 */
}

int main() {
   repeat_f(&print_int_and_char);   /* 숫자와 문자를 출력하는 함수를 0부터 127까지 숫자를 인자로 반복 실행 */
   return 0;                        /* 프로그램 종료 */
}
```
