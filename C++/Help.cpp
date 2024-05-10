#include <iostream>

using namespace std;

void Linea() {
	cout<<endl;
	for(int i=0; i < 80; i++) {
		cout<<'=';
	}
	cout<<endl;
}


void PrintHelper(string var, string cmd) {
	cout<<endl<<"For "<<var<<" type: "<<cmd<<endl; 
        Linea();
        system("sleep 1");
}

int main() {
	PrintHelper("helper", "[command] --help");
	PrintHelper("find something", "fzf");
	PrintHelper("details of helper", "tldr [command]");

	return 0;
}

