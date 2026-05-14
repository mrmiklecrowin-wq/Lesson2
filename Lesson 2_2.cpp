#include <iostream>
#include <string>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Введите слово:"<< std::endl;
	std::string words;
	std::cin >> words;
	std::cout << "Вы ввели:\n" << words << std::endl;

	return 0;
}