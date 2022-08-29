#include<iostream>
using namespace std;

int main()
{
   //We are going to make array
   // to store roll number 
  // int roll; // its a single box to store single data in it
   // We have to store mulitple data of the same type
   // so in this way we can use the contigeous block of memory, which will hold the multiple data of of the same type
//    int roll[5]; // int this way we have created 5 blocks in continous way for reference we have given the name roll

//    for (int i = 0; i < 5; i++)
//    {
//        cout<<"Enter the roll number"<<endl;
//        cin>>roll[i];//extract the data form input console and put that into roll[i] variable or box
//    }
//    cout<<"print roll: "<<roll[3]<<endl;

    char value[5];
    value[0] = 'A'; //character 
    value[1]='B';
    value[2]='C';
    value[3]='D';
    value[4]='E';
    // print all the value for value array
    cout<<"Print the value at index: "<<value[2]<<endl;
    
    return 0;
}