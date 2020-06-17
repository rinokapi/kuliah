#include <iostream>
#include <conio.h>

using namespace std;
int pe[100], ke[100];
int jumlah;
void ganti(int bil, int bil2) {
    int temp;
    temp = data[bil2];
    pe[bil2] = ke[bil];
    pe[bil] = temp;
}
void masukan() {
    cout<<"banyak data: "; cin>>jumlah;
    for(int i=0; i<jumlah; i++) {
        cout<<"nilai: ";
        cin>>pe[i]; ke[i] = pe[i];
    }
    cout<<endl;
}
void hasil() {
    for(int i=0;i<jumlah;i++) {
        cout<<pe[i]<<" ";
    }
    cout<<endl;
}
void urut() {
    for(int i=1;i<jumlah;i++) {
        for(int j=jumlah-1;j>=i;j--) {
            if(pe[j]<pe[j-1]) ganti (j,j-1);
        }
        hasil();
   }
   cout<<endl;
}
main() {
    masukan();
    hasil();
    urut();
}
