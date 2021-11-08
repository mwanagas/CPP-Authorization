// IsValidCredentials.h : Defines the entry point for the application.
//

#include "PasswordSandbox.h"
#include <map>

using namespace std;

//check if credentials match stored values in map
//declare variables
string username = "";
string password = "";



bool IsValidCredentials(string username, string password)
{
	//create login Credential Map with prestored values
	std::map <string, string>CredentialMap = { {"robert", "password123"},{"wayne","password234"}, {"scott","password345"} };

	//ask for User's login 
	std::cout << "Enter Username" << endl;
	std::cin >> username;
	std::cout << "Enter Password" << endl;
	std::cin >> password;

	//check if valid login
	if (CredentialMap.find(username) != CredentialMap.end() && CredentialMap.at(username) == password) {
		return true;
	}
	else { return false; };
	}