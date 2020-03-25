
// Enter your code here.

ostream& operator << (ostream& output, const Person& obj) {
    output << "first_name=" + obj.get_first_name() +
                ",last_name=" + obj.get_last_name();
    return output;
}

