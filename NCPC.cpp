#include <bits/stdc++.h>
using namespace std;

//number of ip actually needed for subnet masking
int numberOfIP(int n) {
    if (n <= 0) return 0;
    int power = 1;
    while (power < n) {
        power *= 2;
    }
    return power;
}

//
string ipToString(vector<int> ip) {
    return to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + "." + to_string(ip[3]);
}
// Function to get network ID based on subnet mask
vector<int> getNetworkID(vector<int> ip, int subnetMask) {
    vector<int> netID(4, 0);
    for (int i = 0; i < 4; i++) {
        if (subnetMask >= 8) {
            netID[i] = ip[i] & 255;
            subnetMask -= 8;
        } else {
            netID[i] = ip[i] & (255 << (8 - subnetMask));
            subnetMask = 0;
        }
    }
    return netID;
}

// getting the octate of ip
vector<int> split(const string &s) {
    vector<int> tokens;
    string token;
    for (char c : s) {
        if (c == '.' || c == '/') {
            if (!token.empty()) {
                tokens.push_back(stoi(token));
                token.clear();
            }
        } else {
            token += c;
        }
    }
    if (!token.empty()) {
        tokens.push_back(stoi(token));
    }
    int mask = tokens[4];
    tokens.pop_back();
    tokens = getNetworkID(tokens, mask);
    tokens.push_back(mask);
    return tokens;
}

// Function to check if an IP address is valid
bool checkValidIp(vector<int> ip) {
    if (ip.size() != 4) return false;
    for (int i = 0; i < 4; i++) {
        if (!(ip[i] >= 0 && ip[i] < 256)) {
            return false;
        }
    }
    return true;
}

// Function to increment IP address
vector<int> binaryAdd(vector<int> ip, int step) {
    int carry = step;
    for (int i = 3; i >= 0; i--) {
        ip[i] += carry;
        if (ip[i] > 255) {
            carry = ip[i] / 256;
            ip[i] %= 256;
        } else {
            break;
        }
    }
    return ip;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    // Get number of subnets
    cout << "How many subnets do you want? ";
    int n;
    cin >> n;

    vector<int> subNets;
    for (int i = 0; i < n; i++) {
        int requiredIPs;
        cout << "Number of IPs required in subnet " << i + 1 << ": ";
        cin >> requiredIPs;
        subNets.push_back(numberOfIP(requiredIPs));
    }

    // Sort subnets in descending order
    sort(subNets.begin(), subNets.end(), greater<int>());

    // Get IP input
    cout << "Enter the IP address of the subnet with subnet mask (e.g., 192.168.1.0/24): ";
    string ip;
    cin >> ip;

    vector<int> ips = split(ip);

    int sn = ips[4];  // Subnet mask
    ips.pop_back();   // Remove subnet mask

    if (ips.size() != 4 or !checkValidIp(ips)) {
        cout << "Invalid IP format. Please enter in format x.x.x.x/y" << endl;
        return 0;
    }

    vector<int> currentIP = getNetworkID(ips, sn); // Get starting network ID
    cout << "Network ID: " << "\tBroadcast ID: "<<"\tSubnet Mask: "<<endl;

    for (int i = 0; i < n; i++) {
        int hostBits = log2(subNets[i]); // Bits needed for hosts
        int newMask = 32 - hostBits;           // New subnet mask

        vector<int> networkID = ips;
        vector<int> broadcastID = binaryAdd(ips, subNets[i] - 1);
        ips = binaryAdd(broadcastID, 1);

        cout << "Subnet " << i + 1 << ":\n";
        cout << ipToString(networkID) <<'\t'<<'\t'<< ipToString(broadcastID) <<'\t'<<'\t'<< newMask << endl;

    }

    return 0;
}
