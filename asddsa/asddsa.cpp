#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	/*1

	int num, row, col;

	cout << "Введите изначальное число = "; cin >> num; cout << endl;
	cout << "Введите количетсво рядов = "; cin >> row; cout << endl;
	cout << "Введите число столбцов = "; cin >> col; cout << endl;

	int** arr = new int * [row];

	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}

	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = num;
			num += 1;
		}
	}

	for (int i = 0; i < row; i++)
	{
		cout << "\t |\t";

		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t |\t";
		}
		cout << endl;
	}

	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	2int SIZE = 13;
	int* ptrFirmsProfitMonth = new int[SIZE];

	cout << "Введите зарплату";
	for (int i = 1; i < SIZE; i++)
	{
		switch (i)
		{
		case 1:
			cout << "за 1 - январь в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 2:
			cout << "за 2 - февраль в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 3:
			cout << "за 3 - март в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 4:
			cout << "за 4 - апрель в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 5:
			cout << "за 5 - май в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 6:
			cout << "за 6 - июнь в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 7:
			cout << "за 7 - июль в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 8:
			cout << "за 8 - август в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 9:
			cout << "за 9 - сентябрь в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 10:
			cout << "за 10 - октябрь в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 11:
			cout << "за 11 - ноябрь в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 12:
			cout << "за 12 - декабрь в USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		}
	}
	cout << endl;

	int minRange;
	int maxRange;

	do
	{
		cout << "Введите диапазон поиска зарплаты от 1 до 12 месяцев: " << endl; 
		cout << "Минимальный диапазон: "; cin >> minRange;
		cout << "Максимальный диапазон: "; cin >> maxRange;

		if (13 > minRange > 0 && 13 > maxRange > 0)
		{
			break;
		}
		else
		{
			cout << "Вы ввели недопустимое значение!!!";
		}

	} while (true);

	int min = ptrFirmsProfitMonth[minRange];
	int max = ptrFirmsProfitMonth[minRange];
	int minMonth = minRange;
	int maxMonth = minRange;

	for (int i = minRange; i < maxRange; i++)
	{
		if (min > ptrFirmsProfitMonth[i]) 
		{
			min = ptrFirmsProfitMonth[i];
			minMonth = i;
		}
		if (max < ptrFirmsProfitMonth[i])
		{
			max = ptrFirmsProfitMonth[i];
			maxMonth = i;
		}
	}

	cout << "Минимальная и максимальная заработная плата за определенный период от " << minRange << " до " << maxRange << " месяцев" << endl;;
	cout << "Минимальная заработная плата за номер месяца " << minMonth << " равен: " << min << "$"; cout << endl;
	cout << "Максимальная заработная плата за номер месяца " << maxMonth << " равен: " << max << "$";

	delete[] ptrFirmsProfitMonth;*/

}