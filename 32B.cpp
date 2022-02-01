/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/32/problem/B

//        Codeforces Beta Round #32 (Div. 2, Codeforces format)
//                         B. Borze

#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i{}; i<str.length(); i++){
    if(str.substr(i,2)=="-." or str.substr(i,2)=="--"){
        
        if(str.substr(i,2)=="-."){
            cout<<'1';
        }
        else if(str.substr(i,2)=="--"){
            cout<<'2';
        }
        i++;
    }
    else if(str[i]=='.'){
        cout<<'0';
    }
    }
    return 0;
}