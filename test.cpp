#include <iostream>
#include <cctype>
#include <fstream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <algorithm>


/*

int main()
{
    if(argc < 2){
        std::cerr <<"Use : " <<argv[0] << "<file_name> <word to find>" <<std::endl; //вывод ошибки и подсказка как правильно записать
        return -1;
    }*/
/*
    std::string A;
    std::unordered_map<char, int> alphabet;
    std::ifstream file_name ("/Users/u/Documents/qt/st/MyFile_txt/demo.txt");
    if(file_name.is_open()){
        while(std::getline(file_name, A)){
            std::transform(A.begin(), A.end(), A.begin(), tolower);

            A.erase(remove_if(A.begin(), A.end(), ispunct), A.end());
            std:: cout << A <<std::endl;
            for(size_t i = 0; i < A.size(); ++i){
                ++(alphabet[A[i]]);

            }
        }
    }
    file_name.close();
    return 0;
}*/

/*
    std::string file_name = argv[1];
    std::ifstream file (file_name);
    if(!file.is_open()){
        std::cerr <<"Failed to open file : " <<file_name <<std::endl;
        return 1;
    }
    std::cout <<"File :" <<file_name <<"successfully opened!" <<std::endl;
    return 0;
}*/
/*
    std::ifstream file("/Users/u/Documents/qt/st/MyFile_txt/demo.txt");
    std::string str;
    if(file.is_open()){
        while(std::getline(file, str))
        {
            std::istringstream stream(str);
            std::string word;
            while(stream >> word) {
                std::transform(str.begin(), str.end(), str.begin(), tolower);
                str.erase(remove_if(str.begin(), str.end(), ispunct), str.end());

                std:: cout << word <<std::endl;
                }
            }
        }
        return 0;
}


*/
