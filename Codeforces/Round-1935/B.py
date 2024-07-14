def find_segment_division(a, k):
    n = len(a)
    mex_value = max(a) + 1
    div_length = n // k
    segment_division = []
    
    # Check if the array can be divided into k segments
    if n % k != 0:
        return "Division not possible"
    
    # Create segments with the same MEX value
    for i in range(1, k):
        segment_division.append((div_length * (i-1) + 1, div_length * i))
    
    segment_division.append((div_length * (k-1) + 1, n))
    
    return segment_division

# Example usage:
a = [0,1,2,3,4]
k = 2
print(find_segment_division(a, k))