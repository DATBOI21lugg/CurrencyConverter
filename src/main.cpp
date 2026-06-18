#include <iostream>
#include <fstream>
#include <filesystem>


using namespace std;

bool isValidCode(const string& code);
void getValues(string& baseCode, string& tragetCode, int& value);




int main(){
    cout << "Welcome to the currency converter" << endl;
    string baseCode;
    string targetCode;
    int baseValue;
    bool verified = false;

    getValues(baseCode, targetCode, baseValue);
    
    cout << baseCode << " " << targetCode << " " << baseValue << endl;

   

}

void getValues(string& baseCode, string& targetCode, int& baseValue){
    while (true) {
        cout << "Enter Base Code: " << endl;
        cin >> baseCode;
        if (isValidCode(baseCode)){
            break;
        } else {
            cout << "Invalid Code. Input again" << endl;
        }
    }
    
    while (true) {
        cout << "Enter Target Code: ";
        cin >> targetCode;
        if (isValidCode(targetCode)){
            break;
        } else {
            cout << "Invalid Code. Input again" << endl;
        }
    }

    while (true) {
        cout << "Enter Ammount: ";
        cin >> baseValue;
        if (baseValue > 0){
            break;
        } else {
            cout << "Invalid Value. Input again" << endl;
        }
    }
}


bool isValidCode(const string& code){
    ifstream file("C:/Projects/Currency_Converter/ValidCurrencies.txt");
    string validCode;

    if (!file.is_open()) {
    cout << "File did not open." << endl;
    cout << "Looking from: " << filesystem::current_path() << endl;
    return false;
}

    while(file >> validCode){
        if (code == validCode){
            return true;
        }
    }
    return false;

}


