#include <iostream>

using namespace std;

int main() {
	string ssh_zone;

	cout<<endl<<"Where is ssh? > ";
	cin>>ssh_zone;

	const string command = "ssh_add " + ssh_zone;

	system("eval $(agent-ssh -s)");

	system(command.c_str());

	return 0;
}
