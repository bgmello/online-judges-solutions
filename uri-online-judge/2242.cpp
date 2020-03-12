#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <complex.h>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> v;
    bool deu_certo=true;
    for (int i=0;i<s.length();i++){
        if (s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
            v.push_back(s[i]);
        }
    }
    if(v.size()==1){
        printf("S\n");
        return 0;
    }
        for (int i=0;i<=v.size()/2-1;i++){
            if (v[i]!=v[v.size()-1-i])deu_certo=false;
        }
    if(deu_certo)printf("S\n");
    else printf("N\n");
    return 0;
}

