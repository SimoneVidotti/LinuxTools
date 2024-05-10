#include <iostream>

using namespace std;

int main() {
	system("upower -i /org/freedesktop/UPower/devices/battery_BAT0");
	return 0;
}
