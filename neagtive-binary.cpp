#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int k=1, multiplier=1;

    while(to_string(n).length()>=multiplier){	 // to count the bits of n
        if(to_string(n).length()==multiplier){
            k=-1;
            n=n-(pow(10,to_string(n).length()-1));
            break;
        }
        multiplier*=2;
    }
    
	int num = n;
	int dec_value = 0;
	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		dec_value += last_digit * base;

		base = base * 2;
	}

	return dec_value*k;
}


int main()
{
	int num = 10000001;

	cout << binaryToDecimal(num) << endl;
}
