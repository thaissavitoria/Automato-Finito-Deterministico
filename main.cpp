#include <iostream>
#include <vector>

using namespace std;

string funcao(string estado_ativo, char simbolo) {
    if (estado_ativo == "q1" && simbolo == '0')
        return "q1";

    if (estado_ativo == "q1" && simbolo == '1')
        return "q2";

    if (estado_ativo == "q2" && simbolo == '1')
        return "q2";


    return "q1";

};

int main() {
    string estado_inicial = "q1", estado_ativo, cadeia;
    vector<string>estados;
    bool conf;
    cout << "O alfabeto é o padrão binário[(0,1)]." << endl << endl;
    cout << "A função identifica os números binários pares, ou seja, os terminados em 0." << endl << endl;

    do {
        cout << "Qual cadeia deseja testar?" << endl;
        getline(cin, cadeia);

        conf = true;

        for (int i = 0;i < cadeia.size();i++) {
            if (cadeia[i] != '1' && cadeia[i] != '0') {
                conf = false;
            } else {
                if (i == 0)
                    estado_ativo = estado_inicial;
                else
                    estado_ativo = funcao(estado_ativo, cadeia[i]);

                estados.push_back(estado_ativo);
            }
        }
        if (!conf) {
            estados.clear();
            cout << "Há um elemento na cadeia digitada que não pertence ao alfabeto!" << endl << endl;
        }
    } while (!conf);

    if (cadeia.size() == 0)
        estado_ativo = estado_inicial;

    if (estado_ativo == "q1")
        cout << endl << "ACEITA" << endl;
    else
        cout << endl << "REJEITA" << endl;

    cout << endl << "Transições de estado:" << endl;

    for (int i = 0;i < estados.size();i++) {
        cout << "->" << estados[i];
    }
    cout << endl;

    return 0;
}