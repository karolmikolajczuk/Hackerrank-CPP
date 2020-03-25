


struct Workshop {
    int start_time;
    int end_time;
    int duration;

    Workshop(int st, int et, int dr) : start_time{st}, end_time{et}, duration{dr} { }
};

struct Available_Workshops {
    int n;
    std::vector<Workshop*> workshops;

    Available_Workshops(std::vector<Workshop*> _workshops, int _n = 0) :
        workshops{ _workshops }, n{ _n } {
    }
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    std::vector<Workshop*> ws;
    for (int index = 0; index < n; ++index) {
        ws.push_back(new Workshop(start_time[index], 
            start_time[index] + duration[index], 
            duration[index]));
    }

    return new Available_Workshops(ws, n);
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    int count_max = 0, current_end = 0;
    
    // sort all of the workshops for getting data which ends first and
    // which ends last. it will give us data about who can be done

    std::sort(ptr->workshops.begin(), ptr->workshops.end(), [](Workshop* x, Workshop* y) {
        return (x->end_time < y->end_time);
    });


    for (int index = 0; index < ptr->n; ++index) {
        // check if 
        if (ptr->workshops[index]->start_time >= current_end) {
            current_end = ptr->workshops[index]->end_time;
            ++count_max;
        }
    }

    return count_max;
}
