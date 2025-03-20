# 큰정수입력 작은정수출력 과제

`unsigned char` 자료형은 1 byte 크기로 음이 아닌 정수를 나타내고, 
`unsigned int` 자료형은 음이 아닌 정수를 나타내지만 대부분의 컴퓨터에서 크기가 4 byte입니다.

이번 과제에서는 키보드 입력을 받아서 `unsigned int` 자료형으로 저장한 다음에, 
`unsigned char` 자료형으로 변환해서 화면에 출력해봅니다.

과제를 해결하기 위해 input_output.c 소스파일에는 다음과 같은 함수들이 정의되어 있습니다.

`unsigned int input_uint()`는 
화면에 16진수 숫자를 입력하라는 메시지를 출력하고, 키보드 입력을 받아서 엔터키가 눌리면 해당 숫자를 반환합니다.

`unsigned char uint_to_uchar (unsigned int)`는
`unsigned int` 자료형의 값을 `unsigned char`로 변환해서 반환합니다.

`void print_uchar (unsigned char)`는
화면에 16진수로 1 byte 음이 아닌 정수를 출력합니다.

#### 코드 예시:
```c
unsigned int input_uint();
unsigned char uint_to_uchar(unsigned int);
void print_uchar(unsigned char);

int main() {
   unsigned int ui = input_uint()          /* unsigned int 자료형의 변수 ui에 입력받은 숫자를 저장 */
   unsigned char uc = 0x01;                /* unsigned char 자료형의 변수 uc */
   unsigned char uc2 = uint_to_uchar (ui)  /* ui의 값을 unsigned char 타입으로 바꿔서 변수 uc2에 저장 */
   print_uchar(uc);                        /* uc의 값을 화면에 출력 */
   return 0;                               /* 프로그램 종료 */
}
```

# 관련 C89 표준
2.2.4.2 Numerical limits
> A conforming implementation shall document all the limits specified in this section,
> which shall be specified in the headers <limits.h> and <float.h>
>
> The values given below shall be replaced by constant expression suitable for use ...
> Their implementation-defined values shall be equal or greater in magnitude (absolute value)
> to those shown, with the same sign.
>
> maximum number of bits for smallest object ... (byte) CHAR_BIT 8
>
> minimum value for an object of type int INT_MIN -32767
> maximum value for an object of type int INT_MAX +32767

4.9.6.4 The scanf function
> **Description**
>
> The scanf function is equivalent to fscanf with the argument stdin interposed before the argument to scanf
>
> **Returns**
>
> The scanf function returns the value of the macro EOF if an input failure occurs before any conversion.
> Otherwise, the scanf function returns the number of input items assigned, which can be fewer than
> provided for, or even zero, in the event of an early matching failure.

4.9.1 Introduction
> The macros are
>
> stdin
>
> which are expression of type "pointer to FILE" that point to the FILE objects associated with
> the standard input streams.

4.9.6.2 The fscanf function
> **Description**
>
> The fscanf function reads input from the stream pointed to by stream, under control of the string
> pointed to by format that specifies the admissible input sequences and how they are to be
> converted for assignment, using subsequent arguments as pointers to the objects to
> receive the converted input. 

3.2.1.2 Signed and unsigned integers
>
> When an integer is demoted to an unsigned integer with smaller size,
> the result is the nonnegative remainder on division by the number one greater than the
> largest unsigned number that can be represented in the type with smaller size.
> When an integer is demoted to a signed integer with smaller size, or an unsigned integer
> is converted to its corresponding signed integer, if the value cannot be represented
> the result is implementation-defined.
