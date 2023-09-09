#include <iostream>
#include <istream>
#include <cstdlib>
#include <map>

void contador(std::map<int, int>& contagem, int rolagens){
    short rng = 0;
    srand((unsigned) time(NULL));
    for(int i = 0; i < rolagens; i++){
        rng = 1 + (std::rand() % 6);
        switch (rng){
            case 1:
                contagem[1] +=1;
                break;
            case 2:
                contagem[2] +=1;
                break;
            case 3:
                contagem[3] +=1;
                break;
            case 4:
                contagem[4] +=1;
                break;
            case 5:
                contagem[5] +=1;
                break;
            case 6:
                contagem[6] +=1;
                break;
        }
    }
}


int main(){
    std::map<int, int> contagem;
    
}
    
