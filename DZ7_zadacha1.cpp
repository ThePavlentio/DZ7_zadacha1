#include <iostream>
#include <Windows.h>
#include <string>

int function(std::string str, int forbidden_length)
{
	int length = str.length();

	if (length != forbidden_length)
	{
		std::cout << "Длина слова " << '"' << str << '"' << " равна " << length << std::endl;

		std::cout << "Введите запретную длину: ";
		std::cin >> forbidden_length;

		std::cout << "Введите слово: ";
		std::cin >> str;
	}
	else
	{
		int bad_length = length;

		try
		{
			throw bad_length;
		}
		catch (int length)
		{
			std::cout << "Вы ввели слово запретной длины! До свидания!" << std::endl;
			return 0;
		}

	}

	function(str, forbidden_length);

	return length;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string str{};
	int forbidden_length{};

	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;

	std::cout << "Введите слово: ";
	std::cin >> str;

	function(str, forbidden_length);

	return 0;
}