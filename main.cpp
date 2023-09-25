#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout << "...Program To Check The Meaning Of A Grade..." << endl;
    cout << "\nEnter Your Grade: ";
    cin >>grade;
    grade = toupper(grade);
    if ( grade== 'A' || grade== 'B' || grade== 'C' || grade== 'D' ) {
        cout << "\nCongrats!! You Passed" << endl;
    }else if ( grade== 'E' || grade== 'F' ) {
        cout << "\nSorry, You Failed" << endl;
    }else{
        cout << "\nInvalid Input" << endl;
    }
    return 0;
}
