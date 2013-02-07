#include <iostream>
#include <conio.h>
#include<cstdlib>
#include<string>
#include<sstream>
#include <fstream>
#include <cstring>

using namespace std;



int main()
{

        string array[100];
        string line;
        int i=0;
        fstream myfile;
        myfile.open ("top_passwords.txt");

        while(!myfile.eof()){
                getline(myfile,line);
                array[i]=line;
                i++;
        }

        void insertionSort(string[],int );

        insertionSort(array,100);

        for (int a = 0; a<100; a++) {
            cout << array[a] <<endl;
        }

        myfile.close();
        return 0;
}


void insertionSort(string array[100], int N) {
    string key;
    int j = 0;

    for (int i = 0; i<N; i++) {
        key = array[i];
        j = i-1;

        while(j>=0 && array[j]>key) {
            array[j+1] = array[j];
            j=j-1;
        }
        array[j+1] = key;
    }
}

