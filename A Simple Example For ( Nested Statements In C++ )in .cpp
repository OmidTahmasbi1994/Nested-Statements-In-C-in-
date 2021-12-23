#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	int a,b;
	
	cout<<"Enter a :"<<endl<<"And"<<endl<<"Enter b :"<<endl;
	
	cin>>a>>b;
	
	if (a%b==0)
		if (a%2==0) cout<<"(a) Zoj Ast Va Bar (b) Bakhshpazir Ast"<<endl;
		else cout<<"(a) Fard Ast Va Bar (b) Bakhshpazir Ast"<<endl;
		
	else cout<<"(a) Bar (b) Bakhpazir Nist"<<endl;
	
	getch();	
}
