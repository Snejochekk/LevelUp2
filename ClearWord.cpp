
#include "ClearWord.h"


void ClearWord(std::string& word)
{
    std::transform(
    word.begin(),
    word.end(),
    word.begin(),
    tolower);

    word.erase(std::remove_if(
    word.begin(),
    word.end(),
    ispunct),
    word.end());

}

void SearchWord(std::string& userInput, std::unordered_map<std::string,int>& dict){

    do{
        auto start = std::chrono::steady_clock::now();
        std::cout<< "to find word: ";//вынести отдельно userInput
        std::cin>> userInput;
        std::cout<<dict[userInput] <<" times." <<std::endl;

        auto end = std::chrono::steady_clock::now();
        auto duration = std::chrono::duration_cast
                     <std::chrono::seconds>(end-start);

        std::cout<<duration.count() <<" sec." <<std::endl;
    }
    while(userInput != "quit");// добавить search/find
}
