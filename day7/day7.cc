#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<regex>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;

class Dict
{
    private:
        void insertFile(int filesize)
        {
            (*current).files.push_back(filesize);
        }

        void insertMap(string& map)
        {
            (*current).folders.insert({map, new Node{}});
        }

        void doCD(string& map)
        {
            (*current).previous = current;
            current = (*current).folders.at(map);
        }

        void doReturn()
        {
            current = (*current).previous;
        }

    public:
        struct Node
        {
            vector<int> files;
            map<string,Node*> folders;
            Node* previous;
        };
        Node* current;
        Node* first{current};
};

void partOne()
{
    string input;
    ifstream file("day7.txt");
    getline(file,input); //Skips the first line
    //Dict dict{};

    while (getline(file,input))
    {
        cout << input << endl;
    }
    

}

void partTwo()
{
    string input;
    ifstream file("day7.txt");
    
}

int main()
{
    partOne();
    partTwo();
    return 0;
}
