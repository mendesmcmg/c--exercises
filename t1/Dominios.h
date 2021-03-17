#include <string>
#include <stdexcept>

using namespace std;

/** Codigo
 * contém uma string codigo
 * função validar - privada
 * funções setCodigo e getCodigo - públicas
 **/

class Codigo {
    private:
        string codigo;
        const static int TAMANHO;
        void validar(string) throw (invalid_argument);
    public:
        void setCodigo(string) throw (invalid_argument);
        string getCodigo(){
            return codigo;
        }
};