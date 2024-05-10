#include <iostream>

using namespace std;

int main() {
    int Sc;
    cout<<endl<<"MENU PROCESSES TOOLS:"<<endl<<"1. top"<<endl<<"2. htop"<<endl<<"3. btop"<<endl;
    cout<<endl<<"> ";
    cin>>Sc;

    int i=1;

    while(Sc != 1 && Sc != 2 && Sc != 3) {
	cout<<endl<<"ERROR! tentative n."<<i<<":"<<endl<<"[1, 2, 3]> ";
	cin>>Sc;
	i++;
    }

    switch(Sc) {
	case(1): {
	 system("top");
	 break;
        }

	case(2): { 
         system("htop");
         break;
        }
	case(3): { 
         system("btop");
         break;
        }
    }

    return 0;
}
