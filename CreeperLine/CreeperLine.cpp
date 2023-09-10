#include "iostream"
#include "stdio.h"
#include "windows.h" 
#include "conio.h" 
#include "locale.h"

using namespace std;

enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	White = 15,
	Red = 4,
	Bluelight = 9,
	Yellow = 6,
};

void SetColor(ConsoleColor text, ConsoleColor background); //konfiguracja koloru

void pix(int type, int x); //twórca pikseli

void ramaup(); //góra ramki

void fir();  //lewa część ramki

void firs(); //prawa część ramki

void ramadown(); //dół ramki

void b(); //czerny piksel

void w(); //biały piksel

void err(int x); //napis error w przypadku symboli nie akceptowalnych

void literki(int x, int y, char c); //pikselowy tłumacz

void vodA(); //uzupełniacz ciągu

void dalabub(); //główna funkcja

int main()
{
	setlocale(LC_ALL, "RU");
	system("mode con cols=170 lines=60");
	vodA();
	dalabub();
	system("pause");
	return 0;
}


char begu[256];
int g, f;

void vodA()
{
	for (int k = 0; k < 10; k++)
	{
		begu[k] = ' ';
	}
	cout << "\t\t\n\n\n\nWpisz tekst :" << endl;
	char gg[230];
	cin.getline(gg, 230);
	int i = strlen(gg);
	f = i + 10;
	g = i + 20;
	for (int k = 10, j = i + 10, f = 0; k < j; k++, f++)
	{
		begu[k] = gg[f];
	}
	for (int k = i + 10, j = i + 20; k < j; k++)
	{
		begu[k] = ' ';
	}
	system("cls");
}

