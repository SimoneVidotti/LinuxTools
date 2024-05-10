#include <iostream>
#include <cstdlib>

using namespace std;

void Title() {
  system("figlet -f slant MACHostChange && sleep 1");

  string Answer;
  cout<<endl<<"Are you sure? [y/n]: ";
  cin>>Answer;

  while(Answer != "y" && Answer != "n") {
    cout<<endl<<"Error. Please use 'y' or 'n'.";
    cout<<endl<<"Choose [y/n]: "<<endl<<"> ";
    cin>>Answer;
  }

  if(Answer == "n") {
    cout<<endl<<"Exit...";
    system("sleep 1");
    cout<<" Done.";
    system("exit");
  }
}

void MAC_ch() {
  string NameLink;
  cout<<endl<<"Name of net link: ";
  cin>>NameLink;
  
  cout<<endl<<"Mac changing... ";

  const string DOWN = "sudo ifconfig " + NameLink + " down";

  const string CHANGE = "sudo macchanger -r " + NameLink;

  const string UP = "sudo ifconfig " + NameLink + " up";

  system(DOWN.c_str());
  system(CHANGE.c_str());
  system(UP.c_str());

  system("sleep 1");

  cout<<"Done."<<endl;
}

void Host_ch() {
  string new_hostname;

  cout <<endl<<"New hostname: ";
  cin>>new_hostname;

  cout<<endl<<"Hostname changing... ";

  system("sleep 1");

  string command = "sudo hostname " + new_hostname;

  int status = system(command.c_str());

  if (status != 0) {
      cout<<"Error!"<<endl;
  } else {
      cout<<"Done."<<endl<<endl;
  }
}

void End() {
  system("toilet --metal successful");
}

int main() {
  Title();
  MAC_ch();
  Host_ch();
  End();

  return 0;
}
