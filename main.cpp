#include<iostream>

using namespace std;

int main() 
{
	int a;
	cout << "Hello World!!!" << endl;

	cout << "Privet Denis, How are you?" << endl;

	cout << "Скажи чколько тебе годков?" << endl;
	cin >> (int)a;

	if(a <= 15)
	{
		cout << "Что-то ты совсем маловат" << endl;
	}
	else
		cout << "Добро пожаловать в команду" << endl;

	system("pause");
	return 0;
}