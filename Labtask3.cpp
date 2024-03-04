#include<iostream>
using namespace std;

bool isValidIdentifier(string variable)
{
    bool f=0;

  if( variable=="int"||variable=="float"||variable=="double"||variable=="char"||variable=="bool"||variable=="void"||variable=="short"||variable=="long"
      ||variable=="unsigned"||variable=="signed"||variable=="long long"||variable=="long double"||variable=="wchar_t"||variable=="size_t"||variable=="ptrdiff_t"
      ||variable=="true"||variable=="false"||variable=="if"|| variable== "else if" ||variable== "else" ||variable=="string"
      ||variable=="array" ||variable=="return" ||variable=="while" ||variable=="do while" ||variable=="private" ||variable=="protected"
      ||variable=="cout" ||variable=="cin" ||variable=="endl" ||variable=="abstact" ||variable=="size" ||variable=="varchar"
      ||variable=="substr" ||variable=="public" ||variable=="operator" ||variable=="auto"
      ||variable=="enum" ||variable=="case" ||variable=="class" ||variable=="const"
      ||variable=="continue" ||variable=="default" ||variable=="delete" ||variable=="static"
      ||variable=="struct" ||variable=="try" ||variable=="catch" ||variable=="throw" ||variable=="extern"
      ||variable=="this" ||variable=="typedef" ||variable=="union" ||variable=="volatile"
      ||variable=="goto" ||variable=="inline" ||variable=="friend" || variable=="getline"
      ||variable=="virtual" ||variable=="for" ||variable=="do" ||variable=="do while" ||variable=="switch"
      ||variable=="new" ||variable=="not")
    {
        return false;
    }

    else
    {
        if(variable[0]>=97 && variable[0]<=122 || variable[0]>=65 && variable[0]<=90 || variable[0]==95)
        {
            for(int i=1; i<variable.size(); ++i)

            if(variable[i]>=97 && variable[i]<=122 || variable[i]>=65 && variable[i]<=90 || variable[i]==95 || variable[i]>=48 && variable[i]<=57 )
            {
                f=1;
            }
            else
            {
                f=0;
                break;
            }
        }

        if(f==1)
        {
            return true;
        }

        else
        {
            return false;
        }

    }

}

  int main()
  {
      string str;
      cin>>str;
      cout<<endl;


    if(isValidIdentifier(str))
    {
        cout<<"Identifier is valid"<<endl;
    }

    else
    {
        cout<<"Identifier is invalid"<<endl;
    }


    return 0;
  }










