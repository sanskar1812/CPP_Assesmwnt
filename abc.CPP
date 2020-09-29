#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
  ifstream myFile;
  myFile.open("EnglishDictionary.csv");
  string b;

  cout << "Please enter your name: \n";
    getline(cin, b);
    cout<<"-----"<<endl;
  while(myFile.good())
  {
    string line;
    getline(myFile,line,',');
    if(line.find(b) != string::npos)
    {
      if(line.length()==7)
        {
          cout<<"Yes ";
          cout<<line;
        }
    }
  }
    myFile.close();
}
