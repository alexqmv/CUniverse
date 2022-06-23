#include <iostream>
#include <unistd.h>
#include <time.h>
#include <string>

using namespace std;

class MyHome{
public:
    
    string myhome;
    float sizeofhome;
    float sizeofground;

};

void calculateThe3d(void) {
    MyHome admin;
    float price1 = 75500;
    float price2 = 120000;
    cout << "Enter the size of house you want to build: ";
    cin >> admin.sizeofhome;
    cout << "Enter the size of empty ground: ";
    cin >> admin.sizeofground;
    cout << "Size of house: " << admin.sizeofhome << endl;
    cout << "Size of ground: " << admin.sizeofground << endl;
    const float sum = admin.sizeofground + admin.sizeofhome;
    
    float gen = price2 - 1000;
    float gen2 = price1 - 1000;     
    if (sum >= 100) {
        cout << price2 << endl;;
        cout << price2 << "$  | "<< " 1000$ fee == " << gen << endl;
        
         
    }else if(sum < 100) {

        cout << price1;
         
    } 
    // cout << "All : " << sum << " m2\n\n";

}

int main () {
    calculateThe3d();
    return 0;
}
