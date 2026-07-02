#include <iostream>
#include <string>

using namespace std;
int main()
{
   string str;
   cout << "Enter a word; ";
   cin >> str;

   string reversed = "";

   for(int i = str.length() -1; i >= 0; i--){
    reversed += str[i];

   }
   if(str == reversed)
   cout<< "Palindrone";
   else 
   cout <<"Not Palindrone";

   return 0;

}