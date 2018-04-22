#include <iostream>
using namespace std;

int luas_permukaan_balok (int p,int l, int t){
	float v;
	v=p*l*t;
}

int volume_balok (int p, int l, int t){	
	float Lp;
	Lp=(2*p*l)+(2*p*t)+(2*l*t);
}

int main(){
	int p,l,t;
	cout<<"Masukan Panjang = ";cin>>p;
	cout<<"Masukan Luas = ";cin>>l;
	cout<<"Masukan Tinggi = ";cin>>t;
	cout<<"Luas Permukaan Balok = "<<luas_permukaan_balok(p,l,t)<<endl;
	cout<<"Volume Balok = "<<volume_balok(p,l,t);
	return 0;
}
