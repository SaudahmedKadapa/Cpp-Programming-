#include<iostream>
using namespace std;

void Palindrome();
bool PrimeNumber();
void Armstrong();

int main()
{
    int sel;
    cout<<"select the operation"<<endl;
    cout<<"1.Palindrome \n 2.PrimeNumber \n 3.armstrong number "<<endl;
    cin>>sel;
    switch (sel)
    {
    case 1:
         Palindrome();
        break;

        case 2:
        PrimeNumber();
        break;

        case 3:
        Armstrong();
        break;
    
    default:
        break;
    }


}
void Palindrome()
{
    int num,org=0,rev=0,rem;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(org=num;num!=0;)
    {
        rem=num%10;
        rem=(rem*10)+rem;
        num=num/10;
    }
    if(org==rev)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a palindrome!!"<<endl;
    }


}
bool PrimeNumber()
{
    int num;
    cout<<"Enter the number ="<<endl;
    cin>>num;
    bool check=true;
    
    if(num==0 || num==1)
    {
        return false;
    }
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false ;
            break;

        }
        
    }
    if(check)
    {
        cout<<"Prime NUmber "<<endl;
    }
    else 
    {
        cout<<"NOt a prime number"<<endl;
    }


}

void Armstrong()
{
    int num,sum,rem,i;
    cout<<"Enter the number range till"<<endl;
    cin>>num;
    for( i =0;i<num;i++)
    {
        sum=0;
        
        
        while(num>0)
        {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
        }


    }
    if(sum==i)
    {
        cout<<i<<endl;
    }
}