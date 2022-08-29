#include<iostream>
using namespace std;

// lets impleemnt and array List
// in this way we can achieve generic programming in c++
template <class type> class ArrayList //type is a place holder for the data type 
{
    private:
        // this is the struct hold the capacity and a pointer to array block
        struct ControleBlock
        {
         int capacity;
         type *arr_ptr;   
        };
        //There will be a pointer which holds the address for the struct Control
        ControleBlock *s;
        // constructor which will initialy decides the capacity of the array list
        public:
            ArrayList(int capacity) // capacity local variable
            {
                //though pointer s we can access the Controle 
                s->capacity = capacity;
                s->arr_ptr = new int[s->capacity -1]; // new is used to create DMA dynamic memory allocation
            }
            void addElement(int index, type data)
            {
                if(index >=0 && index <= s->capacity-1) // 4 size array hai to 4-1 3 [0, 1, 2, 3]
                {
                    s->arr_ptr[index] = data;
                }
                else
                {
                    cout<<"\nArray index is not valid"<<endl;
                }
            }
            void viewElement(int index, type &data) // we will view the element at a particular index and will get the data and will store that data into this refernce variable
            {
                if(index >=0 && index <= s->capacity-1)
                {
                   data =  s->arr_ptr[index];
                }
                else
                {
                    cout<<"\nArray index is not valid"<<endl;
                }
            }
            void viewList()
            {
                for(int i = 0;i<s->capacity;i++)
                {
                    cout<<s->arr_ptr[i]<<" ";
                }
            }
};


int main()
{
    int data;
    // here we define the type as well with the int
    ArrayList <int>list(4); // at the initial state set the size 4
    list.addElement(0,30);
    list.addElement(1,34);
    list.addElement(2, 35);
    list.addElement(3, 36);
    list.addElement(4, 38);
    list.viewElement(0,data); // passing the reference of this variable in function
    
    
    list.viewList();
    

    return 0;
}