#include <bits/stdc++.h>

using namespace std;

class Manusia {
   protected:
    string name;

   public:
    void set(string _name) { name = _name; };
    void berbicara() { cout << name << " ngomong -> fafifufafifu\n"; };
};

class Programmer : public Manusia {
   public:
    void berbicara() { cout << name << " ngomong -> bip bip bop bop, fafifufafifu\n"; };
};

class Politisi : public Manusia  {
   public:
    void berbicara() { cout << name << " ngomong -> demi kesejahteraan investor, fafifufafifu\n"; };
};

int main() {
    Manusia orangBiasa;
    Programmer orangNolep;
    Politisi orangBaik;

    orangBiasa.set("John");
    orangNolep.set("Riyaldi");
    orangBaik.set("Ferdinand");

    orangBiasa.berbicara();
    orangNolep.berbicara();
    orangBaik.berbicara();
}