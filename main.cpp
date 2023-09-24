#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];                    // missing deallocation ("delete") - this may result in memory leak
    std::cout << '1-100 ertekek duplazasa'          // missing semicolon at the end of command + single quotes instead of double (= string, not char) + endl would be nice
    for (int i = 0;)                                // rest of the for loop is missing (only init, no condition or increment)
    {
        b[i] = i * 2;                               // probably meant "b[i] = (i+1) * 2" as this would do 0-99 instead of 1-100
    }
    for (int i = 0; i; i++)                         // checks "i" as bool, probably meant "i<100" instead (as the condition)
    {
        std::cout << "Ertek:"                       // missing semicolon + missing actual values (probably meant "Ertek:" once and only actual values in loop)
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)            // colon instead of the 2nd semicolon
    {
        atlag += b[i]                               // missing semicolon
    }
    atlag /= N_ELEMENTS;                            // ! atlag is int -> remainder will be lost (if unintentional, try float or double) !
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
