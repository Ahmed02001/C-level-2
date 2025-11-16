#include <iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;


void PrintFile(string fileName) {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::in);
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            cout << line << endl;
        }
    }
    MyFile.close();
}

void LoadDataFileTOVector(string fileName, vector<string>&vFileVector) {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::in);
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            vFileVector.push_back(line);
        }
    }
    MyFile.close();
}

void SaveDataVectorToFile(string fileName, vector<string>& vFileVector) {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::app);
    if (MyFile.is_open()) {
        for (string& line : vFileVector) {
            if(line != "")
                MyFile << line << endl;
        }
        
    }
    MyFile.close();
}

void DeleteElementFile(string fileName, string Record) {
    vector<string>vFileVector;
    LoadDataFileTOVector("MyFile.txt", vFileVector);
    for (string& line : vFileVector) {
        if (line == Record)
            line = "";
    }
    SaveDataVectorToFile("MyFile.txt", vFileVector);
}

void UpdateElementIntoFile(string fileName, string Record, string Update) {
    vector<string>vFileVector;
    LoadDataFileTOVector("MyFile.txt", vFileVector);
    for (string& line : vFileVector) {
        if (line == Record)
            line = Update;
    }
    SaveDataVectorToFile("MyFile.txt", vFileVector);
}

int main()
{

    /*vector<string>vFileVector{"ahmed", "Lama", "Amr", "Mohammed", "Emad"};
    SaveDataVectorToFile("MyFile.txt", vFileVector);
    PrintFile("MyFile.txt");*/

    UpdateElementIntoFile("MyFile.txt", "Emad", "Ahmed");
    PrintFile("MyFile.txt");
    

    /*fstream MyFile;
    MyFile.open("MyFile.txt", ios::app);

    if (MyFile.is_open()) {
        MyFile << "What's your name?\n";
        MyFile << "Hello, How are you doing?\n";
        MyFile << "Hi, I'm Fine , thanks, and you?\n";
        MyFile << "I am good, are you in number 5?\n";
        MyFile << "No, I'm not, I am in number 3.\n";
    }

    MyFile.close();*/
    

}