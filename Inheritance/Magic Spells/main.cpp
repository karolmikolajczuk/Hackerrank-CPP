

if (typeid(*spell) == typeid(Fireball)) {
        Fireball* fb = dynamic_cast<Fireball*>(spell);
        fb->revealFirepower();
    }
    else if (typeid(*spell) == typeid(Frostbite)) {
        Frostbite* fb = dynamic_cast<Frostbite*>(spell);
        fb->revealFrostpower();
    }
    else if (typeid(*spell) == typeid(Thunderstorm)) {
        Thunderstorm* ts = dynamic_cast<Thunderstorm*>(spell);
        ts->revealThunderpower();
    }
    else if (typeid(*spell) == typeid(Waterbolt)) {
        Waterbolt* wb = dynamic_cast<Waterbolt*>(spell);
        wb->revealWaterpower();
    }
    else {
        // LCS time..
        string spellname = spell->revealScrollName();
        string sjournal = SpellJournal::journal;

        vector<vector<int>> lcs(spellname.size() + 1,
            vector<int>(sjournal.size() + 1));


        for (int index = 1; index <= spellname.size(); ++index) {
            for (int jndex = 1; jndex <= sjournal.size(); ++jndex) {
                if (spellname[index - 1] == sjournal[jndex - 1])
                    lcs[index][jndex] = 1 + lcs[index - 1][jndex - 1];
                else
                    lcs[index][jndex] = 
                        std::max(lcs[index - 1][jndex], 
                                 lcs[index][jndex - 1]);
            }
        }
        cout << lcs[spellname.size()][sjournal.size()] << endl;
    }
