#include<bits/stdc++.h>
using namespace std;

int main(){
    int chocolatePacket, chocolate, n;

    cout << "Total chocolate packet: ";
    cin >> n;
    chocolate = n;
    chocolatePacket = n;

    while(chocolatePacket >= 4){
        chocolate += chocolatePacket / 4;
        chocolatePacket = (chocolatePacket/4) + (chocolatePacket%4);
    }

    cout << chocolate << endl;



    return 0;
}
