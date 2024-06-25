#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float N1, N2, N3, N4;
    cin >> N1 >> N2 >> N3 >> N4;

    float average = (N1*2 + N2*3 + N3*4 + N4*1)/10;
    cout << "Media: " << fixed << setprecision(1) << average << endl;

    if (average >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (average < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;

        float exam_score;
        cin >> exam_score;
        cout << "Nota do exame: " << fixed << setprecision(1) << exam_score << endl;

        float final_average = (average + exam_score) / 2;

        if (final_average >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << fixed << setprecision(1) << final_average << endl;
    }
}
