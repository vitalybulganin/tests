/*
Задание №3:
Есть набор целых чисел.
Напишите функцию увеличения всех чисел набора на единицу без использования циклов.
*/
//-------------------------------------------------------------------------//
#include <vector>
#include <sstream>
#include <iostream>
//-------------------------------------------------------------------------//
namespace
{
    //!< Increments a value of list on 1 without any loop.
    template<typename iterator>
    auto increment(iterator begin, iterator end) -> void
    {
        if (begin != end)
        {
            // Incrementing a value on 1.
            ++(*begin);
            // Moving forward.
            increment(++begin, end);
        }
    }
    //!< Prints a collection.
    template<typename collection>
    auto print(const collection & coll) -> std::string
    {
        static bool s_newline = false;

        std::ostringstream buffer;

        for (const auto & value : coll)
        {
            if (s_newline != false) { buffer << ", "; }

            buffer << value;
            s_newline = true;
        }
        s_newline = false;

        return buffer.str();
    }
}; // namespace
//-------------------------------------------------------------------------//
int main(int argc, const char * argv[])
{
    std::vector<int> numbers = {1, 1, 3, 1, 10};

    std::cout << "";
    std::cout << "Before [" << print(numbers) << "]." << std::endl;
    // Incrementing values.
    increment(numbers.begin(), numbers.end());
    std::cout << "After [" << print(numbers) << "]." << std::endl;
    return 0;
}