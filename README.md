# 큰정수입력 작은정수출력 과제

input_output.c 소스파일에는 화면에 Enter a real number. 라고 출력하는 

문자를 출력하는 `void print_char(char)` 함수가 정의되어 있습니다.
이 함수를 써서 화면에 linux라고 출력하는 것이 과제입니다.

#### 코드 예시:
```c
void print_char(char c);

int main() {
   /* 화면에 hi를 출력합니다. */
   print_char('h'); /* 화면에 h를 출력합니다. */
   print_char('i'); /* 화면에 i를 출력합니다. */
}
```

# 관련 C89 표준
4.9.6.3 The printf function
>
> **Description**
>
> The printf function is equivalent to fprintf with the argument stdout interposed before the arguments to printf.
>
> **Returns**
>
> The printf function returns the number of characters transmitted, or a negative value if an output error occurred.

4.9.1 Introduction
>
> **Introduction**
>
> The header <stdio.h> declares three types, several macros, and many functions for performing input and output.
>
> The types declared are ...
>
> FILE
>
> which is an object type capable of recording all the information needed to control a stream, ...
>
> The macros are ...
>
> ...
>
> stdout
>
> which are expressions of type "pointer to FILE" that point to the FILE objects associated ... with
> the standard ... output streams.

4.9.2 Streams
>
> Input and output, whether to or from physical devices such as terminals and tape drives, ...,
> are mapped into logical data streams, whose properties are more uniform than their various
> inputs and outputs.

4.9.3 Files
>
> At program startup, three text streams are predefined and need not be opened explicitly ---
> ... standard output (for writing conventional output), ...

4.9.6.1 The fprintf function
>
> **Description**
>
> The fprintf function writes output to the stream pointed to by stream, under control of the string
> pointed to by format that specifies how subsequent arguments are converted for output. 
