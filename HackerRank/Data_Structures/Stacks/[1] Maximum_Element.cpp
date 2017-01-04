// # Reflection

// - I had a hard time to solve it. I could not solve this in a day.
//   I'll challenge it tomorrow.

// # Problem

// uence, and you will be given  queries. Each query is one of these three types:
//
// 1 x  -Push the element x into the stack.
// 2    -Delete the element present at the top of the stack.
// 3    -Print the maximum element in the stack.

// # Initial solution



// # Improved solution

int main() {
    std::stack<int> st;
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int q;
        scanf("%d", &q);

        switch (q)
        {
        case 1:
            scanf("%d", &x);

            if (st.empty()) {
                st.push(x);
            }
            else {
                st.push(max(x, st.top()));
            }
            break;

        case 2:
            if (!st.empty()) {
                st.pop();
            }
            break;

        case 3:
            printf("%d\n", st.top());
            break;

        default:
            break;
        }
    }

    return 0;
}
