# 0/1 Knapsack


### Questions

<details>
<summary>Identification of this Pattern</summary>
- Pattern covers problems where you include/exclude an item to find an optimal solution (min/max)
- Unbounded knapsack - supply of items is unlimited
- Fractional Knapsack is Greedy - _**Link to that**_

</details>

<details>
<summary>[0/1 Knapsack Problem](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) - Given list of items with their values and weights and a bag with weight W, choose items to fill in the bag such that profit is maximised.</summary>
- We need **BASE CONDITION + CHOICE DIAGRAM**

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZXSJM4B5%2F20261007%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261007T150529Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJHMEUCIQC%2FEC%2BgbX6RHVs8bEqcJG6GrPwKZ12pyyoSkqHTIP6d1gIgblD5v8RFy6fer4qdn%2BULtiJCrEws6CH1yRZUuC6AGOYq%2FwMIDhAAGgw2Mzc0MjMxODM4MDUiDKbglI%2FhFgzcE4pfwyrcAwtGXQC5xYNP4Mbfq5blpMSyc%2BwhBaI4QBZYZgDDB0eEGkCKbcTo75RPFz8kM31W4hTW5KChWZbaYo2YgPrBWtzYmTC%2BQcLF3phFLgCaXydN2JeXJoK%2BKEhSqW5qnDB2yIfPnu3NqO1382ZsQpyoD0iELBXikAhuV8x4LS1ZzFNtoSElavPiZ4fyeU6WYxnIqVP%2BqaI1fRKo6DI%2BZGUT7MQGvtaIoeYCAPjho%2B4MGKAKUKgTZme9BseLbkQ59h%2Bh4Y8ph3cvmMF9UE0SbvnzQCngLJ7u1ygvx2NKxzzMWs1Bc33loDfXXSu%2BZsUDdnvncIK%2BJhEWn6pXD5bOnlbiE1UeCM5XetUtrQ6eW3eGvyrDXeBMY65KaHqoaJY%2Bycwi63neKpawJ3sG4uws0si%2FSi%2BxuHLTCPBl9dDXTVS76ZraQxB6PoBrNPANTfocqj0sfbcpjWqBo832iVps8KjdeR8K%2BU6FQa1Ag68etnuZ5B2hexqnXJNKn6BtySAJsao%2BYG1bUQkb9IE8DwSpJVPMdDLlb%2B2r9WFvfUhz90aF900G90onm0CHOYzUubUZ1ANfue%2FqbzJiELrts7J7QUt%2F9D%2FZdjfmIWNfH1MKsL8PJ6RqFlsDwvbjUSd2wCXjMNqhmdYGOqUBmZGNFHWWOPFkZwVTouy6dswoDfKMma8BwgzJKodiGSwpL7GYCIeYjH4P%2BActeHVGqfygb0FSCCoIf0WJABvU5CUo2svjogWGoUjGpK5Zt9FKAqxUab6RFyQEsyOjWoy9Q05zpP7ufY5SCzHxrvz6grDfbbWibxO%2BIvfoqimjfkdGTF4p2yic%2BgouJxkhvMnCCqG41PmhHuJXjtixpJc7vyNwAJBd&X-Amz-Signature=cbc746e04d6db8faec63c4dbc3da6e7ae656cffde4f61cd8437ec40893698a4f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZXSJM4B5%2F20261007%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261007T150529Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJHMEUCIQC%2FEC%2BgbX6RHVs8bEqcJG6GrPwKZ12pyyoSkqHTIP6d1gIgblD5v8RFy6fer4qdn%2BULtiJCrEws6CH1yRZUuC6AGOYq%2FwMIDhAAGgw2Mzc0MjMxODM4MDUiDKbglI%2FhFgzcE4pfwyrcAwtGXQC5xYNP4Mbfq5blpMSyc%2BwhBaI4QBZYZgDDB0eEGkCKbcTo75RPFz8kM31W4hTW5KChWZbaYo2YgPrBWtzYmTC%2BQcLF3phFLgCaXydN2JeXJoK%2BKEhSqW5qnDB2yIfPnu3NqO1382ZsQpyoD0iELBXikAhuV8x4LS1ZzFNtoSElavPiZ4fyeU6WYxnIqVP%2BqaI1fRKo6DI%2BZGUT7MQGvtaIoeYCAPjho%2B4MGKAKUKgTZme9BseLbkQ59h%2Bh4Y8ph3cvmMF9UE0SbvnzQCngLJ7u1ygvx2NKxzzMWs1Bc33loDfXXSu%2BZsUDdnvncIK%2BJhEWn6pXD5bOnlbiE1UeCM5XetUtrQ6eW3eGvyrDXeBMY65KaHqoaJY%2Bycwi63neKpawJ3sG4uws0si%2FSi%2BxuHLTCPBl9dDXTVS76ZraQxB6PoBrNPANTfocqj0sfbcpjWqBo832iVps8KjdeR8K%2BU6FQa1Ag68etnuZ5B2hexqnXJNKn6BtySAJsao%2BYG1bUQkb9IE8DwSpJVPMdDLlb%2B2r9WFvfUhz90aF900G90onm0CHOYzUubUZ1ANfue%2FqbzJiELrts7J7QUt%2F9D%2FZdjfmIWNfH1MKsL8PJ6RqFlsDwvbjUSd2wCXjMNqhmdYGOqUBmZGNFHWWOPFkZwVTouy6dswoDfKMma8BwgzJKodiGSwpL7GYCIeYjH4P%2BActeHVGqfygb0FSCCoIf0WJABvU5CUo2svjogWGoUjGpK5Zt9FKAqxUab6RFyQEsyOjWoy9Q05zpP7ufY5SCzHxrvz6grDfbbWibxO%2BIvfoqimjfkdGTF4p2yic%2BgouJxkhvMnCCqG41PmhHuJXjtixpJc7vyNwAJBd&X-Amz-Signature=16a25a65549b494ffc55e63557058f54a83ffe54ff632d9aac96ffaaf15de8ff&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZXSJM4B5%2F20261007%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261007T150529Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJHMEUCIQC%2FEC%2BgbX6RHVs8bEqcJG6GrPwKZ12pyyoSkqHTIP6d1gIgblD5v8RFy6fer4qdn%2BULtiJCrEws6CH1yRZUuC6AGOYq%2FwMIDhAAGgw2Mzc0MjMxODM4MDUiDKbglI%2FhFgzcE4pfwyrcAwtGXQC5xYNP4Mbfq5blpMSyc%2BwhBaI4QBZYZgDDB0eEGkCKbcTo75RPFz8kM31W4hTW5KChWZbaYo2YgPrBWtzYmTC%2BQcLF3phFLgCaXydN2JeXJoK%2BKEhSqW5qnDB2yIfPnu3NqO1382ZsQpyoD0iELBXikAhuV8x4LS1ZzFNtoSElavPiZ4fyeU6WYxnIqVP%2BqaI1fRKo6DI%2BZGUT7MQGvtaIoeYCAPjho%2B4MGKAKUKgTZme9BseLbkQ59h%2Bh4Y8ph3cvmMF9UE0SbvnzQCngLJ7u1ygvx2NKxzzMWs1Bc33loDfXXSu%2BZsUDdnvncIK%2BJhEWn6pXD5bOnlbiE1UeCM5XetUtrQ6eW3eGvyrDXeBMY65KaHqoaJY%2Bycwi63neKpawJ3sG4uws0si%2FSi%2BxuHLTCPBl9dDXTVS76ZraQxB6PoBrNPANTfocqj0sfbcpjWqBo832iVps8KjdeR8K%2BU6FQa1Ag68etnuZ5B2hexqnXJNKn6BtySAJsao%2BYG1bUQkb9IE8DwSpJVPMdDLlb%2B2r9WFvfUhz90aF900G90onm0CHOYzUubUZ1ANfue%2FqbzJiELrts7J7QUt%2F9D%2FZdjfmIWNfH1MKsL8PJ6RqFlsDwvbjUSd2wCXjMNqhmdYGOqUBmZGNFHWWOPFkZwVTouy6dswoDfKMma8BwgzJKodiGSwpL7GYCIeYjH4P%2BActeHVGqfygb0FSCCoIf0WJABvU5CUo2svjogWGoUjGpK5Zt9FKAqxUab6RFyQEsyOjWoy9Q05zpP7ufY5SCzHxrvz6grDfbbWibxO%2BIvfoqimjfkdGTF4p2yic%2BgouJxkhvMnCCqG41PmhHuJXjtixpJc7vyNwAJBd&X-Amz-Signature=c87a8dca59d73b444d70588809f1fd737c11f3d1070f0903bfd1f0e4188b1c8e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667V3E4BV6%2F20261007%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261007T150529Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJGMEQCIFMB%2BpufbU6ruMVgrLawFOMJ7zePAGHMsfq%2FoIVbPIcuAiBk%2BJxf9FXO0cG7gnZEEcFP4kmwDKpuBcN%2FNWHtwRTKKCr%2FAwgOEAAaDDYzNzQyMzE4MzgwNSIMnEBvj%2FhQyXOawBY%2BKtwDTXQalz36UynZWo7AgL9%2B058uLvKQwDuntsh9ynQw5xeW9l5v68Y19Jx4R6mZBO7ctxYLZiXDEoIQ6BIRy5Dpzq%2B%2BzUqd9giiyGfDmqkzrRE9%2BSiJZFIYBE5S2z%2Bb33VrFXTJb5MSdBJ0xM5IJ0jJ4Pb6vnveWHxBhVLRqqZJlMHXNw7eDVztgJScsYCXVJTs2bzkqwPEHbgrFn%2BWwBGvcVnclo%2FyiYBxDivOERSg0oPz%2B12ADewmEBcrb8G1QPTKTZlctb4%2B65KI2T9u25X1ERoHjJI8QVvWOcM9QMUe%2BvoIkQz8G4FbU9L1VRtxEp7UfZ47tKXROoAyVYcq8Gs0DwvtyVj3qeZKKjeZ%2Fy7GAZjPjHf14MWvvhrCd7vR0xuome9mqL1BunXG5Iig4i%2Bti4wVa3P6uSYg2OrvZ2QCMHCGbm%2B6x%2Bee9%2BVa3p4rvYibxczQtVKX1Sp75u94PIezNCgfuKfi8eZyoL%2FAzfgHBPKC974918PIy1YKo2e1oHv2fNS6FMNHe3E9MYYtjuGjLTUdxYbriokhaxsOmFv1zuFSr27xX84RbB0pyUfm0JvYbZLbcwAsVzFn3QFLuUm%2FtkRtNAuO4WAHBb3fhLrj81C5O7UMwBAv%2F1iPUp0wwaCZ1gY6pgGtecFXPqGfFgUw6hKJxcvmyMi4hnMD4ntD0jqMKYLlDU3wE5vs30wWcg7re2vwaxqsv7mlP1K87TlMH5ANXHEUNy6Vs2KkBJM%2FSAom%2FRncDl1f532uW%2BY8ilVn4mnqMi9V%2BYyjjcIPWn84YECbRb3zfrzwBNlfXUagEcMj%2FWtK%2Fn0fkxIYTcauIiJJioD9aFn9J%2FT4Pm7VSCl6E40QuTcLPJRM9tUN&X-Amz-Signature=6a70474f053ab41ed12ea5532e9a87f1eb8447d72999ce02e9d37328b5cbc62e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667V3E4BV6%2F20261007%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261007T150529Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJGMEQCIFMB%2BpufbU6ruMVgrLawFOMJ7zePAGHMsfq%2FoIVbPIcuAiBk%2BJxf9FXO0cG7gnZEEcFP4kmwDKpuBcN%2FNWHtwRTKKCr%2FAwgOEAAaDDYzNzQyMzE4MzgwNSIMnEBvj%2FhQyXOawBY%2BKtwDTXQalz36UynZWo7AgL9%2B058uLvKQwDuntsh9ynQw5xeW9l5v68Y19Jx4R6mZBO7ctxYLZiXDEoIQ6BIRy5Dpzq%2B%2BzUqd9giiyGfDmqkzrRE9%2BSiJZFIYBE5S2z%2Bb33VrFXTJb5MSdBJ0xM5IJ0jJ4Pb6vnveWHxBhVLRqqZJlMHXNw7eDVztgJScsYCXVJTs2bzkqwPEHbgrFn%2BWwBGvcVnclo%2FyiYBxDivOERSg0oPz%2B12ADewmEBcrb8G1QPTKTZlctb4%2B65KI2T9u25X1ERoHjJI8QVvWOcM9QMUe%2BvoIkQz8G4FbU9L1VRtxEp7UfZ47tKXROoAyVYcq8Gs0DwvtyVj3qeZKKjeZ%2Fy7GAZjPjHf14MWvvhrCd7vR0xuome9mqL1BunXG5Iig4i%2Bti4wVa3P6uSYg2OrvZ2QCMHCGbm%2B6x%2Bee9%2BVa3p4rvYibxczQtVKX1Sp75u94PIezNCgfuKfi8eZyoL%2FAzfgHBPKC974918PIy1YKo2e1oHv2fNS6FMNHe3E9MYYtjuGjLTUdxYbriokhaxsOmFv1zuFSr27xX84RbB0pyUfm0JvYbZLbcwAsVzFn3QFLuUm%2FtkRtNAuO4WAHBb3fhLrj81C5O7UMwBAv%2F1iPUp0wwaCZ1gY6pgGtecFXPqGfFgUw6hKJxcvmyMi4hnMD4ntD0jqMKYLlDU3wE5vs30wWcg7re2vwaxqsv7mlP1K87TlMH5ANXHEUNy6Vs2KkBJM%2FSAom%2FRncDl1f532uW%2BY8ilVn4mnqMi9V%2BYyjjcIPWn84YECbRb3zfrzwBNlfXUagEcMj%2FWtK%2Fn0fkxIYTcauIiJJioD9aFn9J%2FT4Pm7VSCl6E40QuTcLPJRM9tUN&X-Amz-Signature=64d6c57c83ec06eb7e661d390fb40640d9f3ffc1e3f7f87f266620cf34ffdb33&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667V3E4BV6%2F20261007%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261007T150529Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJGMEQCIFMB%2BpufbU6ruMVgrLawFOMJ7zePAGHMsfq%2FoIVbPIcuAiBk%2BJxf9FXO0cG7gnZEEcFP4kmwDKpuBcN%2FNWHtwRTKKCr%2FAwgOEAAaDDYzNzQyMzE4MzgwNSIMnEBvj%2FhQyXOawBY%2BKtwDTXQalz36UynZWo7AgL9%2B058uLvKQwDuntsh9ynQw5xeW9l5v68Y19Jx4R6mZBO7ctxYLZiXDEoIQ6BIRy5Dpzq%2B%2BzUqd9giiyGfDmqkzrRE9%2BSiJZFIYBE5S2z%2Bb33VrFXTJb5MSdBJ0xM5IJ0jJ4Pb6vnveWHxBhVLRqqZJlMHXNw7eDVztgJScsYCXVJTs2bzkqwPEHbgrFn%2BWwBGvcVnclo%2FyiYBxDivOERSg0oPz%2B12ADewmEBcrb8G1QPTKTZlctb4%2B65KI2T9u25X1ERoHjJI8QVvWOcM9QMUe%2BvoIkQz8G4FbU9L1VRtxEp7UfZ47tKXROoAyVYcq8Gs0DwvtyVj3qeZKKjeZ%2Fy7GAZjPjHf14MWvvhrCd7vR0xuome9mqL1BunXG5Iig4i%2Bti4wVa3P6uSYg2OrvZ2QCMHCGbm%2B6x%2Bee9%2BVa3p4rvYibxczQtVKX1Sp75u94PIezNCgfuKfi8eZyoL%2FAzfgHBPKC974918PIy1YKo2e1oHv2fNS6FMNHe3E9MYYtjuGjLTUdxYbriokhaxsOmFv1zuFSr27xX84RbB0pyUfm0JvYbZLbcwAsVzFn3QFLuUm%2FtkRtNAuO4WAHBb3fhLrj81C5O7UMwBAv%2F1iPUp0wwaCZ1gY6pgGtecFXPqGfFgUw6hKJxcvmyMi4hnMD4ntD0jqMKYLlDU3wE5vs30wWcg7re2vwaxqsv7mlP1K87TlMH5ANXHEUNy6Vs2KkBJM%2FSAom%2FRncDl1f532uW%2BY8ilVn4mnqMi9V%2BYyjjcIPWn84YECbRb3zfrzwBNlfXUagEcMj%2FWtK%2Fn0fkxIYTcauIiJJioD9aFn9J%2FT4Pm7VSCl6E40QuTcLPJRM9tUN&X-Amz-Signature=0700d75e0d0f978b7bcec767c9f638eb1cacd8aeae1980fd5eaea1e9fe568a2a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667V3E4BV6%2F20261007%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261007T150529Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJGMEQCIFMB%2BpufbU6ruMVgrLawFOMJ7zePAGHMsfq%2FoIVbPIcuAiBk%2BJxf9FXO0cG7gnZEEcFP4kmwDKpuBcN%2FNWHtwRTKKCr%2FAwgOEAAaDDYzNzQyMzE4MzgwNSIMnEBvj%2FhQyXOawBY%2BKtwDTXQalz36UynZWo7AgL9%2B058uLvKQwDuntsh9ynQw5xeW9l5v68Y19Jx4R6mZBO7ctxYLZiXDEoIQ6BIRy5Dpzq%2B%2BzUqd9giiyGfDmqkzrRE9%2BSiJZFIYBE5S2z%2Bb33VrFXTJb5MSdBJ0xM5IJ0jJ4Pb6vnveWHxBhVLRqqZJlMHXNw7eDVztgJScsYCXVJTs2bzkqwPEHbgrFn%2BWwBGvcVnclo%2FyiYBxDivOERSg0oPz%2B12ADewmEBcrb8G1QPTKTZlctb4%2B65KI2T9u25X1ERoHjJI8QVvWOcM9QMUe%2BvoIkQz8G4FbU9L1VRtxEp7UfZ47tKXROoAyVYcq8Gs0DwvtyVj3qeZKKjeZ%2Fy7GAZjPjHf14MWvvhrCd7vR0xuome9mqL1BunXG5Iig4i%2Bti4wVa3P6uSYg2OrvZ2QCMHCGbm%2B6x%2Bee9%2BVa3p4rvYibxczQtVKX1Sp75u94PIezNCgfuKfi8eZyoL%2FAzfgHBPKC974918PIy1YKo2e1oHv2fNS6FMNHe3E9MYYtjuGjLTUdxYbriokhaxsOmFv1zuFSr27xX84RbB0pyUfm0JvYbZLbcwAsVzFn3QFLuUm%2FtkRtNAuO4WAHBb3fhLrj81C5O7UMwBAv%2F1iPUp0wwaCZ1gY6pgGtecFXPqGfFgUw6hKJxcvmyMi4hnMD4ntD0jqMKYLlDU3wE5vs30wWcg7re2vwaxqsv7mlP1K87TlMH5ANXHEUNy6Vs2KkBJM%2FSAom%2FRncDl1f532uW%2BY8ilVn4mnqMi9V%2BYyjjcIPWn84YECbRb3zfrzwBNlfXUagEcMj%2FWtK%2Fn0fkxIYTcauIiJJioD9aFn9J%2FT4Pm7VSCl6E40QuTcLPJRM9tUN&X-Amz-Signature=cb2ed8cec75053fa3e109f1deeaddb0a8d39b717e69163ced5d8738a4903cd2a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ZRZODEC%2F20261007%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261007T150530Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJGMEQCICc12%2BHLPNrmlGXmyJnLMwr5EQGGrFCFRkw%2BXX4qwRxDAiATzvfEq5MOR2D6f0LdxR8cBKBtCDsmd%2FfNh%2BxD1J46nSr%2FAwgPEAAaDDYzNzQyMzE4MzgwNSIMz6Gz9teMLKLxBooaKtwDmSfxgpWh0JSve8VsXIUoo6JX6HIuHSzHJfvlqVDZZM7pFlDqVlG45Ncm24B8mLn6oAgS%2B%2FOknDrsRxYzVgoH9V3ticFNFoXasgc2v1PjE6EZf8YbTuN07MMwYdPJIksJAZaPhYYnioZ0We3byREg7w%2F4hMk%2Bf30%2B10XnwegfCKlb4PwZjXDpQabG4EwpnMyu6N984pXdWNnhIiit8EtAEiT4S1ooLj5UYwxGLLz9QBF%2BJV1dy8QlHhgvY%2FGLNMFWd2oldrv2t8hDwM4aEB7%2BjkS25HmhM%2BwCc6QT3DqcEnRdDZI5Y2hf5Ba50ut1jTd8s5HqC%2F%2FHhRjhvCG4FVSvI2fOYe%2FblngIykCgxQ%2BRngELh03HbSqQM2UZcIOTFAm6fE9WpoKXW68GwHRjbr3qM7Vp%2Bd2hq67wQlC6%2FlpjQAcB6YJdGYnRi%2FC%2FRXAkq12Ob8YRbHe6lcm5Rg4O8ELJ0g%2B679%2FPY6THttlGAuPhljicmnBfw2Djj6jieUKCBEz3iQiCB3tQBAbS3cRK57RQXK%2BwqISfsStzW8BzxPhZpMr3CJMKbYyAxhs6TEPQTeefG%2Fvq2A0fWCrsZg9Owjdb44UwiReN4bfyDqTM5VQSSSKt8dq0Sjl2PK3PvocwvqOZ1gY6pgH4XKiGS2xmlpdTQaE5Lp1g0VmCAoXw2eXpR8uqd33IAs%2BgyRBdEgEBXoUX3AU10Np5lFrKX1cSl2rJh218iQJxKORGz0CaSXKD2fyPPopf61Om8EGjb5%2BCS01rwTCG6KbHDhCuAHQgzgq3UjjDLxTWi1AA32QU0wPhjpRktTcqs3FH0jEFZWtu8U0ZNTfzK%2BZAs2Qq0RkdQYV2r7tP4Oj7MK7TN6Ti&X-Amz-Signature=52080c61f620e528b87fe71cc0625fbdf0cf8fe20a7873cbab81d3588d05b53c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663P7KAAWP%2F20261007%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261007T150530Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJIMEYCIQCm%2BvPp9BJvK6mCmaN%2Bb1KFjk71zb%2BFfQ4SPBhFCsveFAIhAMQDkDn1cHW7eIcxTpd5XWdBvpC8XMNAtAOxh%2F9%2BS0uCKv8DCA8QABoMNjM3NDIzMTgzODA1IgzQeselvw%2FTm028s7cq3ANaVsNBKuqsnB6B8MN43IwHtRh1JtAosLBMfqD5XknHF6M%2F5Q%2FMVDtVkSyNBSJgwMxT4UL1WyxTNTfZ4%2FUQZpLEEYFjYyErX0Hu3fLmxsJXwinzQnSn0lia1JW7YX4a%2B3lISgX1CQ%2BCAxHaGLg8sT0yR%2Be1ZHG385WDdsmYEBGGiur6BOfK%2B2HZq0h1vLSK%2FNqpxxsB4HV4EoWOVBXgWC%2BtDDNMX%2FUHHgY9DzwQlbQbLEqAzOwzUMxP0OhqO9KiPX8dCNha5oMhSY2OLf9RYopGMFPZ57ftOwWLQCxQwWAm0Xmav5tK61d%2BU%2BoKiiHRd13mi5tQT39y1ad%2BLWLhjq5cVwZmP%2F5jBzKG2c3wY3TLw%2B%2F%2FCNrcvons8Mb9rFnOQFadLZVEj2rARm0miPthgahsSsDLkLD1li8ZqeDSJWJH1k%2FRsZ%2F0SaXRv65sIkToZuW8IiTa7Dndzr67YnlR2EcH%2FqhV%2FEyLO%2FY03xxYZWcmDvf%2BfP%2BcAoZ8UpUzHU5tRtugFvQc9R%2B6YApW%2BwDj3sWGj8wTLkayBeTJaIU9D%2BZqmc3MlTm24y6iMOmdjy0Srip3TKdEoe1Rj99dAA4vU%2Fjt99xDB1UGMF20OEXjor0oQezM%2ByS6Xg6Be785%2FzC8o5nWBjqkAb%2FueZMJoC7I6XiCEjlh%2FHml4hbyaTuISNDAjrouvDFPR56AhTEYJ1FupvrhHHA93zkH0yA8jMA%2BRcgSjYCT7cwg%2BFxcVwImLRQMG%2FfvcE5kK1%2F2gsREsX1%2B5Km9Y8%2FUhgmgLnjlYtwzSR7222B6RlfuPhS%2F3v4%2Fpb4qfj%2BFJnwpBIb7eifOuTze43SDuZl7ZuAyHbh1xucCnF4eqZ37JLM7gtAp&X-Amz-Signature=f92d6da0a4191b9f188136fd55ea0e46ba67fd73bb2617ac381c04cfa0c4c37d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663P7KAAWP%2F20261007%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261007T150530Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJIMEYCIQCm%2BvPp9BJvK6mCmaN%2Bb1KFjk71zb%2BFfQ4SPBhFCsveFAIhAMQDkDn1cHW7eIcxTpd5XWdBvpC8XMNAtAOxh%2F9%2BS0uCKv8DCA8QABoMNjM3NDIzMTgzODA1IgzQeselvw%2FTm028s7cq3ANaVsNBKuqsnB6B8MN43IwHtRh1JtAosLBMfqD5XknHF6M%2F5Q%2FMVDtVkSyNBSJgwMxT4UL1WyxTNTfZ4%2FUQZpLEEYFjYyErX0Hu3fLmxsJXwinzQnSn0lia1JW7YX4a%2B3lISgX1CQ%2BCAxHaGLg8sT0yR%2Be1ZHG385WDdsmYEBGGiur6BOfK%2B2HZq0h1vLSK%2FNqpxxsB4HV4EoWOVBXgWC%2BtDDNMX%2FUHHgY9DzwQlbQbLEqAzOwzUMxP0OhqO9KiPX8dCNha5oMhSY2OLf9RYopGMFPZ57ftOwWLQCxQwWAm0Xmav5tK61d%2BU%2BoKiiHRd13mi5tQT39y1ad%2BLWLhjq5cVwZmP%2F5jBzKG2c3wY3TLw%2B%2F%2FCNrcvons8Mb9rFnOQFadLZVEj2rARm0miPthgahsSsDLkLD1li8ZqeDSJWJH1k%2FRsZ%2F0SaXRv65sIkToZuW8IiTa7Dndzr67YnlR2EcH%2FqhV%2FEyLO%2FY03xxYZWcmDvf%2BfP%2BcAoZ8UpUzHU5tRtugFvQc9R%2B6YApW%2BwDj3sWGj8wTLkayBeTJaIU9D%2BZqmc3MlTm24y6iMOmdjy0Srip3TKdEoe1Rj99dAA4vU%2Fjt99xDB1UGMF20OEXjor0oQezM%2ByS6Xg6Be785%2FzC8o5nWBjqkAb%2FueZMJoC7I6XiCEjlh%2FHml4hbyaTuISNDAjrouvDFPR56AhTEYJ1FupvrhHHA93zkH0yA8jMA%2BRcgSjYCT7cwg%2BFxcVwImLRQMG%2FfvcE5kK1%2F2gsREsX1%2B5Km9Y8%2FUhgmgLnjlYtwzSR7222B6RlfuPhS%2F3v4%2Fpb4qfj%2BFJnwpBIb7eifOuTze43SDuZl7ZuAyHbh1xucCnF4eqZ37JLM7gtAp&X-Amz-Signature=2ecbd38cd30f0a0707d980001ae2cf2bfadea008549726f89c986d44b4595e8a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Equal Sum Partition](https://leetcode.com/problems/partition-equal-subset-sum/description/) - Given an array, return true if it can be divided into two subsets with equal sum?</summary>
- For equal sum equation becomes 2s = S where S is the target sum. s = S/2. If there is a subset equal to S/2 then the array can be divided into two subsets of equal sum. Same as Subset Sum Problem.

</details>

<details>
<summary>[Perfect Sum Problem](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1) - Given an array, return the number of subsets with sum equal to target S</summary>
- When we needed to max profit we did max (include, exclude)
- When we needed to find if a subset exists, we did OR (include, exclude)
- To find the count we would do SUM(include, exclude) results and we return 1 whenever we find a subset so that all the 1s count.

</details>

<details>
<summary>[Minimum Subset Sum Difference](https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1) - Given an array, return the minimum possible difference between two subset sums</summary>
- We need to minimise abs(s1-s2) where s1 & s2 are two valid subset sums. s1+s2 = total sum of array
- Min abs(s1-s2) can be 0. Start from there.

</details>

<details>
<summary>WHAT TO DO WHEN WE HAVE 0s in the subset? How does the Base Condition change then?</summary>

With 0s or duplicates, specially when counting subsets, we need to account for all possible options. Example for a sum 0 the possible subsets can be not only a { } but also {0}, {0,0} 
Meaning we cannot just return from a branch when we see sum==0, go down till n==0 also and return 1 for that. 


```c++
if(n==0) return sum==0?1:0;
```


</details>

<details>
<summary>[Partitions with Given Difference](https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1) - Given array, partition it into s1, s2 such that diff between them is d. Count number of such subsets.</summary>

s1+s2 = S (total Sum)
s1-s2 = d
2s1 = S + d         therefore we need count of s1s which equals (S+d)/2


</details>


### Resources

- [https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go](https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go)

### Notes (use sparingly!)

- Start with Recursive solution which is Base Condition + Choice Diagram (include/exclude)
- For Top-Down start with initialising matrix with base condition
- Convert the recursive hypothesis into a formula to fill up the remaining matrix
