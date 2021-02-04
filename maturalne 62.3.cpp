#include <iostream>
#include <fstream>

using namespace std;

int y = 1000;

int main() {
	ifstream wejscie1;
	wejscie1.open("ciagi.txt");
	
	ifstream wejscie2;
	wejscie2.open("plik2.txt");
	
	
    ofstream wyjscie("plikwyj.txt");
    int liczba1[y];
	  int liczba2[y];
    int min =0;
    int max =0;
    int x = 0;
    if(wejscie1.good()){
        while(!wejscie1.eof()){
            wejscie1 >> liczba1[x];         
            x++;
        }
    }    
    x=0;
	if(wejscie2.good()) {
		while(!wejscie2.eof()){
			wejscie2>> liczba2[x];
			x++;
		}
	}   
	for(int i = 0 ; i<y;++i){
		if (liczba1[i]==liczba2[i]){
                min++;
            }
            if(liczba1[i] >liczba2[i]){
                max++;
            }
	}
    wyjscie<<"liczby które mają w obu plikach taką samą wartość:";
    wyjscie<<min;
    wyjscie<<endl<<"liczby które są wieksze:";
    wyjscie<<max;
    return 0;
}
