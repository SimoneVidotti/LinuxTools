#include <iostream>
#include <cstdlib>

using namespace std;

void Title() {
  system("figlet -f slant NewSSH && sleep 1");
}

void NewSSH() {
  string Email;
  cout << endl << "email: ";
  cin >> Email;

  const string SSH_GEN = "ssh-keygen -t ed25519 -C " + Email;

  system(SSH_GEN.c_str());

  system("eval $(ssh-agent -s)");

  string SSH_name;
  cout << endl << "Private ssh key name: ";
  cin >> SSH_name;
  cout<<endl<<"1) move the keys to ./ssh, 2) ssh-add ~/.ssh/id_ed25519, 3) git remote add my_new_remote_repo git@git.example.git";
}

void End() {
  cout << endl << "Loading... ";
  system("sleep 1");
  cout << "Done." << endl;
  system("toilet --metal Successful");
}

int main() {
  Title();
  NewSSH();
  End();

  return 0;
}
