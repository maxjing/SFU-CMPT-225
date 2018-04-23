#include <iostream>
//#include "char_stack.h"
#include<stack>
using namespace std;

bool match(char a, char b){
    if((a=='{'&&b=='}')||(a=='['&&b==']')||(a=='('&&b==')')){
        return true;
    }else{
        return false;
    }
}
char valid(char a){
    if(a=='{'){
        return '}';
    }else if(a=='['){
        return ']';
    }else if(a=='('){
        return ')';
    }
}
int main() {
    string s;
    stack<char> result;


    int line = 0;
    bool invalid = false;
    bool notmatch = false;
    while (getline(cin,s)) {
        line += 1;


        for(int i=0;i<s.length();i++){

            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                result.push(s[i]);


            }else if(s[i]=='}'||s[i]==']'||s[i]==')'){


                if(result.empty()){
                    cout<<"Error on line "<<line<<": Too many "<<s[i]<<endl;
                    int x = i;
                    for(int y=0;y<x+1;y++){
                        cout<<s[y];
                    }
                    cout<<endl;
                    for(int y=0;y<x+1;y++){
                        cout<<" ";
                    }

                    for(int z = x+1;z<s.length();z++){
                        cout<<s[z];
                    }
                    cout<<endl;
                    invalid = true;
                }
                char l = result.top();
                char correct = valid(l);
                else if(match(l,s[i])){
                    result.pop();
                }
                else if(!match(l,s[i])){
                    notmatch=true;
                    cout<<"Error on line "<<line<<" Read "<<s[i]<<", expected "<<correct<<endl;
                    int x = i;
                    for(int y=0;y<x+1;y++){
                        cout<<s[y];
                    }
                    cout<<endl;
                    for(int y=0;y<x+1;y++){
                        cout<<" ";
                    }

                    for(int z = x+1;z<s.length();z++){
                        cout<<s[z];
                    }
                    cout<<endl;
                    invalid = true;
                    break;
                }
            }


        }
    }
    if (!result.empty()&&(!notmatch)) {
        char left = result.top();
        result.pop();
        cout << "Error at end of file: Too many " << left << endl;
    } else if (!invalid) {
        cout << "No error found" << endl;
    }


}
