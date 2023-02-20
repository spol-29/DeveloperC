//program to convert english alphabets to morse code and vice versa using c++
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>                                                   //to use tolower function
using namespace std;

string decode(string morse, string const morsecode[]);             //user defined function to decode morse code to english
string encode(char c);                                             //user defined function to encode english strings to morse

int main()
{
    string input = "";
    cout << "Please enter morse code to be decoded : ";
    getline(cin, input);

    string const morsecode[] = {".-", "-...", "-.-.", "-..", ".", "..-.",                  //array of alphabet equivalent morse codes
    "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-",
    ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

    cout << decode(input, morsecode) << endl;

  string morse_ip;
  cout << "Please enter morse code to be encoded : ";
  getline(cin, morse_ip);
  string morse="";
y
  for(int i=0; i<morse_ip.length(); i++)
       {
         morse += encode(tolower(morse_ip[i]));           //tolower is used to convert to lowercase of that character if exists
       }
 cout<<morse<<endl;

return 0;
}

string decode(string morse, string const morsecode[])
{
    string output = "";
    string currentLetter = "";
    istringstream ss(morse);

    size_t const characters = 26;

    while(ss >> currentLetter)
    {
        size_t index = 0;
        while(currentLetter != morsecode[index] && index < characters)
        {
            ++index;                         //increment here so we don't have to decrement after the loop like if we put in the condition
        }

        output += 'A' + index;
    }

    return output;
}
string encode(char c)
{
	string text = "abcdefghijklmnopqrstuvwqyz";
	string morse[] = {".-","-...","-.-.","-..", ".", "..-.", "--.",
					  "....", "..", ".---", "-.-", ".-..", "--",
				      "-.", "---", ".--.", "--.-", ".-.", "...", "-",
				      "..-", "...-", ".--", "-..-", "-.--", "--.."};
	  int index = text.find(c);
	    if(index!=-1)
            return morse[index];
         else
            return " ";
}
