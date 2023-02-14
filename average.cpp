#include <iostream>
/*
Materi yang diimplementasikan di program ini
1. input
2. output
*/
int main(){
    std::cout << "How many number that you want to be entered : ";
    int total;
    int sum;
    std::cin >> total;
    for(int i=0; i<total; i++) {
        std::cout << "Enter the "<<i+1<< " integer : ";
        int num;
        std::cin >>num;
        sum+=num;
    }
    float average=sum/total;
    std::cout << "The average is "<<average<<std::endl;
}

/*
Program created by : 
Muhammad Ryan Fikri Fakhrezi
*/