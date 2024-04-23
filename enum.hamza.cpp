#include<iostream>
using namespace std;
enum colours{
	red,blue,green,white,pink,black,purpel
};
int main()
{
	colours c;
	c=black;
	for(int i=0; i<=7; i++)
	{
		
		cout<<c+i<<endl;
	}
}
/*#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today+1;
    return 0;
}*/
