#include <iostream>
#include <string>
int main()
{
    system("clear");
    while (true)
    {
        float option;
        std::cout << "Aptman - Apt package manager" << std::endl;
        std::cout << "1. Install a package" << std::endl;
        std::cout << "2. Remove a package" << std::endl;
        std::cout << "3. Purge a package" << std::endl;
        std::cout << "4. Autoremove packages" << std::endl;
        std::cout << "5. Upgrade packages" << std::endl;
        std::cout << "6. Full upgrade" << std::endl;
        std::cout << "7. Update packages" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice >> ";
        std::cin >> option;
        if (option == 1)
        {
            std::string packageName;
            std::cout << "Name of the package to install >> ";
            std::cin >> packageName;
            std::cout << "Starting package installation" << std::endl;
            std::string systemCommand = "sudo apt-get -y --no-install-recommends --no-reinstall install "+ packageName;
            system(systemCommand.c_str());
            std::cout << "+++   Finished package installation   +++" << std::endl;
        }
        else if (option == 2)
        {
            std::string packageName;
            std::cout << "Name of the package to remove >> ";
            std::cin >> packageName;
            std::cout << "Starting package removal" << std::endl;
            std::string systemCommand = "sudo apt remove -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold' "+ packageName;
            system(systemCommand.c_str());
            std::cout << "+++   Finished package removal   +++" << std::endl;
        }
        else if (option == 3)
        {
            std::string packageName;
            std::cout << "Name of the package to purge >> ";
            std::cin >> packageName;
            std::cout << "Starting package purge" << std::endl;
            std::string systemCommand = "sudo apt purge -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold' "+ packageName;
            system(systemCommand.c_str());
            std::cout << "+++   Finished package purge   +++" << std::endl;
        }
        else if (option == 4)
        {
            std::cout << "Starting package autoremove" << std::endl;
            system("sudo apt autoremove -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold'");
        }
        else if (option == 5)
        {
            std::cout << "Starting package upgrade" << std::endl;
            system("sudo apt upgrade -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold'");
            std::cout << "+++   Finished upgrading packages.   +++" << std::endl;
        }
        else if (option == 6)
        {
            std::cout << "Starting full upgrade" << std::endl;
            system("sudo apt full-upgrade -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold'");
            std::cout << "+++   Finished full upgrade   +++" << std::endl;
        }
        else if (option == 7)
        {
            std::cout << "Starting package update" << std::endl;
            system("sudo apt update -y");
            std::cout << "+++   Finished package update   +++" << std::endl;
        }
        else if (option == 0)
        {
            std::cout << "Exit" << std::endl;
            return 0;
        }
        else
        {
            std::cout << option << ": Invalid option." << std::endl;
        }
    }
}