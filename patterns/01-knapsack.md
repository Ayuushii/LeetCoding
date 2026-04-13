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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665JPZQTVW%2F20260413%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260413T095414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4gXL1FtEaHfAgRVIeTLhONmD8xss3mEpxMXitKkSWVAIhALvgBjV5xuwbR1w1pUiS4C5FFdrPlt5JcC6Uk4Untj2GKv8DCHEQABoMNjM3NDIzMTgzODA1Igy9mJ35qyYs6shbs%2BEq3APAUlpZFN0xWr%2BNqgbwjFZ3uZ9n7AwRK91rBcSY74MRfBJjBIGfFWmQLYqhzUSp00dT5cOzIhMK0BOXo737yzEnHJfibI%2BsTPpoJCJOcLZ49Q8fH01iDN3E8v0DL1o6o5dTBbenIzRrJx2kgQC9s8qNwrX5XTpkDqM9trugW5qnhj0afTnqrmcJ0Qr%2FJX4v7FEoiebiYXgtksc5R4iqc2Wm%2Fv3xMnyl7J4y8lt72VJPt5s7Yj%2BgMEIJeUlyVtXD3q4UJ3wNOnDwDRbKE5aIHAkW8WqHcD2q9NUewqhhcxOo18h9mSGPLN4eJcF7Uf0xMO7pgIXMZcDtetcFj2umXwZuPSnpVulgPQ8Y65UTPu%2FjcilxpbJje5magBvFvpHHAwOF3%2BBjvH2Z%2FT2F25McH5KKiBYozLjHHQuvEW3iX27ggsws%2FYEozI%2FjpUAO0EApbQakXw2KHOjRFY8bBA0ZAO45487vc%2BfMYOfN4tFijy2nm4QAwwIOhPRFN2TnoBTUnjMg8pbAWnI8lnPDEXCWVzsmdX4MT7Tw31c0E4JSvMuqhC%2BBIMJ5iajGnzrvBSnzXWMqJi48UMmx5auHg7bJ%2BRnzLrBg0VOOQFGL9vX5HnHY94f%2FGC%2FwLRdF8a06LzDi0fLOBjqkARbjoTHYbEFBFZOF1IXMmOXIIhN7eB%2F1kOtKbPS1FBOfbTjpJTO66cUd1c08SKftulACHFfAfln8W7zWNoaYYypTQofRwwn8NY58233oxk4Lhslr15SGsQPLCUXuyhskj%2BGZdoMCp%2BtsqWIe%2Fd7hOZ%2BFOFEEPJUAk6tCnOmU2pbDxxhbv9cqO6cPm%2BguItGaZWvkrpMCoHCf%2F2Rl950ZWd6mckgW&X-Amz-Signature=73c969673098ff5b249837db428f7079bb5e3d2726339793b3d253118b8a85c1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665JPZQTVW%2F20260413%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260413T095414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4gXL1FtEaHfAgRVIeTLhONmD8xss3mEpxMXitKkSWVAIhALvgBjV5xuwbR1w1pUiS4C5FFdrPlt5JcC6Uk4Untj2GKv8DCHEQABoMNjM3NDIzMTgzODA1Igy9mJ35qyYs6shbs%2BEq3APAUlpZFN0xWr%2BNqgbwjFZ3uZ9n7AwRK91rBcSY74MRfBJjBIGfFWmQLYqhzUSp00dT5cOzIhMK0BOXo737yzEnHJfibI%2BsTPpoJCJOcLZ49Q8fH01iDN3E8v0DL1o6o5dTBbenIzRrJx2kgQC9s8qNwrX5XTpkDqM9trugW5qnhj0afTnqrmcJ0Qr%2FJX4v7FEoiebiYXgtksc5R4iqc2Wm%2Fv3xMnyl7J4y8lt72VJPt5s7Yj%2BgMEIJeUlyVtXD3q4UJ3wNOnDwDRbKE5aIHAkW8WqHcD2q9NUewqhhcxOo18h9mSGPLN4eJcF7Uf0xMO7pgIXMZcDtetcFj2umXwZuPSnpVulgPQ8Y65UTPu%2FjcilxpbJje5magBvFvpHHAwOF3%2BBjvH2Z%2FT2F25McH5KKiBYozLjHHQuvEW3iX27ggsws%2FYEozI%2FjpUAO0EApbQakXw2KHOjRFY8bBA0ZAO45487vc%2BfMYOfN4tFijy2nm4QAwwIOhPRFN2TnoBTUnjMg8pbAWnI8lnPDEXCWVzsmdX4MT7Tw31c0E4JSvMuqhC%2BBIMJ5iajGnzrvBSnzXWMqJi48UMmx5auHg7bJ%2BRnzLrBg0VOOQFGL9vX5HnHY94f%2FGC%2FwLRdF8a06LzDi0fLOBjqkARbjoTHYbEFBFZOF1IXMmOXIIhN7eB%2F1kOtKbPS1FBOfbTjpJTO66cUd1c08SKftulACHFfAfln8W7zWNoaYYypTQofRwwn8NY58233oxk4Lhslr15SGsQPLCUXuyhskj%2BGZdoMCp%2BtsqWIe%2Fd7hOZ%2BFOFEEPJUAk6tCnOmU2pbDxxhbv9cqO6cPm%2BguItGaZWvkrpMCoHCf%2F2Rl950ZWd6mckgW&X-Amz-Signature=4f712b28fba4da2185de1949762ca627cb4dc49fa26fda08384d2b1e7f3a8493&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665JPZQTVW%2F20260413%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260413T095414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4gXL1FtEaHfAgRVIeTLhONmD8xss3mEpxMXitKkSWVAIhALvgBjV5xuwbR1w1pUiS4C5FFdrPlt5JcC6Uk4Untj2GKv8DCHEQABoMNjM3NDIzMTgzODA1Igy9mJ35qyYs6shbs%2BEq3APAUlpZFN0xWr%2BNqgbwjFZ3uZ9n7AwRK91rBcSY74MRfBJjBIGfFWmQLYqhzUSp00dT5cOzIhMK0BOXo737yzEnHJfibI%2BsTPpoJCJOcLZ49Q8fH01iDN3E8v0DL1o6o5dTBbenIzRrJx2kgQC9s8qNwrX5XTpkDqM9trugW5qnhj0afTnqrmcJ0Qr%2FJX4v7FEoiebiYXgtksc5R4iqc2Wm%2Fv3xMnyl7J4y8lt72VJPt5s7Yj%2BgMEIJeUlyVtXD3q4UJ3wNOnDwDRbKE5aIHAkW8WqHcD2q9NUewqhhcxOo18h9mSGPLN4eJcF7Uf0xMO7pgIXMZcDtetcFj2umXwZuPSnpVulgPQ8Y65UTPu%2FjcilxpbJje5magBvFvpHHAwOF3%2BBjvH2Z%2FT2F25McH5KKiBYozLjHHQuvEW3iX27ggsws%2FYEozI%2FjpUAO0EApbQakXw2KHOjRFY8bBA0ZAO45487vc%2BfMYOfN4tFijy2nm4QAwwIOhPRFN2TnoBTUnjMg8pbAWnI8lnPDEXCWVzsmdX4MT7Tw31c0E4JSvMuqhC%2BBIMJ5iajGnzrvBSnzXWMqJi48UMmx5auHg7bJ%2BRnzLrBg0VOOQFGL9vX5HnHY94f%2FGC%2FwLRdF8a06LzDi0fLOBjqkARbjoTHYbEFBFZOF1IXMmOXIIhN7eB%2F1kOtKbPS1FBOfbTjpJTO66cUd1c08SKftulACHFfAfln8W7zWNoaYYypTQofRwwn8NY58233oxk4Lhslr15SGsQPLCUXuyhskj%2BGZdoMCp%2BtsqWIe%2Fd7hOZ%2BFOFEEPJUAk6tCnOmU2pbDxxhbv9cqO6cPm%2BguItGaZWvkrpMCoHCf%2F2Rl950ZWd6mckgW&X-Amz-Signature=f43a6bd3041060404f38af5681eb2b124a2b59b6fe6b2cb51a0a026be99fbbaa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TWPVSGF4%2F20260413%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260413T095414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD2aWZ3Pn4onPzpyD%2FyXEczEQfuBzczZit6PKbTcMETLgIhANH1eWpiLsmhInHM1VVuWFDxcvVw5t7whyIe%2FSQxzDeSKv8DCHEQABoMNjM3NDIzMTgzODA1IgzXle%2F%2B6XNss%2FAyJPMq3AM%2BfvjwMnqgCEFAAxw7sqiK%2FNGGmnhK8Et62YRAgIBlxRt502%2Fm0LMIygC4%2BxhN5Hgmqx1t2N58CZSgF9n0CzWUWOtJS8H1o8miAWAUAOJ7iKklrmxLFjrtySB%2F%2F6mtHq0t0yZ6dIZICBADE5OtUha%2BrgpOWplAApMeeHrOfXL%2F2koWJUcNoRX%2Fk6EO8D0zHiiXywc6SB8HFAOaaC8ohWNkI85PqfaKtDhCE3aFlp%2BQvUs6OWqqrMmII52t%2FKHwrQOx6dpOXx6qNXlueord%2FRSsf7yR40VE%2FCrRJrXps8xD07XfAgC%2F1K3cTqFUZx2zbenayJIW15OshVWjdsWJbKTJguFSM7xhIfBFg8XNLZmzIkUl5k8SqW%2BUv4gqdFAmQ1rADT2BAjwy8hvPfcBS7iN7mzRWlEoaZPto8ZW6%2Fp2RL8DC4pkZH0x3hMdilNFNgBw%2BiRqDdwT%2BqkGpLrvnHX%2BjEKPMWzaSjG2RSdR%2B3QgPJ6yh5wUP5l0XOLMEbuIQLDtN8lECyY7y7QBkZ7GNQDx4qnSuhDnbk8O7jiKsF%2FBNfZGjiQiEvYbrjd485cI1Tz50PMkJrlcRrxl6MO3GBoe3QpeoeQLwpVV597asZ2CCRNwMsNcqkmV7119qQTCfz%2FLOBjqkATIbro1G3%2BmzRVPhJg%2Bb59akZ9VvWOpQT4U70yk%2F2LIwYSPdJvNeDPLGrQI74knvA%2F%2BIRywotmHwF1ayE2K2Ov6kAaZZoLsRgc2ofzne%2FQWY9oqSUyTPxj%2BgcJGvLJcAeBNZUnyFBJ1jA57Ykxv2GFTtkzBHlKqWepH%2FGX45uB8LE8lPPdgxSrMwNzqYo2FPEIr11pRfrpR8xr0TTwHp%2F26%2F25oK&X-Amz-Signature=769ac4bcdb280c635b8938d82d52e098e7188a08c7d9e0b1dbef8742e22ea232&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TWPVSGF4%2F20260413%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260413T095414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD2aWZ3Pn4onPzpyD%2FyXEczEQfuBzczZit6PKbTcMETLgIhANH1eWpiLsmhInHM1VVuWFDxcvVw5t7whyIe%2FSQxzDeSKv8DCHEQABoMNjM3NDIzMTgzODA1IgzXle%2F%2B6XNss%2FAyJPMq3AM%2BfvjwMnqgCEFAAxw7sqiK%2FNGGmnhK8Et62YRAgIBlxRt502%2Fm0LMIygC4%2BxhN5Hgmqx1t2N58CZSgF9n0CzWUWOtJS8H1o8miAWAUAOJ7iKklrmxLFjrtySB%2F%2F6mtHq0t0yZ6dIZICBADE5OtUha%2BrgpOWplAApMeeHrOfXL%2F2koWJUcNoRX%2Fk6EO8D0zHiiXywc6SB8HFAOaaC8ohWNkI85PqfaKtDhCE3aFlp%2BQvUs6OWqqrMmII52t%2FKHwrQOx6dpOXx6qNXlueord%2FRSsf7yR40VE%2FCrRJrXps8xD07XfAgC%2F1K3cTqFUZx2zbenayJIW15OshVWjdsWJbKTJguFSM7xhIfBFg8XNLZmzIkUl5k8SqW%2BUv4gqdFAmQ1rADT2BAjwy8hvPfcBS7iN7mzRWlEoaZPto8ZW6%2Fp2RL8DC4pkZH0x3hMdilNFNgBw%2BiRqDdwT%2BqkGpLrvnHX%2BjEKPMWzaSjG2RSdR%2B3QgPJ6yh5wUP5l0XOLMEbuIQLDtN8lECyY7y7QBkZ7GNQDx4qnSuhDnbk8O7jiKsF%2FBNfZGjiQiEvYbrjd485cI1Tz50PMkJrlcRrxl6MO3GBoe3QpeoeQLwpVV597asZ2CCRNwMsNcqkmV7119qQTCfz%2FLOBjqkATIbro1G3%2BmzRVPhJg%2Bb59akZ9VvWOpQT4U70yk%2F2LIwYSPdJvNeDPLGrQI74knvA%2F%2BIRywotmHwF1ayE2K2Ov6kAaZZoLsRgc2ofzne%2FQWY9oqSUyTPxj%2BgcJGvLJcAeBNZUnyFBJ1jA57Ykxv2GFTtkzBHlKqWepH%2FGX45uB8LE8lPPdgxSrMwNzqYo2FPEIr11pRfrpR8xr0TTwHp%2F26%2F25oK&X-Amz-Signature=d31fa4f6085a7b5e69f09ff7c1185ce64f9bea2a0ad5a7c23c5925b38c368a39&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TWPVSGF4%2F20260413%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260413T095414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD2aWZ3Pn4onPzpyD%2FyXEczEQfuBzczZit6PKbTcMETLgIhANH1eWpiLsmhInHM1VVuWFDxcvVw5t7whyIe%2FSQxzDeSKv8DCHEQABoMNjM3NDIzMTgzODA1IgzXle%2F%2B6XNss%2FAyJPMq3AM%2BfvjwMnqgCEFAAxw7sqiK%2FNGGmnhK8Et62YRAgIBlxRt502%2Fm0LMIygC4%2BxhN5Hgmqx1t2N58CZSgF9n0CzWUWOtJS8H1o8miAWAUAOJ7iKklrmxLFjrtySB%2F%2F6mtHq0t0yZ6dIZICBADE5OtUha%2BrgpOWplAApMeeHrOfXL%2F2koWJUcNoRX%2Fk6EO8D0zHiiXywc6SB8HFAOaaC8ohWNkI85PqfaKtDhCE3aFlp%2BQvUs6OWqqrMmII52t%2FKHwrQOx6dpOXx6qNXlueord%2FRSsf7yR40VE%2FCrRJrXps8xD07XfAgC%2F1K3cTqFUZx2zbenayJIW15OshVWjdsWJbKTJguFSM7xhIfBFg8XNLZmzIkUl5k8SqW%2BUv4gqdFAmQ1rADT2BAjwy8hvPfcBS7iN7mzRWlEoaZPto8ZW6%2Fp2RL8DC4pkZH0x3hMdilNFNgBw%2BiRqDdwT%2BqkGpLrvnHX%2BjEKPMWzaSjG2RSdR%2B3QgPJ6yh5wUP5l0XOLMEbuIQLDtN8lECyY7y7QBkZ7GNQDx4qnSuhDnbk8O7jiKsF%2FBNfZGjiQiEvYbrjd485cI1Tz50PMkJrlcRrxl6MO3GBoe3QpeoeQLwpVV597asZ2CCRNwMsNcqkmV7119qQTCfz%2FLOBjqkATIbro1G3%2BmzRVPhJg%2Bb59akZ9VvWOpQT4U70yk%2F2LIwYSPdJvNeDPLGrQI74knvA%2F%2BIRywotmHwF1ayE2K2Ov6kAaZZoLsRgc2ofzne%2FQWY9oqSUyTPxj%2BgcJGvLJcAeBNZUnyFBJ1jA57Ykxv2GFTtkzBHlKqWepH%2FGX45uB8LE8lPPdgxSrMwNzqYo2FPEIr11pRfrpR8xr0TTwHp%2F26%2F25oK&X-Amz-Signature=3d0e9bce3b4023e78b9647dddbb8a3fe04464b34bc481c946612f584baf02588&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TWPVSGF4%2F20260413%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260413T095414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD2aWZ3Pn4onPzpyD%2FyXEczEQfuBzczZit6PKbTcMETLgIhANH1eWpiLsmhInHM1VVuWFDxcvVw5t7whyIe%2FSQxzDeSKv8DCHEQABoMNjM3NDIzMTgzODA1IgzXle%2F%2B6XNss%2FAyJPMq3AM%2BfvjwMnqgCEFAAxw7sqiK%2FNGGmnhK8Et62YRAgIBlxRt502%2Fm0LMIygC4%2BxhN5Hgmqx1t2N58CZSgF9n0CzWUWOtJS8H1o8miAWAUAOJ7iKklrmxLFjrtySB%2F%2F6mtHq0t0yZ6dIZICBADE5OtUha%2BrgpOWplAApMeeHrOfXL%2F2koWJUcNoRX%2Fk6EO8D0zHiiXywc6SB8HFAOaaC8ohWNkI85PqfaKtDhCE3aFlp%2BQvUs6OWqqrMmII52t%2FKHwrQOx6dpOXx6qNXlueord%2FRSsf7yR40VE%2FCrRJrXps8xD07XfAgC%2F1K3cTqFUZx2zbenayJIW15OshVWjdsWJbKTJguFSM7xhIfBFg8XNLZmzIkUl5k8SqW%2BUv4gqdFAmQ1rADT2BAjwy8hvPfcBS7iN7mzRWlEoaZPto8ZW6%2Fp2RL8DC4pkZH0x3hMdilNFNgBw%2BiRqDdwT%2BqkGpLrvnHX%2BjEKPMWzaSjG2RSdR%2B3QgPJ6yh5wUP5l0XOLMEbuIQLDtN8lECyY7y7QBkZ7GNQDx4qnSuhDnbk8O7jiKsF%2FBNfZGjiQiEvYbrjd485cI1Tz50PMkJrlcRrxl6MO3GBoe3QpeoeQLwpVV597asZ2CCRNwMsNcqkmV7119qQTCfz%2FLOBjqkATIbro1G3%2BmzRVPhJg%2Bb59akZ9VvWOpQT4U70yk%2F2LIwYSPdJvNeDPLGrQI74knvA%2F%2BIRywotmHwF1ayE2K2Ov6kAaZZoLsRgc2ofzne%2FQWY9oqSUyTPxj%2BgcJGvLJcAeBNZUnyFBJ1jA57Ykxv2GFTtkzBHlKqWepH%2FGX45uB8LE8lPPdgxSrMwNzqYo2FPEIr11pRfrpR8xr0TTwHp%2F26%2F25oK&X-Amz-Signature=24d42803997982bfdfd3c3e89cca14e4752fce7a932884d4a5b664fb081308e1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663ZYOMK3Z%2F20260413%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260413T095415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEnTLFn2A%2BOtt1k%2F1jQS6Uek29DS92KiHojYpkis8EVjAiEArV3mTTEhsr38VgLtECR9dgbmJUIJfjU1SFPMXSPSqdsq%2FwMIcRAAGgw2Mzc0MjMxODM4MDUiDH6O4vrQytEL0ppVpSrcA82L4s2d%2Bv8lyNxVSRvVhN1tnpQpuydm948j0tgDYmyVwaZUhKqRyuTxKjAPVUWHmc1vNPBP%2FR2szjlGmCM5sbk23x%2FjmrfHr66u5d77%2BtUU%2FCTJYd9alufSlVCOnd6nDLqg7%2FosCJDEVWl5VBd4Po3BDWSFMb63Xsdc8lkcdAx%2B%2FdTqL5bYPdtzN713vXDBC3m%2BsOxYz2xTr%2Fpwq70F1HCJjwwJQcYQZI2%2B4fOS95hXjMep4I%2F%2BZq%2FI7c0w2pbHM23STcME%2BwuXv6cCMilocVd%2FC12qJqh61SUjqFrqdd5JqZUTk9ATbg9G5iSGMuZC4zMfHXAtblhGkKC046agwLpOFb86L%2B2iva0XkJHIT46Nw9UBBbhsxBayF46r93XoDCVJs4JC4t%2BeT7tFTA%2BmL2V6yNEeVi0VsWpaeLHF%2FEHyrjr2svIAW9Pq8U8NJ4B%2FfBaHx9UAUMIC6y85ur7gITI0sjDzGotqmC53WO33MGrtluctKzZd%2FuMOtqxULugyB5a%2Bes5hR6z2XxZmMIZy8swr8j2PSuvWqmfbHRn7TlavbKF5y9au9sfgQVyXeWB4dblI1330t9nmTnaDoYTsVrE4e3iT2Wht3JxX0wPjCXRRUg54yoztAggIrriVMPbR8s4GOqUBpetVMjbw32nWqjanIuI2tOXb3nhWW372Y6GRYvPrmWbjq56%2BeDhZMwq9fh7q5lDeSzkS9YP92ybff6qa0IICSz3Yt0%2FIH9ZYcGlRPa5Tt4uyjU%2B6cKQKjilQzils3w%2BVQfmb9KvZfwLSe4hRV%2FOPLsiGTOkrlf6Z%2BxDpuwWRaJifcw45gvR3phNJreJ1cSa%2F44%2BG9Xv2brdRFOrmjT3w6tuh6ktv&X-Amz-Signature=6e4a79f18168193f8af51d65db3d2b52b8413ea279a101b2107bfa595dbc12fc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CINRCRS%2F20260413%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260413T095415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD4ZX6dYz892yJqBp0eEy3LdF%2FsFqiihxD%2FnNmqO5FyFgIgCtsl%2F8sGIcflptOxDh33dCnMpxRflv8RUG4%2BguYFTGMq%2FwMIchAAGgw2Mzc0MjMxODM4MDUiDK4F%2BL4DMHooNRZeOircA%2FEkTV94v9SNkP5K4rDas8lxJjgPySvlrqLqiBKVL%2FtN45fyrjPoCWaohY2ENTqY9ix2k7o%2FSe8GABKwXRGaGiFPgo71aYGzFUAf8c81DQkAZ38NFpTO0L4yvzBJdXpW0a73FRtqtTPwfnWBwwA4NVbZ5uwiLOEPNcSCGIAAG%2BsgHDgidEqGaUzAX%2BvcOxBk0U1UENBkaA7MoAlTlsnwhs0EvHVeQ6z0Ou5D%2BoT0X7oNdyWsVSiUksp%2FBAeYWSeLhsZRzczudtRdL%2Bkw97vF6HzCBL6XKhu%2BAKL%2F8kOIxUSTDp36udYsrAHcpTNqDTMA0ZoNiNRBFfDDAt7LlaT1FsI4WiteAEw4LsZWNRstK963wpP3BjsJhigd3%2FnC3nEktok461iebLvcZAz45fBajkp5cTH0GuAIFpWVfHM7IbGUP%2F2yLunZGMr7DKuaY49mM4MnRhDBuF35nxVcpu%2Bu3hG20Mm04SJRpaA5jOCdFzSLGLzo4a5E1fHbdNDANuURb6MqRfdqDFVM8epqQNdS2AmljOcp9K83pCIZ4y%2FWl2PuL6hq2j35qCkWuq0lQ9qnRq6ppJegEt%2BxC0EoDQjNXVzoF4WbQX367jR3R8Bq8IkR1sWwB6LNGchu0XntMMbQ8s4GOqUBzuP2AP6o88yQU1wy9uZMEFsFugpiuybZWdWwfml64%2FqdcRA%2FiD2OC%2FpfH%2Bml%2F5dUmHIQuMdoKros6S7axajHHZTDcblRRt%2BTtHiYZiL8XnMguWZ%2FXS0Z3ZKHSKlz94VlsAu1hgLvSAzzlIwow1HYlVi6SzJAAiJ7P3xYAhZ9EYDlRUUq9W1UAeHvtHNE2QTBDnJLLg3xbNjG%2FGeoBQm2e3MhWat%2F&X-Amz-Signature=a54d4fbb7d7059fc0732612f59e0370e9120ee47125fc398d76ae74af741fa81&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CINRCRS%2F20260413%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260413T095415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD4ZX6dYz892yJqBp0eEy3LdF%2FsFqiihxD%2FnNmqO5FyFgIgCtsl%2F8sGIcflptOxDh33dCnMpxRflv8RUG4%2BguYFTGMq%2FwMIchAAGgw2Mzc0MjMxODM4MDUiDK4F%2BL4DMHooNRZeOircA%2FEkTV94v9SNkP5K4rDas8lxJjgPySvlrqLqiBKVL%2FtN45fyrjPoCWaohY2ENTqY9ix2k7o%2FSe8GABKwXRGaGiFPgo71aYGzFUAf8c81DQkAZ38NFpTO0L4yvzBJdXpW0a73FRtqtTPwfnWBwwA4NVbZ5uwiLOEPNcSCGIAAG%2BsgHDgidEqGaUzAX%2BvcOxBk0U1UENBkaA7MoAlTlsnwhs0EvHVeQ6z0Ou5D%2BoT0X7oNdyWsVSiUksp%2FBAeYWSeLhsZRzczudtRdL%2Bkw97vF6HzCBL6XKhu%2BAKL%2F8kOIxUSTDp36udYsrAHcpTNqDTMA0ZoNiNRBFfDDAt7LlaT1FsI4WiteAEw4LsZWNRstK963wpP3BjsJhigd3%2FnC3nEktok461iebLvcZAz45fBajkp5cTH0GuAIFpWVfHM7IbGUP%2F2yLunZGMr7DKuaY49mM4MnRhDBuF35nxVcpu%2Bu3hG20Mm04SJRpaA5jOCdFzSLGLzo4a5E1fHbdNDANuURb6MqRfdqDFVM8epqQNdS2AmljOcp9K83pCIZ4y%2FWl2PuL6hq2j35qCkWuq0lQ9qnRq6ppJegEt%2BxC0EoDQjNXVzoF4WbQX367jR3R8Bq8IkR1sWwB6LNGchu0XntMMbQ8s4GOqUBzuP2AP6o88yQU1wy9uZMEFsFugpiuybZWdWwfml64%2FqdcRA%2FiD2OC%2FpfH%2Bml%2F5dUmHIQuMdoKros6S7axajHHZTDcblRRt%2BTtHiYZiL8XnMguWZ%2FXS0Z3ZKHSKlz94VlsAu1hgLvSAzzlIwow1HYlVi6SzJAAiJ7P3xYAhZ9EYDlRUUq9W1UAeHvtHNE2QTBDnJLLg3xbNjG%2FGeoBQm2e3MhWat%2F&X-Amz-Signature=f34bcabaaa07e5903201834bcea422a9e6663f2f14e62387e82a81216f9a17bf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
