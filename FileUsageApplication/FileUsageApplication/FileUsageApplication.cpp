// FileUsageApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream MyFile("test.txt");
    MyFile << "This is a test file, question is manipulation?\n";
    MyFile << "This is not the line to delete.\n";
    MyFile << "I will never be found\n";
    MyFile << "Do not do it\n";
    MyFile.close();
    string myText = "";
    ifstream MyReadFile("test.txt");
    cout << "Before the great purge" << endl;
    while (getline(MyReadFile, myText)) {
        cout << myText <<endl;
    }
    MyReadFile.close();
    int n = 3;
    ifstream MyReadFile2("test.txt");
    ofstream TempWriteFile;
    TempWriteFile.open("temp.txt", ofstream::out);
    char c = 'a';
    int lineNum = 1;
    while (MyReadFile2.get(c)) {
        if (c == '\n') {
            lineNum++;
        }
            if (lineNum != n) {
                TempWriteFile << c;
        }
    }
    TempWriteFile.close();
    MyReadFile2.close();
    remove("test.txt");
    rename("temp.txt", "test.txt");
    cout << "After the great purge" << endl;
    ifstream MyReadFile3("test.txt");
    while (getline (MyReadFile3, myText)) {
        cout << myText <<endl;
    }
    MyReadFile3.close();
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
