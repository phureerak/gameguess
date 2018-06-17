#include <iostream>
#include <string>
using namespace std;
void alpha(char h,bool checkwrong,char *alphabet);
void overhead(char ges,bool checkwrong,char *alphabet);
int ini(char a[],int n,char *str,char *loword);
void head();
void headv();
void body();
void arm();

void feet();
void foot();
void fool();
void neck();
void neckv();
void round();
char str[30]="PHUREERAK";
int nn=0;
void main(){
	char setV[30],loword[26],alphabet[26];
	int win=9,fowin=0;
	char again,menu,wait;
	char ges='@', V='-';
	bool doo=true, checkwrong=true;
	int n=0;
	for(int i=0;i<26;i++){
		alphabet[i]=65+i;
	}
	alpha(V,checkwrong,alphabet);
	while(true){
		
		cout<<"\n\n\t======MENU=======??? \n";
		cout<<" \n\t1.ENTER Guess??? \n";
		cout<<" \n\t2.PLAY GAME???  \n";
		cout<<"\n\tENTER MENU : ";
		cin>>menu;
		switch(menu)
		{
			case '1' :  
						cout<<"\n\n\t1.ENTER Guess : ";
						cin>>str;
						for(int a=0;a<strlen(str);a++){
							if(str[a]>=97&&str[a]<=122){
								str[a]-=32;
								win=a+1;
							}
						}
						system("cls") ;
						break;
			case '2': system("cls") ;
						do{
							fowin=ini(setV,n,str,loword);
							overhead(ges,checkwrong,alphabet);
							round();
							
							for(int i=0;i<strlen(str);i++){
								cout<<loword[i]<<"  ";	
							}
							if(fowin==win){
								cout <<"\t\t\tYOU WIN!!!\n\n";
								cin.get(wait);
								cout <<"\t\t\t\t\t\tPress Any Key\n";
								cin.get(wait);
								system("cls") ;
								again='Y';
							}
							cout<<fowin<<endl;
							
							if(nn>=6){
								cout<<"\n\n PLAY AGAIN???(Y/N) : ";
								cin>>again;
								if(again=='y'||again=='Y'){
									nn=0;
									doo=false;
								}else if(again=='n'||again=='N'){
									exit(0);
								}
							}else{
							cout<<"\n\n Guess One Alphabet : ";
							cin>>ges;
							int b=0;
							if(ges>=97&&ges<=122)ges-=32;
								for(int i=0;i<strlen(str);i++){	
									if(ges==str[i]){
										checkwrong=true;
										setV[i]=str[i];
										b=1;
										ini(setV,i,str,loword);
									}else if (b==0) 
									checkwrong=false;
								}
							alpha(ges,checkwrong,alphabet);
							}
							system("cls") ;
						}while(doo);
						main();
						break;
		}
	}
}

int ini(char a[],int n,char *str,char *loword){
	int peh=0;
	for(;n<strlen(str);n++){
		if(a[n]==str[n])
		{
		loword[n]=a[n];
		peh++;
		}
		else loword[n]='_';	
	}
	return peh;
}

void alpha(char h,bool checkwrong,char *alphabet){
	int i,u=0;
	for(i=0;i<26;i++){
		if(h>=97&&h<=122)
			h-=32;

		if (alphabet[i]==h){
				alphabet[i]='/';
				u=1;
				break;
			}
		}
	if(u==0){
		checkwrong=true;
	}
	
	
}
void overhead(char ges,bool checkwrong,char *alphabet){
	cout<<"\n";

	for(int i=0;i<26;i++){
		cout<<" "<<alphabet[i];
	}
	if(checkwrong==false){
		nn++;
		if(nn>=6)cout<<"\tYOU LOST!!"<<" : ";
		else cout<<"\tNOT CORRECT "<<nn<<": ";
		cout<<ges;
	}
	
}
void round()
{
	if(nn==0)
	{
	head();
	body();
	feet();
	}
	else if(nn==1)
	{
	head();
	body();
	foot();
	}
	else if(nn==2)
	{
	head();
	body();
	fool();
	}
	else if(nn==3)
	{
	head();
	arm();
	fool();
	}
	else if(nn==4)
	{
	head();
	neck();
	fool();
	}
	else if(nn==5)
	{
	head();
	neckv();
	fool();
	}
	else if(nn==6)
	{
	headv();
	neckv();
	fool();
	}
}
void head(){
	cout<<endl;
	cout<<"\t     ____"   <<endl;
	cout<<"\t     /===\\"  <<endl;
	cout<<"\t ===/=====\\==="  <<endl;
	cout<<"\t    :() X :"  <<endl;
	cout<<"\t     :.\".:"  <<endl;
	cout<<"\t      \"\"\""  <<endl;

}
void headv(){
	cout<<"\n"   <<endl;
	cout<<" "    <<endl;
	cout<<""  <<endl;
	cout<<"  "  <<endl;
	cout<<""   <<endl;

}
void neck(){
	cout<<"\t      >M< "   <<endl;
	cout<<"   "   <<endl;
	cout<<"   "   <<endl;
	cout<<"   "   <<endl;

}
void neckv(){
	cout<<"   "   <<endl;
	cout<<"   "   <<endl;
	cout<<"   "   <<endl;
	cout<<"   "   <<endl;
	cout<<"   "   <<endl;

}
void body(){
	cout<<"\t      >M< "   <<endl;
	cout<<"\t {{==\\\\ //==}} "   <<endl;
	cout<<"\t || ===\"=== || "   <<endl;
	cout<<"\t 88 ===\"=== 88"   <<endl;
	cout<<"\t ||  ==\"==  ||"   <<endl;
	cout<<"\t//|'  {\"}  '|\\\\"   <<endl;
	cout<<"\t::: ..& &.. :::"   <<endl;

}
void arm(){
	cout<<"\t      >M< "   <<endl;
	cout<<"\t   ==\\\\ //== "   <<endl;
	cout<<"\t    ===\"===  "   <<endl;
	cout<<"\t    ===\"=== "   <<endl;
	cout<<"\t     ==\"==  "   <<endl;
	cout<<"\t      {\"}  "   <<endl;
	cout<<"\t    ..& &.. "   <<endl;

}
void feet(){
	cout<<"\t    ||   ||"   <<endl;
	cout<<"\t    ||   ||"   <<endl;
	cout<<"\t    88   88 "   <<endl;
	cout<<"\t    ||   ||"   <<endl;
	cout<<"\t    ||   ||"   <<endl;
	cout<<"\t{{:??    ??::}} "   <<endl<<endl<<endl;
}
void foot(){
	cout<<"\t    || "   <<endl;
	cout<<"\t    || "   <<endl;
	cout<<"\t    88 "   <<endl;
	cout<<"\t    || "   <<endl;
	cout<<"\t    || "   <<endl;
	cout<<"\t{{:??  "   <<endl<<endl<<endl;
}
void fool(){
	cout<<"  "   <<endl;
	cout<<"  "   <<endl;
	cout<<"  "   <<endl;
	cout<<"  "   <<endl<<endl<<endl;
}