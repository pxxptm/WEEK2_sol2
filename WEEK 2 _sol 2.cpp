#include<iostream>
#include<string>
using namespace std;

main()
{
	string s;
	int i,a=0;

	cin >> s;

	for(i=0;i<s.length();i++)
    {
        if(islower(s[i])) a++;
    }
	if(a==s.length()) cout<<"All Small Letter";
	else if(a==0) cout << "All Capital Letter";
	else cout << "Mix";
	return 0;
}
