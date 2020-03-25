

// Enter your code for reversed_binary_value<bool...>()
template <bool a> int reversed_binary_value() { return a; }

template <bool a, bool b, bool... params> int reversed_binary_value() {
    return (reversed_binary_value<b, params...>() << 1) + a;
}


