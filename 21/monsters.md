3) Let’s create a random monster generator. This one should be fun.

3a) First, let’s create an enumeration of monster types named MonsterType. Include the following monster types: Dragon, Goblin, Ogre, Orc, Skeleton, Troll, Vampire, and Zombie. Add an additional MAX_MONSTER_TYPES enum so we can count how many enumerators there are.

3b) Now, let’s create our Monster class. Our Monster will have 4 attributes (member variables): a type (MonsterType), a name (std::string), a roar (std::string), and the number of hit points (int). Create a Monster class that has these 4 member variables.

3c) enum MonsterType is specific to Monster, so move the enum inside the class as a public declaration.

3d) Create a constructor that allows you to initialize all of the member variables.

The following program should compile:
```
int main()
{
	Monster skele(Monster::SKELETON, "Bones", "*rattle*", 4);
 
    return 0;
}
```
Now we can create a random monster generator. Let’s consider how our MonsterGenerator class will work. Ideally, we’ll ask it to give us a Monster, and it will create a random one for us. We don’t need more than one MonsterGenerator. This is a good candidate for a static class (one in which all functions are static). Create a static MonsterGenerator class. Create a static function named generateMonster(). This should return a Monster. For now, make it return anonymous Monster(Monster::SKELETON, “Bones”, “*rattle*”, 4);

The following program should compile:

```
int main()
{
	Monster m = MonsterGenerator::generateMonster();
	m.print();
 
    return 0;
}
```
and print:

Bones the skeleton has 4 hit points and says *rattle*

Now, MonsterGenerator needs to generate some random attributes. To do that, we’ll need to make use of this handy function:

``` 
	// Generate a random number between min and max (inclusive)
	// Assumes srand() has already been called
	int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
		// evenly distribute the random number across our range
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}
```
However, because MonsterGenerator relies directly on this function, let’s put it inside the class, as a static function.

Now edit function generateMonster() to generate a random MonsterType (between 0 and Monster::MAX_MONSTER_TYPES-1) and a random hit points (between 1 and 100). This should be fairly straightforward. Once you’ve done that, define two static fixed arrays of size 6 inside the function (named s_names and s_roars) and initialize them with 6 names and 6 sounds of your choice. Pick a random name from these arrays.

The following program should compile:

```

#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()
int main()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // If using Visual Studio, discard first random value
 
	Monster m = MonsterGenerator::generateMonster();
	m.print();
 
    return 0;
}

```

