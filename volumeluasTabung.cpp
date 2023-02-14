#include <iostream>
/*
Materi yang diimplementasikan di program ini
1. function dengan nilai default
2. Pass by reference
3. Pass by value
*/

inline float ValueVolume(float jari=7, float tinggi=2){
    return 3.14*jari*jari*tinggi;
}

inline float ReferenceLuas(float &luas, float jari=7, float tinggi=2){
    luas = 2*3.14*jari*jari+3.14*(jari+jari)*tinggi;
    return 0;
}

int main(){
    float jari;
    float tinggi;
    float luas;
    float volume;
    std::cout<<"Masukkan jari-jari tabung (cm) : ";
    std::cin>>jari;
    std::cout<<"Masukkan tinggi tabung (cm) : ";
    std::cin>>tinggi;
    std::cout<<"Volume tabung tersebut adalah "<<ValueVolume(jari, tinggi)<<" cm^3";
    puts("");
    std::cout<<"Jari-jari : "<<jari;
    puts("");
    std::cout<<"Tinggi : "<<tinggi;
    puts("");
    ReferenceLuas(luas, jari, tinggi);
    std::cout<<"Luas tabung tersebut adalah "<<luas<<std::endl;
}

/*
Program created by : 
Muhammad Ryan Fikri Fakhrezi
*/