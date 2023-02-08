// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <cstring>
#include <fstream>

enum class year
{
	Январь = 1,
	Февраль,
	Март,
	Апрель,
	Май,
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь
};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int n = 1;
	while (n != 0)
	{
		
		std::cout << "Ведите номер месяца, или 0 для выхода";
		std::cin >> n;
		if (n < 0 || n > 13) {
			std::cout << "нет такого месяца!" << std::endl;
			continue;
		}
		year month = static_cast<year>(n);
		//std::cout << static_cast<int>(month); 
		switch (month) {
		case year::Январь:
			std::cout << "Январь" << std::endl;
			break;
		case year::Февраль:
			std::cout << "Февраль" << std::endl;
			break;
		case year::Март:
			std::cout << "Март" << std::endl;
			break;
		case year::Апрель:
			std::cout << "Апрель" << std::endl;
			break;
		case year::Май:
			std::cout << "Май" << std::endl;
			break;
		case year::Июнь:
			std::cout << "Июнь" << std::endl;
			break;
		case year::Июль:
			std::cout << "Июль" << std::endl;
			break;
		case year::Август:
			std::cout << "Август" << std::endl;
			break;
		case year::Сентябрь:
			std::cout << "Сентябрь" << std::endl;
			break;
		case year::Октябрь:
			std::cout << "Октябрь" << std::endl;
			break;
		case year::Ноябрь:
			std::cout << "Ноябрь" << std::endl;
			break;
		case year::Декабрь:
			std::cout << "Декабрь" << std::endl;
			break;
		}
	}



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
