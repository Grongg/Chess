#include <SFML/Graphics.hpp>
#include "PrepChest.hpp"

int main()
{
    try {
        PrepChest();
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return -1;
    }
    return 0;
}