void literki(int x, int y, char c)
{

	if (c == ' ') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == '\0') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == 'A' || c == 'a') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
	}
	if (c == 'B' || c == 'b') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == 'C' || c == 'c') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == 'D' || c == 'd') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == 'E' || c == 'e') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
	}
	if (c == 'F' || c == 'f') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == 'G' || c == 'g') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == 'H' || c == 'h') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
	}
	if (c == 'I' || c == 'i') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == 'J' || c == 'j') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == 'K' || c == 'k') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
	}
	if (c == 'L' || c == 'l') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
	}
	if (c == 'M' || c == 'm') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
	}
	if (c == 'N' || c == 'n') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
	}
	if (c == 'O' || c == 'o') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == 'P' || c == 'p') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == 'Q' || c == 'q') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { b(); } }
	}
	if (c == 'R' || c == 'r') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
	}
	if (c == 'S' || c == 's') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == 'T' || c == 't') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == 'U' || c == 'u') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == 'V' || c == 'v') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == 'W' || c == 'w') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
	}
	if (c == 'X' || c == 'x') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
	}
	if (c == 'Y' || c == 'y') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == 'Z' || c == 'z') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
	}
	if (c == '.') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == ',') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == '!') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == '?') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == '(') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
	}
	if (c == ')') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == '-') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == '+') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == '=') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == '/') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == '*') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == '0') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == '1') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == '2') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
	}
	if (c == '3') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == '4') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == '5') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == '6') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == '7') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c == '8') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
	}
	if (c == '9') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { b(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { b(); }if (y == 5) { b(); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { w(); }if (y == 5) { b(); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { w(); }if (y == 3) { w(); }if (y == 4) { b(); }if (y == 5) { w(); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { w(); }if (y == 2) { b(); }if (y == 3) { b(); }if (y == 4) { w(); }if (y == 5) { w(); } }
	}
	if (c != 'a' && c != 'A' && c != 'b' && c != 'B' && c != 'c' && c != 'C' && c != ' ' && c != '\0' && c != '-' && c != '(' && c != ')' && c != ',' && c != '.' && c != '?' && c != '!' && c != 'd' && c != 'D' && c != 'e' && c != 'E' && c != 'f' && c != 'F' && c != 'g' && c != 'G' && c != 'h' && c != 'H' && c != 'i' && c != 'I' && c != 'j' && c != 'J' && c != 'k' && c != 'K' && c != 'l' && c != 'L' && c != 'm' && c != 'M' && c != 'n' && c != 'N' && c != 'o' && c != 'O' && c != 'p' && c != 'P' && c != 'q' && c != 'Q' && c != 'r' && c != 'R' && c != 's' && c != 'S' && c != 't' && c != 'T' && c != 'u' && c != 'U' && c != 'v' && c != 'V' && c != 'w' && c != 'W' && c != 'x' && c != 'X' && c != 'y' && c != 'y' && c != 'Z' && c != 'z' && c != '=' && c != '+' && c != '/' && c != '*' && c != '0' && c != '1' && c != '2' && c != '3' && c != '4' && c != '5' && c != '6' && c != '7' && c != '8' && c != '9') {
		if (x == 1) { if (y == 0) { w(); }if (y == 1) { err(y); }if (y == 2) { err(y); }if (y == 3) { err(y); }if (y == 4) { err(y); }if (y == 5) { err(y); } }
		if (x == 2) { if (y == 0) { w(); }if (y == 1) { err(y); }if (y == 2) { err(y); }if (y == 3) { err(y); }if (y == 4) { err(y); }if (y == 5) { err(y); } }
		if (x == 3) { if (y == 0) { w(); }if (y == 1) { err(y); }if (y == 2) { err(y); }if (y == 3) { err(y); }if (y == 4) { err(y); }if (y == 5) { err(y); } }
		if (x == 4) { if (y == 0) { w(); }if (y == 1) { err(y); }if (y == 2) { err(y); }if (y == 3) { err(y); }if (y == 4) { err(y); }if (y == 5) { err(y); } }
		if (x == 5) { if (y == 0) { w(); }if (y == 1) { err(y); }if (y == 2) { err(y); }if (y == 3) { err(y); }if (y == 4) { err(y); }if (y == 5) { err(y); } }
		if (x == 6) { if (y == 0) { w(); }if (y == 1) { err(y); }if (y == 2) { err(y); }if (y == 3) { err(y); }if (y == 4) { err(y); }if (y == 5) { err(y); } }
		if (x == 7) { if (y == 0) { w(); }if (y == 1) { err(y); }if (y == 2) { err(y); }if (y == 3) { err(y); }if (y == 4) { err(y); }if (y == 5) { err(y); } }
	}
}

void SetColor(ConsoleColor text, ConsoleColor background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void pix(int type, int x)
{
	if (type == 0) { SetColor(Black, Black); for (int c = 0; c < x; c++) { cout << "NN"; } }
	if (type == 1) { SetColor(Black, Black); for (int c = 0; c < x; c++) { cout << "NN"; } cout << endl; }
	if (type == 2) { SetColor(White, White); for (int c = 0; c < x; c++) { cout << "NN"; } }
	if (type == 3) { SetColor(White, White); for (int c = 0; c < x; c++) { cout << "NN"; } cout << endl; }
	if (type == 4) { SetColor(Bluelight, Bluelight); for (int c = 0; c < x; c++) { cout << "NN"; } }
	if (type == 5) { SetColor(Bluelight, Bluelight); for (int c = 0; c < x; c++) { cout << "NN"; } cout << endl; }
	if (type == 6) { SetColor(Yellow, Yellow); for (int c = 0; c < x; c++) { cout << "NN"; } }
	if (type == 7) { SetColor(White, White); for (int c = 0; c < x; c++) { cout << "\tNN"; } }
}

void ramaup()
{
	pix(3, 1); pix(3, 1); pix(3, 1);
	pix(7, 1); pix(2, 3); pix(4, 60); pix(3, 3);
	pix(7, 1); pix(2, 2); pix(4, 1); pix(6, 60); pix(4, 1); pix(3, 2);
	pix(7, 1); pix(2, 1); pix(4, 1); pix(6, 1); pix(4, 60); pix(6, 1); pix(4, 1); pix(3, 1);
	pix(7, 1); pix(4, 1); pix(6, 1); pix(4, 1); pix(2, 60); pix(4, 1); pix(6, 1); pix(4, 1); pix(3, 1);
}

void fir()
{
	pix(7, 1); pix(4, 1); pix(6, 1); pix(4, 1);
}

void firs()
{
	pix(4, 1); pix(6, 1); pix(4, 1); pix(3, 1);
}
void ramadown()
{
	pix(7, 1); pix(4, 1); pix(6, 1); pix(4, 1); pix(2, 60); pix(4, 1); pix(6, 1); pix(4, 1); pix(3, 1);
	pix(7, 1); pix(2, 1); pix(4, 1); pix(6, 1); pix(4, 60); pix(6, 1); pix(4, 1); pix(3, 1);
	pix(7, 1); pix(2, 2); pix(4, 1); pix(6, 60); pix(4, 1); pix(3, 2);
	pix(7, 1); pix(2, 3); pix(4, 60); pix(3, 3);
}

void b()
{
	pix(0, 1);
}

void w()
{
	pix(2, 1);
}

void err(int x)
{
	if (x == 1) { SetColor(Red, Blue); cout << "er"; }
	if (x == 2) { SetColor(Red, Blue); cout << "ro"; }
	if (x == 3) { SetColor(Red, Blue); cout << "re"; }
	if (x == 4) { SetColor(Red, Blue); cout << "rr"; }
	if (x == 5) { SetColor(Red, Blue); cout << "or"; }

}

void dalabub()
{
	for (int k = 0; k < f; k++)
	{
		for (int i = 0, o = 0; i <= 5; i++, o++)//przesunięcie
		{
			ramaup();
			for (int l = 1; l <= 7; l++)//poziom (x)
			{
				fir();
				for (int j = i; j <= 5; j++) //przesuwana linia
				{
					literki(l, j, begu[k]);
				}
				for (int h = 0, p = k + 1; h < 9; h++, p++)//9 liter całych
				{
					for (int e = 0; e <= 5; e++) //piksele
					{
						literki(l, e, begu[p]);
					}
				}
				for (int v = 0; v < o; v++)
				{
					literki(l, v, begu[k + 10]);
				}
				firs();
			}
			ramadown();
			Sleep(10);
			system("cls");
		}
	}
	dalabub();
}