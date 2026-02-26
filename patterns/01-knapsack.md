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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X4KOZ5LL%2F20260226%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260226T084916Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJHMEUCIF0nV1PMoxXD6O2rzEn8z1czyUu9MqTIQNfyXaNTAO6DAiEA8SjDpg0Ee9BDWaLBfiKrLGoOkC64e09Sq9e9dTbCjt8q%2FwMIHhAAGgw2Mzc0MjMxODM4MDUiDGAdlFP%2B9RRRl%2Fo5JircA8wQUpwp26eJxluxwWUrxMWonCDvvZa3ysjePrioIPAhXlK5TXCYEimXZWftPVsOjW%2FPv99fQJYRjjhVBkGMVih7lpr8iYw4v4hNngMqbmvSmfaGIG7UV2DLBTIGSfK6aflA3NNC9NibuvNqyKxkIn4wWxl%2BJvjnAN6hjHz8voMhqwV2fbEjW%2BIq9SJSOoFH7K%2Blj5k1UKOngGUf1UYhcBQ%2FbeSQ1%2FvGzbv7HrNpxFZvFop3tCbIVLwUksvZiaWVBKnBelQ3SyTojb0ZOOmIZE1zQAcxE%2FIsRn1h6qNrj5elKqmIg%2Bpjilb92%2FCC867HP5MjhE0ro0WPM6R%2FXqlHRfHLJg%2F3JHeLrQRmVsw7rmizPn%2FWxz1uUerdZdvYBX9AiOS4pYsheLo3uaiH%2BXVGlPHI47JilpQLH7bPbvi3Unvc87FHeSDjBx0RxYDmzGD%2B97x6O8B5Un8ZA2prWiek3LkUk0PnMqdjuMGARe3nIogAzd0m1rgewbWWzuNBMYO41Dpnw9ye7wHL25y3n83Q8bQ3Y%2FTcrL1bSufjCKqM9U2qQiuzmLW0hR7mgjr2y%2F8Zo1Grhl90eC6eebpnFhnaVM6XYonfZpv5%2F1uiDQ0Ra03g1kwikDZo5wIHeAGqMNyY%2F8wGOqUB4i7HHu9TCH2eZFvvfYVCIbb6N0%2B7FYcBc6COvrjC4BgBQ%2BYj5nAJrl5E1MxYYlc8HMllvf%2BYLPw420YyoLwOXLeYescUPkKuEyRhaIKfKrpDMi0mhDqNOrwf30%2FG%2FWavM0Lu6TjCFs0wdvjyGIRrqdfilyQcL5LpJRSoGZJEhM17V23wCfF0PzBSA5bFr0LCkbf5Id2KsCtwUpofxvPQwMGjkS5M&X-Amz-Signature=d2c3bd44c7648dc02cc73a93c18dadbb6ba217771a1ee7b157c98ecd4a0d1166&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X4KOZ5LL%2F20260226%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260226T084916Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJHMEUCIF0nV1PMoxXD6O2rzEn8z1czyUu9MqTIQNfyXaNTAO6DAiEA8SjDpg0Ee9BDWaLBfiKrLGoOkC64e09Sq9e9dTbCjt8q%2FwMIHhAAGgw2Mzc0MjMxODM4MDUiDGAdlFP%2B9RRRl%2Fo5JircA8wQUpwp26eJxluxwWUrxMWonCDvvZa3ysjePrioIPAhXlK5TXCYEimXZWftPVsOjW%2FPv99fQJYRjjhVBkGMVih7lpr8iYw4v4hNngMqbmvSmfaGIG7UV2DLBTIGSfK6aflA3NNC9NibuvNqyKxkIn4wWxl%2BJvjnAN6hjHz8voMhqwV2fbEjW%2BIq9SJSOoFH7K%2Blj5k1UKOngGUf1UYhcBQ%2FbeSQ1%2FvGzbv7HrNpxFZvFop3tCbIVLwUksvZiaWVBKnBelQ3SyTojb0ZOOmIZE1zQAcxE%2FIsRn1h6qNrj5elKqmIg%2Bpjilb92%2FCC867HP5MjhE0ro0WPM6R%2FXqlHRfHLJg%2F3JHeLrQRmVsw7rmizPn%2FWxz1uUerdZdvYBX9AiOS4pYsheLo3uaiH%2BXVGlPHI47JilpQLH7bPbvi3Unvc87FHeSDjBx0RxYDmzGD%2B97x6O8B5Un8ZA2prWiek3LkUk0PnMqdjuMGARe3nIogAzd0m1rgewbWWzuNBMYO41Dpnw9ye7wHL25y3n83Q8bQ3Y%2FTcrL1bSufjCKqM9U2qQiuzmLW0hR7mgjr2y%2F8Zo1Grhl90eC6eebpnFhnaVM6XYonfZpv5%2F1uiDQ0Ra03g1kwikDZo5wIHeAGqMNyY%2F8wGOqUB4i7HHu9TCH2eZFvvfYVCIbb6N0%2B7FYcBc6COvrjC4BgBQ%2BYj5nAJrl5E1MxYYlc8HMllvf%2BYLPw420YyoLwOXLeYescUPkKuEyRhaIKfKrpDMi0mhDqNOrwf30%2FG%2FWavM0Lu6TjCFs0wdvjyGIRrqdfilyQcL5LpJRSoGZJEhM17V23wCfF0PzBSA5bFr0LCkbf5Id2KsCtwUpofxvPQwMGjkS5M&X-Amz-Signature=2b6b73d91351fcee16e7347c12589a033ecc01acd18d4230915b07b964185582&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X4KOZ5LL%2F20260226%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260226T084916Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJHMEUCIF0nV1PMoxXD6O2rzEn8z1czyUu9MqTIQNfyXaNTAO6DAiEA8SjDpg0Ee9BDWaLBfiKrLGoOkC64e09Sq9e9dTbCjt8q%2FwMIHhAAGgw2Mzc0MjMxODM4MDUiDGAdlFP%2B9RRRl%2Fo5JircA8wQUpwp26eJxluxwWUrxMWonCDvvZa3ysjePrioIPAhXlK5TXCYEimXZWftPVsOjW%2FPv99fQJYRjjhVBkGMVih7lpr8iYw4v4hNngMqbmvSmfaGIG7UV2DLBTIGSfK6aflA3NNC9NibuvNqyKxkIn4wWxl%2BJvjnAN6hjHz8voMhqwV2fbEjW%2BIq9SJSOoFH7K%2Blj5k1UKOngGUf1UYhcBQ%2FbeSQ1%2FvGzbv7HrNpxFZvFop3tCbIVLwUksvZiaWVBKnBelQ3SyTojb0ZOOmIZE1zQAcxE%2FIsRn1h6qNrj5elKqmIg%2Bpjilb92%2FCC867HP5MjhE0ro0WPM6R%2FXqlHRfHLJg%2F3JHeLrQRmVsw7rmizPn%2FWxz1uUerdZdvYBX9AiOS4pYsheLo3uaiH%2BXVGlPHI47JilpQLH7bPbvi3Unvc87FHeSDjBx0RxYDmzGD%2B97x6O8B5Un8ZA2prWiek3LkUk0PnMqdjuMGARe3nIogAzd0m1rgewbWWzuNBMYO41Dpnw9ye7wHL25y3n83Q8bQ3Y%2FTcrL1bSufjCKqM9U2qQiuzmLW0hR7mgjr2y%2F8Zo1Grhl90eC6eebpnFhnaVM6XYonfZpv5%2F1uiDQ0Ra03g1kwikDZo5wIHeAGqMNyY%2F8wGOqUB4i7HHu9TCH2eZFvvfYVCIbb6N0%2B7FYcBc6COvrjC4BgBQ%2BYj5nAJrl5E1MxYYlc8HMllvf%2BYLPw420YyoLwOXLeYescUPkKuEyRhaIKfKrpDMi0mhDqNOrwf30%2FG%2FWavM0Lu6TjCFs0wdvjyGIRrqdfilyQcL5LpJRSoGZJEhM17V23wCfF0PzBSA5bFr0LCkbf5Id2KsCtwUpofxvPQwMGjkS5M&X-Amz-Signature=2ce17e5ecec0a641e26ad370cdc2c4324eb33b301f4ced232f3758881b143667&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SAZ2BSXC%2F20260226%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260226T084917Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJIMEYCIQCSvX6eVrAfz54pEAfKAkNJp73G7yEUqeNfTcChT9RPLwIhALh5kXYxoue7V%2FXpXVMT5JnLgIuioO7rZTR0LvLKzSF6Kv8DCB4QABoMNjM3NDIzMTgzODA1IgzgW14Fa%2FovgBkaacEq3AOkVsG1TV6dZpTaXXbGYMeOAElOVGIkxufTePsLP6hzRmRMkx%2BqihQJMHc1aUjmAatBXQcQCWtSvpv5nL12AgK6bpptFheaes%2Fnj%2Fqhu0Fd3b1F%2BdneXrF4eCS7Y9W939f5F2zAc1R86wfUV9pQgz%2F9GuROMl1HD97x%2BoywgnM%2B0dwwHt%2B7XOVx4ZF25GraAJLV0Vhs97prE7gTTCexeBR%2BDfJFORjUYCiLW8bOl6o9algapifVpzW%2BDnaDX1p6AkjLlnKvCe8zNHa5gLR08qFi9R2HXgr90EwpDh15F3zsHuV%2B0DxL8WjlPpX8s738vAGYBLsJXLL9U%2FLMx2M4zQPCUyDGUxPZEqjKtwJblOiaZXvQnI2Ou%2FaivGkm6eVbspswJJjOjHG1Zh9JCi%2Bw8%2BhyACLfZDUeYnIltqemqC5YzBzPTdFfaLHySFzv62ZPIWKqmMzFx%2FRfK0yH%2Fo%2FxLvsFgftBNd77lNVfKqtCR44%2Bwwrevtn%2B0Hp9phaz%2BAWREYAVcYF22qQ8DMcZon1%2F%2F21FspI%2FiMRw3bqKhnQxPlr8Vq5kPNl42KKG4vNIRXNZ0yTo37Q%2Bc%2BmY8gBWH51%2Ff3yAUPEqpw1pGcsHXs8241BRRNpkipRnzo3IcOhjKzDFmf%2FMBjqkAUzMmVVQNR2QXgpTWI7lD%2BBZgQ7HXoAN8aCmJvM1RPhLkxnKMAHLhxZUD4WAOMIA7jacuKeWp7frtF3tA%2FD8BjgHNTr8QReHJAKCEkS4jXvmwrSrOX%2FMIvUJ%2BZH0%2BsddzI9Nclpc71sR%2BBH40sVEhRrl%2FKnpB0sf1xXWU7WPxEeELpdmT4IiTArsldfm3VlGZrVAHP6z6VXhXZcjn%2FIX2Qw%2FZ5so&X-Amz-Signature=a2be85f3f3926a6da021c156319d06c01b979e3750cf3c94212ae93016e99523&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SAZ2BSXC%2F20260226%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260226T084917Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJIMEYCIQCSvX6eVrAfz54pEAfKAkNJp73G7yEUqeNfTcChT9RPLwIhALh5kXYxoue7V%2FXpXVMT5JnLgIuioO7rZTR0LvLKzSF6Kv8DCB4QABoMNjM3NDIzMTgzODA1IgzgW14Fa%2FovgBkaacEq3AOkVsG1TV6dZpTaXXbGYMeOAElOVGIkxufTePsLP6hzRmRMkx%2BqihQJMHc1aUjmAatBXQcQCWtSvpv5nL12AgK6bpptFheaes%2Fnj%2Fqhu0Fd3b1F%2BdneXrF4eCS7Y9W939f5F2zAc1R86wfUV9pQgz%2F9GuROMl1HD97x%2BoywgnM%2B0dwwHt%2B7XOVx4ZF25GraAJLV0Vhs97prE7gTTCexeBR%2BDfJFORjUYCiLW8bOl6o9algapifVpzW%2BDnaDX1p6AkjLlnKvCe8zNHa5gLR08qFi9R2HXgr90EwpDh15F3zsHuV%2B0DxL8WjlPpX8s738vAGYBLsJXLL9U%2FLMx2M4zQPCUyDGUxPZEqjKtwJblOiaZXvQnI2Ou%2FaivGkm6eVbspswJJjOjHG1Zh9JCi%2Bw8%2BhyACLfZDUeYnIltqemqC5YzBzPTdFfaLHySFzv62ZPIWKqmMzFx%2FRfK0yH%2Fo%2FxLvsFgftBNd77lNVfKqtCR44%2Bwwrevtn%2B0Hp9phaz%2BAWREYAVcYF22qQ8DMcZon1%2F%2F21FspI%2FiMRw3bqKhnQxPlr8Vq5kPNl42KKG4vNIRXNZ0yTo37Q%2Bc%2BmY8gBWH51%2Ff3yAUPEqpw1pGcsHXs8241BRRNpkipRnzo3IcOhjKzDFmf%2FMBjqkAUzMmVVQNR2QXgpTWI7lD%2BBZgQ7HXoAN8aCmJvM1RPhLkxnKMAHLhxZUD4WAOMIA7jacuKeWp7frtF3tA%2FD8BjgHNTr8QReHJAKCEkS4jXvmwrSrOX%2FMIvUJ%2BZH0%2BsddzI9Nclpc71sR%2BBH40sVEhRrl%2FKnpB0sf1xXWU7WPxEeELpdmT4IiTArsldfm3VlGZrVAHP6z6VXhXZcjn%2FIX2Qw%2FZ5so&X-Amz-Signature=3d0241572bd74fb7bb8e83b867773733bc98d304447a670cabc4ab5888c535e3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SAZ2BSXC%2F20260226%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260226T084917Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJIMEYCIQCSvX6eVrAfz54pEAfKAkNJp73G7yEUqeNfTcChT9RPLwIhALh5kXYxoue7V%2FXpXVMT5JnLgIuioO7rZTR0LvLKzSF6Kv8DCB4QABoMNjM3NDIzMTgzODA1IgzgW14Fa%2FovgBkaacEq3AOkVsG1TV6dZpTaXXbGYMeOAElOVGIkxufTePsLP6hzRmRMkx%2BqihQJMHc1aUjmAatBXQcQCWtSvpv5nL12AgK6bpptFheaes%2Fnj%2Fqhu0Fd3b1F%2BdneXrF4eCS7Y9W939f5F2zAc1R86wfUV9pQgz%2F9GuROMl1HD97x%2BoywgnM%2B0dwwHt%2B7XOVx4ZF25GraAJLV0Vhs97prE7gTTCexeBR%2BDfJFORjUYCiLW8bOl6o9algapifVpzW%2BDnaDX1p6AkjLlnKvCe8zNHa5gLR08qFi9R2HXgr90EwpDh15F3zsHuV%2B0DxL8WjlPpX8s738vAGYBLsJXLL9U%2FLMx2M4zQPCUyDGUxPZEqjKtwJblOiaZXvQnI2Ou%2FaivGkm6eVbspswJJjOjHG1Zh9JCi%2Bw8%2BhyACLfZDUeYnIltqemqC5YzBzPTdFfaLHySFzv62ZPIWKqmMzFx%2FRfK0yH%2Fo%2FxLvsFgftBNd77lNVfKqtCR44%2Bwwrevtn%2B0Hp9phaz%2BAWREYAVcYF22qQ8DMcZon1%2F%2F21FspI%2FiMRw3bqKhnQxPlr8Vq5kPNl42KKG4vNIRXNZ0yTo37Q%2Bc%2BmY8gBWH51%2Ff3yAUPEqpw1pGcsHXs8241BRRNpkipRnzo3IcOhjKzDFmf%2FMBjqkAUzMmVVQNR2QXgpTWI7lD%2BBZgQ7HXoAN8aCmJvM1RPhLkxnKMAHLhxZUD4WAOMIA7jacuKeWp7frtF3tA%2FD8BjgHNTr8QReHJAKCEkS4jXvmwrSrOX%2FMIvUJ%2BZH0%2BsddzI9Nclpc71sR%2BBH40sVEhRrl%2FKnpB0sf1xXWU7WPxEeELpdmT4IiTArsldfm3VlGZrVAHP6z6VXhXZcjn%2FIX2Qw%2FZ5so&X-Amz-Signature=cd76d183c11318fafc9b35616e1fcb38a0bf5ce541d21b9fd52f296dc617341e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SAZ2BSXC%2F20260226%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260226T084917Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJIMEYCIQCSvX6eVrAfz54pEAfKAkNJp73G7yEUqeNfTcChT9RPLwIhALh5kXYxoue7V%2FXpXVMT5JnLgIuioO7rZTR0LvLKzSF6Kv8DCB4QABoMNjM3NDIzMTgzODA1IgzgW14Fa%2FovgBkaacEq3AOkVsG1TV6dZpTaXXbGYMeOAElOVGIkxufTePsLP6hzRmRMkx%2BqihQJMHc1aUjmAatBXQcQCWtSvpv5nL12AgK6bpptFheaes%2Fnj%2Fqhu0Fd3b1F%2BdneXrF4eCS7Y9W939f5F2zAc1R86wfUV9pQgz%2F9GuROMl1HD97x%2BoywgnM%2B0dwwHt%2B7XOVx4ZF25GraAJLV0Vhs97prE7gTTCexeBR%2BDfJFORjUYCiLW8bOl6o9algapifVpzW%2BDnaDX1p6AkjLlnKvCe8zNHa5gLR08qFi9R2HXgr90EwpDh15F3zsHuV%2B0DxL8WjlPpX8s738vAGYBLsJXLL9U%2FLMx2M4zQPCUyDGUxPZEqjKtwJblOiaZXvQnI2Ou%2FaivGkm6eVbspswJJjOjHG1Zh9JCi%2Bw8%2BhyACLfZDUeYnIltqemqC5YzBzPTdFfaLHySFzv62ZPIWKqmMzFx%2FRfK0yH%2Fo%2FxLvsFgftBNd77lNVfKqtCR44%2Bwwrevtn%2B0Hp9phaz%2BAWREYAVcYF22qQ8DMcZon1%2F%2F21FspI%2FiMRw3bqKhnQxPlr8Vq5kPNl42KKG4vNIRXNZ0yTo37Q%2Bc%2BmY8gBWH51%2Ff3yAUPEqpw1pGcsHXs8241BRRNpkipRnzo3IcOhjKzDFmf%2FMBjqkAUzMmVVQNR2QXgpTWI7lD%2BBZgQ7HXoAN8aCmJvM1RPhLkxnKMAHLhxZUD4WAOMIA7jacuKeWp7frtF3tA%2FD8BjgHNTr8QReHJAKCEkS4jXvmwrSrOX%2FMIvUJ%2BZH0%2BsddzI9Nclpc71sR%2BBH40sVEhRrl%2FKnpB0sf1xXWU7WPxEeELpdmT4IiTArsldfm3VlGZrVAHP6z6VXhXZcjn%2FIX2Qw%2FZ5so&X-Amz-Signature=8ab903de017f04ebe9c77d0ef662276bdc6dbee7c462c65abce35e1459c5e501&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UVU3OU6W%2F20260226%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260226T084918Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJIMEYCIQDxImn1XU2q%2FbLQn745uzWLoeG2za%2FS6Fn67rbZ7nC5pwIhALswc4iep4%2Bbl4gZ%2BUD6pha4ijhkqd7YvtV0ZwhAerMcKv8DCB4QABoMNjM3NDIzMTgzODA1Igz4CojM%2FPKvABfRRTAq3AP1mW%2FbiDFAz90%2Fzef6ELCEf5kXBfKI%2BB8AiuleXandYKU%2FbIz4mYv%2Fta7Qmln19gnmxV4Hk7QCejT9Hgkiyi4lkgvQ8iCuMWf6IIUG0HXBQQ6e6v67UpjtZUkVB834p0xWbmV8VjWJU73AkjHFkEQtFwR0UrbK%2FuNLX849XTyzkUgmxhBXVloeq9iajXMbZdfhbzABT5lhUp5kRlyFy1ubnDtbMIoX8Mhh3IawrBZaFQUG%2FJ7%2F7UTv7brduQDXr8iK05K0NPf8R5mODx5qa4wCoUklqc5HO5%2F8Z6wW%2BQfHIH%2FKEkQPBNvXvVFVxRctW9pJclNpoBVGtYBANYa%2F5Crb%2F1GIPIHk8XyUvIpwT7dC6%2Byonvlza7xapYsHHA82cy2W03ROy9fa8MrYJ6S8sZskLCw1AolqkYkN%2B9njaAUVMFqtktjsFCVy1PUja0ets5nTpM6uR0c9Q%2FMIuqHWVJJ0C2FwcxTxvAwygo%2BPzfmuRYUwxfoE4sjmekwZyU5HBe7dUzehqmN40AJC4AozgnKE%2F9sskRyu6jG4QNidWUlCoH1u%2FcOJYgjHNFSpRDD%2FDlY3E%2Frej1EMDWBAk93WUdW4hDKyPvodAZ1KU58wLDiFQmg7jlZBIGBD7TolbzDXmf%2FMBjqkASU7Qvb2Sko8T6JNud97liuterf34miMztpYX%2BjurFyjY1rYrYJTAPXZgez3Dfcl%2Fd%2F%2BMOgiHsm0VYRCjgNhO8Wz11LcRNleyP6edQmTkwmFec%2F0vzdd1tOqBRyONXq5naO6QcMqp7cS4ZByqNCPz2Vqpxse%2BduB06qWdNrNkjD8WiSaMD8N1FDswYUabNY70WWqmJGaJrrYRPMBM6VKk3SVDBdh&X-Amz-Signature=c1c44beaf0fd9bf9d885cf8fe42d64c545776ea075cca02186346513423dce43&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UCYHBSJF%2F20260226%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260226T084918Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJGMEQCIEV7EdNpJB%2FJ%2Bn%2FgBKq27jnhoaYVgQ3nX96%2BHrt%2FMjkVAiAoI5K9idZvPTjerGycIWgt6JXRbcDake7%2FkGMa5zXPLyr%2FAwgeEAAaDDYzNzQyMzE4MzgwNSIMC3u3%2Fzoh1FBYIs%2FFKtwDZSViNel%2FjBjMKFpZaoj8ykfSiZ%2FELgsHdPI6fdZ5hGtY9%2FelAuTbAGCv2zMiCNR%2FXeNOXqXlW3j8awJ76wW2uo1Kz%2FBmqLng9KN9UWGEDXj%2BJSFtwYwB6nF9k8ZBezfYFiSTtsWa3vT6%2Bikqznf74gThea5a72wQjUaYHqC6ZyPtXXbH3AkegoViRbaWqhUWksyEQaw7s6uNXF6Viw%2FbGDBLPHvxt3xnXzw%2FGRt2mxMlnhLJ9nYJgJGsHWllcndbZuOjQ5C2SPNmaGaExgejNxXvoE3Of4Ya3wsE%2BzlhYF%2FTLx68D5FMM3Xy21g2400qqkc3ESxbxVCmLxpuvVcw5ncdhYO7c4FLiiHAgvX8%2BLJrX4xjzPH9Nh31mFduOlu8HaaLrqf8vnq%2BFrktWz7ec5G682AojjQmqH7Yx%2FqCq7Wrjph4jxECDzjUcFRTFGB5oCVn6Y7qesWe%2BnUjE7jwryil97vt20%2B70WfHtTMV3PakxHp7j0%2F2xjpKsp5EDAEU93se4%2BWXp8z0h08peEtf%2Bj8LbdT%2FJk7ajaIzRdt73%2Fh%2BeQdfJpY1IH1arJQo7diG4d3TQwUFye1i6mPx1AIhajGJgP0GBOpAh2uIRREIrUSR5qDPjMXr5UFEmL4w2Zj%2FzAY6pgGbIB881qDzydYrW2rF8%2FGr0%2B2q0IwzbfGng8PhVyyTx9izuj1iTMyHpNcl1572Z8F%2F1fTiFtPlqBSfbJGXrXQ7pb3uF9zIG9T%2Fa0dXayhWy2ktjiAcdPMoCOqzTS5kCqCqd%2B1WbllzAmKBKD4HGqKOpRiqWWLKxu4sqgMtISxMw5nn2kKQTDLWG19KSriTRROh%2By%2FSDtYvMFqOROa052ZKbVmdyWm1&X-Amz-Signature=81ae0e229ecc00efa6a179bcf01f8b1e30fefb40ecc0e297bef592536694ba26&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UCYHBSJF%2F20260226%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260226T084918Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJGMEQCIEV7EdNpJB%2FJ%2Bn%2FgBKq27jnhoaYVgQ3nX96%2BHrt%2FMjkVAiAoI5K9idZvPTjerGycIWgt6JXRbcDake7%2FkGMa5zXPLyr%2FAwgeEAAaDDYzNzQyMzE4MzgwNSIMC3u3%2Fzoh1FBYIs%2FFKtwDZSViNel%2FjBjMKFpZaoj8ykfSiZ%2FELgsHdPI6fdZ5hGtY9%2FelAuTbAGCv2zMiCNR%2FXeNOXqXlW3j8awJ76wW2uo1Kz%2FBmqLng9KN9UWGEDXj%2BJSFtwYwB6nF9k8ZBezfYFiSTtsWa3vT6%2Bikqznf74gThea5a72wQjUaYHqC6ZyPtXXbH3AkegoViRbaWqhUWksyEQaw7s6uNXF6Viw%2FbGDBLPHvxt3xnXzw%2FGRt2mxMlnhLJ9nYJgJGsHWllcndbZuOjQ5C2SPNmaGaExgejNxXvoE3Of4Ya3wsE%2BzlhYF%2FTLx68D5FMM3Xy21g2400qqkc3ESxbxVCmLxpuvVcw5ncdhYO7c4FLiiHAgvX8%2BLJrX4xjzPH9Nh31mFduOlu8HaaLrqf8vnq%2BFrktWz7ec5G682AojjQmqH7Yx%2FqCq7Wrjph4jxECDzjUcFRTFGB5oCVn6Y7qesWe%2BnUjE7jwryil97vt20%2B70WfHtTMV3PakxHp7j0%2F2xjpKsp5EDAEU93se4%2BWXp8z0h08peEtf%2Bj8LbdT%2FJk7ajaIzRdt73%2Fh%2BeQdfJpY1IH1arJQo7diG4d3TQwUFye1i6mPx1AIhajGJgP0GBOpAh2uIRREIrUSR5qDPjMXr5UFEmL4w2Zj%2FzAY6pgGbIB881qDzydYrW2rF8%2FGr0%2B2q0IwzbfGng8PhVyyTx9izuj1iTMyHpNcl1572Z8F%2F1fTiFtPlqBSfbJGXrXQ7pb3uF9zIG9T%2Fa0dXayhWy2ktjiAcdPMoCOqzTS5kCqCqd%2B1WbllzAmKBKD4HGqKOpRiqWWLKxu4sqgMtISxMw5nn2kKQTDLWG19KSriTRROh%2By%2FSDtYvMFqOROa052ZKbVmdyWm1&X-Amz-Signature=e64fd73f1b09a474a231be7ae95978363e1b31f937d01f990a3959e0b983f25c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
