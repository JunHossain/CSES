#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float A, B, C, D, media, exam_score, final_score;
    cin >> A >> B >> C >> D;
    int W1= 2, W2= 3, W3= 4, W4= 1;
    media= (A*W1+B*W2+C*W3+D*W4)/(W1+W2+W3+W4);


    if(media >= 7.0){
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno aprovado." << endl;
    } else if(media < 5.0){
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno reprovado." << endl;
    } else{
        cin >> exam_score;
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << exam_score << endl;

        final_score= (media+exam_score)/2;

            if(final_score>=5.0){
                cout << "Aluno aprovado." << endl;
                cout << "Media final: " << fixed << setprecision(1) << final_score << endl;
            } else{
                cout << "Aluno reprovado." <<endl;
                cout << "Media final: " << fixed << setprecision(1) << final_score << endl;
            }
    }


}

