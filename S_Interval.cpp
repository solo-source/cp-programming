#include <iostream>
using namespace std;

int main()
{
    double x = 0.0;
    cin >> x;

    // if (x >= 0 && x <= 25)
    //     cout << "Interval [0,25]";
    // else if (x > 25 && x <= 50)
    //     cout << "Interval (25,50]";
    // else if (x > 50 && x <= 75)
    //     cout << "Interval (50,75]";
    // else if (x > 75 && x <= 100)
    //     cout << "Interval (75,100]";
    // else
    //     cout << "Out of Intervals";

    if (x < 0 || x > 100)
    {
        cout << "Out of Intervals";
    }
    else if (x <= 25)
    {
        cout << "Interval [0,25]";
    }
    else if (x <= 50)
    {
        cout << "Interval (25,50]";
    }
    else if (x <= 75)
    {
        cout << "Interval (50,75]";
    }
    else
    {
        cout << "Interval (75,100]";
    }
    return 0;
}

/*

1. Using a Function:

#include <iostream>
using namespace std;

string getInterval(double x) {
    if (x >= 0 && x <= 25)
        return "Interval [0,25]";
    else if (x > 25 && x <= 50)
        return "Interval (25,50]";
    else if (x > 50 && x <= 75)
        return "Interval (50,75]";
    else if (x > 75 && x <= 100)
        return "Interval (75,100]";
    else
        return "Out of Intervals";
}

int main() {
    double x = 0.0;
    cin >> x;
    cout << getInterval(x);
    return 0;
}


3. Using Array of Pairs:

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    double x = 0.0;
    cin >> x;

    vector<pair<double, double>> intervals = {
        {0, 25},
        {25, 50},
        {50, 75},
        {75, 100}
    };

    string output = "Out of Intervals";
    for (const auto& interval : intervals) {
        if (x > interval.first && x <= interval.second) {
            output = "Interval (" + to_string(interval.first) + "," + to_string(interval.second) + "]";
            if (interval.first == 0) {
                output.replace(output.find("("), 1, "[");
            }
            break;
        } else if (x == interval.first) {
            output = "Interval [" + to_string(interval.first) + "," + to_string(interval.second) + "]";
            break;
        }
    }

    cout << output;
    return 0;
}

4. Using Better Range Checking Logic:

#include <iostream>
using namespace std;

int main() {
    double x = 0.0;
    cin >> x;

    if (x < 0 || x > 100) {
        cout << "Out of Intervals";
    } else if (x <= 25) {
        cout << "Interval [0,25]";
    } else if (x <= 50) {
        cout << "Interval (25,50]";
    } else if (x <= 75) {
        cout << "Interval (50,75]";
    } else {
        cout << "Interval (75,100]";
    }

    return 0;
}

*/