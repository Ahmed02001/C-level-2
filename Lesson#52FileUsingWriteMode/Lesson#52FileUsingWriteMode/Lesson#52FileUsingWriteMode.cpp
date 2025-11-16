#include <iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

void LoadDataFromFileToVector(string FileName, vector<string>&vFileVector) {
    fstream MyFile;
    MyFile.open("myFile.txt", ios::in);

    if (MyFile.is_open()) {

        string line;
        while (getline(MyFile, line)) {
            vFileVector.push_back(line);
        }   

        MyFile.close();
    }
}

void LoadDataFromVectorToFile(string FileName, vector<string>& vFileVector) {
    fstream MyFile;
    MyFile.open("myFile.txt", ios::app);

    if (MyFile.is_open()) {

        for (string& line : vFileVector) {
            if (line != " ")
                MyFile << line << endl;
        }
        MyFile.close();
    }
}
//void DeleteElementFormFile(string FileName, string Record) {
//    vector<string>vFileVector;
//    LoadDataFromFileToVector("myFile.txt", vFileVector);
//    for (string& line : vFileVector) {
//        if (line == Record)
//            line = "";
//    }
//    LoadDataFromVectorToFile("myFile.txt", vFileVector);
//}
void UpdateElementFormFile(string FileName, string Record, string updateTo) {
    vector<string>vFileVector;
    LoadDataFromFileToVector("myFile.txt", vFileVector);
    for (string& line : vFileVector) {
        if (line == Record)
            line = updateTo;
    }
    LoadDataFromVectorToFile("myFile.txt", vFileVector);
}

void PrintFileContent(string FileName) {
    fstream MyFile;
    MyFile.open("myFile.txt", ios::in);
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {                         cout << line << endl;
        }
       
        MyFile.close();
    }
}

int main()
{

    cout << "the FIle Before editing\n";

    PrintFileContent("myFile.txt");

    UpdateElementFormFile("myFile.txt", "Ahmed", "islam.");
    cout << "\nthe file after editing\n";
    PrintFileContent("myFile.txt");

   /* vector<string>vFileVector;
    LoadDataFromFileToVector("myFile.txt", vFileVector);

    for (string& line : vFileVector) {
        cout << line << endl;
    }

    vFileVector.pop_back();

    cout << "\nAfter Editing\n";
    for (string& line : vFileVector) {
        cout << line << endl;
    }*/



    /*fstream MyFile;

    MyFile.open("myFile.txt", ios::app);

    if (MyFile.is_open()) {

        MyFile << "C++ is the important language to learn the concept Programming.\n";


        MyFile.close();
    }*/




    return 0;
}