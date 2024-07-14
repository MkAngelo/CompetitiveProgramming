
def run(c, coins):
    result = []

    for b in coins:
        if b == c:
            print(1)
            return
        cant_monedas_dar = c//b
        if cant_monedas_dar<0:
            break
        if cant_monedas_dar != 0:
            result.append([cant_monedas_dar, b])

        ordenado = sorted(result)

    
    for x in ordenado:
        cantidad = x[0]
        moneda = x[1]
        # print(cantidad, "monedas de", moneda)
        dinero_falta = c - (cantidad * moneda)
        if(dinero_falta > 0):
            run(dinero_falta, coins)
            print(ordenado)
        else:
            return


if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        coins = [15,10,6,3,1]
        n = int(input())
        run(n, coins)