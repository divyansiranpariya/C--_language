#include <iostream>
using namespace std;

int phrase()
{
	int ph,pw;
	int ans;
	int phrasewidth=350,phraseheight=90,dist = 8;
	
pw= 793;
ph = 1122;

    ans=((pw+dist)/(phrasewidth+dist))*((ph+dist)/(phraseheight+dist));

    return ans;
}

int main()
 {
    int total = phrase();
    cout << "Total number of phrases are:"<<total;
    return 0;
}

