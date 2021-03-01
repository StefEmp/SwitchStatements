#include <iostream>
using namespace std;

int main() {
    char LetterGrade{};
    
    cout << "What grade do you expect to get: ";
    cin >> LetterGrade;
    
    switch (LetterGrade){
        case 'a':
        case 'A':
        cout << "You need a 90 or above, study hard!" << endl;
        break;
        case 'b':
        case 'B':
        cout << "You need 80-89 for a B, get studying!" << endl;
        break;
        case 'c':
        case 'C':
        cout << "You need 70 - 79 for an average grade" << endl;
        break;
        case 'd':
        case 'D':
        cout << "You should try for a better grade all you need is 60-69 for a D" << endl;
        break;
        case 'f':
        case 'F':
        {
            char confirm {};
            cout << "Are you sure you want an F?!(Y/N)";
            cin >> confirm;
            if(confirm == 'y' or confirm == 'Y')
                cout << "OK, I guess you didn't study..." << endl;
                else if (confirm == 'n' or confirm == 'N')
                    cout << "Good, get studying!" << endl;
                    else
                        cout << "that isn't a grade" << endl;
                        break;
            }
        default:
        cout << "This isn't a valid grade" << endl;
    }
    return 0;
}
