#include <iostream>
#include <queue>

void fn_Call(std::queue<int>& or_Q, int& i_Num);

int main(){

    std::queue<int> o_Q;
    int i_Tot       = 0;
    std::cin>> i_Tot;
    for(int i_Ct=0; i_Ct< i_Tot; i_Ct++){
        int i_Tmp   =0;
        std::cin>> i_Tmp;
        fn_Call(o_Q, i_Tmp);
    }
    std::cout<< "\n";
    return 0;
}

void fn_Call(std::queue<int>& or_Q, int& i_Num){
    if(or_Q.empty()== true){
        or_Q.push(i_Num);
    }
    else{
        while((or_Q.empty()!= true) && (i_Num - or_Q.front()) > 3000 ){
            or_Q.pop();
        }
        or_Q.push(i_Num);
    }
    std::cout<< or_Q.size()<< " ";
}
