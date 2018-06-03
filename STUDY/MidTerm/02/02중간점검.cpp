#include <iostream>
using namespace std;

// 변수와 상수의 차이점 : 변수는 프로그램 실행 중에 다른 값을 가질 수 있는 공간이며,
// 상수는 프로그램 실행 중에 다른 값을 가질 수 없는 공간이다.

// 변수와 자료형의 관련성을 설명하라
// 변수는 항상 자료형을 가지고 만들어진다.
// 자료형에 따라 변수가 메모리에서 어느 정도의 공간을 차지할 것인지가 결정되며,
// 변수에 들어갈 수 있는 값의 종류에 차이가 생긴다.
// 예를 들어 int, char, float 등의 변수가 존재한다.

// C++ 이 지원하는 자료형을 메모리 크기순으로 나열하라
// 8바이트 : double / long
// 4바이트 : int / long / float /
// 2바이트 : short
// 1바이트 : char
// unsigned 와 signed 는 동일한 메모리 크기를 갖는다.

// 변수 이름을 만들 때 지켜야 하는 규칙은?
// 변수 이름을 식별자라고 하는데, 식별자를 만들 때 몇 가지 규칙이 존재한다.
// 먼저 식별자는 알파벳 대, 소문자와 숫자, 밑줄 문자만 허용된다.
// 그리고 첫 번째 글자에는 숫자가 올 수 없다.마지막으로 C / C++ 의 키워드는
// 식별자로 사용할 수 없다.

// 변수 이름의 첫 번재 글자로 허용되는 글자들은?
// 첫 번째 글자로 허용되는 것 : 알파벳 대, 소문자 / 밑줄 문자
// 고유한 의미를 가지고 있는 단어를 무엇이라 하는가?
// 키워드

// 변수 x와 y를 int형으로 선언하여 보라. x는 0으로, y는 1로 초기화되도록.
int x, y;

// 변수 x와 y를 하나의 문장으로 선언하여 보라. ㅇㅇ


// 정수형에 속하는 자료형을 모두 열거하라
// int / long / short / 각각의 unsigned 버전

// 숫자값을 직접 사용하는 것보다 기호 상수를 사용하는 것의 이점은?
// 관리가 편리하다.

// 정수를 char, int, short, long의 여러 타입으로 분류하는 이유는?
// 메모리를 상황에 맞게 효율적으로 사용하기 위해서!

// 부호가 없는 unsigned int에 음수를 넣으면 어떻게 되는가?
// 언더 플로우가 발생한다.

unsigned int a = -1; //4294967295 가 결과

// 변수가 저장할 수 있는 한계를 넘어서는 값을 저장하면?
// 오버플로우가 발생함.


// C에서 문자를 나타내기 위해 사용하는 코드는?
// ASCII 코드 / UNI코드

// 경고음을 출력하는 제어 문자는?
// \a / char c = 7;

// 화면에 \를 출력하려면?
// 이스케이프 시퀀스 슬래쉬 / 를 붙여 /\ 의 형태로 출력한다.


// 부동 소수점형에 속하는 자료형들은?
// float / double

// float 대신에 double을 사용하는 이유는?
// 더 큰 바이트, 메모리로 더 많은 숫자를 표현 가능하기 때문이다.

// 부동 소수점형에서 오차가 발생하는 근본적인 이유는?
// 컴퓨터의 부동소수점형 처리 방식에 있어서, 10진수를 2진수로 변환하는데
// 손실이 발생하기 때문

// 12.345처럼 소수점이 있는 실수를 int에 넣을 경우는 ?
// int형에 맞춰 소수점 아래 부분이 버려진다. 12로 저장됨.

// 수식  (1.0 / 3.0) 을 float형 변수와 double형 변수에 각각 저장한 후에 출력
// 6자리까지 출력된다.

// 수식이란 어떻게 정의되는가?
// 수식 = Operand + Operator // Operand 는 상수와 변수가 존재

// 상수 10도 수식이라고 할 수 있는가?
// 상수 10도 TRUE 를 나타내는 수식이다.

// 아래의 수식에서 피연산자와 연산자 구분 : y = 10 + 20;
// 피연산자 : y, 10, 20 // 연산자 : =, +

// 연산자를 단항, 이항, 삼항으로 나누는 기준은?
// 피연산자의 개수


// 10 % 6 = 4

// 10 / 6 = 1

// x *= y == x = x * y

// x-- == x = x - 1;

// 내림 변환 / 올림 변환?
// 정수 -> 실수로 변환 = 올림
// 실수 -> 정수로 변환 = 내림

// int형 변수 x를 double형으로 형변환
// (double)x

// 하나의 수식에 정수와 부동소수점수가 섞이면?
// 더 큰 범위로 만들어진다.
// 부동소수점!

// 관계 수식의 결과로 생성될 수 있는 값은?
// 0 or 1 -> TRUE/ FALSE

// (3 >= 2) + 5 의 값은?
// 1 + 5 = 6


// 다음의 조건에 해당하는 논리 연산식
// 무주택 >= 3 && 가구주연령 >= 40 && 가족수 >= 3

// 상수 10 = 참

// 수식 !3 = 0

// 단축 계산의 예는?
// && 연산자의 경우, 첫 번째가 거짓이면 다음을 계산하지 않는다.
// || 연산자의 경우, 첫 번째가 참이면 다음을 ~

// 조건 연산자 a ? b : c
// a 가 참이면 b를 실행하고, 거짓이면 c를 실행하라
