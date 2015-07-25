#pragma once
#include <string>
#include <vector>
#include "IOManager.h"

//Wrapper class working with invidual LEVEL data (IOManager is working with the files)
//Na urovni Level a Iomanager na urovni file-ov
class LevelManager
{
public:
	LevelManager(std::vector<std::string> listOfLevels);
	~LevelManager();

	void loadNextLevel(); // First command
	void closeLevel(); // Before moving on
	void loadMap(); // Second

	char** getMap() const;

private:
	// Stores every level file. Currently the list is hardcoded, but in future there will be some .levelPackage files where the paths will be stored.
	// Different chapters will have different packages
	std::vector<std::string> m_listOfLevels;
	IOManager m_manager;
	int m_currentLevel; // Index
	char** m_map; // Current map
};

