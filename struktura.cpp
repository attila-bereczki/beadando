#include <iostream>
using namespace std;

struct adat {
    string nap;
    int ora,perc;
};

adat tomb[7];

int main(){
    tomb[0] = {"hetfo", 8, 15};
    tomb[1] = {"kedd", 9, 15};
    tomb[2] = {"szerda", 6, 45};
    tomb[3] = {"csutortok", 7, 50};
    tomb[4] = {"pentek", 8, 15};
    tomb[5] = {"szombat", 10, 30};
    tomb[6] = {"vasarnap", 9, 45};

    for (int i = 0; i < 7; ++i) {
        cout << "nap: " << tomb[i].nap << ", " << tomb[i].ora <<":"<< tomb[i].perc <<"-kor keltem" << endl;
    }
}
