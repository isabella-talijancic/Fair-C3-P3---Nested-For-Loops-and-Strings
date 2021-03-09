// C3 P3 - Nested For Loops & Strings

# include <iostream>
# include <iomanip>
# include <chrono>
# include <thread>
using namespace std;

int main()
{
    string message = "Using Nested-For Loops\n\n";
    for (const auto c : message)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	const int ROWS = 0;
	const int COLUMNS = 0;
    for (int ROWS = 0; ROWS < 13; ROWS++)
    {
        for (int COLUMNS = 0; COLUMNS < min(ROWS, 13 - ROWS); COLUMNS++)
        {
            cout << string(1, ' ') << "⇒";
        }
        cout << endl;
    }

	string message000 = "\n\nThis is the only way, as of right now, that I know how to do this.";
	for (const auto c : message000)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	string message321 = "\n\nThank you for staying till the end of my program.";
	for (const auto c : message321)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	return 0;   
}