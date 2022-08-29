// Header files
//contains the declartion of identifiers
// means the prototype
// printf, cout only declaration or protype

//Library (actual coding of all identifiers declared inside the header file)
//The actual coding of the function is in the library file
//Means it contains coding

//Than why we include the header file
//To make aware the compiler to identify this, other wuse it will throw error becuase it will not known what this identifier is all about

//So when you include the header file into your file
//it will happen at pre processing time
// during the compilation the compiler knows the and identify them and process it.

//Namespace---------------------------------
//in c++ the namespace is group of declartions
//namespace myspace
// {
//     it will group all declartion

// }

//Namespace prevent the conflict between the name collision 
//We manage all the declaration in different group and name them
//namespace is a container for identifiers
//Createing namespace

//namespace mySpace {

//declaration goes

//}; //no semicolon here its not a class
//namespace must be done at global scope, or nested inside another namespace
//namespace can have the alias for simple use namespace ms=MySpace
//although it is not a class no object will create here

//global scope for namespace
namespace MySpace{
}

//give the alias for your namespace
namespace ms=MySpace;

//unamed namespace
//namespace{
//}

//namespace can be extended and continued over multiple files
//File1.h
//namespace MySpace {
//}

//File2.h
//namespace MySpace{
//}

//compiler will combine them both the namespace and add all the declartion will be there






int main() {
    //you can make namespace here
}



