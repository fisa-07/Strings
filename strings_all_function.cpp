// All strings in built functions
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;       // 1
    getline(cin,str1);
    cout<<str1<<endl;

    string s1,s2;  // 2
    s1="fam";
    s2="ily";
    s1.append(s2);
    cout<<s1<<endl;
    cout<<s1+s2<<endl;

    string abc="aksfjfjgvjenr mbrengiudf bnneineij";  // 3
    abc.clear();
    cout<<abc<<endl;

    string s3="abc",s4="abc";    // 4
    cout<<s1.compare(s2)<<endl;
    s4="afass";
    cout<<s1.compare(s2)<<endl;

    string ae="asf";    // 5
    cout<<ae.empty()<<endl;
    ae="";
    cout<<ae.empty()<<endl;

    string j="nincompoop";     // 6
    j.erase(3,3);
    cout<<j<<endl;

    string k="nincompoop";      // 7
    cout<<k.find("com")<<endl;

    string l="nincompoop";     // 8
    l.insert(2,"lol");
    cout<<l<<endl;

    string i="nfsgbibfsgwbbskbg bdnnewjgfs ge";    // 9
    cout<<i.length()<<" "<<i.size()<<endl;

    string su="nincompoop";      // 10
    cout<<su.substr(4,3)<<endl;

    string w="732";         // 11
    int x=stoi(w);
    cout<<x<<endl;

    int t=423;           // 12
    string z=to_string(x);
    cout<<z<<endl;

    string u="gfedcba";      // 13
    sort(u.begin(),u.end());
    cout<<u<<endl;

    return 0;
}