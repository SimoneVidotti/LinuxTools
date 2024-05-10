#include <iostream>

using namespace std;

int main() {
 string NameLink;
 cout<<endl<<"Name of net link: ";
 cin>>NameLink; 

 const string DOWN = "sudo ifconfig " + NameLink + " down";

 const string CHANGE = "sudo macchanger -r " + NameLink;

 const string UP = "sudo ifconfig " + NameLink + " up";

 system(DOWN.c_str());
 system(CHANGE.c_str());
 system(UP.c_str());

 return 0;
}
