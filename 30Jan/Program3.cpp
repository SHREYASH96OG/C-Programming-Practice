// Program to count the total number of vowels and consonants in a string.
#include<iostream>
#include<algorithm>
using namespace std;

int vowels(string str)
{
    int count = 0;
    for(char i : str)
    {
        if(i == 'a'||i == 'e'||i == 'i'||i == 'o'||i == 'u')
        {
            count ++;
        }
    }
    
    return count;
}

int consonants(string str)
{
    int count = 0;
    for(char i:str)
    {
        if(i == 'b'||i == 'c'||i == 'd'||i == 'f'||i == 'g'||i == 'h'||i == 'k'||i == 'l'||i == 'm'||i == 'n'||i == 'p'||i == 'q'||i == 'r'||i == 's'||i == 't'||i == 'v'||i == 'w'||i == 'x'||i == 'y'||i == 'z')
        {
            count++;
        }

    }
    return count;

}

int main()
{
    string str;
    getline(cin,str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<"Vowels :"<<vowels(str)<<endl;
    cout<<"Consonants :"<<consonants(str);
    return 0;
}
