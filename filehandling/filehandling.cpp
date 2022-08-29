#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //create and object of ofstream
    // ofstream ostream;
    // ostream.open("myfile.dat");
    // ostream<<"Hello"; // every character will take 2 bytes memory the file size 10 bytes
    
    char ch;
    ifstream fin; //input stream ko represent
    fin.open("myfile.dat"); // this file i want to read
    while (!fin.eof()) { // if the file ka end nahi at
        cout<<ch;
        //Extraction operator will read the ch and consider the space as delemiter or data separtor
        //fin>>ch; // instead of cin which assocoated with the keyboard
        ch = fin.get(); // This way the space will also consider
    }
    fin.close();
    return 0;
}