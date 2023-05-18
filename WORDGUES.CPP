//WORD GUESS//FULLY OPERATIONAL :) // NEEDS EXTENSIVE DOCUMENTATION
//CAN BE IMPROVED!!!
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//#include<math.h>
class game
{
private:
  char a[100], b[100], c[100],s[1000];
  int i,j,n,v,m,count;
public:
  void crux();
};
void game :: crux()
{

  cout<< "Enter the number of characters"<<endl;
  cin>>n;
  cout<< "Enter the word"<<endl;
  for (i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Do you wish to give a hint?"<<endl;
  gets(s);
  getch();
  clrscr();
  cout<<"INSTRUCTION"<<endl;
  cout<<"Enter the words in small letters only"<<endl;
  cout<<"The result will be displayed below after every attempt"<<endl;
  cout<<"If you get only the letter right then '^' will be displayed"<<endl;
  cout<<"If you get the letter and its position right '*' will be displayed else '!' will be displayed"<<endl;
  cout<<"If you can guess the word within the given amount of chances you win,  else you lose"<<endl<<endl;

  m=n;
  for(v=0;v<n;v++)
  {
    count=0;
    cout<<"HINT: "<<s<<endl;
    cout<<"Attempts left"<<" "<<m<<endl;
    m--;
    cout<<"Enter your answer"<<endl;
    for(j=0;j<n;j++)
    {
      cin>>b[j];
      c[j]='!';
    }
    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
		if (b[j]==a[i])
		{
		    c[j]='^';
		}
	}
    }

    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
		if(i==j && a[i]==b[i])
		c[j]='*';
	}
    }
    for(j=0;j<n;j++)
    {
       cout<<c[j];
    }
    cout<<endl;
    for(j=0;j<n;j++)
    {
       if(c[j]=='*')
       count++;
       if(count==n)
     {
       cout<<"CONGRATULATIONS YOU WIN!"<<endl;
       cout<<"GAME OVER";
       getch();
       exit(0);
      }
     }
  }
  for(i=0;i<n;i++)
  {
	for(j=0;j<n;j++)
	{
		if(b[j]!=a[i])
		cout<<"YOU LOSE"<<endl<<"GAME OVER";
		break;
	}
  }
}
void main()
{
  clrscr();
  game g;
  g.crux();
  getch();
}