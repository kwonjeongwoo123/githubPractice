/*
HW NUMBER: 2
FILE NAME : Family.cpp
AUTHOR : 컴퓨터공학과 2학년 C311015 권정우
YYYYMMDD : 2024.07.03
PURPOSE :  1. 4장의 정답이 공개된 실습문제 4-1를 스스로 학습하시오. (제출하지 않음)
                    2. 4장의 실습문제 4-9,4-10은 서로 연관이 되어있는 문제들이니, 다음의 과정들을 따라 소스코드를
                        작성하고 그 실행결과를 보이시오.
                        1) 실습문제 4-9,4-10 모두에서 사용되는 Person class의 member variables & functions을
                            모두 합쳐서 통합된 Person class를 작성하시오.
                        2) 4-9의 출력결과가 나올 수 있도록 Person class와 main() 함수를 작성하시오.
                        3) 실습문제 4-10에서 제시한 main()가 작동되도록 Person class와 Family class에 필요한
                            member들을 추가하여 코드를 완성하시오.
                        4) 1)~3)에서 작성 한 코드의 출력결과는 4-9와 4-10의 출력결과 모두를 순서대로 동일하게
                            출력할 수 있어야 합니다.
                        5) 3장 예제 3-11에서 보여준 것 같이, 위의 1)~3)에서 작성 한 코드를 다음과 같은 header
                            파일과 cpp파일들로 분리하여 재작성하시오:
                                    Person.h, Family.h, Person.cpp, Family.cpp, main.cpp
*/

#include "Family.h"     // Family 헤더파일 include

Family::Family(string name, int size) {     // size 개수만큼 Person 배열 동적 생성
	p = new Person[size];	// Person배열 동적 메모리 할당
	this->size = size;		// size변수 초기화
	familyName = name;	// 가족 이름 초기화
}
void Family::setName(int i, string nameIn) {    // 추가한 멤버 함수
	p[i].set(nameIn, "");		// Person클래스의 set함수 이용, 전화번호는 필요없으므로 공백 문자열로 초기화
}
void Family::show() {       // 모든 가족 구성원 출력
	cout << familyName << "가족은 다음과 같이 " << size << "명 입니다." << endl;    // 가족 이름과 size를 이용하여 출력
	for (int i = 0; i < size; i++)
		cout << p[i].getName() << '\t';		// Person클래스의 getName함수로 name변수 접근
	cout << endl;
}
Family::~Family() {     // Family클래스의 소멸자
	delete[] p;		// Person배열 메모리 반환
}