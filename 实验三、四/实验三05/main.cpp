#include<iostream>
#include"MonkeyEat.h"
using namespace std;
int main() {
    int candidate = 1;
    while (true) {
        int Peach = candidate; 
        bool flag = true;
        for (int i = 0; i < 10; i++) {
            Peach = PeachLeft(Peach, flag);
            if (!flag || Peach <= 0) {
                flag = false;
                break;
            }
        }
        if (Peach == 1 && flag == true) {
            cout << candidate << endl;
            break;
        }
        else {
            //ÊµÑé´úÂë
            
            //cout << "now " << candidate << " -> " << Peach << " " << flag << endl;
            candidate++;
        }
    }
    return 0;
}