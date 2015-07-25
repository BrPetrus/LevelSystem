#include "IOManager.h"
#include "Errors.h"


IOManager::IOManager()
{

}


IOManager::~IOManager()
{
	close();
}

void IOManager::close() {
	m_file.close();
}

void IOManager::open(std::string filePath) {

}

int IOManager::findInFile(std::string name) {

}

void IOManager::copyMap(char** map) {

}