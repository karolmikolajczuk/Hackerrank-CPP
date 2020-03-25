

/*Write the class AddElements here*/
template <class T> class AddElements {
public:
  T el;
  AddElements(T element) : el(element) {}

  T add(T element) { return el + element; }
};

template <> class AddElements<string> {
public:
  string str;
  AddElements(string element) : str(element) {}

  string concatenate(string element) { return str + element; }
};

