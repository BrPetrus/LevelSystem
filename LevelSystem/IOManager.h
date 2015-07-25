#pragma once
#include <string>
#include <fstream>

class IOManager
{
public:
	IOManager();
	~IOManager();

	void open(std::string filePath); // There is always a config file named the same as the level data file
	void close();

	
	int findInFile(std::string name); // Find the the name in config file.
	void copyMap(char** map); // Copy the data in files to internal map(LevelManager's one).

private:
	std::ifstream m_file;
};

