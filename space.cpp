#include<bits/stdc++.h>

using namespace std;

int main(){

char name[20]; 
cout<<"type a name";
cin.getline(name,19);
cout<< name;

for(int i=0;i<19;i++){
if(name[i]==' '){
    cout<<"Name contains space";
 return 0;
}
}
cout<<"Space not found in the name";
}
