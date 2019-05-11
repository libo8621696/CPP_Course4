#include<iostream>
using namespace std;
int main(){
	char s1[80], s2[80];
	cin.getline(s1, 80);
	cin.getline(s2, 80);
	int len1 = 0, len2 = 0;
	for(len1 =0; s1[len1]!= '\0'; len1++);
	for(len2 =0; s2[len2]!= '\0'; len2++);
	for(int j=0; j<len1; j++)
            {
                if(s1[j]>=97&&s1[j]<=122)
                    s1[j]-=32;
                if(s2[j]>=97&&s2[j]<=122)
                    s2[j]-=32;
            }
    int i = 0;
	char result;
	while (s1[i] != '\0' && (s1[i] == s2[i])){
    i++;
	}
	if (s1[i] > s2[i]) {
    result = '>';
	} else if (s1[i] < s2[i]) {
    result = '<';
	} else{
    result = '=';
	}
	cout << result << endl;
	return 0;
}