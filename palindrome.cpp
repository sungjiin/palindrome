// palindrome.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include "pch.h"
#include <iostream>
using namespace std;

//회문을 구하는 소스
int main()
{
	int t, k;
	int result = 0;
	
	char arr[10];
	cin >> t; //t번 만큼 반복한다
	for (int i = 1; i <= t; i++) {
		cin >> arr;
		//회문의 글자는 10이 넘으면 안된다.
		if (sizeof(arr) / sizeof(char) > 10) {
			return 1;
		}
		k = strlen(arr)-1;
		for (int j = 0; j < strlen(arr) / 2; j++) {
			//만약 회문일 경우 result는 1이다
			if (arr[j] == arr[k]) {
				result = 1;
			}
			//그게 아니라 회문이 아닐경우 break;
			else if (arr[j] != arr[k]) {
				result = 0;
				break;
			}
			k--;
		}
		cout << "#" << i << ' ' << result << '\n';
	}
		
	return 0;
	
}

