#include <iostream>
#include <forward_list>

using std::forward_list;
using std::cout;
using std::endl;
using std::advance;

int main()
{
    forward_list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin(), prev = vi.before_begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert_after(prev, *iter);
            advance(iter, 2);
            advance(prev, 2);
        }
        else
            iter = vi.erase_after(prev);
    }

    for (auto i : vi) cout << i << " ";

    return 0;
}
