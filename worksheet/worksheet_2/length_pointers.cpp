#include <iostream> 
using namespace std;  
int string_length(char *ptr) 
{ 
    int length = 0; 
    while (*ptr!= '\0') { 
        length++; 
        ptr++; 
    } 
    return length; 
}  
int main() 
{ 
    
    char inp_st[] = "hello_world"; 
    cout <<"the size of string is "<<string_length(inp_st)<<endl; 
    return 0; 
} 
//references
//https://stackoverflow.com/questions/55707803/how-do-char-arrays-and-their-pointers-work-in-c-exactly#:~:text=There%20is%20no%20difference.,magically%20different%20than%20int%20pointers.&text=std%3A%3Acout%20%3C%3C%20(or,(see%20null%20terminated%20string).
//i poured in 3 hours in learning this here is what i learnt
//printing the name of any array(except char) prints the address of the array
//the char array works like this _refer the link