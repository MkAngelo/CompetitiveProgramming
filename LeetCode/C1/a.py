
def shortestSubstrings(arr):
        def all_substrings(s):
            subs = set()
            n = len(s)
            for i in range(n):
                for j in range(i+1, n+1):
                    subs.add(s[i:j])
            return subs

        n = len(arr)
        result = []

        for i in range(n):
            current = arr[i]
            unique_substrings = all_substrings(current)
            min_substring = ""

            for char in sorted(current):
                substring = ""
                for c in current:
                    substring += c
                    if substring not in set(arr[:i] + arr[i+1:]):
                        min_substring = substring
                        break
                if min_substring:
                    break

            result.append(min_substring)

        return result

s=["cab","ad","bad","c"]
print(shortestSubstrings(s))
