class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> vr(1000);
        int index = 0;
        for (int i=0; i<operations.size(); i++) {
            if (operations[i] == "+") {
                vr[index] = (vr[index-1] + vr[index-2]); index++;
            } else if (operations[i] == "D") {
                vr[index] = (vr[index-1] * 2); index++;
            } else if (operations[i] == "C") {
                index--;
            } else {
                vr[index] = (stoi(operations[i])); index++;
            }
        }
        int sum = 0;
        for (int i=0; i<index; i++) sum += vr[i];
        return sum;
    }
};