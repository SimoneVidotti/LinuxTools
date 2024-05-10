#include <iostream>

using namespace std;

int main() {
 system("cat /dev/null > ~/.bash_history && cd ~ && cat /dev/null > ~/.zsh_history");
 system("sudo rm ~/.bash_history && sudo rm ~/.zsh_history");
 
 cout<<endl<<"[Ok]"<<endl;

 return 0;
}
