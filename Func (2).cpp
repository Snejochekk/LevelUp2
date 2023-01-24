#include "Print_map.h"

#include <iostream>
#include <unordered_map>



void ToLower(std::string word, std::ifstream &file)
{
    while(std::getline(file, word))
        while(file>>word)
        {
            std::transform(
            word.begin(),
            word.end(),
            word.begin(),
            tolower);
        }
}

void EraseWord(std::string word)
{
    word.erase(std::remove_if(
    word.begin(),
    word.end(),
    ispunct),
    word.end());
}


void Build_map(std::string word,std::unordered_map <std::string, int> &dict)
{
    if(!word.empty())
    {
    ++dict[word];
    }
}

void FindWord(std::unordered_map <std::string, int> &dict)
{
    std::string userInput;
    do{
        std::cout<< "to find word: ";
        std::cin>> userInput;
        std::cout<< userInput <<" : " <<dict[userInput] <<" times." <<std::endl;
    }
    while(userInput != "quit");
}

