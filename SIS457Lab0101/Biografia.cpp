#include <iostream>
#include <string>
using namespace std;

int main() {
	string x = "SI";
	string y = "NO";
	string z;
	cout << " Mi nombre es Alejandra Terceros casi todos solo me dicen Ale tengo 23 años  " << endl;
	cout << " Naci en Sucre pero me crie en La Paz toda mi vida" << endl;
	cout << " No soy mucho de jugar algun deporte pero si me gusta mucho nadar " << endl;
	cout << " No estoy segura de mi estatatura ni de mi peso aunque admito que si me importa mucho" << endl;
	cout << " Usualmente diria que me gusta programar sobre cualquier actividad extra " << endl;
	cout << " But admito que ultimamente no eh llegado ah emocionarme tanto" << endl;
	cout << " Amo la musica de Jose Madero sobre cualquier cosa y " << endl;
	cout << " Mi comida favorita se podria decir que es la Milaneza Napolitana " << endl;
	cout << " Esta es mi biografia :D " << endl;
	cout << " Deseas leer otraves la biografia? Escriba SI - NO" << endl;
	cin >> z;
	if (z == "SI")
	{
		cout << " Mi nombre es Alejandra Terceros casi todos solo me dicen Ale tengo 23 años naci en Sucre pero me crie en La Paz toda mi vida " << endl;
		cout << " No soy mucho de jugar algun deporte pero si me gusta mucho nadar no estoy segura de mi estatatura ni de mi peso aunque admito que si me importa mucho" << endl;
		cout << " Usualmente diria que me gusta programar sobre cualquier actividad extra pero admito que ultimamente no eh llegado ah emocionarme tanto " << endl;
		cout << " Amo la musica de Jose Madero sobre cualquier cosa y mi comida favorita se podria decir que es la Milaneza Napolitana en fin esta se podria decir " << endl;
		cout << " que es mi biografia :D " << endl;
	}

	system("pause");
	return 0;
}