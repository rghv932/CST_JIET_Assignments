#include <iostream>
using namespace std;

int main() {
    int array[] = {3,9,3,7,5,7,5};
    int output = array[0]; //First element
    for (int i = 1; i < 7; i ++){
    	//XOR Operation on every elements of array
        output = output^array[i]; 
    }
    cout << "single number : "<<output << endl;
}

