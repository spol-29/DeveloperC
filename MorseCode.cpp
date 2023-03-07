#include<bits/stdc++.h>
using namespace std;

string decode(string morse, string const morsecode[]);           
string encode(char c);                                     
int main(){
    string input = "";
    cout << "Please enter a single morse code seperated by a space to be decoded: ";
    getline(cin, input);
    string const morsecode[] = {
        ".-",   "-...", "-.-.", "-..",  ".",   "..-.", "--.",  "....", "..",
        ".---", "-.-",  ".-..", "--",   "-.",  "---",  ".--.", "--.-", ".-.",
        "...",  "-",    "..-",  "...-", ".--", "-..-", "-.--", "--.."};
    cout << decode(input, morsecode) << endl;
  string morse_ip;
  cout << "Please enter morse code to be encoded: "; 
  getline(cin, morse_ip);
  string morse=""; 

  for(int i=0; i<morse_ip.length(); i++){
         morse += encode(tolower(morse_ip[i]));      
       }
 cout<<morse<<endl;
return 0;
}
string decode(string morse, string const morsecode[]){
    string output = "";
    string currentLetter = "";
    istringstream ss(morse);
    size_t const characters = 26;
    while(ss >> currentLetter){
        size_t index = 0;
        while(currentLetter != morsecode[index] && index < characters){
            ++index;
        }
        output += 'A' + index;
    }
    return output;
}
string encode(char c){ 
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