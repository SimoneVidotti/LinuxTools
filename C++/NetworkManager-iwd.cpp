#include <iostream>

// This program enable the network manager and iwd services.

using namespace std;

int main() {
    system("systemctl enable iwd NetworkManager");

    return 0;
}
