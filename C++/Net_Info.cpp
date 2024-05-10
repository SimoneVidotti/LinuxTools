#include <iostream> 

using namespace std;

void linea() {
 cout<<endl;

 for(int i=0; i<90; i++) {
  cout<<'=';
 }

 cout<<endl;

 system("sleep 1");
}

int main() {
 cout<<endl<<"NET INFO"<<endl;
 linea();

 system("iwconfig");
 linea();

 system("ifconfig");
 linea();

 system("route");
 linea();

 system("route -n");
 linea();

 system("nmcli dev wifi");

 return 0;
}
