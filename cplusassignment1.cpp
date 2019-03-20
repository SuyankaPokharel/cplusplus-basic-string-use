#include <iostream>
#include <string>
//Suyanka Pokharel
//object oriented programming 
using namespace std;
 int main(){
string firstname, lastname, fullname;
cout<<"Enter your first name:\n";
getline(cin, firstname);
cout<<"Enter your last name:\n";
getline(cin, lastname);
fullname = firstname + lastname;
cout << "your fullname is: "<<fullname<<endl;
cout << "length of resulting string (fullname) is:"<< fullname.size()<<endl;
return 0;
}
