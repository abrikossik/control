#include "header.h"

int32_t InputStruct(String_number string[])
{
    int32_t counter{ 0 };
        std::cout << "Input count string (max 100 ): ";
        std::cin >> counter;

        if ((counter > 100) || (counter <=0)) 
        {
            std::cout << "Check example.\n";
            return 0;
        }

        std::cin.ignore();

        std::cout << "Input string (example: word number):\n";
        for (int32_t i{ 0 }; i < counter; ++i) {
            char input[100];
            std::cin.getline(input, 100);

            char word[100];
            int32_t number;
            char* spacePos = strchr(input, ' ');

            if (spacePos != NULL) 
            {
                *spacePos = '0';
                strcpy(word, input);
                number = atoi(spacePos + 1);
                strcpy(string[i].string, input);
                string[i].number = number;
            }
            else 
            {
                std::cout << "Error. Cheack example\n";
                --i;
            }
        }
    return counter;
   }


void QuickSort(String_number string[], int32_t min, int32_t max)
{
    if (min < max) 
    {
        int32_t element = string[max].number;
        int32_t i{ min - 1 };

        for (int32_t j{ min }; j < max; ++j)
        {
            if (string[j].number <= element) 
            {
                ++i;
                String_number temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
        String_number temp = string[i + 1];
        string[i + 1] = string[max];
        string[max] = temp;

        int32_t index{ i + 1 };

        QuickSort(string, min, index - 1);
        QuickSort(string, index + 1, max);
    }
}


void PrintStruct(String_number string[], int32_t counter)
{
    int32_t sum{};
    int32_t min{string[0].number};
    int32_t max{string[0].number};

    std::cout << "Result: \n";
    
    for (int32_t i{}; i < counter; ++i)
    {
        std::cout << string[i].string << "\n";
        sum += string[i].number;
        if (string[i].number < min)
        {
            min = string[i].number;
        }
        if (string[i].number > max)
        {
            max = string[i].number;
        }
    }

    std::cout << "Sum: " << sum << "\n";
    std::cout << "Min number: " << min << "\n";
    std::cout << "Max number: " << max << "\n";
}