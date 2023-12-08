#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a;
    string n,m,d,b;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout<<"?????: ";
    getline(cin,n);
    cout<<"Fahsai: Wow!!! "<<n<<" is a really cool name.\n";
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout<<n<<": ";
    cin>>a;
    cin.ignore();
    cout<<"Fahsai: I think you may be GEAR "<<a/10000000-12<<". I have a free movie ticket for you.\n";
    cout<<"Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout<<n<<": ";
    getline(cin,m);
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<n<<": ";
    getline(cin,d);
    cout<<"Fahsai: "<<d<<"....that is OK!!! I'm looking forward to watching "<<m<<" with you.\n";
    cout<<n<<": ";
    getline(cin,b);
    cout<<"Fahsai: 555+ see you "<<d<<". Bye Bye \\(^ ^)/";
    return 0;
}