#include <iostream>
#include <string>

// Introducing the standard namespace globally for this source file
using namespace std;

int main() {
    // NexusChain Node Header Initialization Banner
    cout << "==================================================\n";
    cout << "        NEXUSCHAIN CORE ENGINE v1.0.0             \n";
    cout << "   Status: Initializing Distributed Ledger Node    \n";
    cout << "==================================================\n\n";

    // Simulating Node Environment Input Parameters
    string nodeName;
    int portTarget = 0;

    cout << "[INIT] Enter unique Node Identifier Name: ";
    cin >> nodeName;

    cout << "[INIT] Assign Local Target Network Port (e.g., 8080): ";
    cin >> portTarget;

    cout << "\n--------------------------------------------------\n";
    cout << "[SUCCESS] Bootstrapping localized network parameters...\n";
    cout << "[INFO] Active Node Tag: " << nodeName << "\n";
    cout << "[INFO] Listening Port : " << portTarget << "\n";
    cout << "==================================================\n";

    return 0;
}