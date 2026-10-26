#include <iostream>
#include <cpr/cpr.h>

using namespace std;
	
int main() {
	string c1;
	string c2;

	string baseURL = "https://v6.exchangerate-api.com/v6/49e73dff2d88719677423089/pair/";

	cout << "Enter code 1: \n";
	cin >> c1;
	cout << "\nEnter code 2: \n";
	cin >> c2;

	baseURL = baseURL + c1 + "/" + c2;

	cout << baseURL;

	cpr::Response r = cpr::Get(cpr::Url{ baseURL });

	if (r.status_code == 200) {
		cout << "Succesful";
		cout << r.text << "\n";
	}
	else {
		cerr << "Error: " << r.error.message << " (Code: " << r.status_code << ")\n";
	}

	return 0;
}









