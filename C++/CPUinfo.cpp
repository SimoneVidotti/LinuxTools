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

Comando PCinfo("PC info:", "cat /proc/cpuinfo");
Comando Mem_info("Memory info:", "cat /proc/meminfo");

int main() {
    PCinfo.Esecuzione();
    Mem_info.Esecuzione();

    return 0;
}