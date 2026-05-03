#include <iostream> //добавл€ет библиотеки

using namespace std; //так объ€вл€етс€ неймспейс

void Log(const char*); //объ€вление функции из  Lesson1.cpp

int main() //главный метод
{
	setlocale(LC_ALL, "Russian"); // добавл€ем поддержку русского €зыка
	Log("HelloWorld!");
	return 0; //программа должна чем то заканчиватьс€
}
