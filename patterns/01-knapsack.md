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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46652ANO7QT%2F20260318%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260318T085016Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQCawYYAFRGL%2BSWIuhEaR2KPT43W6%2BKUlJQxGBrlwqTo2gIhAJ5g%2BZWI4z6e%2F0CAJm2hsdk1RiRbFW8kAfkqRLVleqlFKv8DCAEQABoMNjM3NDIzMTgzODA1IgxV8o6gWJ6WtkjQAZsq3AM7IQ3pQo0eBPvCzIsDOX%2Bgl8INvlREIA6VBrBTpQ5UDi0kHLU%2Fksv7bv0B%2BC9rf02qP50yZB%2FZi6Q9AwmsG37OKAbuo27irwpr6exzliMPA3UMVw9G6StddBc2%2FwlI9Uj26Yhd6NxfEWolrkq44K8nrvNeV71BfN%2FmGm3yHPY94jvqWWw1xFy6CL4oxpAzrAl8zi%2BKug9cBg%2Bwr47gVut03SJdu5UwRa8CvTZnhzEOUJ3OU7Pvgoh5Fw3lkQXaBt%2FzKMGJKfGdOcxqhUDl9ArytkdQW0CHxRpGpOMIvMtFqQI8EO2rp6jx3FAi7E2Es9N1dcXHmnuYJDFJ1nZLHCvQRrY7ksJdkISGFnTHhUXPhPQ4Rijc%2FQIK%2BNPNNNpyv3uU4aCPMMFQW3vlBbdJsP4qtkBilxkxDv9zMRJdvBiQlzTsCSwCEiC9q4qgeQiIL22D%2B71kNsF6ekIjF7QPPkXirHOlt%2Bd%2BXJl%2BVlcrcvNgSY1Nz%2Bivq4542x5VTh5%2B9DAK%2BhmoeJdIZVvmsukbNCtH6uVS7jmidQJLagDW3oDisROa2u36mCIMjjC%2F5R5JnsNm6ziAyk%2BJ6FU9h6L051xvmWjvZv1scVzlk2bY%2FjQK7rl0J9WORdyBWrq%2FNDDgrenNBjqkAVHGlz7bj%2FTEcghqEFUnD4sE3wtwJBep%2F4Y7R%2FqF%2F1HeGq2ZHdRuRmhKzXiIbdNCJXAA3PSZsbU%2BRonfugwUfzx8WA%2FKYDlIpj0iriVI3zRHv27CBm1chs0%2BFi%2B3luhTYnM2vPPoTOLAiQNTN%2Bn%2FLdQDFneqC9z3pIykhO7D0Pv8oZMLEk0k8dDnZIjRsokHIcxW1JRS7faQ5UWZBzmpMPogrgrU&X-Amz-Signature=e61082ac742fda22ba028e53eabb7a5fa7c5eb58b8576692bda6a8a9171fe6bb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46652ANO7QT%2F20260318%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260318T085016Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQCawYYAFRGL%2BSWIuhEaR2KPT43W6%2BKUlJQxGBrlwqTo2gIhAJ5g%2BZWI4z6e%2F0CAJm2hsdk1RiRbFW8kAfkqRLVleqlFKv8DCAEQABoMNjM3NDIzMTgzODA1IgxV8o6gWJ6WtkjQAZsq3AM7IQ3pQo0eBPvCzIsDOX%2Bgl8INvlREIA6VBrBTpQ5UDi0kHLU%2Fksv7bv0B%2BC9rf02qP50yZB%2FZi6Q9AwmsG37OKAbuo27irwpr6exzliMPA3UMVw9G6StddBc2%2FwlI9Uj26Yhd6NxfEWolrkq44K8nrvNeV71BfN%2FmGm3yHPY94jvqWWw1xFy6CL4oxpAzrAl8zi%2BKug9cBg%2Bwr47gVut03SJdu5UwRa8CvTZnhzEOUJ3OU7Pvgoh5Fw3lkQXaBt%2FzKMGJKfGdOcxqhUDl9ArytkdQW0CHxRpGpOMIvMtFqQI8EO2rp6jx3FAi7E2Es9N1dcXHmnuYJDFJ1nZLHCvQRrY7ksJdkISGFnTHhUXPhPQ4Rijc%2FQIK%2BNPNNNpyv3uU4aCPMMFQW3vlBbdJsP4qtkBilxkxDv9zMRJdvBiQlzTsCSwCEiC9q4qgeQiIL22D%2B71kNsF6ekIjF7QPPkXirHOlt%2Bd%2BXJl%2BVlcrcvNgSY1Nz%2Bivq4542x5VTh5%2B9DAK%2BhmoeJdIZVvmsukbNCtH6uVS7jmidQJLagDW3oDisROa2u36mCIMjjC%2F5R5JnsNm6ziAyk%2BJ6FU9h6L051xvmWjvZv1scVzlk2bY%2FjQK7rl0J9WORdyBWrq%2FNDDgrenNBjqkAVHGlz7bj%2FTEcghqEFUnD4sE3wtwJBep%2F4Y7R%2FqF%2F1HeGq2ZHdRuRmhKzXiIbdNCJXAA3PSZsbU%2BRonfugwUfzx8WA%2FKYDlIpj0iriVI3zRHv27CBm1chs0%2BFi%2B3luhTYnM2vPPoTOLAiQNTN%2Bn%2FLdQDFneqC9z3pIykhO7D0Pv8oZMLEk0k8dDnZIjRsokHIcxW1JRS7faQ5UWZBzmpMPogrgrU&X-Amz-Signature=a51d4e6a5b7de50c0c2c860d6a5acd0eaf1032a5b879100ddaacf90b909b3d14&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46652ANO7QT%2F20260318%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260318T085016Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQCawYYAFRGL%2BSWIuhEaR2KPT43W6%2BKUlJQxGBrlwqTo2gIhAJ5g%2BZWI4z6e%2F0CAJm2hsdk1RiRbFW8kAfkqRLVleqlFKv8DCAEQABoMNjM3NDIzMTgzODA1IgxV8o6gWJ6WtkjQAZsq3AM7IQ3pQo0eBPvCzIsDOX%2Bgl8INvlREIA6VBrBTpQ5UDi0kHLU%2Fksv7bv0B%2BC9rf02qP50yZB%2FZi6Q9AwmsG37OKAbuo27irwpr6exzliMPA3UMVw9G6StddBc2%2FwlI9Uj26Yhd6NxfEWolrkq44K8nrvNeV71BfN%2FmGm3yHPY94jvqWWw1xFy6CL4oxpAzrAl8zi%2BKug9cBg%2Bwr47gVut03SJdu5UwRa8CvTZnhzEOUJ3OU7Pvgoh5Fw3lkQXaBt%2FzKMGJKfGdOcxqhUDl9ArytkdQW0CHxRpGpOMIvMtFqQI8EO2rp6jx3FAi7E2Es9N1dcXHmnuYJDFJ1nZLHCvQRrY7ksJdkISGFnTHhUXPhPQ4Rijc%2FQIK%2BNPNNNpyv3uU4aCPMMFQW3vlBbdJsP4qtkBilxkxDv9zMRJdvBiQlzTsCSwCEiC9q4qgeQiIL22D%2B71kNsF6ekIjF7QPPkXirHOlt%2Bd%2BXJl%2BVlcrcvNgSY1Nz%2Bivq4542x5VTh5%2B9DAK%2BhmoeJdIZVvmsukbNCtH6uVS7jmidQJLagDW3oDisROa2u36mCIMjjC%2F5R5JnsNm6ziAyk%2BJ6FU9h6L051xvmWjvZv1scVzlk2bY%2FjQK7rl0J9WORdyBWrq%2FNDDgrenNBjqkAVHGlz7bj%2FTEcghqEFUnD4sE3wtwJBep%2F4Y7R%2FqF%2F1HeGq2ZHdRuRmhKzXiIbdNCJXAA3PSZsbU%2BRonfugwUfzx8WA%2FKYDlIpj0iriVI3zRHv27CBm1chs0%2BFi%2B3luhTYnM2vPPoTOLAiQNTN%2Bn%2FLdQDFneqC9z3pIykhO7D0Pv8oZMLEk0k8dDnZIjRsokHIcxW1JRS7faQ5UWZBzmpMPogrgrU&X-Amz-Signature=eeae1f640574f40bb8a2b90e78a834e035ec064779c25efed5d446796a9d499a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YPMVGODM%2F20260318%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260318T085017Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIQDN0Wdu4O%2F3ElWKwRUF0hjDkhlIZ%2BamzeTyythHGHa9%2BgIge4qh86ypskpLzici7u%2Bjs7qPsJOMnevYcu%2FHW9QRYD8q%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDP%2FAaOUEig3bHfuHayrcAxVJ97f%2BuFQ1ebH%2BEX9lKGmAKCB4jnD8Ch5xbe6amE2cgH3iz85wDS%2BOxCuCWGiTKAkHPG3FVUzS2N9m%2FEkvXeOSqblVpvN9gTiNVp8SWh6Wqeh8%2BCgtuzGmVX8%2BCQAODLq6gEbOwRjS5wWPAtF9VhykcMIV0tw8WczJmLHy7q3sE08UrjLCEOslw43m9tAfVDSAuFlffmL%2F%2BSfPIvoE%2F%2Ba0LaFKnEVf65%2Fm4HrZLN5QhoL1Nx%2FNL0pwdrOQ2z27MelXQBhN8S8yVTii%2F0vo%2B%2FSOhKYwntYg0tF5FCELdUz81BMMjKFKQGPSVpGvpjO%2FDXwUTMnOy1qyRC1WTISPMk7qwv9dM%2BWWJCYhNtcDyL%2Fm3FJTJlfRXeHPl3QdJyz50dVTIRwprSzdXikTCKUpvEs0tPRmLNaUXd8TrZmkJkAy56AvdYf8PPulpeELNRAnilFrxo1Sb8GMg3aOiTwXOT1Yzywwo8zQyGmJ6ryTAUkxpaDFO%2FWW%2FXr5qekI%2FYGMLGOceNpbKa%2BI3HHuH2aO4O2qVdGueAqNnUid9i%2FZR9RwT45U0PsFiM%2FQAKgwNYMORXywIfQJVkNFr0HAdCgT%2F7D8VbQquirWYukuRg2ZneMSutOPsjJ66whssE7iMNeu6c0GOqUB7oOADE8r1YSXjyLgYOk48F7nYprWcqVUolBmzDLkIL6s8I7rPjsG9y%2B4OncbSNilp0lMvVOrPHByaHCHD%2F19t81Ci6Bw8yCwLEd9ugbYS%2BIto7isbuXi%2BlMRB%2FC8AR%2FvqAKb9TSh0Cp1LXt77PQQ8p%2F7soIWqzMQMqGwD4bS68rNOlUGG46HZLy%2BxNlnJVrn9aVocTkCJrT9ZyWCRl%2BIkOMh1LQr&X-Amz-Signature=8b8b6bbd0b3d1b2fdc14c6251763364e8a379ee6c80d783bc3f471211c9494b0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YPMVGODM%2F20260318%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260318T085017Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIQDN0Wdu4O%2F3ElWKwRUF0hjDkhlIZ%2BamzeTyythHGHa9%2BgIge4qh86ypskpLzici7u%2Bjs7qPsJOMnevYcu%2FHW9QRYD8q%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDP%2FAaOUEig3bHfuHayrcAxVJ97f%2BuFQ1ebH%2BEX9lKGmAKCB4jnD8Ch5xbe6amE2cgH3iz85wDS%2BOxCuCWGiTKAkHPG3FVUzS2N9m%2FEkvXeOSqblVpvN9gTiNVp8SWh6Wqeh8%2BCgtuzGmVX8%2BCQAODLq6gEbOwRjS5wWPAtF9VhykcMIV0tw8WczJmLHy7q3sE08UrjLCEOslw43m9tAfVDSAuFlffmL%2F%2BSfPIvoE%2F%2Ba0LaFKnEVf65%2Fm4HrZLN5QhoL1Nx%2FNL0pwdrOQ2z27MelXQBhN8S8yVTii%2F0vo%2B%2FSOhKYwntYg0tF5FCELdUz81BMMjKFKQGPSVpGvpjO%2FDXwUTMnOy1qyRC1WTISPMk7qwv9dM%2BWWJCYhNtcDyL%2Fm3FJTJlfRXeHPl3QdJyz50dVTIRwprSzdXikTCKUpvEs0tPRmLNaUXd8TrZmkJkAy56AvdYf8PPulpeELNRAnilFrxo1Sb8GMg3aOiTwXOT1Yzywwo8zQyGmJ6ryTAUkxpaDFO%2FWW%2FXr5qekI%2FYGMLGOceNpbKa%2BI3HHuH2aO4O2qVdGueAqNnUid9i%2FZR9RwT45U0PsFiM%2FQAKgwNYMORXywIfQJVkNFr0HAdCgT%2F7D8VbQquirWYukuRg2ZneMSutOPsjJ66whssE7iMNeu6c0GOqUB7oOADE8r1YSXjyLgYOk48F7nYprWcqVUolBmzDLkIL6s8I7rPjsG9y%2B4OncbSNilp0lMvVOrPHByaHCHD%2F19t81Ci6Bw8yCwLEd9ugbYS%2BIto7isbuXi%2BlMRB%2FC8AR%2FvqAKb9TSh0Cp1LXt77PQQ8p%2F7soIWqzMQMqGwD4bS68rNOlUGG46HZLy%2BxNlnJVrn9aVocTkCJrT9ZyWCRl%2BIkOMh1LQr&X-Amz-Signature=d1a53a14124b46d4a829a7a678ec7534e52b9a63ca4fde09176854edd5bb3f96&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YPMVGODM%2F20260318%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260318T085017Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIQDN0Wdu4O%2F3ElWKwRUF0hjDkhlIZ%2BamzeTyythHGHa9%2BgIge4qh86ypskpLzici7u%2Bjs7qPsJOMnevYcu%2FHW9QRYD8q%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDP%2FAaOUEig3bHfuHayrcAxVJ97f%2BuFQ1ebH%2BEX9lKGmAKCB4jnD8Ch5xbe6amE2cgH3iz85wDS%2BOxCuCWGiTKAkHPG3FVUzS2N9m%2FEkvXeOSqblVpvN9gTiNVp8SWh6Wqeh8%2BCgtuzGmVX8%2BCQAODLq6gEbOwRjS5wWPAtF9VhykcMIV0tw8WczJmLHy7q3sE08UrjLCEOslw43m9tAfVDSAuFlffmL%2F%2BSfPIvoE%2F%2Ba0LaFKnEVf65%2Fm4HrZLN5QhoL1Nx%2FNL0pwdrOQ2z27MelXQBhN8S8yVTii%2F0vo%2B%2FSOhKYwntYg0tF5FCELdUz81BMMjKFKQGPSVpGvpjO%2FDXwUTMnOy1qyRC1WTISPMk7qwv9dM%2BWWJCYhNtcDyL%2Fm3FJTJlfRXeHPl3QdJyz50dVTIRwprSzdXikTCKUpvEs0tPRmLNaUXd8TrZmkJkAy56AvdYf8PPulpeELNRAnilFrxo1Sb8GMg3aOiTwXOT1Yzywwo8zQyGmJ6ryTAUkxpaDFO%2FWW%2FXr5qekI%2FYGMLGOceNpbKa%2BI3HHuH2aO4O2qVdGueAqNnUid9i%2FZR9RwT45U0PsFiM%2FQAKgwNYMORXywIfQJVkNFr0HAdCgT%2F7D8VbQquirWYukuRg2ZneMSutOPsjJ66whssE7iMNeu6c0GOqUB7oOADE8r1YSXjyLgYOk48F7nYprWcqVUolBmzDLkIL6s8I7rPjsG9y%2B4OncbSNilp0lMvVOrPHByaHCHD%2F19t81Ci6Bw8yCwLEd9ugbYS%2BIto7isbuXi%2BlMRB%2FC8AR%2FvqAKb9TSh0Cp1LXt77PQQ8p%2F7soIWqzMQMqGwD4bS68rNOlUGG46HZLy%2BxNlnJVrn9aVocTkCJrT9ZyWCRl%2BIkOMh1LQr&X-Amz-Signature=b26e5c9da4a4421be37ffc2f95e0c7b7cdc825da31f070ed86d0ceae29d7510c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YPMVGODM%2F20260318%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260318T085017Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIQDN0Wdu4O%2F3ElWKwRUF0hjDkhlIZ%2BamzeTyythHGHa9%2BgIge4qh86ypskpLzici7u%2Bjs7qPsJOMnevYcu%2FHW9QRYD8q%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDP%2FAaOUEig3bHfuHayrcAxVJ97f%2BuFQ1ebH%2BEX9lKGmAKCB4jnD8Ch5xbe6amE2cgH3iz85wDS%2BOxCuCWGiTKAkHPG3FVUzS2N9m%2FEkvXeOSqblVpvN9gTiNVp8SWh6Wqeh8%2BCgtuzGmVX8%2BCQAODLq6gEbOwRjS5wWPAtF9VhykcMIV0tw8WczJmLHy7q3sE08UrjLCEOslw43m9tAfVDSAuFlffmL%2F%2BSfPIvoE%2F%2Ba0LaFKnEVf65%2Fm4HrZLN5QhoL1Nx%2FNL0pwdrOQ2z27MelXQBhN8S8yVTii%2F0vo%2B%2FSOhKYwntYg0tF5FCELdUz81BMMjKFKQGPSVpGvpjO%2FDXwUTMnOy1qyRC1WTISPMk7qwv9dM%2BWWJCYhNtcDyL%2Fm3FJTJlfRXeHPl3QdJyz50dVTIRwprSzdXikTCKUpvEs0tPRmLNaUXd8TrZmkJkAy56AvdYf8PPulpeELNRAnilFrxo1Sb8GMg3aOiTwXOT1Yzywwo8zQyGmJ6ryTAUkxpaDFO%2FWW%2FXr5qekI%2FYGMLGOceNpbKa%2BI3HHuH2aO4O2qVdGueAqNnUid9i%2FZR9RwT45U0PsFiM%2FQAKgwNYMORXywIfQJVkNFr0HAdCgT%2F7D8VbQquirWYukuRg2ZneMSutOPsjJ66whssE7iMNeu6c0GOqUB7oOADE8r1YSXjyLgYOk48F7nYprWcqVUolBmzDLkIL6s8I7rPjsG9y%2B4OncbSNilp0lMvVOrPHByaHCHD%2F19t81Ci6Bw8yCwLEd9ugbYS%2BIto7isbuXi%2BlMRB%2FC8AR%2FvqAKb9TSh0Cp1LXt77PQQ8p%2F7soIWqzMQMqGwD4bS68rNOlUGG46HZLy%2BxNlnJVrn9aVocTkCJrT9ZyWCRl%2BIkOMh1LQr&X-Amz-Signature=0e83111093f5eb97b3b980234050f76336b00f8e4f345e0d8be4b962f83bf056&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QZVJZMUE%2F20260318%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260318T085021Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIHvmYU2Dr655MhKqEXB5byJDfwJQmWRGv1QT%2F80u5Sk0AiEA%2FHCSIhquDVgAhBstHW76AGiek09d2lTw8Oh%2FF%2FQRfoEq%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDFbc%2FqfnQPeNbSzISircA%2Bduy%2BA%2Bl%2BtPFUH226tKR%2BtwNnnO1kvYN5W1D%2FRjU6cL%2BsEtxCBoHjyWvkZpd7lFuVSE8Bmicj6nt2RuDGD46ET7VYmioPlr6F6kWZfPbvU9HhZhx2CHEdCGuOsDVx7yIotiubGd5qGFv4HAOEI8DsVJX%2BIUZmmKi6Cge8lA3QJ3HALkGERyyfLIflO3f4g1bZ2NWUagZtYmwzNJg0OithWpuvMmzX0SRJIAE6wpjwIK8r5TrQwxGHgxFIzKEUyGs6aGy8QBozdAXno0BtcMKcW1oPrpZG%2FWa9PEYWZYN%2FuytESho0Gyoqkix91%2FhhCEjnYQWSRQpTv7gv%2B3XJq%2BPCSZ4wNQ1QK3lTQiI%2BnJNWUCM3U3RrNtx39mP0Rikxmanca62OUdFIZioB8kKkZCfHnKep16RW%2Fe3Z5hUUi4f5DuXsc3emHnQ6wgalvPIollmUDyU2UW3c%2Fip%2B%2B7nwq%2BYV7zysrRR2%2Fsg%2Bsyqs0%2BVNJ7FiF%2ByXMUkDbpJCmyXee%2F9j3Jz2OzizXSgXWJbT6s6NnX8vyyT4%2FqvZKS%2BU6iwjNO1fGuMsOGkGi8Uv4SDxko%2FuQOJasHsMj%2FmUNjfC0Z416%2F3eWbwpKUYTyN3guxzIn4iufIYzgPsFsYRP7QMIeu6c0GOqUBd%2Bta8tQK8A%2BvSrzv6QaDaEDbyzDw6RSoJ27YDy%2FCkPemzZ7h91fR0sXuOIXRVImJnM9EPanUdwZZsjmpCyXDr2MHSZ%2FswrJQX2Ouc6%2BO%2BeeaFxOYfyXaDYldwZmjGRQWVmSNrmTdhNGCJWld%2BNgglIHhxbhpoogdaGfBAFDsjLp4tl1lTWvt9jXcuSjU7eArfkfXO%2FjiPwSq6fdBF3ELnSnvQ2zx&X-Amz-Signature=9bd3c5ebe2fe5ba24a373e0825ba356bb61b8ac9346562560c90a7d702812810&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YW5Y62H5%2F20260318%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260318T085021Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQCCqn1OQj%2BriGnb3JZd5luyEJXMFiDDLByyQ81W4jmtsAIhAJPCD9Hkj2tD%2BS7hJIRuET0YhrTAtavqK2SR1AWLmkFXKv8DCAEQABoMNjM3NDIzMTgzODA1IgzKmw7v%2FniZQyJPg4Iq3AOKma18kJmMWgl%2BYeXi5zVQdxhv8GTZfteQSIxbzImK8RS0eMpNy6QgYmunI3h8dL67fr7ysVD6%2FwNhPrUJKsTDVr8OxOOlGxcv3His4UnQai6pHzyexUO8uN8%2FmnbWY3jwtjGr8QBdVm51gB8uJ2FodBoZXjEkx14XHdC7vdonk46pwCV1Pyi%2FDR2dCjlFm74V1LyVPd749roV2VupJYcGhCaN861xJy7Nn9CovSC6aKCMY9JsutWHPZDXhfkXn227evYLx1MPsOGqrekQ6fli4E%2FuNz14Dz%2F6N%2FEpnfcWQvriPWRa%2Fb14G3bTsNWbEq26LNOcxR9NBLFx8j%2BnNpnEl0u7LQtqWNC3JWI3ef7fNtjjrFAaPP%2B0nYXLPvmoghe%2BHJaWwk4uVBTsRp7StFoTcp0qPTgXf664Nxr2p5Rzo8yLmLXEaoPTj9diB7wd6fX7%2FyYDol%2FlLgYAcx87o4sWRrI5Nz9fnxgKT%2BM7vbasj%2BeQ%2FE3w52XBnISZib%2BnMGfnfGQfbcxob7Gk9HZvGsY4gwE3IxUH%2BEioAhEc51upAF%2BoE43MscC1kMCydDb9prfsk2no3icRClEpnBU9S6Auxh0CTyXMfMfKG%2BGEymecv74q1aoQ%2FlDo4f95SzDUrenNBjqkAeLBH6Ne9V%2Bobpz8FzeRnRVQZSPugQMZUNjrdtTTOV273oE17q3QxgXfM5npAMjm64HLsE3p%2FssHxjR7az4qOQQglza0T6csmJwOU8YXo5lP9nuAEgYZH209TC%2FwQcb0mrj19%2B8uSkOnIaD40yR1mCnHy7TEhsKyV7I4V7Olw6mhhA0uFQOJkrE0g%2B%2BaqnSlrzFtY32DgwncNbq1jnW98cOKvNRK&X-Amz-Signature=b841484c6eac68a0d7da6ccf5e68328ef8a3e563ebaff85919159ab390b23cb4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YW5Y62H5%2F20260318%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260318T085021Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQCCqn1OQj%2BriGnb3JZd5luyEJXMFiDDLByyQ81W4jmtsAIhAJPCD9Hkj2tD%2BS7hJIRuET0YhrTAtavqK2SR1AWLmkFXKv8DCAEQABoMNjM3NDIzMTgzODA1IgzKmw7v%2FniZQyJPg4Iq3AOKma18kJmMWgl%2BYeXi5zVQdxhv8GTZfteQSIxbzImK8RS0eMpNy6QgYmunI3h8dL67fr7ysVD6%2FwNhPrUJKsTDVr8OxOOlGxcv3His4UnQai6pHzyexUO8uN8%2FmnbWY3jwtjGr8QBdVm51gB8uJ2FodBoZXjEkx14XHdC7vdonk46pwCV1Pyi%2FDR2dCjlFm74V1LyVPd749roV2VupJYcGhCaN861xJy7Nn9CovSC6aKCMY9JsutWHPZDXhfkXn227evYLx1MPsOGqrekQ6fli4E%2FuNz14Dz%2F6N%2FEpnfcWQvriPWRa%2Fb14G3bTsNWbEq26LNOcxR9NBLFx8j%2BnNpnEl0u7LQtqWNC3JWI3ef7fNtjjrFAaPP%2B0nYXLPvmoghe%2BHJaWwk4uVBTsRp7StFoTcp0qPTgXf664Nxr2p5Rzo8yLmLXEaoPTj9diB7wd6fX7%2FyYDol%2FlLgYAcx87o4sWRrI5Nz9fnxgKT%2BM7vbasj%2BeQ%2FE3w52XBnISZib%2BnMGfnfGQfbcxob7Gk9HZvGsY4gwE3IxUH%2BEioAhEc51upAF%2BoE43MscC1kMCydDb9prfsk2no3icRClEpnBU9S6Auxh0CTyXMfMfKG%2BGEymecv74q1aoQ%2FlDo4f95SzDUrenNBjqkAeLBH6Ne9V%2Bobpz8FzeRnRVQZSPugQMZUNjrdtTTOV273oE17q3QxgXfM5npAMjm64HLsE3p%2FssHxjR7az4qOQQglza0T6csmJwOU8YXo5lP9nuAEgYZH209TC%2FwQcb0mrj19%2B8uSkOnIaD40yR1mCnHy7TEhsKyV7I4V7Olw6mhhA0uFQOJkrE0g%2B%2BaqnSlrzFtY32DgwncNbq1jnW98cOKvNRK&X-Amz-Signature=6e99a20b21bcfd125d8c165b45a7d7229eaaa05c551331fb5a211784013909aa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
