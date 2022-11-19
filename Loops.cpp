#include <iostream>

using namespace std;

int main(){


// Note - to test this commment other types of loops
    // Assignment - 2

    // For Loop for printing first 10 prime numbers

      int i, chk=0, j,b,count=1;
    cout<<"Prime Numbers Between 1 to 100 are:\n";
    for(i=1; i<=100; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
        }
        if(chk==0 && i!=1)
            cout<<i<<endl;
        chk = 0;
    }
    cout<<endl;


    cout<<"First Ten Prime Numbers Are\n"<<"2";
for(i=3;i>0;++i)
{
for(j=2;j<=i/2;++j)
{
if(i%j==0){
b=1;
break;
}
}
if(b==0)
{
cout<<"\n"<<i;
count++;
}
b=0;
if(count==10)
break;
}

    // While Loop
    cout<<"First Ten Prime Numbers are"<<"2";
	for(i=3;i>0;++i)
	{
		for(j=2;j<=i;++j)
		{
			if(i%j==0)
			b=1;
			break;
		}
		if(b==0)
		{
			cout<<"n"<<i;
			count++;

		}
		b=0;
		if(count==10)
			break;
	}
    return 0;
}