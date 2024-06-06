#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo
    {
        protected:

            std::string marca;
            std::string modelo;
            int capacidade; // Capacidade de carga em toneladas

        public:
            Veiculo(const std::string& marca, const std::string& modelo, int capacidade) : marca(marca), modelo(modelo), capacidade(capacidade) {}

            virtual void exibirDados() const { std::cout << "Marca: " << marca << ", Modelo: " << modelo << ", Capacidade: " << capacidade << " toneladas\n"; }

    };

class Caminhao : public Veiculo
    {
        private: int eixos;

        public:
            Caminhao(const std::string& marca, const std::string& modelo, int capacidade, int eixos) : Veiculo(marca, modelo, capacidade), eixos(eixos) {}

            void exibirDados() const override
            {

            std::cout << "Caminhao - "; Veiculo::exibirDados();
            std::cout << "Eixos: " << eixos << std::endl;

            }

    };

class Van : public Veiculo
    {
        private:
            int passageiros;

        public:
            Van(const std::string& marca, const std::string& modelo, int capacidade, int passageiros) : Veiculo(marca, modelo, capacidade), passageiros(passageiros) {}

            void exibirDados() const override
            {

            std::cout << "Van - "; Veiculo::exibirDados();
            std::cout << "Passageiros: " << passageiros << std::endl;

            }

    };

#endif // CLASSES_H_INCLUDED
