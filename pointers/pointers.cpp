#include<iostream>
using namespace std;

// A pointer contains address of an object is called Object pointer
// yadi pointre int type ka hai to int type ke hi block address hi rakhna hai
// yadii pointer float ka hai to usme float type ke block ka hi address rakhna hoga

//In the same way if the pointer is object type than the address it will contain the block of an object type

class Box
{
    private:
        int l, b, h;
    public:
        void setDimenstion(int l, int b, int h)
        {
            // l = len;
            // b = br;
            // h = hie;
            this->l = l;
            this->b = b;
            this->h = h;
        }
        void showDimenstion()
        {
            cout<<"Length: "<<l<<"Breadth: "<<b<<"Heigth: "<<h<<endl; 
        }
};

int main()
{
    Box smallBox;
    smallBox.setDimenstion(12, 10, 5);
    smallBox.showDimenstion();


    //lets create a pointer and will store the address of type Box
    // Object pointer
    //Box *p = &smallBox; 

    // kisi object ko uske naam se bhi access kar sakte hain and pointer se bhi kar sakte hain
    // In case of pointer we use arrow operator and it will call the methohd of the object which it will point
    //p->setDimenstion(12, 34, 2);
    //p->showDimenstion();


    // this pointer
    //this is a keyword
    //this is a local object pointer in every instance member function containing address of the caller object
    //It is used to refer caller object in memeber function
    
    return 0;
}