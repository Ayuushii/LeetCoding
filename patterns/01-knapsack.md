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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R4EO63PO%2F20260503%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260503T092114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFDpfzzrTpJBqS3gWiFXU%2Bb9ECiRCIxzY1i5plBiN4a1AiEA9M5q7a%2F5l2WYoxv4Mdeqlau%2FA1tw1CTFyPqA8mMF1ecq%2FwMIUhAAGgw2Mzc0MjMxODM4MDUiDB6JvJCCc3oOwReYbyrcA3FKyUfgw5AS8wE8eNFmdYZtGBt3lLykpebpySnFf29r04j4yz7KnChlaF3iHS0XevBpjZMiWq67YtmWwibIfel7VilNMJYPWyWD0UlmVlcHEG%2FHNabLBCNCunLWlkn3n%2BIJ4%2B8zvY5iJU1okGKF9ZlmSG7C0PfCpEe8Z2chp02FBuZXj8YX3%2FAYky8RLdbvrdjmizXcZ7WjOHQ5T4eR5Fx%2F19BVFfatd6Fs5StvAYZJRLBcDnxZR%2FB5WjWj%2FXLWVoeNSiiEkeP3ka7ttVh%2BW5wdigESCKcsod2Rg9YaC0Iz9OTZaajEUk93mqg%2FOfS6tKeOOpJv92pWhRxp3QeJM1Oz0fvdaWi61oXC%2FQlAufMOd4Ej7B8Ms7jDp0QVc%2Bsnhtwfg67SARG%2BJA8jsN%2BC0PdQFpVFqGIvbaBAKwQzim3CfaAhRwyFST5seYOAYWv98iH2iVipISRl30%2FCqZBQ6sSb1LUZTzUY2EabuBJNGf%2BrlbeOy0x8coNk0V%2FvQwXOMQTWYCFgIQFvTvdUlSzZ1FZNc%2FYTPLKLXObosapxh7ljJ62xlrc9IOW2TXhzmUqUFlwW1VbkBlawRUhmSkVGuy1fBJRmjCFCDVLH%2FQFNAWO0b6wRkjqnV5Hc9Zb8MKmU3M8GOqUBwh%2FZ4lDAXGohCIQXHbrpyZ4Fwd%2FyG4mbNQvrz%2FVqiraPuYYth4wDSKSik%2Bl7NwP8OB6NW8pcLmuEANzUz7VrhpWh0C9hXv1mIxqBcxEUTI%2F8bewyK7tqQiYqfYIHgOOR7Ip1IOJqw52SkY5PEB9aCA1OaYjyl3ZTKcBOVf9Sf7XuDsWCR4XM5ZiATbdvtNbOPmUHj3euFMtzT9pd8v4BFushcFRV&X-Amz-Signature=16713fdfbcba5d225793b2e942a5268900ede0635cc3945f99be2e6e3c0b1003&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R4EO63PO%2F20260503%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260503T092114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFDpfzzrTpJBqS3gWiFXU%2Bb9ECiRCIxzY1i5plBiN4a1AiEA9M5q7a%2F5l2WYoxv4Mdeqlau%2FA1tw1CTFyPqA8mMF1ecq%2FwMIUhAAGgw2Mzc0MjMxODM4MDUiDB6JvJCCc3oOwReYbyrcA3FKyUfgw5AS8wE8eNFmdYZtGBt3lLykpebpySnFf29r04j4yz7KnChlaF3iHS0XevBpjZMiWq67YtmWwibIfel7VilNMJYPWyWD0UlmVlcHEG%2FHNabLBCNCunLWlkn3n%2BIJ4%2B8zvY5iJU1okGKF9ZlmSG7C0PfCpEe8Z2chp02FBuZXj8YX3%2FAYky8RLdbvrdjmizXcZ7WjOHQ5T4eR5Fx%2F19BVFfatd6Fs5StvAYZJRLBcDnxZR%2FB5WjWj%2FXLWVoeNSiiEkeP3ka7ttVh%2BW5wdigESCKcsod2Rg9YaC0Iz9OTZaajEUk93mqg%2FOfS6tKeOOpJv92pWhRxp3QeJM1Oz0fvdaWi61oXC%2FQlAufMOd4Ej7B8Ms7jDp0QVc%2Bsnhtwfg67SARG%2BJA8jsN%2BC0PdQFpVFqGIvbaBAKwQzim3CfaAhRwyFST5seYOAYWv98iH2iVipISRl30%2FCqZBQ6sSb1LUZTzUY2EabuBJNGf%2BrlbeOy0x8coNk0V%2FvQwXOMQTWYCFgIQFvTvdUlSzZ1FZNc%2FYTPLKLXObosapxh7ljJ62xlrc9IOW2TXhzmUqUFlwW1VbkBlawRUhmSkVGuy1fBJRmjCFCDVLH%2FQFNAWO0b6wRkjqnV5Hc9Zb8MKmU3M8GOqUBwh%2FZ4lDAXGohCIQXHbrpyZ4Fwd%2FyG4mbNQvrz%2FVqiraPuYYth4wDSKSik%2Bl7NwP8OB6NW8pcLmuEANzUz7VrhpWh0C9hXv1mIxqBcxEUTI%2F8bewyK7tqQiYqfYIHgOOR7Ip1IOJqw52SkY5PEB9aCA1OaYjyl3ZTKcBOVf9Sf7XuDsWCR4XM5ZiATbdvtNbOPmUHj3euFMtzT9pd8v4BFushcFRV&X-Amz-Signature=2b84bf81227280c697db0f08bfe7299e2aeec86ebe7bb4434c99f038c11c852b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R4EO63PO%2F20260503%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260503T092114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFDpfzzrTpJBqS3gWiFXU%2Bb9ECiRCIxzY1i5plBiN4a1AiEA9M5q7a%2F5l2WYoxv4Mdeqlau%2FA1tw1CTFyPqA8mMF1ecq%2FwMIUhAAGgw2Mzc0MjMxODM4MDUiDB6JvJCCc3oOwReYbyrcA3FKyUfgw5AS8wE8eNFmdYZtGBt3lLykpebpySnFf29r04j4yz7KnChlaF3iHS0XevBpjZMiWq67YtmWwibIfel7VilNMJYPWyWD0UlmVlcHEG%2FHNabLBCNCunLWlkn3n%2BIJ4%2B8zvY5iJU1okGKF9ZlmSG7C0PfCpEe8Z2chp02FBuZXj8YX3%2FAYky8RLdbvrdjmizXcZ7WjOHQ5T4eR5Fx%2F19BVFfatd6Fs5StvAYZJRLBcDnxZR%2FB5WjWj%2FXLWVoeNSiiEkeP3ka7ttVh%2BW5wdigESCKcsod2Rg9YaC0Iz9OTZaajEUk93mqg%2FOfS6tKeOOpJv92pWhRxp3QeJM1Oz0fvdaWi61oXC%2FQlAufMOd4Ej7B8Ms7jDp0QVc%2Bsnhtwfg67SARG%2BJA8jsN%2BC0PdQFpVFqGIvbaBAKwQzim3CfaAhRwyFST5seYOAYWv98iH2iVipISRl30%2FCqZBQ6sSb1LUZTzUY2EabuBJNGf%2BrlbeOy0x8coNk0V%2FvQwXOMQTWYCFgIQFvTvdUlSzZ1FZNc%2FYTPLKLXObosapxh7ljJ62xlrc9IOW2TXhzmUqUFlwW1VbkBlawRUhmSkVGuy1fBJRmjCFCDVLH%2FQFNAWO0b6wRkjqnV5Hc9Zb8MKmU3M8GOqUBwh%2FZ4lDAXGohCIQXHbrpyZ4Fwd%2FyG4mbNQvrz%2FVqiraPuYYth4wDSKSik%2Bl7NwP8OB6NW8pcLmuEANzUz7VrhpWh0C9hXv1mIxqBcxEUTI%2F8bewyK7tqQiYqfYIHgOOR7Ip1IOJqw52SkY5PEB9aCA1OaYjyl3ZTKcBOVf9Sf7XuDsWCR4XM5ZiATbdvtNbOPmUHj3euFMtzT9pd8v4BFushcFRV&X-Amz-Signature=f52ae59a1916c4cec973c164b8b401f4290cb241825c9a9c92c10352d2e6f7b0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666D4HM53Y%2F20260503%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260503T092114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG9RPyOtk%2FlynGJBq7Vf9ddHcyWcVVhbs6ZNMWi4coxMAiEA%2BAOCCPnmULcgmIigDUPfNwvLc8zKku%2BYKNpQ2UU4jr8q%2FwMIUhAAGgw2Mzc0MjMxODM4MDUiDEXFKWSh0NE1faBGtyrcA7YTb%2BmjLpJsNNBIcruI2XXGzMbpM3lx0R4%2FicLnwJxr%2FJ3NXyktdVuBa9Pt89Ap0MuBTVwyFQdBqYFHGRO1c2xMc6pSZ10FG4VLHgg22y0gGLLPLDYUf74uP2GqYsUtiNgbGIu46AK4UHyzKoaeq27lsdxM9fq19mJFf9uwcFhqhvTTEq%2FkUNUQQEaDcVVhTLRuIPJAHXbjqkYmK3fQQxBx3RX%2FNeuC55uBorFnEYBBJMlm6sKlF9MsXjKLsBw3OZ58zNddKnJcS7cbsWRkvDulmSuCIS9vpMuoVcNVSHc2JuwuLE5O1pMfXqKiG9cLMYPfAcPKobNr8qYYf%2B1pqNo8sQXgOe7XgoORfUqbeffCDN108vR3YZh5Zo0nkcht1%2FWfdPuLYzSPA2dmuqZK6x4Te10BrkEbLchXoNQTtGTdEggQjNRkqvuri3cbaZWeFgDkmVARW1mJsA9WLWK09SXoXJ%2Blb8bYGVDkBNAbW8N532B1P8P0e32Lj499ES%2FuCAMtbfCmJTHyT8DZsYFZwl9CBUioPmHpNrjSAVTXt%2Bizx8K8qYB6jVZEawLg0QVfWyH1pFVT4PRLLSFR9Q4hAsfu17t03hG%2B6y78HnrNipntD9FbXbMZz0T0IIXHMLmV3M8GOqUBOScO3qqvERpjdvrWSGsxS%2BTGpJybudmSFCxvmypGXdBxWdRvZtDYmK1lMfp4tWJBrBtxYnvTB%2B1i08GLy0SlLTBAzirC6LgMgpxIwbd3YyQigaDrR3Kyhbt2p%2F14U9iRKE5MuKSjO6IAB86R0T84OQHAbyFkCjxFaFNqiQaAbSPdv2DYhbUD6Bte9K57uHaQrZ79wGkfRUwHSYEUFOg7kD3IOlIp&X-Amz-Signature=c7f278886bee1a22c8c58f8d906010aa72a648a15eed1d2a42c78ba7258c5b69&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666D4HM53Y%2F20260503%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260503T092114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG9RPyOtk%2FlynGJBq7Vf9ddHcyWcVVhbs6ZNMWi4coxMAiEA%2BAOCCPnmULcgmIigDUPfNwvLc8zKku%2BYKNpQ2UU4jr8q%2FwMIUhAAGgw2Mzc0MjMxODM4MDUiDEXFKWSh0NE1faBGtyrcA7YTb%2BmjLpJsNNBIcruI2XXGzMbpM3lx0R4%2FicLnwJxr%2FJ3NXyktdVuBa9Pt89Ap0MuBTVwyFQdBqYFHGRO1c2xMc6pSZ10FG4VLHgg22y0gGLLPLDYUf74uP2GqYsUtiNgbGIu46AK4UHyzKoaeq27lsdxM9fq19mJFf9uwcFhqhvTTEq%2FkUNUQQEaDcVVhTLRuIPJAHXbjqkYmK3fQQxBx3RX%2FNeuC55uBorFnEYBBJMlm6sKlF9MsXjKLsBw3OZ58zNddKnJcS7cbsWRkvDulmSuCIS9vpMuoVcNVSHc2JuwuLE5O1pMfXqKiG9cLMYPfAcPKobNr8qYYf%2B1pqNo8sQXgOe7XgoORfUqbeffCDN108vR3YZh5Zo0nkcht1%2FWfdPuLYzSPA2dmuqZK6x4Te10BrkEbLchXoNQTtGTdEggQjNRkqvuri3cbaZWeFgDkmVARW1mJsA9WLWK09SXoXJ%2Blb8bYGVDkBNAbW8N532B1P8P0e32Lj499ES%2FuCAMtbfCmJTHyT8DZsYFZwl9CBUioPmHpNrjSAVTXt%2Bizx8K8qYB6jVZEawLg0QVfWyH1pFVT4PRLLSFR9Q4hAsfu17t03hG%2B6y78HnrNipntD9FbXbMZz0T0IIXHMLmV3M8GOqUBOScO3qqvERpjdvrWSGsxS%2BTGpJybudmSFCxvmypGXdBxWdRvZtDYmK1lMfp4tWJBrBtxYnvTB%2B1i08GLy0SlLTBAzirC6LgMgpxIwbd3YyQigaDrR3Kyhbt2p%2F14U9iRKE5MuKSjO6IAB86R0T84OQHAbyFkCjxFaFNqiQaAbSPdv2DYhbUD6Bte9K57uHaQrZ79wGkfRUwHSYEUFOg7kD3IOlIp&X-Amz-Signature=0bac99da89f32f82be428ea99abb306d86487230b4e16b919d9978d86ea113f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666D4HM53Y%2F20260503%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260503T092114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG9RPyOtk%2FlynGJBq7Vf9ddHcyWcVVhbs6ZNMWi4coxMAiEA%2BAOCCPnmULcgmIigDUPfNwvLc8zKku%2BYKNpQ2UU4jr8q%2FwMIUhAAGgw2Mzc0MjMxODM4MDUiDEXFKWSh0NE1faBGtyrcA7YTb%2BmjLpJsNNBIcruI2XXGzMbpM3lx0R4%2FicLnwJxr%2FJ3NXyktdVuBa9Pt89Ap0MuBTVwyFQdBqYFHGRO1c2xMc6pSZ10FG4VLHgg22y0gGLLPLDYUf74uP2GqYsUtiNgbGIu46AK4UHyzKoaeq27lsdxM9fq19mJFf9uwcFhqhvTTEq%2FkUNUQQEaDcVVhTLRuIPJAHXbjqkYmK3fQQxBx3RX%2FNeuC55uBorFnEYBBJMlm6sKlF9MsXjKLsBw3OZ58zNddKnJcS7cbsWRkvDulmSuCIS9vpMuoVcNVSHc2JuwuLE5O1pMfXqKiG9cLMYPfAcPKobNr8qYYf%2B1pqNo8sQXgOe7XgoORfUqbeffCDN108vR3YZh5Zo0nkcht1%2FWfdPuLYzSPA2dmuqZK6x4Te10BrkEbLchXoNQTtGTdEggQjNRkqvuri3cbaZWeFgDkmVARW1mJsA9WLWK09SXoXJ%2Blb8bYGVDkBNAbW8N532B1P8P0e32Lj499ES%2FuCAMtbfCmJTHyT8DZsYFZwl9CBUioPmHpNrjSAVTXt%2Bizx8K8qYB6jVZEawLg0QVfWyH1pFVT4PRLLSFR9Q4hAsfu17t03hG%2B6y78HnrNipntD9FbXbMZz0T0IIXHMLmV3M8GOqUBOScO3qqvERpjdvrWSGsxS%2BTGpJybudmSFCxvmypGXdBxWdRvZtDYmK1lMfp4tWJBrBtxYnvTB%2B1i08GLy0SlLTBAzirC6LgMgpxIwbd3YyQigaDrR3Kyhbt2p%2F14U9iRKE5MuKSjO6IAB86R0T84OQHAbyFkCjxFaFNqiQaAbSPdv2DYhbUD6Bte9K57uHaQrZ79wGkfRUwHSYEUFOg7kD3IOlIp&X-Amz-Signature=518929773f5124ad45ec5bc2f51377f8dd65a11609a8795a90a077adf40c0835&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666D4HM53Y%2F20260503%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260503T092114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG9RPyOtk%2FlynGJBq7Vf9ddHcyWcVVhbs6ZNMWi4coxMAiEA%2BAOCCPnmULcgmIigDUPfNwvLc8zKku%2BYKNpQ2UU4jr8q%2FwMIUhAAGgw2Mzc0MjMxODM4MDUiDEXFKWSh0NE1faBGtyrcA7YTb%2BmjLpJsNNBIcruI2XXGzMbpM3lx0R4%2FicLnwJxr%2FJ3NXyktdVuBa9Pt89Ap0MuBTVwyFQdBqYFHGRO1c2xMc6pSZ10FG4VLHgg22y0gGLLPLDYUf74uP2GqYsUtiNgbGIu46AK4UHyzKoaeq27lsdxM9fq19mJFf9uwcFhqhvTTEq%2FkUNUQQEaDcVVhTLRuIPJAHXbjqkYmK3fQQxBx3RX%2FNeuC55uBorFnEYBBJMlm6sKlF9MsXjKLsBw3OZ58zNddKnJcS7cbsWRkvDulmSuCIS9vpMuoVcNVSHc2JuwuLE5O1pMfXqKiG9cLMYPfAcPKobNr8qYYf%2B1pqNo8sQXgOe7XgoORfUqbeffCDN108vR3YZh5Zo0nkcht1%2FWfdPuLYzSPA2dmuqZK6x4Te10BrkEbLchXoNQTtGTdEggQjNRkqvuri3cbaZWeFgDkmVARW1mJsA9WLWK09SXoXJ%2Blb8bYGVDkBNAbW8N532B1P8P0e32Lj499ES%2FuCAMtbfCmJTHyT8DZsYFZwl9CBUioPmHpNrjSAVTXt%2Bizx8K8qYB6jVZEawLg0QVfWyH1pFVT4PRLLSFR9Q4hAsfu17t03hG%2B6y78HnrNipntD9FbXbMZz0T0IIXHMLmV3M8GOqUBOScO3qqvERpjdvrWSGsxS%2BTGpJybudmSFCxvmypGXdBxWdRvZtDYmK1lMfp4tWJBrBtxYnvTB%2B1i08GLy0SlLTBAzirC6LgMgpxIwbd3YyQigaDrR3Kyhbt2p%2F14U9iRKE5MuKSjO6IAB86R0T84OQHAbyFkCjxFaFNqiQaAbSPdv2DYhbUD6Bte9K57uHaQrZ79wGkfRUwHSYEUFOg7kD3IOlIp&X-Amz-Signature=703320da7632ab0cf25b3936b73a2a8a5dceac367c2064eb9a78df2624d7d9d2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46644BQ4GVL%2F20260503%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260503T092115Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDRhn6Vdr7Y1yiIJYK9TYhtl%2BUIzGpomNHD5mvRJb3w9gIhAPCcXWPcKpVMdTsEiSXKf8nT%2BKFH7TunP9bocUXEjNmwKv8DCFIQABoMNjM3NDIzMTgzODA1Igw5svOFJpt6ADd7N%2Fcq3ANJxUBiuNFnhz2vct7T6BsuvyPbIAXeVlKRZZpRmCgYZba0bT%2Byi0v6ovXhIMmnXCgLWNB5T0v%2F204MFay48l69CJ1B8iP%2BUbhN4gL25cJT1W0gB9wMS7AX9lf4p82EyLcc6qnqhfnjvrfbpxTsUPPjYdecUq9VxQyaeGNppePyFESIYFbLb%2B1NEOvLhN5INXd0GpoD3kf2h6VW2bD7V3cGUZlpA4JzmjusTkIzkZg%2F9u0%2Fns5n0YM5WX0WK1fMEmZ4EMK%2BY%2BTmACQXK3T7g9qxTy64weyM41BMouSz%2B8mfIJlD1uwMF%2FNl4cAngmh2g%2FR19V%2F%2Ba4eAOdbBPvD7%2Bo1IXNL7CCjQSD8fddAK%2FzFLTQ70TVFc2bbE%2F72ef3cLWvlAjjeWyuH4BQ5Xk3ML8DayJYwXwcGnI3z2gbZ37snmFZuxuqTNXs2GfXGx3WFhYQm5HIKz%2F%2FI1dwCzr5vAQ%2F05JzMbQe4RcItbH%2B27wG4lCMpnPxuy8o2A3wOiCZ7HsILPvVfsIn7SIqX7BFYonfbYrSriNl217mghFekO9kCFPKaxE73wxWr7%2BPd1KJVXioqcfWEkizui2UO0IFbMTWpixiQ9WOKYI%2F16QL6s%2FNhoH%2FWsvcO%2FaDrNtVE%2BSzDCldzPBjqkARdUURoaIXNg2mIt%2FTVpxG8K8EXo4gBzctcrcUuy7qmsqsRvXcXxsKBH8ri4Plhf5pc8aK4dJK5LAklmDjM4gQIjHHz%2Fx9EIcfGaImT7I5kM58M3CQrdHh3%2FYBP7aXWsJUpOUZ%2FujuJx2sIQmxhtYXcF5r3mxh5qXUhkjfeEsTZdJYWGcmWuQ9Y%2BtQf4EzwYo8y09XwB1aPt4UwUpEWoqNXQm9gx&X-Amz-Signature=851bc25ca27f38112255dc2642038d590220773d74523c47c5aa9894d5263654&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WM2MU6WH%2F20260503%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260503T092116Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDQ5QPEz5aY901GX9J8rs9yIz1G2LXzdjed1%2BMb0iDtIAiEAqOQZB8TQismwfVVOlz58ET5wmF7vIq3p2Q8cu0uQAkwq%2FwMIUhAAGgw2Mzc0MjMxODM4MDUiDPDCbqdHqufew5Pn2yrcA2tw11iGT7pVPWxN7EIbuz6jvw2yCNkH5TCYhWYxH9ffoMoZXs25TO0q1NMJ7wQkzjuIBdoUcNYYAJKd3EsjipJB0cK3Ttv7eYGpnSkm%2FPAYURjidPwUIGqz5ma84Tii6PJl4NmEG1%2Bn3vVekvB9gWw1fYdzt%2BnYY2psEpvwtJ3Pe1nMxRRAhVC3DjneqUB0tCs%2FA3sIHcCYlIHf75xCrv2vRU8RKa%2BnfIEOJNzijw0s4Zp%2FZwDg5t15%2FZ55GsuOyZg170tjmawhjXdX2WCBMUw1yM9Qzuu5p4oEvZ%2BitANmGJTAPKVFRENM46%2Fp%2FYCApurSzhSVEdKPd3nDeUBaKvl9kw0cOOABCNgUueSxH31uWfLx43VpFJl8SgMpTuRIU22kbGqYcsD4cZYfNN8w2kdWMVeLFoazf4Ib4UgTNVqYUE4aCEYjTb3AE1z%2Blje2vwDwmv4%2BrXcpPDjSSahGjwIR1fA2nGcME91RFe103GnKBz1XGq7LiftjvqYaIonJtudQDaMDBOfyNcCKfpQLl5%2FycY5kQkw%2BIqb%2FAFWXCaFm9qlhnvXzn%2BUWLQJSmOpe19DDYIsbQQYeCOcYuBHlOqGChIKpob4V%2FQe%2FdACqZUfX0PGcBD4dWz8IZoOQMIqU3M8GOqUBo19LMEFZtZOyC1jspMUVznoIFnQIxWkiccwLgaXACVtnGsGi7JCP%2B8o48dYrlz3HUfoc2AUFRthcap8XHsks%2F3qJ7h1IkAdCaTywQ5I3ICu6Qx9lgrOxyZa2hZsiG7IimGFoUGkoPEoDLOJBa9bUjtJtJ5GgcV3Moc5po9oCpnH8lbYpKxwzJIscAd%2FXi25c1s1LqtIKcvsOvETe%2F8Hh5tHKLF7O&X-Amz-Signature=7787fa0231ab22dcac59b5c1a055132ee33a395990c02cf1b42ae3481b2679b6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WM2MU6WH%2F20260503%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260503T092116Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDQ5QPEz5aY901GX9J8rs9yIz1G2LXzdjed1%2BMb0iDtIAiEAqOQZB8TQismwfVVOlz58ET5wmF7vIq3p2Q8cu0uQAkwq%2FwMIUhAAGgw2Mzc0MjMxODM4MDUiDPDCbqdHqufew5Pn2yrcA2tw11iGT7pVPWxN7EIbuz6jvw2yCNkH5TCYhWYxH9ffoMoZXs25TO0q1NMJ7wQkzjuIBdoUcNYYAJKd3EsjipJB0cK3Ttv7eYGpnSkm%2FPAYURjidPwUIGqz5ma84Tii6PJl4NmEG1%2Bn3vVekvB9gWw1fYdzt%2BnYY2psEpvwtJ3Pe1nMxRRAhVC3DjneqUB0tCs%2FA3sIHcCYlIHf75xCrv2vRU8RKa%2BnfIEOJNzijw0s4Zp%2FZwDg5t15%2FZ55GsuOyZg170tjmawhjXdX2WCBMUw1yM9Qzuu5p4oEvZ%2BitANmGJTAPKVFRENM46%2Fp%2FYCApurSzhSVEdKPd3nDeUBaKvl9kw0cOOABCNgUueSxH31uWfLx43VpFJl8SgMpTuRIU22kbGqYcsD4cZYfNN8w2kdWMVeLFoazf4Ib4UgTNVqYUE4aCEYjTb3AE1z%2Blje2vwDwmv4%2BrXcpPDjSSahGjwIR1fA2nGcME91RFe103GnKBz1XGq7LiftjvqYaIonJtudQDaMDBOfyNcCKfpQLl5%2FycY5kQkw%2BIqb%2FAFWXCaFm9qlhnvXzn%2BUWLQJSmOpe19DDYIsbQQYeCOcYuBHlOqGChIKpob4V%2FQe%2FdACqZUfX0PGcBD4dWz8IZoOQMIqU3M8GOqUBo19LMEFZtZOyC1jspMUVznoIFnQIxWkiccwLgaXACVtnGsGi7JCP%2B8o48dYrlz3HUfoc2AUFRthcap8XHsks%2F3qJ7h1IkAdCaTywQ5I3ICu6Qx9lgrOxyZa2hZsiG7IimGFoUGkoPEoDLOJBa9bUjtJtJ5GgcV3Moc5po9oCpnH8lbYpKxwzJIscAd%2FXi25c1s1LqtIKcvsOvETe%2F8Hh5tHKLF7O&X-Amz-Signature=f19586fa08831f01d007bae791cbb7a51bd1c4d65541315c0781ed4f8fadcf50&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
