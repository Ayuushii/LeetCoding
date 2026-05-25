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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUZP32LU%2F20260525%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260525T115211Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDI41Qv%2B0PED%2FVE9ab3gnK1skPEZfiZoCqHqUtGEaf1vgIhALbASV2tJ%2FRx3RvWudFoWizmqf1fjYj33vPnw9hZlTUIKv8DCGIQABoMNjM3NDIzMTgzODA1IgyhvaiFVA60nB4l5kYq3AP0p7AKamjUcDrDv3jdAOP%2FZx%2BMTxvNYbMpx1Jai7NJo7LU%2BjolhNdXvZbT3wuNQ2laXi7By1Io2SqGAzaN2nQHPagJXfFNGLUbjxMEq%2BTo%2FteKknLL51ha8t%2BbMGR%2BZn7awpxifUNKGeXYIK0qf4HOAQ3H5EGhqFoLb6bJZjg8CvyBE1Zb9zAMcidXx3dpW3s5EV%2BGxLK4o61neKXvrWN1rfLV6KUNbG%2BxVwwGR1JL4TIOw%2BV3T2hRJo4a7z7kJjzxl8ukKUgIbdPbog4GsrwVbEdUCzHT8iZlNeF%2Fv3BqEjNeqiZvbplRXwgAlgxwRFODUb7jMuMFusyLvDe47kbVMuZ5LR12DUGBHjwrKHLMOfFKyyFGS16A6Z%2BNvaehb0CGVDUFxhp1giRxHHiVjtnSXFLc73ytDuxeZ4YdEDBLU8d%2BbA3A41cUpDnF%2BzhmR4ihmZLYV4ev3aLJ%2Bf7en8xZcUCGKbAb1BlR2sZKsU0g%2BMQ%2BAaPqTvEtG8%2Fbglm38EOMYbBCu42eFszRoYDOQYJTS4uJJva2YVNGvTI%2BhNMXBbJFmAtZlAbJqBBNu0DQHo7I%2BGx%2FGGQUsq3NttTIX7W2zeZOS0yvW%2B2avg9LhKOQf8FeCNNYXNLb7jnLkjDLjdDQBjqkAeDP5ZXzaQheEVUywdvjl8qJ6VBmdtfqz4WLl%2BGrAUZddNKLwflN8%2B5aQUrtB926CNvIbtlAySUGpz3HVyUUWTDqa9AMMnptNtQ0%2F2LlqCeonD4hHgthHJAz5NgTaYT0K%2Fqv6cCH6tMvwshr9Ckyygumc68yra9Ye37qY5oreR2J5I%2FbF8OLcR2BIv%2BokvudTfTbBoAzJMMSqxw6Zj0muv2jFCIP&X-Amz-Signature=4eb8b4c05d2fc5480d64756f9546b0dbd4ec07049827a60512ddb33e1684c21f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUZP32LU%2F20260525%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260525T115211Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDI41Qv%2B0PED%2FVE9ab3gnK1skPEZfiZoCqHqUtGEaf1vgIhALbASV2tJ%2FRx3RvWudFoWizmqf1fjYj33vPnw9hZlTUIKv8DCGIQABoMNjM3NDIzMTgzODA1IgyhvaiFVA60nB4l5kYq3AP0p7AKamjUcDrDv3jdAOP%2FZx%2BMTxvNYbMpx1Jai7NJo7LU%2BjolhNdXvZbT3wuNQ2laXi7By1Io2SqGAzaN2nQHPagJXfFNGLUbjxMEq%2BTo%2FteKknLL51ha8t%2BbMGR%2BZn7awpxifUNKGeXYIK0qf4HOAQ3H5EGhqFoLb6bJZjg8CvyBE1Zb9zAMcidXx3dpW3s5EV%2BGxLK4o61neKXvrWN1rfLV6KUNbG%2BxVwwGR1JL4TIOw%2BV3T2hRJo4a7z7kJjzxl8ukKUgIbdPbog4GsrwVbEdUCzHT8iZlNeF%2Fv3BqEjNeqiZvbplRXwgAlgxwRFODUb7jMuMFusyLvDe47kbVMuZ5LR12DUGBHjwrKHLMOfFKyyFGS16A6Z%2BNvaehb0CGVDUFxhp1giRxHHiVjtnSXFLc73ytDuxeZ4YdEDBLU8d%2BbA3A41cUpDnF%2BzhmR4ihmZLYV4ev3aLJ%2Bf7en8xZcUCGKbAb1BlR2sZKsU0g%2BMQ%2BAaPqTvEtG8%2Fbglm38EOMYbBCu42eFszRoYDOQYJTS4uJJva2YVNGvTI%2BhNMXBbJFmAtZlAbJqBBNu0DQHo7I%2BGx%2FGGQUsq3NttTIX7W2zeZOS0yvW%2B2avg9LhKOQf8FeCNNYXNLb7jnLkjDLjdDQBjqkAeDP5ZXzaQheEVUywdvjl8qJ6VBmdtfqz4WLl%2BGrAUZddNKLwflN8%2B5aQUrtB926CNvIbtlAySUGpz3HVyUUWTDqa9AMMnptNtQ0%2F2LlqCeonD4hHgthHJAz5NgTaYT0K%2Fqv6cCH6tMvwshr9Ckyygumc68yra9Ye37qY5oreR2J5I%2FbF8OLcR2BIv%2BokvudTfTbBoAzJMMSqxw6Zj0muv2jFCIP&X-Amz-Signature=36e8eb69f500f0b03695a914befc774ce0e385bf3d0e5e9388d3b064ed727e76&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUZP32LU%2F20260525%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260525T115211Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDI41Qv%2B0PED%2FVE9ab3gnK1skPEZfiZoCqHqUtGEaf1vgIhALbASV2tJ%2FRx3RvWudFoWizmqf1fjYj33vPnw9hZlTUIKv8DCGIQABoMNjM3NDIzMTgzODA1IgyhvaiFVA60nB4l5kYq3AP0p7AKamjUcDrDv3jdAOP%2FZx%2BMTxvNYbMpx1Jai7NJo7LU%2BjolhNdXvZbT3wuNQ2laXi7By1Io2SqGAzaN2nQHPagJXfFNGLUbjxMEq%2BTo%2FteKknLL51ha8t%2BbMGR%2BZn7awpxifUNKGeXYIK0qf4HOAQ3H5EGhqFoLb6bJZjg8CvyBE1Zb9zAMcidXx3dpW3s5EV%2BGxLK4o61neKXvrWN1rfLV6KUNbG%2BxVwwGR1JL4TIOw%2BV3T2hRJo4a7z7kJjzxl8ukKUgIbdPbog4GsrwVbEdUCzHT8iZlNeF%2Fv3BqEjNeqiZvbplRXwgAlgxwRFODUb7jMuMFusyLvDe47kbVMuZ5LR12DUGBHjwrKHLMOfFKyyFGS16A6Z%2BNvaehb0CGVDUFxhp1giRxHHiVjtnSXFLc73ytDuxeZ4YdEDBLU8d%2BbA3A41cUpDnF%2BzhmR4ihmZLYV4ev3aLJ%2Bf7en8xZcUCGKbAb1BlR2sZKsU0g%2BMQ%2BAaPqTvEtG8%2Fbglm38EOMYbBCu42eFszRoYDOQYJTS4uJJva2YVNGvTI%2BhNMXBbJFmAtZlAbJqBBNu0DQHo7I%2BGx%2FGGQUsq3NttTIX7W2zeZOS0yvW%2B2avg9LhKOQf8FeCNNYXNLb7jnLkjDLjdDQBjqkAeDP5ZXzaQheEVUywdvjl8qJ6VBmdtfqz4WLl%2BGrAUZddNKLwflN8%2B5aQUrtB926CNvIbtlAySUGpz3HVyUUWTDqa9AMMnptNtQ0%2F2LlqCeonD4hHgthHJAz5NgTaYT0K%2Fqv6cCH6tMvwshr9Ckyygumc68yra9Ye37qY5oreR2J5I%2FbF8OLcR2BIv%2BokvudTfTbBoAzJMMSqxw6Zj0muv2jFCIP&X-Amz-Signature=eae3f693d3b6ee67d7f10d108f3d1e8cabba135fe11c51c2d16ad76c5e10fd69&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLXG4DJJ%2F20260525%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260525T115211Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDnqnX44W4JDXQPboil6YpQumUKr4y6tLu28iHAKocWGQIgW3KEOHITSOnd43DFkbE5NmNzLRv1KfTHaEBWk8r%2BLDkq%2FwMIZRAAGgw2Mzc0MjMxODM4MDUiDIPEz%2Bgn4v%2FlZ5m3zircAw%2BhME1A0dmacmf5lyuJbNJ0RT0pWo5CSqfeOw0%2FGexPxEb4%2Fl5CuhZRY5NwyJ7cbWPwi%2F7yzPSYs0py%2BQCBn5A%2ByzTiBCS90ezS4g1T6RKn3oHcYk5ggkylI6LSg838J5JlYE8C7%2BpKcJauTs6SWj9bCYjSiI2qwSMx%2B5Wd4kxqQw0MeYUtFc5UYV0oAamBuGijnziGQH2MePeNd9dBkwi5aryIcK0ACLQTiAxSljdon4f6nu8Vp4oAi%2BxjuGdhPiDuSrZeyRi4foiw0z9gDoqIJlt2YvmD%2F4UdjziTLXHk9CitGNo1jAGOXd2mZM4qHv3pJ7L88x7hp4NvO2auk023rzuWeGZTXjZFSS5m852zpbXBj0pTvJwv%2FzhLLHnYXpwJxjiQu%2Fib3AmHbDUhi7U82hrlbyHpYK4cvd%2FPmp68o8Fzn7KMab8V2HCo2ty%2BAcpYXgedG%2FeTF6SBZQmuYanbgRsNWzSKCnK05HjJXtVUD1Qp3vM%2BnT9%2BtsZeWjn6%2B4f3taznY%2F52vWh4pfOiDFpZpCQSPyAO%2B0MP%2BXxBj6TszOB8qZaA%2BoBU7hgFTGZUSQPLKGRNRWV%2FcQh%2FSC4BOljM6KxLmF%2FD4LVrMWm9wN%2F6%2FQsg0LGNKIw4RSPvMK3n0NAGOqUB%2FUZFCOAojo8l8%2B%2Fm1AtmyMMK6bm3Z2tqTkJi2e4G6bvnL8W4yPwPuPW%2BiSRx0cn2OrUfqbgMeFuCwvEtOJPdbJI9myPKzqEpjNSm500bPgXl%2BsM8K4VG%2B%2BpZeyDPXUhD4Rf%2FPwapgzCzC9t%2FVWd28CX5VqmcnswK3brNkfiJ5%2FLyyZKUBNU%2BN0Wo6KODPakiJfWwxu59uGvDFsTaLcYwafrr%2Biyf&X-Amz-Signature=eed9b5762e84a9562d33eacf217ba7d808024122f738a20c090ea1a8570cbfb5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLXG4DJJ%2F20260525%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260525T115211Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDnqnX44W4JDXQPboil6YpQumUKr4y6tLu28iHAKocWGQIgW3KEOHITSOnd43DFkbE5NmNzLRv1KfTHaEBWk8r%2BLDkq%2FwMIZRAAGgw2Mzc0MjMxODM4MDUiDIPEz%2Bgn4v%2FlZ5m3zircAw%2BhME1A0dmacmf5lyuJbNJ0RT0pWo5CSqfeOw0%2FGexPxEb4%2Fl5CuhZRY5NwyJ7cbWPwi%2F7yzPSYs0py%2BQCBn5A%2ByzTiBCS90ezS4g1T6RKn3oHcYk5ggkylI6LSg838J5JlYE8C7%2BpKcJauTs6SWj9bCYjSiI2qwSMx%2B5Wd4kxqQw0MeYUtFc5UYV0oAamBuGijnziGQH2MePeNd9dBkwi5aryIcK0ACLQTiAxSljdon4f6nu8Vp4oAi%2BxjuGdhPiDuSrZeyRi4foiw0z9gDoqIJlt2YvmD%2F4UdjziTLXHk9CitGNo1jAGOXd2mZM4qHv3pJ7L88x7hp4NvO2auk023rzuWeGZTXjZFSS5m852zpbXBj0pTvJwv%2FzhLLHnYXpwJxjiQu%2Fib3AmHbDUhi7U82hrlbyHpYK4cvd%2FPmp68o8Fzn7KMab8V2HCo2ty%2BAcpYXgedG%2FeTF6SBZQmuYanbgRsNWzSKCnK05HjJXtVUD1Qp3vM%2BnT9%2BtsZeWjn6%2B4f3taznY%2F52vWh4pfOiDFpZpCQSPyAO%2B0MP%2BXxBj6TszOB8qZaA%2BoBU7hgFTGZUSQPLKGRNRWV%2FcQh%2FSC4BOljM6KxLmF%2FD4LVrMWm9wN%2F6%2FQsg0LGNKIw4RSPvMK3n0NAGOqUB%2FUZFCOAojo8l8%2B%2Fm1AtmyMMK6bm3Z2tqTkJi2e4G6bvnL8W4yPwPuPW%2BiSRx0cn2OrUfqbgMeFuCwvEtOJPdbJI9myPKzqEpjNSm500bPgXl%2BsM8K4VG%2B%2BpZeyDPXUhD4Rf%2FPwapgzCzC9t%2FVWd28CX5VqmcnswK3brNkfiJ5%2FLyyZKUBNU%2BN0Wo6KODPakiJfWwxu59uGvDFsTaLcYwafrr%2Biyf&X-Amz-Signature=56b2affba554e4d1a313d906dcfc6d454e7345e5eda1e1048dda505efb8039ae&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLXG4DJJ%2F20260525%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260525T115211Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDnqnX44W4JDXQPboil6YpQumUKr4y6tLu28iHAKocWGQIgW3KEOHITSOnd43DFkbE5NmNzLRv1KfTHaEBWk8r%2BLDkq%2FwMIZRAAGgw2Mzc0MjMxODM4MDUiDIPEz%2Bgn4v%2FlZ5m3zircAw%2BhME1A0dmacmf5lyuJbNJ0RT0pWo5CSqfeOw0%2FGexPxEb4%2Fl5CuhZRY5NwyJ7cbWPwi%2F7yzPSYs0py%2BQCBn5A%2ByzTiBCS90ezS4g1T6RKn3oHcYk5ggkylI6LSg838J5JlYE8C7%2BpKcJauTs6SWj9bCYjSiI2qwSMx%2B5Wd4kxqQw0MeYUtFc5UYV0oAamBuGijnziGQH2MePeNd9dBkwi5aryIcK0ACLQTiAxSljdon4f6nu8Vp4oAi%2BxjuGdhPiDuSrZeyRi4foiw0z9gDoqIJlt2YvmD%2F4UdjziTLXHk9CitGNo1jAGOXd2mZM4qHv3pJ7L88x7hp4NvO2auk023rzuWeGZTXjZFSS5m852zpbXBj0pTvJwv%2FzhLLHnYXpwJxjiQu%2Fib3AmHbDUhi7U82hrlbyHpYK4cvd%2FPmp68o8Fzn7KMab8V2HCo2ty%2BAcpYXgedG%2FeTF6SBZQmuYanbgRsNWzSKCnK05HjJXtVUD1Qp3vM%2BnT9%2BtsZeWjn6%2B4f3taznY%2F52vWh4pfOiDFpZpCQSPyAO%2B0MP%2BXxBj6TszOB8qZaA%2BoBU7hgFTGZUSQPLKGRNRWV%2FcQh%2FSC4BOljM6KxLmF%2FD4LVrMWm9wN%2F6%2FQsg0LGNKIw4RSPvMK3n0NAGOqUB%2FUZFCOAojo8l8%2B%2Fm1AtmyMMK6bm3Z2tqTkJi2e4G6bvnL8W4yPwPuPW%2BiSRx0cn2OrUfqbgMeFuCwvEtOJPdbJI9myPKzqEpjNSm500bPgXl%2BsM8K4VG%2B%2BpZeyDPXUhD4Rf%2FPwapgzCzC9t%2FVWd28CX5VqmcnswK3brNkfiJ5%2FLyyZKUBNU%2BN0Wo6KODPakiJfWwxu59uGvDFsTaLcYwafrr%2Biyf&X-Amz-Signature=6f4197b4fcc95968bea322d27028400e1bc752ba383290ac153c1cffab06dd33&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLXG4DJJ%2F20260525%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260525T115211Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDnqnX44W4JDXQPboil6YpQumUKr4y6tLu28iHAKocWGQIgW3KEOHITSOnd43DFkbE5NmNzLRv1KfTHaEBWk8r%2BLDkq%2FwMIZRAAGgw2Mzc0MjMxODM4MDUiDIPEz%2Bgn4v%2FlZ5m3zircAw%2BhME1A0dmacmf5lyuJbNJ0RT0pWo5CSqfeOw0%2FGexPxEb4%2Fl5CuhZRY5NwyJ7cbWPwi%2F7yzPSYs0py%2BQCBn5A%2ByzTiBCS90ezS4g1T6RKn3oHcYk5ggkylI6LSg838J5JlYE8C7%2BpKcJauTs6SWj9bCYjSiI2qwSMx%2B5Wd4kxqQw0MeYUtFc5UYV0oAamBuGijnziGQH2MePeNd9dBkwi5aryIcK0ACLQTiAxSljdon4f6nu8Vp4oAi%2BxjuGdhPiDuSrZeyRi4foiw0z9gDoqIJlt2YvmD%2F4UdjziTLXHk9CitGNo1jAGOXd2mZM4qHv3pJ7L88x7hp4NvO2auk023rzuWeGZTXjZFSS5m852zpbXBj0pTvJwv%2FzhLLHnYXpwJxjiQu%2Fib3AmHbDUhi7U82hrlbyHpYK4cvd%2FPmp68o8Fzn7KMab8V2HCo2ty%2BAcpYXgedG%2FeTF6SBZQmuYanbgRsNWzSKCnK05HjJXtVUD1Qp3vM%2BnT9%2BtsZeWjn6%2B4f3taznY%2F52vWh4pfOiDFpZpCQSPyAO%2B0MP%2BXxBj6TszOB8qZaA%2BoBU7hgFTGZUSQPLKGRNRWV%2FcQh%2FSC4BOljM6KxLmF%2FD4LVrMWm9wN%2F6%2FQsg0LGNKIw4RSPvMK3n0NAGOqUB%2FUZFCOAojo8l8%2B%2Fm1AtmyMMK6bm3Z2tqTkJi2e4G6bvnL8W4yPwPuPW%2BiSRx0cn2OrUfqbgMeFuCwvEtOJPdbJI9myPKzqEpjNSm500bPgXl%2BsM8K4VG%2B%2BpZeyDPXUhD4Rf%2FPwapgzCzC9t%2FVWd28CX5VqmcnswK3brNkfiJ5%2FLyyZKUBNU%2BN0Wo6KODPakiJfWwxu59uGvDFsTaLcYwafrr%2Biyf&X-Amz-Signature=52ea566f2a3a12a13d983086c037084eb01e8e33185d2e111a2c2715dcbce95c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TO4KGDWF%2F20260525%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260525T115212Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAfx%2BDpTBPNUWdrhoHrIktnk4yhifDigdmGp0osGUBQsAiAU%2BmNtuENBAucGibiYVD3Dc3Ai44pTKqkKYf7CXs8nHir%2FAwhhEAAaDDYzNzQyMzE4MzgwNSIMApSwfAeATqmn90haKtwDqFuiOhbQVKjx5oos3sDzee%2B6E5%2BfZdjzwO4mVClQhxdbYRZvfacFDtp1cbdwMjR5YsTdBln3tjJwJnJpuzUgAVFJGSyCJcIDBaPw7GTtn91Iqqa03iRiZLp%2BGg8TB9BH8b7hdyB996BGEsHkYTJG5cWLnhRPpQO6j7Gpo8uxly1EEay0rkeoO7x6pQ7FBf1SnurV7H7VDdI1G4aiwX27Xc%2BRIQ0u0vEkPVGjLWR9srDiHKwyMXWnaFskWbq7P7BPlwtVn43PZ3c7ButCpesbLOfp7WR%2Fp%2Bbt4YwDygIwwhb1uNBuyLYk%2F1B3N6ccRvRf%2BasSYSfgSywn44smKMImRt4v8pIOmc97hSUnJUfE64mGx3Ynwt7ILqaODZ3KZyPhDQWJgjUZR8DJ4wMUnbhHjJmldHqMu4RFLgeRQpbatt0W%2FGCwkxXBkcdxBmVQCeb8P52nW5rijJRae1ws4gYldUoGR6sCo7qsVuS03tJJ1TmyJN7%2F2upEpW78BASpkRRQWCWA%2Bg8noXoKfBTzkH%2FxKvBWV50K%2BOz9n7%2FeL8cdinq%2FqVeFnXvlJ3oa4mq1HhATzLGnuletbSjT6JsC0eSpH0HkJekdGs0TATBhnFBxxKkbFCJ5OL89XCRTr9cwqo3Q0AY6pgH97kpyeSpjM2odCO8O%2FOiUp%2F8tlIFeoe%2F%2F1F%2FxPFD0yTTAiKf2C0nhQlbhOajO7nv51keZU2nJaRva93HBQhp86u%2Bnm4IsrXtGtGLDOIqfFg1L53mYTweFbIMdCv7%2F4LyK34UU2%2FFxRJrvIsJPWKdhZMWdpah8r8SAwDn8kJguep5PfA8M4hlnQegCu15rYPr7nQ6Rao8VoASrokpMeUYE3%2FtkhPJj&X-Amz-Signature=91bd487385195070d53557bab89f8cda4bbd36781f57fa17fcbd2505871b23fb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665Q5JKQKE%2F20260525%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260525T115212Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDHesbuQ%2BEi4wdltja20d0B52%2FFsumvhqSKTTiw0%2F5BLAIhAKK7GyRul9qS64ae9Up5KJevtIpJU617iKOTb0mzWCkxKv8DCGIQABoMNjM3NDIzMTgzODA1IgybPg8RvWPI%2FMKltDkq3AOqUMoyKRa1lvkuijt%2FlEUfW5YzwPhwSeVEkFKZPYW0%2Byzb9LZL1d%2BHtAsRsrDR8ogav5ZgxZSw9H%2FH3396sLpotFg4NViWhj3KpBOuvPuanYAE%2FW9cRbIdN1e2NTtKOtk81EEvJ53qkHX1BuBXO%2Fa0Hy%2F4k65YZuk0K729w1DlvFbQT0sgdGEzjcVO6zjXy9OK%2BHL9v6whJn7XLMKSxSU6nWVT%2FmlUnNvyc%2BM9ZhB4BBEM8ezr1AKhKxLRN8nk392mRk6D9SPKDCeYXDDLd1sFndHghzrRsadLIbNMt9UTy4VTOPqb9Jxi%2BInfwSNrVFPwUSYeeqwD1VYP6YQ2SWmCHYJVxUqL%2BeBJLV6vTk4ABUyou%2BteR%2BZwgH%2FKrkHqE30P1t%2F6OgOLxIIZgBvrqwTwgI74Tb5Je1IiFlE2%2FQC4y16k%2BZYIMFjBA7OAgp4pg3keXUxaY9ASVX4piEhktI6LMuPhU1YBqTBrjEnQ89jyLipveKu73LDx7TTRs8CPn6RvHfQdmoZaNzHA5vclROL4imUUEDyL7ZjleXA8IuJ2%2BZ4C1uZj7TKJGnFw%2BijN1IcS22UdOHwMQLt%2ByQKp7%2ByeGvMglGrRFHaKkfBVQAHAL%2B4Wzhxv3dTvHPa7ujDNj9DQBjqkAVY59MsLn7H%2FOt0QOu6yKRvPtwhqGmqpeC%2FujZUEEuiq4VtevO1yGV4o2RLe8P8uAvIaLAHAXz7sZkc0MOFJtMu5Vy1y3CmwWhwapVWQ940SzR%2BDFOKdiQwHvViXLN2W8FQKkASMA8PwdbkC6y3DlX7A6hbeloxvlE1ih1cLKRpLBZp9xx9I8Mu5iVP7faLq67QEmopdS4CJokwsKToyLFUbyOJO&X-Amz-Signature=aa6198b240a1f2e07ad93f4a65e713a9f483eee6e737047b25183b28cdd13623&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665Q5JKQKE%2F20260525%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260525T115212Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDHesbuQ%2BEi4wdltja20d0B52%2FFsumvhqSKTTiw0%2F5BLAIhAKK7GyRul9qS64ae9Up5KJevtIpJU617iKOTb0mzWCkxKv8DCGIQABoMNjM3NDIzMTgzODA1IgybPg8RvWPI%2FMKltDkq3AOqUMoyKRa1lvkuijt%2FlEUfW5YzwPhwSeVEkFKZPYW0%2Byzb9LZL1d%2BHtAsRsrDR8ogav5ZgxZSw9H%2FH3396sLpotFg4NViWhj3KpBOuvPuanYAE%2FW9cRbIdN1e2NTtKOtk81EEvJ53qkHX1BuBXO%2Fa0Hy%2F4k65YZuk0K729w1DlvFbQT0sgdGEzjcVO6zjXy9OK%2BHL9v6whJn7XLMKSxSU6nWVT%2FmlUnNvyc%2BM9ZhB4BBEM8ezr1AKhKxLRN8nk392mRk6D9SPKDCeYXDDLd1sFndHghzrRsadLIbNMt9UTy4VTOPqb9Jxi%2BInfwSNrVFPwUSYeeqwD1VYP6YQ2SWmCHYJVxUqL%2BeBJLV6vTk4ABUyou%2BteR%2BZwgH%2FKrkHqE30P1t%2F6OgOLxIIZgBvrqwTwgI74Tb5Je1IiFlE2%2FQC4y16k%2BZYIMFjBA7OAgp4pg3keXUxaY9ASVX4piEhktI6LMuPhU1YBqTBrjEnQ89jyLipveKu73LDx7TTRs8CPn6RvHfQdmoZaNzHA5vclROL4imUUEDyL7ZjleXA8IuJ2%2BZ4C1uZj7TKJGnFw%2BijN1IcS22UdOHwMQLt%2ByQKp7%2ByeGvMglGrRFHaKkfBVQAHAL%2B4Wzhxv3dTvHPa7ujDNj9DQBjqkAVY59MsLn7H%2FOt0QOu6yKRvPtwhqGmqpeC%2FujZUEEuiq4VtevO1yGV4o2RLe8P8uAvIaLAHAXz7sZkc0MOFJtMu5Vy1y3CmwWhwapVWQ940SzR%2BDFOKdiQwHvViXLN2W8FQKkASMA8PwdbkC6y3DlX7A6hbeloxvlE1ih1cLKRpLBZp9xx9I8Mu5iVP7faLq67QEmopdS4CJokwsKToyLFUbyOJO&X-Amz-Signature=5f17da9dea705e96a0e3fe3739fdd40d90b73118729192963fe6e97a4131a77e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
