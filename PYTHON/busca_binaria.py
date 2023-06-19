def binary_seach(lista, item, first = 0, end = None):
    if end is None:
        end = len(lista) - 1
    if first <= end:
        medium = (first + end) // 2
        if lista[medium] == item:
            return medium
        if item < lista[medium]:
            return binary_seach(lista, item, first, medium-1)
        else:
            return binary_seach(lista, item, medium+1, end)
    return None



lista = [1,6,4,8,5]
lista.sort()
print(lista)
ans = binary_seach(lista, 6)
print(ans)
