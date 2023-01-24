#ifndef CLEARWORD_H
#define CLEARWORD_H

#include <algorithm>
#include <iostream>
#include <chrono>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <unordered_map>

void ClearWord(std::string& word);
void SearchWord(std::string& userInput, std::unordered_map<std::string,int>& dict);


#endif // CLEARWORD_H
