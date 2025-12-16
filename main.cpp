#include <iostream>
#include <string>

using namespace std;

// Global variable that stores the correct username
string correct_Username = "hello";

// Global variable to store the username entered by the user
string entered_Username;

// Global variable that stores the correct password
string correct_Password = "123456789";

// Global variable to store the password entered by the user
string entered_Password;

// Number of remaining login attempts
int Right_to_Try = 3;

// This function declares local username variables
// (Currently unused, included for demonstration of function structure)
void FunctionUsername(){
    string correct_Username = "Alex";
    string entered_Username;
}

// This function asks the user to enter a username
void FunctionEntry(){
    cout << "Enter Username, ";
    cin >> entered_Username;
}

// This function is called when the user has no remaining attempts
// It displays an account blocked message
void FunctionBlocked(){
    cout << "You no longer have the right to try. Your account has been blocked." << endl;
}

// This function declares local password variables
// (Currently unused, included for demonstration purposes)
int FunctionPassword(){
    string correct_Password = "123456789";
    string entered_Password;
}

// This function asks the user to enter a password
int FunctionEntry2(){
    cout << "Enter Password: ";
    cin >> entered_Password;
}

int main(){
    // Infinite loop to keep the login process running
    while(true){
        // Prompt user to enter username
        FunctionEntry();

        // Check if the entered username is correct
        if(entered_Username == correct_Username){
            // Prompt user to enter password
            FunctionEntry2();

            // Check if the entered password is correct
            if(entered_Password == correct_Password){
                cout << "Logged In" << endl;
                break; // Exit loop on successful login
            }
            else{
                cout << "Wrong Password" << endl;
                Right_to_Try--; // Decrease remaining attempts
            }
        }
        else{
            cout << "Wrong Username" << endl;
            Right_to_Try--; // Decrease remaining attempts
        }

        // If no attempts are left, block the account
        if(Right_to_Try == 0){
            FunctionBlocked();
            break; // Exit loop
        }
    }

    return 0;
}
