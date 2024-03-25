//
// Created by kamil on 20.03.2024.
//

#pragma once


#include <string>

class Results {
private:
	int time;
	int arraySize;
	std::string algorithmName;
	std::string parameters;
public:
	Results(int time, int arraySize, const std::string &algorithmName, const std::string &parameters) : time(time), arraySize(arraySize), algorithmName(algorithmName), parameters(parameters) {}

	void save();
};
