//
//  main.cpp
//  SeventhLabRepetition
//
//  Created by Mateusz Kot on 26/11/2019.
//  Copyright © 2019 Mateusz Kot. All rights reserved.
//

/*

 ios - istream(ifstream, istringstream),ostream(ofstream, ostringstream) -> istream,ostream -> iostream(fstream, stringstream)
 
 istream(cin)
 ostream(cout,cerr,clog)
 
 string str - "1 3.4";
 istringstream is(str);
 
 int a;
 double b;
 
 is >> a >> b;
 
 get()
 put()
 read()
 write()
 getline()
 
 ifstream (file "data.txt")
 
 int x;
 file >> x;
 getline(..);
 
 void print (ostream &os, string &str)
 {
   os << str;
 }
 
 good()
 is.opened()
 if(file)
 
 
 //Task
 
 1)struct point
 {
   int x;
   int y;
 };
 
 2)void write_point(ostream &os, const print &p)
 
 3)test this with the cout
 
 4)create a text file(data.txt) and contain the points (input,output stream)
 
 5)open that file(ifstream), read it line by line(getline), pass points(istringstream), print to the cout
 
 6)change cout to a "result.txt" file (ofstream)
*/




#include <iostream>
#include <fstream>

using namespace std;


struct point
{
    int x;
    int y;
};

void writepoint(ostream &cout, const point &p)
{
    cout << "(" << p.x << ";" << p.y << ")" << endl;
}

int main()
{
    point p = {4,4};
    writepoint(cout,p);
    ofstream myfile;

    myfile.open ("/Users/mateuszkot/Documents/CP/SeventhLabRepetition/SeventhLabRepetition/file.txt");
    myfile << "The point equals to: " << p.x <<";"<< p.y;
    myfile.close();

    return 0;
}
