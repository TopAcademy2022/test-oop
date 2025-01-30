#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
using namespace std;

int main()
{
    setlocale(0, "ru");

    const fs::path myPath = "./";

    try
    {
        // Print
        for (auto const& dir_entry : std::filesystem::directory_iterator{ myPath })
        {
            std::cout << dir_entry.path() << '\n';
        }

        // Create dir
        fs::create_directory(myPath.relative_path().append("build"));

        // Remove
        const fs::path myPath2 = "./build";
        fs::remove(myPath2);
    }
    catch (std::exception ex)
    {
        std::cout << "Error: dir not exist" << std::endl;
    }
}