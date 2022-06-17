#include <iostream>
#include <string>
#include <numeric>
#include <locale>

using namespace std;

float Somar(int n, float notas[])
{
	float s{ 0.0 };
	for (int i = 0; i < n; i++)
	{
		s = s + notas[i];
	}

	return s;
}

int main() {
	locale::global(locale{ "pt-BR" });

	int n{ 0 };
	float* notas = new float[n];
	
	cout << "Digite a quantidade de notas: \n";
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		int f = i + 1;
		cout << "Digite a nota " << f << ": ";
		cin >> notas[i];
	}

	float soma = Somar(n, notas);

	cout << "A média das notas é: " << soma / n << endl;

	system("pause");
	
	return 0;
}

