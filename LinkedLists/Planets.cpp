#include <iostream>
#include <list>
#include <string>
#include <algorithm>

void printPlanets(std::list<std::string> planets)
{
    for(auto it=planets.begin(); it!=planets.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << '\n';
}

std::string startCaps(std::string planet)
{
    // Convert from lowercase to uppercase
    if (planet[0]>=97)
        planet[0] -= 32;
    return planet;
}

int main()
{
    std::list<std::string> planets {"Earth", "Venus", "jupiter", "Uranus", "Uranus"};

    // Add Mercury to start of the list
    planets.push_front("Mercury");
    std::cout << "\nAdded Mercy to the front of the list:" << '\n';
    printPlanets(planets);

    // Add Neptune to the end of the list
    planets.push_back("Neptune");
    std::cout << "\nAdd Neptune to the end of the list:" << '\n';
    printPlanets(planets);

    // Swap the places of Earth and Venus
    auto it1 = std::find (planets.begin(),planets.end(), "Earth");
    auto it2 = std::find (planets.begin(),planets.end(), "Venus");
    std::iter_swap(it1, it2);
    std::cout << "\nSwapped the planets earth and venus:" << '\n';
    printPlanets(planets);

    // There are 2 "Uranus". Remove duplicates.
    planets.unique();
    std::cout << "\nRemoved duplicate planets:" << '\n';
    printPlanets(planets);

    // Insert the remaining missing planets in their respective places
    auto it = std::find (planets.begin(),planets.end(), "Earth");
    planets.emplace(++it, "Mars");
    planets.insert(++it, "Saturn");
    std::cout << "\nThe complete list of planets:" << '\n';
    printPlanets(planets);

    // Return the total number of elements in the list
    std::cout << "\nThere are " << planets.size() << " planets in our solar system\n";

    // Append a list to the planet list
    std::list<std::string> lonely_planet {"Pluto"};
    planets.splice(planets.end(),lonely_planet);
    std::cout << "\nThe merged list is:" << '\n';
    printPlanets(planets);

    // Replace the "jupiter" starting with lowercase to uppercase "Jupiter"
    for(auto it=planets.begin(); it!=planets.end(); ++it)
        *it = startCaps(*it);
    std::cout << "\nThe corrected planet names are:" << '\n';
    printPlanets(planets);

    // Sort the planets in alphabetical order
    planets.sort();
    std::cout << "\nPlanets sorted in alphabetical order:" << '\n';
    printPlanets(planets);


    return 0;
}
