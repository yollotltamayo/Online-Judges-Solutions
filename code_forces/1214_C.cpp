#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<char>var;
stack<char>ex;
string ver(string a){
	for(auto &c:a){
		switch(c){
			case '(':
				var.push(c);
			break;
			case ')':
				if(var.empty() || var.top() != '('){
					if(ex.size() == 1)
						return "NO";
					else
						ex.push(c);
				}else{
					var.pop();
				}
			break;				
		}		
	}
	if(var.empty() && ex.empty())
		return "YES";
	if(var.empty() && !ex.empty())
		return "NO";
	if(!var.empty() && ex.empty())
		return "NO";
	if(!var.empty() && !ex.empty())
		if( var.size() == 1)
			return "YES";
		else
			return "NO";
}
int main(){
	string a;
	int n;
	cin>>n>>a;
	cout<<ver(a)<<"\n";
	return 0;
}
