# cpp_module_03

### Clarifications and general tips:

* If you find any kind of error or have suggestions to improve, please do not hesitate to point them out in the `issues` section! Obviously always respectfully, thank you :D.


---

## ex00: Aaaaand... OPEN!

### Mandatory requirements:

* Create a `ClapTrap` class with the following private attributes:

  * `name`
  * **Hit points**: `10`
  * **Energy points**: `10`
  * **Attack damage**: `0`
* Implement:

  * `void attack(const std::string& target);`
  * `void takeDamage(unsigned int amount);`
  * `void beRepaired(unsigned int amount);`
* `attack()` and `beRepaired()` consume **1 energy point**.
* A `ClapTrap` cannot act if it has no hit points or no energy points.
* `attack()` must report the target and the damage caused.
* Constructors and destructors must print messages.
* Add your own tests.

### What can we learn about this exercise?:

This exercise introduces the basic class structure used throughout the module and prepares us for **inheritance**. It also reinforces resource management and class encapsulation.

### Output example:
![Example](images/ex00-output.png)

---

## ex01: Serena, my love!

### Mandatory requirements:

* Create a `ScavTrap` class that inherits from `ClapTrap`.
* `ScavTrap` must have:

  * **Hit points**: `100`
  * **Energy points**: `50`
  * **Attack damage**: `20`
* Constructors, destructor and `attack()` must display different messages from `ClapTrap`.
* Implement:

  * `void guardGate();`
* Show the correct **construction and destruction chaining** in your tests:

  * `ClapTrap` is constructed first.
  * `ScavTrap` is constructed afterwards.
  * Destruction happens in the reverse order.
* Add more tests to verify the inherited behavior.

### What can we learn about this exercise?:

The main goal is to understand **inheritance**, how a derived class reuses the attributes and functionality of a base class, and how constructors and destructors are chained when objects are created and destroyed.

### Output example:
![Example](images/ex01-output.png)

---

## ex02: Repetitive work

### Mandatory requirements:

* Create a `FragTrap` class that inherits from `ClapTrap`.
* `FragTrap` must have:

  * **Hit points**: `100`
  * **Energy points**: `100`
  * **Attack damage**: `30`
* Constructors and destructor must display different messages.
* Implement:

  * `void highFivesGuys(void);`
* Show the correct construction/destruction chaining in your tests.
* Add additional tests for the inherited and new functionality.

### What can we learn about this exercise?:

This exercise reinforces **inheritance** and class specialization. `FragTrap` shares common functionality with `ClapTrap` while defining its own characteristics and special ability.

---

### What can we learn about this exercise?:

This exercise introduces **multiple inheritance** and the problems that can appear when two parent classes share the same base class. It is particularly useful for understanding the **diamond inheritance problem**, constructor/destructor order and how to ensure that the common `ClapTrap` instance is created only once.

---

### Final notes

This module is mainly about understanding **inheritance and object relationships** rather than simply making the programs work. Make sure you can explain:

* What a base class and a derived class are.
* How inherited attributes and functions work.
* The order in which constructors and destructors are called.
* How multiple inheritance can create ambiguity.
* Why `DiamondTrap` must contain only one `ClapTrap` subobject.
* How the Orthodox Canonical Form applies to these classes.

The subject also allows you to pass the module without completing **ex03**, although completing it gives you additional practice with multiple inheritance.

### Output example:
![Example](images/ex02-output.png)

#### Last but not least, check out the subject and test your classes thoroughly. During the evaluation you should be able to explain your implementation and make small modifications if requested.


ex00
The main is on you

/*NO ADAPTADO*/
https://github.com/durantecode/CPP-03
https://github.com/tblaase/CPP-Module-03