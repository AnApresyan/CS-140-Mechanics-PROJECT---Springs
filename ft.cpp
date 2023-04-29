# include "ft.hpp"

double ft::ak(std::vector<double> coords, double omega, double dt, int j, int N)
{
	double sum = 0;
	
	for  (int n = 0; n < N; n++)
		sum += coords[n] * cos(j * omega * n * dt);

	return 2.0/N * sum;
}

double ft::bk(std::vector<double> coords, double omega, double dt, int j, int N)
{
	double sum = 0;
	
	for (int n = 0; n < N; n++)
		sum += coords[n] * sin(j * omega * n * dt);

	return 2.0/N * sum;
}

int ft::find_ampl_i(std::vector<double> coords, double dt, int N, double omega)
{
	std::vector<double> a;
	std::vector<double> b;
	double ampl = 0;
	int k = 0;

	for (int j = 0; j < coords.size(); j++)
	{
		a.push_back(ak(coords, omega, dt, j, N));
		b.push_back(bk(coords, omega,dt, j, N));
		// std::cout << "a-" << j << ": " << a[j] << std::endl;
		// std::cout << "b-" << j << ": " << b[j] << std::endl;

		if (sqrt(pow(a[j], 2) + pow(b[j], 2)) > ampl)
		{
			ampl = pow(a[j], 2) + pow(b[j], 2);
			k = j;
		}	 
	}
	return k;
}


//keep array of the max amplitude indices
//keep the a-s array
//kee the b-s array
//amplitudes would be the a^2 + b^2 at the indices in first array // no need


//wo * j = sqrt(k)
