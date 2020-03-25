

        try {
            cout << Server::compute(A, B) << endl;
        } catch (invalid_argument& e) {
            cout << "Exception: " << e.what() << endl;
        } catch (bad_alloc&) {
            cout << "Not enough memory" << endl;
        } catch (exception& e) {
            cout << "Exception: " << e.what() << endl;
        } catch (...) {
            cout << "Other Exception" << endl;
        }
