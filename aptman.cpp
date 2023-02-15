#include <iostream>
#include <string>
int main()
{
    system("clear");
    std::cout << "                 _                         " << std::endl;
    std::cout << "     /\\         | |                        " << std::endl;
    std::cout << "    /  \\   _ __ | |_ _ __ ___   __ _ _ __  " << std::endl;
    std::cout << "   / /\\ \\ | '_ \\| __| '_ ` _ \\ / _` | '_ \\ " << std::endl;
    std::cout << "  / ____ \\| |_) | |_| | | | | | (_| | | | |" << std::endl;
    std::cout << " /_/    \\_\\ .__/ \\__|_| |_| |_|\\__,_|_| |_|" << std::endl;
    std::cout << "          | | https://aptman.adriansmp.gq" << std::endl;
    std::cout << "          |_|                              " << std::endl;
    std::cout << "==============================================" << std::endl;
    std::cout << "Aptman - Apt package manager" << std::endl;
    std::cout << "Join our Discord server: https://discord.io/adriansmp" << std::endl;
    while (true)
    {
        float option;
        std::cout << "++=================================================++" << std::endl;
        std::cout << "==============   Choose an option:   ==============" << std::endl;
        std::cout << "1) Install a package" << std::endl;
        std::cout << "2) Remove a package" << std::endl;
        std::cout << "3) Purge a package" << std::endl;
        std::cout << "4) Autoremove packages" << std::endl;
        std::cout << "5) Upgrade packages" << std::endl;
        std::cout << "6) Full upgrade" << std::endl;
        std::cout << "7) Update packages" << std::endl;
        std::cout << "8) Show upgradable packages" << std::endl;
        std::cout << "9) List all installed packages" << std::endl;
        std::cout << "10) Search apt" << std::endl;
        std::cout << "0) Exit" << std::endl;
        std::cout << "Enter your choice >> ";
        std::cin >> option;
        if (option == 1)
        {
            std::string packageName;
            std::string saveToFile;
            std::cout << "Name of the package to install >> ";
            std::cin >> packageName;
            std::cout << "Starting package installation" << std::endl;
            std::string systemCommand = "sudo apt-get -y --no-install-recommends --no-reinstall install "+ packageName;
            std::string systemCommandSave = "sudo apt-get -y --no-install-recommends --no-reinstall install "+ packageName + " >> latest_install.txt";
            std::cout << "Save command output to file? [y / n] >> ";
            std::cin >> saveToFile;
            if (saveToFile == "y")
            {
                system("rm -rf latest_install.txt");
                system(systemCommandSave.c_str());
                std::cout << "============================================" << std::endl;
                std::cout << "Saved output to \"latest_install.txt\" file." << std::endl;
            }
            else{
                system(systemCommand.c_str());
                std::cout << "+++   Finished package installation   +++" << std::endl;
            }
        }
        else if (option == 2)
        {
            std::string saveToFile;
            std::string packageName;
            std::cout << "Name of the package to remove >> ";
            std::cin >> packageName;
            std::string systemCommandSave = "sudo apt remove -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold' "+ packageName + ">> latest_remove.txt";
            std::string systemCommand = "sudo apt remove -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold' "+ packageName;
            std::cout << "Save output to file? [y / n] >> ";
            std::cin >> saveToFile;
            if (saveToFile == "y")
            {
                system("rm -rf latest_remove.txt");
                system(systemCommandSave.c_str());
                std::cout << "============================================" << std::endl;
                std::cout << "Saved output to \"latest_remove.txt\" file." << std::endl;
            }
            else
            {
                system(systemCommand.c_str());
            }
            std::cout << "Starting package removal" << std::endl;
            std::cout << "+++   Finished package removal   +++" << std::endl;
        }
        else if (option == 3)
        {
            std::string packageName;
            std::string saveToFile;
            std::cout << "Name of the package to purge >> ";
            std::cin >> packageName;
            std::cout << "Starting package purge" << std::endl;
            std::string systemCommand = "sudo apt purge -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold' "+ packageName;
            std::string systemCommandSave = "sudo apt purge -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold' "+ packageName + ">> latest_purge.txt";
            std::cout << "Save output to file? [y / n]";
            std::cin >> saveToFile;
            if (saveToFile == "y")
            {
                system("rm -rf latest_purge.txt");
                system(systemCommandSave.c_str());
                std::cout << "============================================" << std::endl;
                std::cout << "Saved output to \"latest_purge.txt\" file." << std::endl;
            }
            else
            {
                system(systemCommand.c_str());
                std::cout << "+++   Finished package purge   +++" << std::endl;
            }
        }
        else if (option == 4)
        {
            std::string saveToFile;
            std::cout << "Save output to file? [y / n] >> ";
            std::cin >> saveToFile;
            if (saveToFile == "y")
            {
                std::cout << "Starting package autoremove" << std::endl;
                system("sudo apt autoremove -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold' >> latest_autoremove.txt");
                std::cout << "+++   Finished package autoremove   +++" << std::endl;
            }
            else
            {
                system("sudo apt autoremove -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold'");
                std::cout << "+++   Finished package autoremove   +++" << std::endl;
            }
        }
        else if (option == 5)
        {
            std::string saveToFile;
            std::cout << "Save output to file? [y / n] >> ";
            std::cin >> saveToFile;
            if (saveToFile == "y")
            {
                system("sudo apt upgrade -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold' >> latest_upgrade.txt");
                std::cout << "+++   Finished package upgrade.   +++" << std::endl;
            }
            else
            {
                system("sudo apt upgrade -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold'");
                std::cout << "+++   Finished package upgrade.   +++" << std::endl;
            }
        }
        else if (option == 6)
        {
            std::string saveToFile;
            std::cout << "Save output to file? [y / n] >> ";
            std::cin >> saveToFile;
            if (saveToFile == "y")
            {
                std::cout << "Starting full upgrade" << std::endl;
                system("sudo apt full-upgrade -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold' >> latest_fullUpgrade.txt");
                std::cout << "+++   Finished full upgrade   +++" << std::endl;
            }
            else
            {
                std::cout << "Starting full upgrade" << std::endl;
                system("sudo apt full-upgrade -y -o Dpkg::Options::='--force-confdef' -o Dpkg::Options::='--force-confold'");
                std::cout << "+++   Finished full upgrade   +++" << std::endl;
            }
        }
        else if (option == 7)
        {
            std::string saveToFile;
            std::cout << "Save output to file? [y / n] >> ";
            std::cin >> saveToFile;
            if (saveToFile == "y")
            {
                std::cout << "Starting package update" << std::endl;
                system("sudo apt update -y >> latest_update.txt");
                std::cout << "+++   Finished package update   +++" << std::endl;
            }
            else
            {
                std::cout << "Starting package update" << std::endl;
                system("sudo apt update -y");
                std::cout << "+++   Finished package update   +++" << std::endl;
            }
        }
        else if (option == 8)
        {
            std::string saveToFile;
            std::cout << "Save output to file? [y / n] >>";
            std::cin >> saveToFile;
            if (saveToFile == "y")
            {
                std::cout << "====================" << std::endl;
                std::cout << "Upgradable packages:" << std::endl;
                system("rm -rf latest_listUpgradable.txt");
                system("apt list --upgradable -a >> latest_listUpgradable.txt");
            }
            else
            {
                std::cout << "====================" << std::endl;
                std::cout << "Upgradable packages:" << std::endl;
                system("apt list --upgradable -a");
            }
        }
        else if (option == 9)
        {
            std::string saveToFile;
            std::cout << "Save output to file? [y / n] >> ";
            std::cin >> saveToFile;
            if (saveToFile == "y")
            {
                std::cout << "Listing packages" << std::endl;
                system("rm -rf latest_list.txt");
                system("apt list >> latest_list.txt");
            }
            else
            {
                std::cout << "Listing packages" << std::endl;
                system("apt list");
            }
        }
        else if (option == 10)
        {
            std::string search;
            std::string saveToFile;
            std::cout << "Save output to file? [y / n] >> ";
            std::cin >> saveToFile;
            if (saveToFile == "y")
            {
                std::cout << "========================" << std::endl;
                std::cout << "Search apt >> ";
                std::cin >> search;
                std::string searchStr = "apt search "+ search + ">> latest_search.txt";
                system(searchStr.c_str());
            }
        }
        else if (option == 0)
        {
            return 0;
        }
        else
        {
            std::cout << option << ": Invalid option." << std::endl;
        }
    }
}