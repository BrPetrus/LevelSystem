#include "LevelManager.h"


LevelManager::LevelManager(std::vector<std::string> listOfLevels)
{
	m_listOfLevels = listOfLevels;
	m_currentLevel = 0;
}

LevelManager::~LevelManager()
{
	closeLevel();
}

void LevelManager::closeLevel() {
	m_manager.close();
}

void LevelManager::loadNextLevel() {
	m_manager.open(m_listOfLevels[m_currentLevel]); // Open next level
	m_currentLevel++; // Increment by one
}

void LevelManager::loadMap() {
	//Read the config files
	//int width = m_manager.findInFile("map.width");
	//int height = m_manager.findInFile("map.height");
	
	m_manager.copyMap(m_map);
}

char** LevelManager::getMap() const {
	return m_map;
}


