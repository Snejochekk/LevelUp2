#include "ClearWord.h"

//system("chcp 1251"); // смена кодировки, если файл в кодировке cp1251
//system("chcp 65001"); // смена кодировки, если файл в кодировке utf-8
//system("cls"); // очистить экран



int main()
    {
    auto start = std::chrono::steady_clock::now(); //точка отсчета времени

    const std::string fileName = ("C:/Users/u/Documents/qt"
                                  "/LevelUp2/MyFile_txt/demo.txt");

    std::ifstream file(fileName);

    if(file.fail()){
        std::cerr<<"File can`t be opened" <<std::endl;
        return 1;
    }

    std::unordered_map <std::string, int> dict;

    std::string word;
    while(file >> word){
    ClearWord(word);

    if(!word.empty()){
    ++dict[word];
    }
}

    auto end = std::chrono::steady_clock::now();
    auto duration1 = std::chrono::duration_cast
                 <std::chrono::milliseconds>(end-start);

    std::string userInput;
    SearchWord(userInput, dict);

    std::cout<<"Total search time: " <<duration1.count() <<" ms." <<std::endl;

    file.close();

    return 0;
}




