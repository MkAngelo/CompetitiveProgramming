#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcases;
    cin >> testcases;
    for (int t = 1; t <= testcases; t++)
    {
        int n;
        cin >> n;
        int ans = 1e9;
		// No necesitamos mas de 2 monedas de 1 peso; (en vez de 3 de a peso, mejor una de 3 peso)
        for(int ones = 0; ones <= 2; ones++){
			// No necesitamos mas de 1 moneda de 3 peso; (en vez de 2 de 3 peso, mejor una de 6 peso)
            for(int threes = 0; threes <= 1; threes++){
				// No necesitamos mas de 4 monedas de 6 peso; (en vez de 5 monedas de 6 peso, 2 de 15 peso)
                for(int sixes = 0; sixes <= 4; sixes++){
					// No necesitamos mas de 2 monedas de 10 peso; (en vez de 3 monedas de 10 peso, 2 de 15 peso)
                    for(int tens = 0; tens <= 2; tens++){
						// Obtenemos el total hasta ahorita...
                        int brute_sum = 1*ones + 3*threes + 6*sixes + 10*tens;
						// Si nuestra suma es <= a el cambio y el cambio que sobra lo obtenemos con monedas de 15 podemos dar una solucion...
                        if(brute_sum <= n && (n-brute_sum)%15 == 0){
							//Buscamos el minimo de monedas entre lo que teniamos y la solucion obtenida
                            ans = min(ans, ones + threes + sixes + tens + (n-brute_sum)/15);
                        }
                    }
                }
            }
        }
		// Mostramos el minimo de monedas
        cout << ans << endl;
    }
}