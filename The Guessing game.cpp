#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <string>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string word{ "малина" };
	std::string answer{};
	do {
		std::cout << "Угадайте слово: ";
		std::getline(std::cin >> std::ws, answer);
		if (word != answer) {
			std::cout << "Неправильно" << std::endl;
		}
	} while (word != answer);

	std::cout << "Правильно! Вы победили! Загаданное слово — малина" << std::endl;

	return EXIT_SUCCESS;
}