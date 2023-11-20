#include <iostream>
#include<conio.h>
using namespace std;
int tuþ;
void sayfayazýyazma(int y, string sayfay[10]) {
	tuþ = _getch();
	if (tuþ == 9) {
	system("cls");
	cout << "SAYFA: "<< y << endl;
	for (int i = 0; i <= 9; i = i++) {
		cin >> sayfay[i];
	}
	system("cls");
	}
}
void sayfayazýgösterme(string sayýx[10]) {
	system("cls");
	for (int i = 1; i <= 9; i = i++) {
		cout << sayýx[i] << endl;
	}
	cout << endl << "..//YAPIMCILAR: Yusuf ÇINAR & Eren HELVACI//.." << endl;
}
int main() {
	setlocale(LC_ALL, "Turkish");
	string sayý1[10], sayý2[10], sayý3[10], sayý4[10], sayý5[10], sayý6[10], sayý7[10], sayý8[10], sayý9[10];
	string* sayfa1 = sayý1;
	string* sayfa2 = sayý2;
	string* sayfa3 = sayý3;
	string* sayfa4 = sayý4;
	string* sayfa5 = sayý5;
	string* sayfa6 = sayý6;
	string* sayfa7 = sayý7;
	string* sayfa8 = sayý8;
	string* sayfa9 = sayý9;
	for (;;) {
		cout << "1. Sayfa Devam Etmek Ýçin (TAB)'a Basýn [<|>] 2. Sayfaya Geçmek Ýçin (ESC)'ye Basýn" << endl;
			sayfayazýyazma(1, sayfa1);
		cout << "2. Sayfa Devam Etmek Ýçin (TAB)'a Basýn [<|>] 3. Sayfaya Geçmek Ýçin (ESC)'ye Basýn" << endl;
			sayfayazýyazma(2, sayfa2);
		cout << "3. Sayfa Devam Etmek Ýçin (TAB)'a Basýn [<|>] 4. Sayfaya Geçmek Ýçin (ESC)'ye Basýn" << endl;
			sayfayazýyazma(3, sayfa3);
		cout << "4. Sayfa Devam Etmek Ýçin (TAB)'a Basýn [<|>] 5. Sayfaya Geçmek Ýçin (ESC)'ye Basýn" << endl;
			sayfayazýyazma(4, sayfa4);
		cout << "5. Sayfa Devam Etmek Ýçin (TAB)'a Basýn [<|>] 6. Sayfaya Geçmek Ýçin (ESC)'ye Basýn" << endl;
			sayfayazýyazma(5, sayfa5);
		cout << "6. Sayfa Devam Etmek Ýçin (TAB)'a Basýn [<|>] 7. Sayfaya Geçmek Ýçin (ESC)'ye Basýn" << endl;
			sayfayazýyazma(6, sayfa6);
		cout << "7. Sayfa Devam Etmek Ýçin (TAB)'a Basýn [<|>] 8. Sayfaya Geçmek Ýçin (ESC)'ye Basýn" << endl;
			sayfayazýyazma(7, sayfa7);
		cout << "8. Sayfa Devam Etmek Ýçin (TAB)'a Basýn [<|>] 9. Sayfaya Geçmek Ýçin (ESC)'ye Basýn" << endl;
			sayfayazýyazma(8, sayfa8);
		cout << "9. Sayfa Devam Etmek Ýçin (TAB)'a Basýn [<|>] Yazýlan Notlarý Görmek Ýçin (ESC)'ye Basýn" << endl;
		tuþ = _getch();
		if (tuþ == 9) {
			system("cls");
			cout << "SAYFA: 9" << endl;
			for (int i = 0; i <= 9; i = i++) {
				cin >> sayfa9[i];
			}
			system("cls");
		}
		else if (tuþ == 27)
		{
			break;
		}
	}
	cout << "/Sayfa Numarasýný Gir (1,2,3,4,5,6,7,8,9)//.." << endl;
	for (;;) {
		tuþ = _getch();
		if (tuþ == 49) {
			sayfayazýgösterme(sayý1);
		}
		else if (tuþ == 50) {
			
			sayfayazýgösterme(sayý2);
		}
		else if (tuþ == 51) {
			sayfayazýgösterme(sayý3);
		}
		else if (tuþ == 52) {
			sayfayazýgösterme(sayý4);
		}
		else if (tuþ == 53) {
			sayfayazýgösterme(sayý5);
		}
		else if (tuþ == 54) {
			sayfayazýgösterme(sayý6);
		}
		else if (tuþ == 55) {
			sayfayazýgösterme(sayý7);
		}
		else if (tuþ == 56) {
			sayfayazýgösterme(sayý8);
		}
		else if (tuþ == 57) {
			sayfayazýgösterme(sayý9);
		}
	}
	cout << endl << "..//YAPIMCILAR: Yusuf ÇINAR & Eren HELVACI//.." << endl;
	return 0;
}