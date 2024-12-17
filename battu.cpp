#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int player, lawan;
    char lagi;
    string hasil;

    cout<<"================================"<<endl;
    cout<<"=== GAME BATU GUNTING KERTAS ==="<<endl;
    cout<<"================================"<<endl;
    
    while (true)
    {
        lawan = 1 + (rand() % 3);

        cout<<"silahkan pilih player: "<<endl;
        cout<<"1. Batu"<<endl;
        cout<<"2. Gunting"<<endl;
        cout<<"3. kertas\n"<<endl;
        cout<<"Player (1/2/3): ";
        cin>>player;
        if ( player == 1 )
        {
            if ( lawan == 1)
            {
                cout<<"BATU VS BATU = SERI"<<endl;
            }
            if ( lawan == 2 )
            {
                cout<<"BATU VS GUNTING = MENANG"<<endl;
            }
            if ( lawan == 3)
            {
                cout<<"BATU VS KERTAS = KALAH"<<endl;
            }
        }
        if ( player == 2 )
        {
            if ( lawan == 1 )
            {
                cout<<"GUNTING VS BATU = KALAH"<<endl;
            }
            if ( lawan == 2 )
            {
                cout<<"GUNTING VS GUNTING = SERI"<<endl;
            }
            if ( lawan == 3 )
            {
                cout<<"GUNTING VS KERTAS = MENANG"<<endl;
            }
        }
        if ( player == 3 )
        {
            if ( lawan == 1 )
            {
                cout<<"KERTAS VS BATU = MENANG"<<endl;
            }
            if ( lawan == 2 )
            {
                cout<<"KERTAS VS GUNTING = KALAH"<<endl;
            }
            if ( lawan == 3 )
            {
                cout<<"KERTAS VS KERTAS = SERI"<<endl;
            }
        }

        cout<<"\nTEKAN 'n' UNTUK EXIT: ";
        cin>>lagi;
        cout<<endl;
        if ( lagi == 'n' )
        {
            break;
        }
        
    }
    cout<<"================================"<<endl;
    cout<<"== TERIMA KASIH SUDAH BERMAIN =="<<endl;
    cout<<"================================"<<endl;

    
    
}