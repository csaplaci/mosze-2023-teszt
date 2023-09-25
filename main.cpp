#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];                           // oops, missed this one ("NELEMENTS" -> "N_ELEMENTS")
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    for (int i = 0; i<N_ELEMENTS; i++)
    {
        b[i] = (i+1) * 2;
    }
    std::cout << "Ertek:" << std::endl;
    for (int i = 0; i<N_ELEMENTS; i++)                      // (* "i<100" -> "i<N_ELEMENTS" for the more general code as it was intended)
    {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                                              // * can remain int (see below)
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    delete[] b;
    atlag /= N_ELEMENTS;                                    // * sorry, just realized that the result will always be int
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Kiirok valamit " << std::endl;
    return 0;
}
