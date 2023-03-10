#include <iostream>
using namespace std;

class Average
{
    double m_value;
    int count;
    public:
        Average();
        void add(int a) {
            m_value += a;
            count++;
        }
        double getValue() {
            return m_value/count;
        }
        friend void Reset(Average &average);
};
Average::Average() {
    this->m_value = 0;
    this->count = 0;
}
void Reset(Average &average)
{
    average.m_value = 0;
    average.count = 0;
}
int main()
{
    Average av;
    av.add(5);
    av.add(10);
    cout << av.getValue() << endl;
    Reset(av);
    av.add(2);
    av.add(3);
    cout << av.getValue() << endl;

    return 0;
}