#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
 {
 ofstream file1, file3;
 ifstream fin;
 char str[100];
 file1.open("SourceFile.txt");
 file1 << "This is the content of source file which has to be copied to destination file";
 file1.close();
 fin.open("SourceFile.txt");
 while(!fin.eof())
 {
 fin.getline(str, sizeof(fin));
 cout << str<<endl;
 }
 file1.close();
 cout << "Copying...\n" << endl;
 ifstream file2;
 file2.open("SourceFile.txt");
 file3.open("DestinationFile.txt");
 while(!file2.eof())
 {
 file2.getline(str, sizeof(file2));
 file3 << str;
 }
 file2.close();
 file3.close();
 ifstream file4;
 file4.open("DestinationFile.txt");
 cout << "The contents of the DestinationFile.txt are:\n" << endl;
 while(!file4.eof())
 {
 file4.getline(str, sizeof(file4));
 cout << str<<endl;
 }
 ifstream file5, file6;
 file5.open("SourceFile.txt");
 file6.open("DestinationFile.txt");
 char src[sizeof(file5)], dest[sizeof(file6)];
 while(!file5.eof() && !file6.eof())
 {
 file5.getline(src, sizeof(file5));
 file6.getline(dest, sizeof(file6));
 if(strcmp(src, dest)==0)
 {
 cout << "\nThe contents are same."<<endl;
 return 0;
 }
}
cout << "\n\nThe contents are not same."<<endl;
return 0;
}
