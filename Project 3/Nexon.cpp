#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main() {
	int mapSize;
	cin >> mapSize;										// �� ũ�� �Է�
	char map[10][10];									// �� �迭
	int Daramg_Count = 0;								// �ٶ��� �� ����
	int Character_Count = 0;                            // ��� �� ����
	int Create_Daramg = 0;								// ������ �ٶ��� ��

	for (int i = 0; i < mapSize; i++) {                 // �� �Է¹޾�
		for (int k = 0; k < mapSize; k++) {
			cin >> map[i][k];
		}
		cout << endl;
	}


	
	for (int i = 0; i < mapSize; i++) {					// �ٶ���� ��� �� ����
		for (int k = 0; k < mapSize; k++) {
			if (map[i][k] == 'D')
				Daramg_Count++;
			else if (map[i][k] == 'C')
				Character_Count++;
		}
	}
	
	if (Daramg_Count < Character_Count)
		Create_Daramg = Character_Count * 2;			// �ٶ����� ���� ��� �÷��̾� ������ �� �谡 �Ǳ�

	
	for (int a = 0; a < Create_Daramg; a++) {			// �������� �ٶ��㸦 ��ġ�ϱ�
		srand((unsigned)time(NULL));
		int i = (rand() % mapSize); +1;
		int k = (rand() % mapSize); +1;
		map[i][k] = 'D';
	}


	for (int i = 0; i < mapSize; i++) {                 // �� ����ϱ�
		for (int k = 0; k < mapSize; k++) {
			cout << map[i][k];
		}
		cout << endl;
	}
	
	return 0;
}