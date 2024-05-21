#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>		//system함수를 사용하기 위한 헤더파일
#include <windows.h>	// Sleep 함수를 사용하기 위한 헤더파일

int main(void) {

	system("dir/w");	//현재 디렉토리의 파일 목록을 출력
	
	Sleep(2000);	//2초간 프로그램을 일시정지

	system("cls");		//cmd 참을 지우고 ipconfig명령어 실행
	system("ipconfig/all");

	return 0;
}