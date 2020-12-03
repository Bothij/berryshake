#include <iostream>

//Deklarálj egy függvényt a main függvény fölött.
void PrintSandwichRecipe(std::string sauce_type, std::string meat_type, std::string cheese_type, std::string vegetables_type);

int main() {
  PrintSandwichRecipe("majonéz", "rántott hús", "edámi", "uborka");
}

//Definiáld a függvényt a main függvény alatt.
void PrintSandwichRecipe(std::string sauce_type, std::string meat_type, std::string cheese_type, std::string vegetables_type) {
  std::cout << "Fogj két szelet kenyeret." << std::endl;
  std::cout << "Az egyik szeletre nyomj " + sauce_type + "-t." << std::endl;
  std::cout << "Helyezz a kenyérre két szelet " + meat_type + "-t." << std::endl;
  std::cout << "Rakj rá egy szelet " + cheese_type + " sajtot." << std::endl;
  std::cout << "Koronázd meg pár szelet/karika/csipet ilyen zöldséggel: " + vegetables_type + "." << std::endl;
  std::cout << "Borítsd be a szendvicset a másik szelet kenyérrel." << std::endl;
  std::cout << "Jó étvágyat!" << std::endl;
 
}



//A függvény nyomtassa ki a konzolba a következő utasításlistát:

//A 2., 3., 4. és 5. sorban a jelölt helyekre a függvény helyettesítse be a megfelelő hozzávalókat
//Az adat érkezzen a függvény paramétereiből.
//A paraméterek feleljenek meg az elnevezési szabályoknak és konvencióknak.
//Hívd meg a függvényt a main függvényben.