#include <iostream>
#include <math.h>
#include <string>

using namespace std;
bool isindico(string dic[100000], string p, int n);

int main()
{
	
	string dico[1000000];
	string p="";
	int wp=256;
	int w[100];
	string  str;
	cin>>str; // don't cin space!
	int kk=0;
	while(kk<str.length()){
		dico[(int)str[kk]]=str[kk];
		kk++;
	}
	int i=0;
	
	while(i<str.length()){
		string c="";
		c=str[i+1];
		if(p.length()<1) p=str[i];
		if(isindico(dico, p+c, wp)==true){
			p=p+c;
			i++;
		}
		else{
			if((p+c).length()==2) cout<<" "<<(int)str[i];
			dico[wp]=p+c;
			p=c;
			wp++;
			i++;
		}
	}
	cout<<endl;
	return 0;
}

bool isindico(string dic[1000000], string p, int n){
	int q=0;
	for(int j=n;j>0;j--){
		if(dic[j]==p){
			q=j;
			cout<<" "<<j;
			
			break;
		}	
		
	}	
	
	return !(q == 0);
}	
