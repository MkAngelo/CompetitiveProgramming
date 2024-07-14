def run():
    A, B, C = map(int, input().split())
    
    # Caso base
    if C < A and C < B: return 0
    
    # Otros casos
    max_k = 0
    left = 0
    right = C // A #cuantas hamburguesas simples puedo comprar

    while left <= right:
        panes, carnes, temp_max = 0,0,0
        num_simples = (left + right) // 2 #Numero de h dobles que puedo comprar

        restante = C - num_simples * A #Cambio sobrante

        max_dobles = restante // B

        total = num_simples + 2 * max_dobles
        max_k = max(max_k, total)
        # panes += (max_dobles + num_simples) * 2
        # carnes += num_simples + (max_dobles * 2)

        # if panes > carnes: temp_max = carnes
        # else: temp_max = panes - 1

        # max_k = max(temp_max, max_k)

        if num_simples * A + max_dobles * B <= C:
            left = num_simples + 1
        else:
            right = num_simples - 1
    
    return max_k        

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(f'Case #{i+1}: {run()}')