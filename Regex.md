In C++, the `<regex>` header provides functionality for regular expressions. The standard library provides a `std::regex` class that represents regular expressions, and various functions and utilities for working with them.

Here's a basic example of using regular expressions in C++:

```cpp
#include <iostream>
#include <regex>
#include <string>

int main() {
    std::string text = "Hello, my email is john.doe@example.com and my phone number is 123-456-7890.";

    // Define regular expressions
    std::regex emailRegex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b");
    std::regex phoneRegex("\\b\\d{3}-\\d{3}-\\d{4}\\b");

    // Search for matches
    std::smatch matches;
    if (std::regex_search(text, matches, emailRegex)) {
        std::cout << "Email found: " << matches[0] << std::endl;
    }

    if (std::regex_search(text, matches, phoneRegex)) {
        std::cout << "Phone number found: " << matches[0] << std::endl;
    }

    return 0;
}
```

In this example, we define two regular expressions: one for matching email addresses and another for matching phone numbers. We then use `std::regex_search` to search for matches in the input text. The matches are stored in a `std::smatch` object, and we print the matched portions.

Here are a few key components used in the regular expressions:

- `\\b`: Word boundary (ensures that the match is a whole word).
- `\\d`: Digit.
- `+`: One or more occurrences of the preceding pattern.
- `[]`: Character class (matches any one of the characters inside the square brackets).
- `.`: Matches any character.
- `@`: Matches the at symbol.
- `-`: Matches the hyphen.

Remember to double-escape backslashes in C++ strings when using regular expressions.

This is just a basic example, and regular expressions can become quite complex depending on your requirements. If you need more advanced regex features, refer to the C++ documentation and the regular expression syntax.