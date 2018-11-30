# CPP from Scratch

My repo for learning CPP from scratch!

# Useful Resources
1. I am learning from here - [https://www.learncpp.com](https://www.learncpp.com)
2. Static and Dynamic Linking in C++ - http://www.yolinux.com/TUTORIALS/LibraryArchives-StaticAndDynamic.html

# Best Practices - General Programming with C++
1. Problem solving approach
    * Define vision. (vague)
    *	Drill down and define requirements (specifics)
    *	Start simple. 1 area at a time. Add features incrementally
    *	TDD have proved very useful for mission critical software
2. Usually 20% on dev and 80% on other activites.
    * Document code
    * Simplified code
    * Modular and organized
    * Robust with edge cases
3. Treat warnings as errors. In g++ -Werror
4. Comments
    * At the library, program, or function level, describe what
    * Inside the library, program, or function, describe how
    * At the statement level, describe why.
5. Variables, Functions
    * Uninitialized is a common trap
    * Use namespace. Avoid global naming - avoid name conflicts and for clarity
6. Headers
    * For standard library, use with “.h” extension and from namespace (ex: #include <iostream> and std::cout
    * Have .h or .hpp extension
    * Use header guard to avoid duplicate inclusion. #ifndef UNIQUE_NAME #define …. #endif
    * Don’t do definition in header file. Only declare.
    * Avoid variables. Have only constants.
    * Avoid relative path, include Search Path / Include Path (-I)
    * Have same names for header files as source definition file. Ex: calculator.h, calculator.cc
7.	Macros, Header Guards
    * Avoid using for function or text substitution.
    *	Used mainly as header guards.
    *	Header guards are local! 
8.	Variables
    * Prefer direct or uniform initialization.
    * Define variables as to its usage as possible for code clarity.
9.	Integer Type
    * Preferable to use signed. Use unsigned cautiously. C++ freely converts between them.
    * Use fixed width integer types. #include <cstdint> .. std::int16_t val;
    * Optionally use fast/least variants. Std::int_fast16_t or std::int_least16_t
10.	Float
    * Use ‘f’ suffix to make it explicit
    * Use exponent representation. 9.234e-2 for 0.09234
    * Careful about precision. Use double wherever possible.
    * Common pitfall -> Rounding errors.
11.	Const, Constexpr, Symbolic constants
    * Don’t use magic numbers
    * Prefer constexpr
    * Prefer putting all constants as constexpr in a header under a namespace.
    * Any variable that should not change values after initialization and whose initializer is known at compile-time should be declared as constexpr.
    * Any variable that should not change values after initialization and whose initializer is not known at compile-time should be declared as const.
12.	Operators
    * Use parenthesis to make order of evaluation explicit.
    * When using bitwise operators, always use “unsigned integers”.
13.	Variable Scope
    * Be careful about nested blocks and “shadowing” of variables! Do not use same names.
    * Generally, use all CAPS or “g_” for global variables and “s_” for static. Avoid name conflicts with local and also clarify it is global
    * non const global variables are evil.
    * Always use namespace.
14.	Type conversion
    * It is always risk for numeric conversion (higher to lower). Data loss, rounding errors, loss of floating digits etc. are unpredictable.
    * Avoid c-style cast as there is no compile time check. (float)I / J.
    * Use static_cast<float>(i). Provides compile time checks.
15.	String
    * If reading numeric values with std::cin, it’s a good idea to remove the extraneous newline using std::cin.ignore()
16.	Enum
    * Always use enum class instead of just enum. With scope operator, naming conflicts, comparison is handled correctly.
    * Enum class color {RED, BLUE}; color red_color = color::RED;
17.	Typedef
    * Use typedef to have meaningful type names. Example – typedef int error_t; so that, error_t read_file();
    * Use “_t” for typedef name.
    * Even better use “aliasing”. Using error_t = int;
    * Usually this is helpful to write platform independent code as well. 
    * Typedef char int8_t;
18.	Structs
    * “struct”. Can have members. No memory is allocated when struct is defined. Memory is created when a variable of type struct is declare.
    * Can have default values.
    * Can use initialization like struct Employee{short id, short age, float salary}; Employee e1 = {1011, 28, 150000};
    * Can have struct inside struct. Then initialization becomes {outer struct vars, {inner..}}
19.	Control Flow
    * Always write tests to cover EVERY execution path.
    * Always prefer signed integer for looping conditions.
20.	Input validation
    * Use cin.fail(), cin.clear() and cin.ignore(32767, ‘\n’) to make programs robust.
21.	String
    * Don’t use <cstring> i.e., c-style string. i.e., using character array.
22.	Pointers
    * Always initialize to null ptr. Int *ptr { nullptr }
    * Pointer arithmetic can cause program crash if length of list is not handled correctly. Use caution.
    * Cout print just address if int*, it deciphers char* as string. This may have inadvertent result in case char* c = &another_char;
    * Be careful about return addresses on local variable from function. They become dangling ptrs.
    * Use “p->member” instead of “(*p).member” 
    * Use delete operators efficiently to avoid memory leaks.
    * Gracefully handle memory allocation issue. int *iPtr = new (std::nothrow) int;
    * Delete is for 1 variable ptr, delete[] for array ptr. If you use delete for delete[] then memory leaks and crash happen.
    * Avoid void ptrs unless absolutely necessary.
    * Avoid pointer to a pointer to pointer… strategy unless absolutely necessary. Have extra precaution to delete[] these pointer references.
23.	References
    * Safer than pointers (requires initialization with valid address). Prefer this when no dynamic allocation is necessary.
24.	Costly data copies
    * Pass non-pointer, non-fundamental data type variables (such as structs) by (const) reference.
    * In for-each loops element declarations, if your elements are non-fundamental types, use references or const references for performance reasons.
25.	Static length list => Prefer to use std::array
26.	Dynamic length list => Prefer to use std::vector
27.	Functions
    * Prefer pass by reference over pass by value or pass by address.
    * Use const in function parameters if no change is intended.
    * “Arrays get decayed to pointers”!!
    * Careful when returning by reference. Don’t return by reference/address for variables on stack. Either use new or static or non-fundamental type variables.
    * Be aware of inline functions, but modern compilers should inline functions for you as appropriate, so there isn’t a need to use the keyword.
    * Function overloading – Use it to make things simpler. Naming consistency is more important!!
    * Default params – Prefer in forward declaration / header.
    * Prefer using c++11 function pointer style. #include <functional>; std::function<int(int, double)> fptr.
    * Always try to avoid ellipsis (“…”) for variable inputs. It does not have type checks and length is important parameter to know.
28.	Use “static_assert(cond, msg)” instead of c style assert. All “static_*” are compile time!! i.e., value should be known, cannot have static_assert on a variable.
  
# Best Practices - Object Oriented Programming with C++

1.	Struct -> Data only DS. Class -> Data + operations
2.	Class name should begin with Caps. Member variable names should preferably be m_...
3.	Ideally, member variables are private and member functions are public.
4.	Only provide access functions when it makes sense for the user to be able to get or set a value directly.
5.	Getters should usually return by value or const reference, not non-const reference
6.	Use atleast one constructor. Even if it is just a default constructor.
7.	Use member initializer lists to initialize your class member variables instead of assignment
8.	Use constructor delegation rather than duplicating initialization. Donot call a constructor inside another, use member initialization way to call other constructors.
9.	Use destructors whenever there is a dynamic memory allocation. Be careful, program crash or exit() will not call destructor resulting in memory leak.
10.	Always prefer declaring class and its functions in header file and implementation separately in .cc file. .h and .cc file name ideally be same name as class.
11.	Mark member functions that don’t modify variables as “const”. Show the intention.
12.	Try to avoid usage of static variables and functions – shared and changes are not controlled.
13.	Prefer regular function for overloading operators, over, friend functions. Less functions touching internals of a class is better.
14.	A good class usually overloads arithmetic operators, << and >> input/output operators.
15.	“explicit” Consider making your constructors and user-defined conversion member functions explicit to prevent implicit conversion errors
16.	“delete”. Just making a function private does not fully guarantee protection on things you don’t want to do. For example, member functions, friend functions can still call private. Use “delete” when you absolutely want to disallow a behavior.
17.	Be extra cautious about overloading assignment operator for cases – self assignment, dynamic allocated members. Use Deep Copy.

