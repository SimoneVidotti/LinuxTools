#include <iostream>

using namespace std;

class Comando {
	private:
		string Frase;
		const char* Command;
	public:
		Comando(string Var, const char* Cmd) {
			Frase = Var;
			Command = Cmd;
		}

		void Linea() {
			cout << endl;

			for(int i=0; i < 100; i++) {
				cout << '=';
			}

			cout << endl;
		}

		void Print(string Str) {
			cout << endl << Str << endl;
		}

		void Esecuzione() {
			Print(Frase);
			system(Command);
			Linea();
			system("sleep 1");
		}
};

Comando OsInfo(" ", "neofetch");
Comando OSname("OS name:", "uname -a");
Comando OSUtenti("OS Users:", "users");
Comando UtentiAttivi("Active users:", "w");
Comando Hostname("Hostname:", "hostname");
Comando ChiSono("Who am i:", "whoami");
Comando OS_tempoVita("OS uptime:", "uptime");
Comando MemoriaVolatile("volatile memory:", "free -h");
Comando MemoriaRigida("Hard memory:", "df -h");
Comando Processi("Processes:", "ps");

int main() {
	OsInfo.Esecuzione();
	OSname.Esecuzione();
	OSUtenti.Esecuzione();
	UtentiAttivi.Esecuzione();
	Hostname.Esecuzione();
	ChiSono.Esecuzione();
	OS_tempoVita.Esecuzione();
	MemoriaVolatile.Esecuzione();
	MemoriaRigida.Esecuzione();
	Processi.Esecuzione();

	return 0;
}