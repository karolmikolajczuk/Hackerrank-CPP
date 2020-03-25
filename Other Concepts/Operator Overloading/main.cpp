
class Matrix {
    public:
        Matrix(int size = 0) : a(size) { }
        ~Matrix() { this->a.clear(); }
        std::vector<std::vector<int>> a;

        Matrix& operator+(const Matrix& x) {
            for(int index_row = 0; index_row < x.a.size(); ++index_row) {
                for(int element = 0; element < x.a[index_row].size(); ++element) {
                    this->a[index_row][element] = 
                        this->a[index_row][element] + 
                            x.a[index_row][element];
                }
            }
            return *this;
        }
};


