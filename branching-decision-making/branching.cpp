#include<iostream>
using namespace std;

int main()
{
    //man pen buy---> x coin //pen code -->10 coins

    cout<<"Enter the money : "<<endl;
    int x;
    cin>>x;
    // if(x>=10)
    // {
    //     cout<<"He is able to buy pen"<<endl;
    // } 
    // else
    // {
    //     cout<<"He is able not able to buy pen"<<endl;
    // } 

    // if(x>=110) {cout<<"He is able to buy pen"<<endl;}

    // if(x>=10)
    // {
    //      cout<<"He is able to buy pen"<<endl;
    // }
    // else
    // {
    //     cout<<"He is not able to buy pen"<<endl;
    // }

    // if(x>=10)
    // {
    //     cout<<"He is able to buy a pen."<<endl;
    // }
    // else if (x>=5 && x<10)
    // {
    //     cout<<"He buy Five star."<<endl;
    // }
    // else if(x==3)
    // {
    //     cout<<"pencil."<<endl;
    // }
    // else
    // {
    //     cout<<"He return back to home."<<endl;
    // }

    // if(x>=10)
    // {
    //     cout<<"He is able to buy a pen."<<endl;
    // }
    // else if (x>=5 && x<10)
    // {
    //     cout<<"He buy Five star."<<endl;
    // }
    // else if(x==3)
    // {
    //     cout<<"pencil."<<endl;
    // }
    // else if(x<3)
    // {
    //     cout<<"He return back to home."<<endl;
    // }

    //ternary operator
    // return variable = condition ? true : false

    // int w = (x>10) ? 1 : 0;
    // cout << "Result will be " << w << endl;

    int w = (x>10) ? x+5 : x-5;
    cout << "Result will be " << w << endl;


    return 0;
}