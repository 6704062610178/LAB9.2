#include<iostream>
#include <cstring>
using namespace std;
int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64]){
	int i;
	for(i=0;i<5;i++){
		if( strcmp(login, logindb[i]) == 0 && strcmp(passwd, passdb[i])==0)
			return 1;	
	}
	return 0;
}

int main() {
	char logindb[5][64]={"user1","user2","user3","user4","user5"};
	char passdb[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	int i;
	char logini[64];
	char passi[64];
	cout<<"Enter Login: ";
	cin>>logini;
	cout<<"Enter Password: ";
	cin>>passi;
	if(checkLogin(logini,passi,logindb,passdb)){
		cout<<"Welcome"<<endl;
	}
	else{
		cout<<"Incorrect login or password"<<endl;;
	}
	
	
}

