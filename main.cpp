#include <iostream>
#include <string>
#include "linkedlist.cpp"

using namespace std;

void readFile(linkedlist & list, string & file) {
    ifstream readIn;
    int tempNum = 0;
    readIn.open(file);
    while(readIn >> tempNum)
    {
        list.addToFront(tempNum);
    }
    readIn.close();
}

int main() {

    linkedlist myNumList = linkedlist();
    string enterFile = "nums.txt";
    readFile(myNum, enterFile);
    cout << "Average is: " << myNumList.average() << endl;
    myNumList.writeInorder(enterFile);
    myNumList.writeReversed(enterFile);
    
    delete myNum;
    
    return 0;
}
