#include <iostream>
#include <string>

using namespace std;

//Iteratif
bool isPalindromeIteratif(string str){
    int start = 0;
    int End = str.length() -1;

    while(start < End){
        if(str[start]!=str[End]){
            return false;
        }
        start++;
        End--;
    }
    return true;
}

//Rekursif
bool ispalindromeRekursif(string str,int start,int End){
    if(start >= End){
        return true;
    }else if(str[start]!=str[End]){
        return false;
    }
    return ispalindromeRekursif(str,start +1,End-1);
}
int main()
{
    string text = "sator arepo tenet opera rotas";
    if (isPalindromeIteratif(text)){
        cout << text << " Is Palindrom";
    }else{
        cout << text << " Is not Palindrom";
    }
   
    return 0;
}