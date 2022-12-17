#include <iostream>
#include <string>
#include <fstream>

int main(int argc, const char * argv[]) {
    std::string str;
    std::ifstream fin("file.txt");
    if(fin.fail()){
        std::cout <<"PIZDA\n";
        return 0;
        
    }
    std::getline(fin, str);
    int countOfSpaces = 0, m = -1;
    for(auto el: str){
        if(isspace(el)) countOfSpaces+=1;
        if(!isspace(el)){
            m = std::max(m,countOfSpaces);
            countOfSpaces = 0;
        }
    }
    m = std::max(m, countOfSpaces);
    std::cout<<m <<'\n';
    fin.close();
}
