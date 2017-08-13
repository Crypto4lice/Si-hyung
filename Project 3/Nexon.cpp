#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main() {
	int mapSize;
	cin >> mapSize;										// 맵 크기 입력
	char map[10][10];									// 맵 배열
	int Daramg_Count = 0;								// 다람쥐 수 세기
	int Character_Count = 0;                            // 사람 수 세기
	int Create_Daramg = 0;								// 생성할 다람쥐 수

	for (int i = 0; i < mapSize; i++) {                 // 맵 입력받아
		for (int k = 0; k < mapSize; k++) {
			cin >> map[i][k];
		}
		cout << endl;
	}


	
	for (int i = 0; i < mapSize; i++) {					// 다람쥐와 사람 수 세기
		for (int k = 0; k < mapSize; k++) {
			if (map[i][k] == 'D')
				Daramg_Count++;
			else if (map[i][k] == 'C')
				Character_Count++;
		}
	}
	
	if (Daramg_Count < Character_Count)
		Create_Daramg = Character_Count * 2;			// 다람쥐의 수가 적어도 플레이어 수보다 두 배가 되기

	
	for (int a = 0; a < Create_Daramg; a++) {			// 랜덤으로 다람쥐를 배치하기
		srand((unsigned)time(NULL));
		int i = (rand() % mapSize); +1;
		int k = (rand() % mapSize); +1;
		map[i][k] = 'D';
	}


	for (int i = 0; i < mapSize; i++) {                 // 맵 출력하기
		for (int k = 0; k < mapSize; k++) {
			cout << map[i][k];
		}
		cout << endl;
	}
	
	return 0;
}