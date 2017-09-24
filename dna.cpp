// File: a1.cpp
// Author: Mehmet Ozdemir mcozdemi

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <map>
using namespace std;

int main(int argc , char* argv[])
{
  int numcount=0;
  string s="0";
    int KofProject =0;
    int NofProject=0;
    map< string, int> finalproduct;
    map<string, int>:: iterator iterate;
    string EachLineOfFile;
    string TheWholeStringOfLetters ="";
    int LineCount = 0;
    ifstream FileReader;
    FileReader.open(argv[1]);
    while(!FileReader.eof())
    {
        getline(FileReader,EachLineOfFile);
        if(!EachLineOfFile.empty())
        {
            TheWholeStringOfLetters += EachLineOfFile;
            LineCount++;
        }
    }
    FileReader.close();


    for(size_t i=0; i< TheWholeStringOfLetters.length(); ++i)
    {
        if(isdigit(TheWholeStringOfLetters.at(i))){
          if(TheWholeStringOfLetters.at(1)==' '){
            KofProject=TheWholeStringOfLetters.at(0)-'0';
            s=TheWholeStringOfLetters.substr(2);
            numcount++;
          }
          else if(TheWholeStringOfLetters.at(0) -'0'==1 && TheWholeStringOfLetters.at(1)-'0'==0 && TheWholeStringOfLetters.at(2)==' '){
KofProject=10;
s=TheWholeStringOfLetters.substr(3);
numcount++;
          }


}
}
   NofProject = stoi(s);


TheWholeStringOfLetters.erase(remove(TheWholeStringOfLetters.begin(), TheWholeStringOfLetters.end(), ' '), TheWholeStringOfLetters.end());

    if(NofProject <= LineCount && NofProject>1 && KofProject>=3 && KofProject<=10)
    {

        switch(KofProject)
        {
        case 3:

            for(size_t i=numcount; i<TheWholeStringOfLetters.length()-2; ++i)
            {
                if( TheWholeStringOfLetters.at(i)!='N' &&  TheWholeStringOfLetters.at(i+1)!='N' &&   TheWholeStringOfLetters.at(i+2)!= 'N')
                {
                    finalproduct[string() +  TheWholeStringOfLetters.at(i)+  TheWholeStringOfLetters.at(i+1) +  TheWholeStringOfLetters.at(i+2)]++;
                }
            }
            break;

        case 4:
            for(size_t i=numcount; i<TheWholeStringOfLetters.length()-3; ++i)
            {
                if( TheWholeStringOfLetters.at(i)!='N' &&  TheWholeStringOfLetters.at(i+1)!='N' &&   TheWholeStringOfLetters.at(i+2)!= 'N' && TheWholeStringOfLetters.at(i+3)!= 'N')
                {

                    finalproduct[string() +  TheWholeStringOfLetters.at(i)+  TheWholeStringOfLetters.at(i+1) +  TheWholeStringOfLetters.at(i+2) + TheWholeStringOfLetters.at(i+3)]++;
                }
            }
            break;
        case 5:
            for(size_t i=numcount; i<TheWholeStringOfLetters.length()-4; ++i)
            {
                if(TheWholeStringOfLetters.at(i)!='N' &&  TheWholeStringOfLetters.at(i+1)!='N' &&   TheWholeStringOfLetters.at(i+2)!= 'N' && TheWholeStringOfLetters.at(i+3)!='N' && TheWholeStringOfLetters.at(i+4)!='N')
                {

                    finalproduct[string() +  TheWholeStringOfLetters.at(i)+  TheWholeStringOfLetters.at(i+1) +  TheWholeStringOfLetters.at(i+2) + TheWholeStringOfLetters.at(i+3) + TheWholeStringOfLetters.at(i+4)]++;
                }
            }
            break;

        case 6:
            for(size_t i=numcount; i<TheWholeStringOfLetters.length()-5; ++i)
            {
                if(TheWholeStringOfLetters.at(i)!='N' &&  TheWholeStringOfLetters.at(i+1)!='N' &&   TheWholeStringOfLetters.at(i+2)!= 'N' && TheWholeStringOfLetters.at(i+3)!='N' && TheWholeStringOfLetters.at(i+4)!='N' && TheWholeStringOfLetters.at(i+5)!='N')
                {
                    finalproduct[string() +  TheWholeStringOfLetters.at(i)+  TheWholeStringOfLetters.at(i+1) +  TheWholeStringOfLetters.at(i+2) + TheWholeStringOfLetters.at(i+3) + TheWholeStringOfLetters.at(i+4) + TheWholeStringOfLetters.at(i+5)]++;
                }
            }
            break;

        case 7:
            for(size_t i=numcount; i<TheWholeStringOfLetters.length()-6; ++i)
            {
                if(TheWholeStringOfLetters.at(i)!='N' &&  TheWholeStringOfLetters.at(i+1)!='N' &&   TheWholeStringOfLetters.at(i+2)!= 'N' && TheWholeStringOfLetters.at(i+3)!='N' && TheWholeStringOfLetters.at(i+4)!='N' && TheWholeStringOfLetters.at(i+5)!='N' && TheWholeStringOfLetters.at(i+6)!='N')
                {
                    finalproduct[string() +  TheWholeStringOfLetters.at(i)+  TheWholeStringOfLetters.at(i+1) +  TheWholeStringOfLetters.at(i+2) + TheWholeStringOfLetters.at(i+3) + TheWholeStringOfLetters.at(i+4) + TheWholeStringOfLetters.at(i+5) + TheWholeStringOfLetters.at(i+6)]++;
                }
            }
            break;

        case 8:
            for(size_t i=numcount; i<TheWholeStringOfLetters.length()-7; ++i)
            {
                if(TheWholeStringOfLetters.at(i)!='N' &&  TheWholeStringOfLetters.at(i+1)!='N' &&   TheWholeStringOfLetters.at(i+2)!= 'N' && TheWholeStringOfLetters.at(i+3)!='N' && TheWholeStringOfLetters.at(i+4)!='N' && TheWholeStringOfLetters.at(i+5)!='N' && TheWholeStringOfLetters.at(i+6)!='N' && TheWholeStringOfLetters.at(i+7)!='N')
                {

                    finalproduct[string() +  TheWholeStringOfLetters.at(i)+  TheWholeStringOfLetters.at(i+1) +  TheWholeStringOfLetters.at(i+2) + TheWholeStringOfLetters.at(i+3) + TheWholeStringOfLetters.at(i+4) + TheWholeStringOfLetters.at(i+5) + TheWholeStringOfLetters.at(i+6) + TheWholeStringOfLetters.at(i+7)]++;
                }
            }
            break;

        case 9:
            for(size_t i=numcount; i<TheWholeStringOfLetters.length()-8; ++i)
            {
                if(TheWholeStringOfLetters.at(i)!='N' &&  TheWholeStringOfLetters.at(i+1)!='N' &&   TheWholeStringOfLetters.at(i+2)!= 'N' && TheWholeStringOfLetters.at(i+3)!='N' && TheWholeStringOfLetters.at(i+4)!='N' && TheWholeStringOfLetters.at(i+5)!='N' && TheWholeStringOfLetters.at(i+6)!='N' && TheWholeStringOfLetters.at(i+7)!='N' && TheWholeStringOfLetters.at(i+8)!='N')
                {

                    finalproduct[string() +  TheWholeStringOfLetters.at(i)+  TheWholeStringOfLetters.at(i+1) +  TheWholeStringOfLetters.at(i+2) + TheWholeStringOfLetters.at(i+3) + TheWholeStringOfLetters.at(i+4) + TheWholeStringOfLetters.at(i+5) + TheWholeStringOfLetters.at(i+6) + TheWholeStringOfLetters.at(i+7)+ TheWholeStringOfLetters.at(i+8)]++;
                }
            }
            break;

        case 10:
            for(size_t i=numcount; i<TheWholeStringOfLetters.length()-9; ++i)
            {
                if(TheWholeStringOfLetters.at(i)!='N' &&  TheWholeStringOfLetters.at(i+1)!='N' &&   TheWholeStringOfLetters.at(i+2)!= 'N' && TheWholeStringOfLetters.at(i+3)!='N' && TheWholeStringOfLetters.at(i+4)!='N' && TheWholeStringOfLetters.at(i+5)!='N' && TheWholeStringOfLetters.at(i+6)!='N' && TheWholeStringOfLetters.at(i+7)!='N' && TheWholeStringOfLetters.at(i+8)!='N' && TheWholeStringOfLetters.at(i+9)!='N')
                {

                    finalproduct[string() +  TheWholeStringOfLetters.at(i)+  TheWholeStringOfLetters.at(i+1) +  TheWholeStringOfLetters.at(i+2) + TheWholeStringOfLetters.at(i+3) + TheWholeStringOfLetters.at(i+4) + TheWholeStringOfLetters.at(i+5) + TheWholeStringOfLetters.at(i+6) + TheWholeStringOfLetters.at(i+7)+ TheWholeStringOfLetters.at(i+8) + TheWholeStringOfLetters.at(i+9)]++;
                }
            }
            break;
        }
        for(iterate=finalproduct.begin(); iterate !=finalproduct.end(); ++iterate)
        {
            cout<< iterate-> first << " " << iterate-> second <<endl;
        }
    }

    else
    {

        cout<< "error" <<endl;
    }
    return 0;
}
