

class Message {
private:
    static unsigned int id_s;
    std::string _text;
    unsigned int id;

public:
    Message() : _text{ } {
        id = ++id_s;
    }
    Message(std::string& text) : _text{ text } {
        id = ++id_s;
    }

    const std::string& get_text() {
        return this->_text;
    }

    const unsigned int& get_id() {
        return this->id;
    }

    bool operator<(Message& second_message) {
        return (this->get_id() < second_message.get_id());
    }
};

unsigned int Message::id_s = 0;

class MessageFactory {
public:
    MessageFactory() { }
    Message create_message(const std::string& text) {
        Message msg(const_cast<std::string&>(text));
        return msg;
    }
};

