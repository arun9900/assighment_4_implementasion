#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
string appendAndDelete(string s, string t, int k)
 {
int i=0;
int n=0;
if(s.length()<t.length()){
    if(k<=s.length()&&k<=t.length())
    return "Yes";
    else
    return "No";
    
}
while(s[i]!='\0'&&t[i]!='\0')
{
 if(s[i]==t[i])
 n++;
 else 
 break; 
 i++;
}
int q=s.length()-n;
int w=t.length()-n;
if(k>=(q+w))
return "Yes";
else 
return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
