#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include<algorithm>
using namespace std;
string toLower(string s){
    transform(s.begin(),s.end(),s.begin(),::tolower);

    return s;
}
int main()
{
    string user_choice;
    cout<<"What would you like to do."<<endl;
    cout<<"To create and open a file type -> 'create'  "<<endl;
    cout<<"To open an existing file,type-> open"<<endl;
    
    cin>>user_choice;
    
    if (toLower(user_choice)=="create")
    {
        /* code */
    
    
    string file_name;
    cout << "enter an file name " << endl;

    cin >> file_name;
    ofstream file_open(file_name);
    string choice;
   cout<<"do you like to write in file or not "<<endl;
   cout<<"if yes so please type= \"yes \""<<endl;
   cin>>choice;
   if (toLower(choice)=="yes"){
    int line;
    cout<<"how many line do you want to write"<<endl;
    cin>>line;

    string data;
    int i=0;
    cout<<"if your work complete before line complete so simply type in new line type=\" #end\" and Quit"<<endl;
    cin.ignore();
    while (i<line && data != "#end" )
    {
        getline(cin,data);
        file_open<<data;
        i++;
    }
    

   }
    file_open.close();

    system(("start " + file_name).c_str());
    }
    else if (toLower(user_choice)=="open")
    {
        string Path;
        cout<<"Enter the full or relative path to the file you want to open"<<endl;
        cout<<" Example:-  C:\\\\Users\\\\partens_folder_name\\\\parents_folder\\\\child_folder\\\\file_name"<<endl;
        cout<<"if the file  is in the same folder as this program,just enter full name"<<endl;
        cout<<"Note:- In your path possible used single back slash '\\' like its C:User\\partens \\ Child\\file_name" <<endl;
        cout<<"you need to used him double back slash insted used single back slash like in example"<<endl;
        cin>>Path;
        system(("start "+Path).c_str());
    }
    

    return 0;
} 