#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("ques11.txt");
    string fileContents;
    string line;

    while (getline(fin, line))
    {
        fileContents += line; // Append each line to the fileContents string
    }

    cout << "File Contents:\n";
    cout << fileContents << endl;

    fin.close();

    ofstream fout("Ques11-2.txt");
    for (int i = 0; i < fileContents.length(); i++)
    {
        if (fileContents[i] != ' ') 
        {
            fout << fileContents[i];
        }
    }

    fout.close();
    cout<<endl<<"The new text without spaces has been added to the new file";

    return 0;
}
