#include <iostream>
#include<fstream>


using namespace std;

bool isValidCode(const string& code);
void getValues(string& baseCode, string& tragetCode, int& value);




int main(){
    cout << "Welcome to the currency converter" << endl;
    string baseCode;
    string targetCode;
    int baseValue;
    bool verified = false;

    while(!verified){
        getValues(baseCode, targetCode, baseValue);

        if (baseValue < 0){
            cout << "Please enter correct value to convert" << endl;
        }
        if (isValidCode(baseCode)){
           cout << "Inavlid base currency code" << endl;
        }
        if (isValidCode(targetCode)){
           cout << "Inavlid target currency code" << endl;
        }
    }
    
    cout << baseCode << " " << targetCode << " " << baseValue << endl;

    //this runs in loops forever, fix the while loop broski

}

void getValues(string& baseCode, string& targetCode, int& baseValue){
    cout << "Enter your base currency code: ";
    cin >> baseCode;
    cout << endl << "Eneter Ammount: ";
    cin >> baseValue;
    cout << endl << "Enter currency to Conert to: ";
    cin >> targetCode;
}


bool isValidCode(const string& code){
    ifstream file("ValidCurrencies.txt");
    string validCode;

    while(file >> validCode){
        if (code == validCode){
            return true;
        }
    }
    return false;

}


