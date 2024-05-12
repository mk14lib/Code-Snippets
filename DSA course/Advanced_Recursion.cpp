#include <bits/stdc++.h>
using namespace std;

// advanced recursion models

// tail recursion
void print(char* name)
{
    if (name[0] == '\0')
    {
        return;
    }
    
    cout << name[0];
    print(name+1);
}

// head recursion
void reversePrint(char* name)
{
    if (name[0] == '\0')
    {
        return;
    }
    reversePrint(name+1);
    cout << name[0];
}

int stringLength(char* name)
{
    if (name[0] == '\0') return 0;
    return 1+stringLength(name+1);
}

// remove consective duplicates
void removeDuplicates(char name[])
{
    if (name[0] == '\0') return;
    
    if (name[0] != name[1])
    {
        removeDuplicates(name+1);
    }
    else
    {
        for(int i=0; name[i] != '\0'; ++i)
        {
            name[i] = name[i+1];
        }
        removeDuplicates(name);
    }
}

// print subsequences of string
void subsequences(string input, string output)
{
    if (input.length() == 0) {
        cout << output << endl; 
        return; 
    }
    
    subsequences(input.substr(1), output);
    subsequences(input.substr(1), output + input[0]);
}

void printSubsequences(char input[], char output[], int i)
{
    if (input[0] == '\0') {
        output[i] = '\0';
        cout << output << endl;
        return;
    }
    
    printSubsequences(input + 1, output, i);
    output[i] = input[0];
    printSubsequences(input + 1, output, i+1);
}

// Convert string to integer
int convertStrtoInt(char str[], int i)
{
    if (i<0) return 0;
    
    if (str[i] >= '0' and str[i] <= '9')
        return convertStrtoInt(str, i-1)*10 + (str[i] - '0');
    else
        return convertStrtoInt(str, i-1);   
}

// print permutations of a string
void printPerm(char str[], int i)
{
    if (str[i] == '\0') {
        cout << str << endl;
        return;
    }
    
    for(int j = i; str[j] != '\0'; j++) {
        swap(str[i], str[j]);
        printPerm(str, i+1);
        swap(str[i], str[j]);
    }
}

int main()
{
    char str[] = "123";
    printPerm(str, 0);
    return 0;
}
