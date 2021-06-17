#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool next_seq = true; // 显示下一组数列
    bool go_for_it = true; // 用户想再猜一次
    bool got_it = false; // 用户是否猜对
    int num_tries = 0; // 用户猜过的总次数
    int num_right = 0; // 用户答对的总次数
    const int seq_size = 18;
    int elem_vals[seq_size] = {
            1,2,3, 3,4,7, 2,5,12,
            3,6,10, 4,9,16, 5,12,22
    };
    vector<int> elem_seq(elem_vals,elem_vals+seq_size);
    int cur_tuple = 0;
    const int max_seq = 6;
    string seq_names[max_seq] = {
            "Fibonacci",
            "Lucas",
            "Pell",
            "Triangular",
            "Square",
            "Pentagonal"
    };

    while (next_seq = true && cur_tuple < seq_size) {
        //TODO 为用户显示数列
        cout << "The first two elements of the sequence are: "
             << elem_seq[cur_tuple] << ", "
             << elem_seq[cur_tuple + 1]
             << "\nWhat is the next element?";
        int next_elem = elem_seq[cur_tuple + 2];
        while ((got_it == false) && (go_for_it == true)) {
            int usr_guess;
            cin >> usr_guess;
            num_tries++;
            if ( usr_guess == next_elem) {
                // 猜对了
                got_it == true;
                num_right++;
                cout << "Very good. Yes, "
                << next_elem
                << " is the next element in the "
                << seq_names[cur_tuple / 3] << " sequences.\n";
            }
            else {
                // 用户猜错了
                //TODO 告诉用户错了
                //TODO 询问用户是否想再猜一次
                char usr_rsp;
                cin >> usr_rsp;
                if (usr_rsp == 'N' || usr_rsp == 'n')
                    go_for_it = false;
            }
        }
        cout << "Want to try another sequence? (Y/N)";
        char try_again;
        cin >> try_again;

        // 是否愿意再尝试一组
        if (try_again == 'N' || try_again == 'n') {
            next_seq == false;
        }
        else cur_tuple += 3;
    }
    return 0;
}
