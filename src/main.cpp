#include <cstddef> // NULL
#include <algorithm>
#include <vector>
#include <compiler_detection/short.hpp>

#if FEATURE_COMPILER_CXX_STRONG_ENUMS
enum class Color
{
    Red,
    Green,
    Blue
};
using ColorEnum = Color;
#else
struct Color
{
    enum Enum
    {
        Red,
        Green,
        Blue
    };
};
typedef Color::Enum ColorEnum;
#endif // FEATURE_COMPILER_CXX_STRONG_ENUMS

int main()
{
    ColorEnum red = ColorEnum::Red;
    int* i = NULLPTR;
    std::vector<int> vec{ 1,2,3,4,5 };
#if FEATURE_COMPILER_CXX_LAMBDAS
    std::find_if(vec.begin(), vec.end(),
        [](const int& i)
        {
            return i == 3;
        });
#else
    struct CallBack
    {
        bool operator()(const int& i)
        {
            return i == 3;
        }
    };
    CallBack cb;
    std::find_if(vec.begin(), vec.end(), cb);
#endif // FEATURE_COMPILER_CXX_LAMBDAS
    return 0;
}