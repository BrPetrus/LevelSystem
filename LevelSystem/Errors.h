#pragma once
#include <cstdio>
#include <string>
#include <iostream>
#include <fstream>

void fatalError(std::string error) {
	std::cerr << error << std::endl;
	std::cout << "Press any key to exit...";
	char temp;
	std::cin >> temp;
	exit(EXIT_FAILURE);
}

void fatalErrorPrint(std::string error, std::string filePath) {
	std::cerr << error << std::endl;
	std::cout << "Saved to: " << filePath << std::endl;
	std::ofstream output(filePath);
	output << error << '\n';
	std::cout << "Press any key to exit...";
	char temp;
	std::cin >> temp;
	exit(EXIT_FAILURE);
}
