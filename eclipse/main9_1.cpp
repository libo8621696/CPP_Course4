#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	char s[100];
	cin.getline(s, 80);
	int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0; 
	for(int len1 = 0; s[len1] != '\0'; len1++){
		if(s[len1] == 'a' )
			{
				count_a++;
			}
		else if(s[len1] == 'e' ){
				count_e++;
		    }
		else if(s[len1] == 'i' ){
				count_i++;
		    }
		else if(s[len1] == 'o' ){
				count_o++;
		    }
		else if(s[len1] == 'u' ){
				count_u++;
		    }
		else
			{
				continue;
			}
	}

	cout << count_a << " " << count_e << " " << count_i << " " << count_o << " "<< count_u << endl;
	return 0;
}