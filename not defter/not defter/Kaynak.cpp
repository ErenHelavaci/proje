#include <iostream>
#include<conio.h>
using namespace std;
int tu�;
void sayfayaz�yazma(int y, string sayfay[10]) {
	tu� = _getch();
	if (tu� == 9) {
	system("cls");
	cout << "SAYFA: "<< y << endl;
	for (int i = 0; i <= 9; i = i++) {
		cin >> sayfay[i];
	}
	system("cls");
	}
}
void sayfayaz�g�sterme(string say�x[10]) {
	system("cls");
	for (int i = 1; i <= 9; i = i++) {
		cout << say�x[i] << endl;
	}
	cout << endl << "..//YAPIMCILAR: Yusuf �INAR & Eren HELVACI//.." << endl;
}
int main() {
	setlocale(LC_ALL, "Turkish");
	string say�1[10], say�2[10], say�3[10], say�4[10], say�5[10], say�6[10], say�7[10], say�8[10], say�9[10];
	string* sayfa1 = say�1;
	string* sayfa2 = say�2;
	string* sayfa3 = say�3;
	string* sayfa4 = say�4;
	string* sayfa5 = say�5;
	string* sayfa6 = say�6;
	string* sayfa7 = say�7;
	string* sayfa8 = say�8;
	string* sayfa9 = say�9;
	for (;;) {
		cout << "1. Sayfa Devam Etmek ��in (TAB)'a Bas�n [<|>] 2. Sayfaya Ge�mek ��in (ESC)'ye Bas�n" << endl;
			sayfayaz�yazma(1, sayfa1);
		cout << "2. Sayfa Devam Etmek ��in (TAB)'a Bas�n [<|>] 3. Sayfaya Ge�mek ��in (ESC)'ye Bas�n" << endl;
			sayfayaz�yazma(2, sayfa2);
		cout << "3. Sayfa Devam Etmek ��in (TAB)'a Bas�n [<|>] 4. Sayfaya Ge�mek ��in (ESC)'ye Bas�n" << endl;
			sayfayaz�yazma(3, sayfa3);
		cout << "4. Sayfa Devam Etmek ��in (TAB)'a Bas�n [<|>] 5. Sayfaya Ge�mek ��in (ESC)'ye Bas�n" << endl;
			sayfayaz�yazma(4, sayfa4);
		cout << "5. Sayfa Devam Etmek ��in (TAB)'a Bas�n [<|>] 6. Sayfaya Ge�mek ��in (ESC)'ye Bas�n" << endl;
			sayfayaz�yazma(5, sayfa5);
		cout << "6. Sayfa Devam Etmek ��in (TAB)'a Bas�n [<|>] 7. Sayfaya Ge�mek ��in (ESC)'ye Bas�n" << endl;
			sayfayaz�yazma(6, sayfa6);
		cout << "7. Sayfa Devam Etmek ��in (TAB)'a Bas�n [<|>] 8. Sayfaya Ge�mek ��in (ESC)'ye Bas�n" << endl;
			sayfayaz�yazma(7, sayfa7);
		cout << "8. Sayfa Devam Etmek ��in (TAB)'a Bas�n [<|>] 9. Sayfaya Ge�mek ��in (ESC)'ye Bas�n" << endl;
			sayfayaz�yazma(8, sayfa8);
		cout << "9. Sayfa Devam Etmek ��in (TAB)'a Bas�n [<|>] Yaz�lan Notlar� G�rmek ��in (ESC)'ye Bas�n" << endl;
		tu� = _getch();
		if (tu� == 9) {
			system("cls");
			cout << "SAYFA: 9" << endl;
			for (int i = 0; i <= 9; i = i++) {
				cin >> sayfa9[i];
			}
			system("cls");
		}
		else if (tu� == 27)
		{
			break;
		}
	}
	cout << "/Sayfa Numaras�n� Gir (1,2,3,4,5,6,7,8,9)//.." << endl;
	for (;;) {
		tu� = _getch();
		if (tu� == 49) {
			sayfayaz�g�sterme(say�1);
		}
		else if (tu� == 50) {
			
			sayfayaz�g�sterme(say�2);
		}
		else if (tu� == 51) {
			sayfayaz�g�sterme(say�3);
		}
		else if (tu� == 52) {
			sayfayaz�g�sterme(say�4);
		}
		else if (tu� == 53) {
			sayfayaz�g�sterme(say�5);
		}
		else if (tu� == 54) {
			sayfayaz�g�sterme(say�6);
		}
		else if (tu� == 55) {
			sayfayaz�g�sterme(say�7);
		}
		else if (tu� == 56) {
			sayfayaz�g�sterme(say�8);
		}
		else if (tu� == 57) {
			sayfayaz�g�sterme(say�9);
		}
	}
	cout << endl << "..//YAPIMCILAR: Yusuf �INAR & Eren HELVACI//.." << endl;
	return 0;
}