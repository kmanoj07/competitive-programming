#include <iostream>
using namespace std;

int main()
{
    //integer to char conversion
    int p = 24;
    char x = (char) p; // teletype character 0-32
    cout<<x;

    p = 43;
    x = (char) p; // teletype character 0-32
    cout<<x;

    p = 127;
    x = (char) p; // teletype character 0-32
    cout<<x;

    //charcater to integer
    // In computer the character mean 0-127
    char alp = 'a';
    int n = (int)alp;
    cout<<n<<endl;

    return 0;
}