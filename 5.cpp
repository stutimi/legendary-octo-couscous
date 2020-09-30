#include <iostream>
#include <string.h>
using namespace std;
int isSubstring(char s1[80], char str[][20],int n)
{
char s3[20][20];
int k=0,l=0;
for(int i=0;s1[i]!='\0';i++)
{


    s3[k][l]=s1[i];
    if(s1[i+1]==' ')
    {
        s3[k][++l]='\0';
        k++;
        i++;
        l=0;

    }
    else
        if(s1[i+1]=='\0')
    {
        s3[k][++l]='\0';
    }
    else
       {
           l++;

       }



}
/*
for(int i=0;i<k+1;i++)
    cout<<s3[i]<<endl;
*/
cout<<"the unknown word="<<endl;

for(int i=0;i<k+1;i++)
{
    int f=0;
    for(int j=0;j<n;j++)
    {
        if(strcmp(s3[i],str[j])==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<s3[i]<<" , ";
}

}
int main() {
	char s[80];

	cout<< "Enter the Text" <<endl;
    cin.getline(s,78);
    cout<<"enter anything"<<endl;
    cin.ignore();

	char str[20][20];
	cout << "Enter the known word " <<endl;

	int n=0;
	int res=1;
	while(res==1)
    {
        cin>>str[n];
        cout<<"press 1 for more words to enter else 2 to quit"<<endl;
        cin>>res;
        n++;
    }

    n--;
	isSubstring(s,str,n);
	return 0;
}
