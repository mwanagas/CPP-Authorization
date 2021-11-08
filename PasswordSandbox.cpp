// PasswordSandbox.cpp : Defines the entry point for the application.
//

#include "PasswordSandbox.h"
#include "Credentials.h"

using namespace std;

int main()
{
	//declares variables
	int AccessTry = 1;
	string username = "";
	string password = "";

	while (AccessTry > 0 && AccessTry < 4) {
		if (IsValidCredentials(username, password) == true)
		{
			std::cout << "Secret" << endl;
			AccessTry = 0;
		}
		else {
			std::cout << "User Not Found. Try Again" << endl;
			AccessTry++;
		};
		}
	return 0;
}