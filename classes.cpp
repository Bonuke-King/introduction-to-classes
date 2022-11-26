/*in object oriented programming is about creating objects that contain 
both data and functions.

advantages of oop
1.oop is faster and easier to execute
2.oop provides a clear structure for the programs
3.oop helps to keep the C++ code DRY (don't repeat yourself) and makes the code 
easier to maintain ,modify and debug
4.oop makes it possible to create full reusable applicatons with less code and shorter development time


A class is a user defined data type that we can use in our program and it works as a na object construcotor or a blueprint for creating objects



*/

#include <iostream>
#include <string.h>
using namespace std;
class myClass{ //the class
public: //access specifier which specifies that members of the class are accesible from outside the class.

int myNum; //attribute (int variable)
string myString; //attribute (string variable)


};

int main ()
{
myClass myObj; //creat an object of myclass

//access attributes and set values

myObj.myNum=15;
myObj.myString ="This how to access attributes and set values";

//print attrubute values
cout << myObj.myNum << endl;
cout << myObj.myString<<endl;
return 0;




}



























