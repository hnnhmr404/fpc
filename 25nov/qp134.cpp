#include <iostream>
#include <iomanip>
using namespace std;

void getScore(double &score);
void calcAverage(double s1, double s2, double s3, double s4, double s5);
double findLowest(double s1, double s2, double s3, double s4, double s5);

int main()
{
    double score1, score2, score3, score4, score5;

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}

void getScore(double &score)
{
    do
    {
        cout << "Enter test score (0-100): ";
        cin >> score;

        if (score < 0 || score > 100)
            cout << "Invalid score. Try again.\n";

    } while (score < 0 || score > 100);
}

double findLowest(double s1, double s2, double s3, double s4, double s5)
{
    double lowest = s1;

    if (s2 < lowest)
        lowest = s2;

    if (s3 < lowest)
        lowest = s3;

    if (s4 < lowest)
        lowest = s4;

    if (s5 < lowest)
        lowest = s5;

    return lowest;
}

void calcAverage(double s1, double s2, double s3, double s4, double s5)
{
    double lowest;
    double average;

    lowest = findLowest(s1, s2, s3, s4, s5);

    average = (s1 + s2 + s3 + s4 + s5 - lowest) / 4;

    cout << fixed << setprecision(2);
    cout << "Average of four highest scores: " << average << endl;
}