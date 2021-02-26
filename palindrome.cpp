//Palindrome by Nabhan Abedin
//2.25.2021
#include <iostream> //input/output operations
#include <cstring> //character arrays

//file location
using namespace std;

int main()
{
    //initialize variables
    char input[80];
    char input2[80]; //input w/o punctuation/whitespace
    bool pal = true;
    
    cout << "\nEnter your phrase: ";
    cin.getline(input, sizeof input); //read whole line of input

    int length = strlen(input);
    int i = 0;
    int j = 0;
    //reverse, remove spaces and lowercase
    for (i = 0; i < length; i++){
        if (!ispunct(input[i]) && input[i] != ' '){ //check for punctuation or whitespace
            input2[j] = tolower(input[i]); //lowercase
            j++; //length of new input
        }
    }
    
    //if the reversed array is not the same as the original, it is not a palindrome
    for (int i = 0; i < j; i++){
        if (input2[i] != input2[j-i-1]){
          pal = false;
        }
    }

    //output results
    if (pal == false) {
        cout << "\nNot a Palindrome";
    } else {
        cout << "\nPalindrome";
    }
    
    return 0;
}

