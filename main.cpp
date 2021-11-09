#include <iostream>
#include "nlohmann/json.hpp"
#include <fstream>

void writeData(nlohmann::json& data) {
    std::string filePath = "film.json";
    std::ofstream fileData(filePath);

    fileData << data;
}

int main() {
    nlohmann::json film;
    film["name"] = "Interstellar";
    film["release-date"]["China"] = "October 26, 2014";
    film["release-date"]["US"] = "November 5, 2014";
    film["release-date"]["Russia"] = "November 6, 2014";
    film["release-date"]["UK"] = "November 7, 2014";
    film["country"] = {"US", "UK"};
    film["director"] = "Christopher Nolan";
    film["written-by"] = {"Jonathan Nolan", "Christopher Nolan"};
    film["producer"] = {"Emma Thomas", "Christopher Nolan", "Lynda Obst"};
    film["starring"]["Tom Hanks"] = "Paul Edgecomb";
    film["starring"]["David Morse"] = "Brutus Brutal Howell";
    film["starring"]["Bonnie Hunt"] = "Jan Edgecomb";
    film["productions-company"] = {"Paramount Pictures", "Warner Bros. Pictures"};
    writeData(film);

    return 0;
}
