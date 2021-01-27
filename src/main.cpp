#include <cstddef> // NULL
#include <algorithm>
#include <vector>
#include <compiler_detection/short.hpp>

#if COMPAT_COMPILER_CXX_STRONG_ENUMS
enum class Color
{
    Red,
    Green,
    Blue
};
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
#endif // COMPAT_COMPILER_CXX_STRONG_ENUMS

int main()
{
    STRONG_ENUM(Color) red = Color::Red;
    int* i = NULLPTR;
    std::vector<int> vec{ 1,2,3,4,5 };
#if COMPAT_COMPILER_CXX_LAMBDAS
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
#endif // COMPAT_COMPILER_CXX_LAMBDAS
    return 0;
}