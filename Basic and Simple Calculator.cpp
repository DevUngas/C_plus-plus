#include <iostream>
#include <string>
using namespace std;
void centerText(const string&text, int consoleWidth) {
    int padding = (consoleWidth - text.length()) / 2;
    if (padding < 0) padding = 0;
    for(int i = 0; i < padding; ++i){
        cout <<" ";
    }
    cout << text << endl;
}

int main() {

    int consoleWidth = 200;
    centerText("My Calculatore", consoleWidth);
    double a,b;
    string ope;
    while(ope="/","*","-","+"){
            cout << "Input Data: ";
            cin >> a >> ope >> b;
            if(ope=="/"){
                cout << "Result: " << a << ope << b << " = " << a/b <<"\n\n";
                
            }if(ope=="*"){
                cout << "Result: " << a << ope << b << " = " << a*b <<"\n\n";
                
            }if(ope=="-"){
                cout << "Result: " << a << ope << b << " = " << a-b <<"\n\n";
                
            }if(ope=="+"){
                cout << "Result: " << a << ope << b << " = " << a+b <<"\n\n";
            }else{
                cout <<"Syntax ERRoR!" <<"\n\n";
            }
    }
    
}