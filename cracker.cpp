#include <iostream>
#include <string>
#include <fstream>
#include "md5.h"
#include "md5.cPP"
using namespace std;

main(){
	string line;
	string md5hash;
	ifstream wordlist("wordlist.txt");
	cout << "Hacknology THT md5 crack" << endl;
	cout << "----------------------------" << endl;
	cout << "Hash: ";
	cin >> md5hash;
	if(wordlist==NULL){
		cout << "Böyle bir dosya yok";
	}
	while(getline(wordlist,line)){
		if(md5hash==md5(line)){
			cout << "[+]Hash basariyla kirildi: " << md5hash << ":" << line << endl;
		}
		else{
			cout << "[-]Wordlistinizde hash bulunamadý."
		}
	}
	cin.get();
	cin.get();
	return 0;
}
