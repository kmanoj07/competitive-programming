#include<iostream>
#include<cstring>
using namespace std;

//defining class inside the class only
class Student
{
    private:
        int rollNo;
        char name[20];
        //address is assotian with the Student class
        class Address {
            private:
                int houseNo;
                char street[20];
                char city[20];
                char pincode[7];
            public:
                void setAddress(int h, char *s, char *c, char *p) {
                    houseNo = h;
                    strcpy(street,s); // we pass the address, jisme value store karani hai, jismen abhi data hai
                    strcpy(city,s);
                    strcpy(pincode, p);
                }
                void showAddress() {
                    cout << "\n" << houseNo <<endl;
                    cout << street<< " " << city << " " << pincode << endl;
                }
        };
        Address add;
        public:
            void setRollNo(int rollNo) {
                this->rollNo = rollNo;
            }
            void setName(char *n) {
                strcpy(name, n);
            }
            void setAddress(int h, char *s, char *c, char *p){
                add.setAddress(h,s,c,p);
            }
            void showStudent(){
                cout << "Student Data "<<endl;
                cout << "Roll No" << rollNo << " ";
                add.showAddress();
            }
};

int main(){

    //Student::Address add;//for this to be happen the inner class must be public
    Student std1;
    std1.setRollNo(100);
    std1.setName("Rahul");
    std1.setAddress(1200, "Hanuman gari", "Bhopal", "11");
    std1.showStudent();
    return 0;
}