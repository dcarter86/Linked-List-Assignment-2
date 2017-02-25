#include<iostream>
#include<string>
#include "indexLinkedList.h" 

using namespace std;

int main(){
indexLinkedList<string> list;                   //Line 1
    string str;                                     //Line 2
    int idx;		           		    //Line 3

    cout << "Line 4: Enter 10 strings." << endl;    //Line 4

    for (int i = 0; i < 10; i++)                    //Line 5
    {
        cin >> str;                                 //Line 6
        list.insertAt(list.length() + 1, str);      //Line 7
    }

    cout << endl;                                   //Line 8

    cout << "Line 9: list: ";                       //Line 9
    list.print();                                   //Line 10
    cout << endl;                                   //Line 11
    cout << "Line 12: Length of list: " 
         << list1.length() << endl;                 //Line 12

    cout << "Line 13: Enter the index of the string to be "
         << "deleted: ";                            //Line 13
    cin >> idx;                                     //Line 14
    cout << endl;                                   //Line 15

    list.deleteAt(idx);				    //Line 16
	
    cout << "Line 17: After deleting at position " << idx 
         << ", list: " << endl;                     //Line 17
    list.print();				    //Line 18
    cout << endl;                                   //Line 19

	system("pause");                //Line 20
    return 0;					    //Line 21





}
