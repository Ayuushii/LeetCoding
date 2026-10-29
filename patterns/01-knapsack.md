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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YY3GL5NV%2F20261029%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261029T145656Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFcaCXVzLXdlc3QtMiJGMEQCIHurtmIEHY031NC4zmPF384uiAMfoJk9xwie5e0QHTbbAiB32lK9oxEzXThFzXvjzD6q9DJHcHmqhLyzJI13QI%2FC%2Fir%2FAwggEAAaDDYzNzQyMzE4MzgwNSIMSTmnvXQxYuKRClGPKtwDx2CCaVUApEjKrW7DW%2FkIpwoyIi7P%2F%2FY2%2BswnZRKxuzbWOG1RgTS8ymo6xAuhCXr%2FXrUNfIJok%2B20kqivQ59qXNVpHIcJOynQdr7dUbSOTspdAoZGD9h0i4AR97ocFgDr5ZT%2Fasp%2BgyQ0w1O9KYtvwN%2BDQSycsMuczHMYOBd7ge6IT5See%2F%2Fv6sQ4q6eTVHoOK3M1fkKL40izXKsiIoVW8GI64bQId%2FUrmtIzBFH7GJyWauWdXpqmG2bxl0n9QKYQehqQku7zkQ9vSfYtgeYBtW7ZYXPTroAGirZ5Vx97c870uqRIJara1SZaWmftuPCf96WReX7UJMKWNZIUiixlKKBk2hclLVj37KzuqDSy2JT%2FENnqyFX8MTSLoqTX7q%2FSQMnZO%2BsFNPBM5KSNopmQ42UCGYlp0tYnX7nBiYLkpogoX7BdDw%2BQUBqV0A3EvMLgmHD3I%2FbwuOBerOwXpYr7QGA4M2rWTq%2BJjw0zgNOmazYDsdm39o6CKc%2B0f4EjdMBLszkGj5TnBiVLNTJnGvllmjmIPad29dhuDKSK7K6PbH2SUShPbPb73AHi9n8bItNmnw4CWMp2IHpCqUjONGGuxgw%2BSbxIWdnB9nurIMsrSUQd%2BIOu1OeSsZtGgH8w%2FrSN1wY6pgFIwzEtUfkLcL8YAgcGpZMIusX4XGXycspcMNCQWR0g8b7mzK8xo8JIZAByL%2F2buPDWiHt2HwLfcAd7hWQMgjLAglrCtRoJtuU2M0WVqgkmyUW%2B%2Bo9PRpOrASle%2Fu4deFXZC%2FGgk%2Fwp1Lq1eJXpSCh4g7M9RvJw6Ej39DYStLm6nEUn8tRnfv89mh7hQYkWcJASb%2BFv%2BLG2WqE8vyKRR4YrbX9O61BT&X-Amz-Signature=9499e27d673a8903e8918b792ef5f77bfa726001e0b822920f8c25b935a1f583&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YY3GL5NV%2F20261029%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261029T145656Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFcaCXVzLXdlc3QtMiJGMEQCIHurtmIEHY031NC4zmPF384uiAMfoJk9xwie5e0QHTbbAiB32lK9oxEzXThFzXvjzD6q9DJHcHmqhLyzJI13QI%2FC%2Fir%2FAwggEAAaDDYzNzQyMzE4MzgwNSIMSTmnvXQxYuKRClGPKtwDx2CCaVUApEjKrW7DW%2FkIpwoyIi7P%2F%2FY2%2BswnZRKxuzbWOG1RgTS8ymo6xAuhCXr%2FXrUNfIJok%2B20kqivQ59qXNVpHIcJOynQdr7dUbSOTspdAoZGD9h0i4AR97ocFgDr5ZT%2Fasp%2BgyQ0w1O9KYtvwN%2BDQSycsMuczHMYOBd7ge6IT5See%2F%2Fv6sQ4q6eTVHoOK3M1fkKL40izXKsiIoVW8GI64bQId%2FUrmtIzBFH7GJyWauWdXpqmG2bxl0n9QKYQehqQku7zkQ9vSfYtgeYBtW7ZYXPTroAGirZ5Vx97c870uqRIJara1SZaWmftuPCf96WReX7UJMKWNZIUiixlKKBk2hclLVj37KzuqDSy2JT%2FENnqyFX8MTSLoqTX7q%2FSQMnZO%2BsFNPBM5KSNopmQ42UCGYlp0tYnX7nBiYLkpogoX7BdDw%2BQUBqV0A3EvMLgmHD3I%2FbwuOBerOwXpYr7QGA4M2rWTq%2BJjw0zgNOmazYDsdm39o6CKc%2B0f4EjdMBLszkGj5TnBiVLNTJnGvllmjmIPad29dhuDKSK7K6PbH2SUShPbPb73AHi9n8bItNmnw4CWMp2IHpCqUjONGGuxgw%2BSbxIWdnB9nurIMsrSUQd%2BIOu1OeSsZtGgH8w%2FrSN1wY6pgFIwzEtUfkLcL8YAgcGpZMIusX4XGXycspcMNCQWR0g8b7mzK8xo8JIZAByL%2F2buPDWiHt2HwLfcAd7hWQMgjLAglrCtRoJtuU2M0WVqgkmyUW%2B%2Bo9PRpOrASle%2Fu4deFXZC%2FGgk%2Fwp1Lq1eJXpSCh4g7M9RvJw6Ej39DYStLm6nEUn8tRnfv89mh7hQYkWcJASb%2BFv%2BLG2WqE8vyKRR4YrbX9O61BT&X-Amz-Signature=2b98a3ce1252bc9d1fa8bc3dfca219050e549a0fb3f06ea3f1c452c40f9a4a9e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YY3GL5NV%2F20261029%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261029T145656Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFcaCXVzLXdlc3QtMiJGMEQCIHurtmIEHY031NC4zmPF384uiAMfoJk9xwie5e0QHTbbAiB32lK9oxEzXThFzXvjzD6q9DJHcHmqhLyzJI13QI%2FC%2Fir%2FAwggEAAaDDYzNzQyMzE4MzgwNSIMSTmnvXQxYuKRClGPKtwDx2CCaVUApEjKrW7DW%2FkIpwoyIi7P%2F%2FY2%2BswnZRKxuzbWOG1RgTS8ymo6xAuhCXr%2FXrUNfIJok%2B20kqivQ59qXNVpHIcJOynQdr7dUbSOTspdAoZGD9h0i4AR97ocFgDr5ZT%2Fasp%2BgyQ0w1O9KYtvwN%2BDQSycsMuczHMYOBd7ge6IT5See%2F%2Fv6sQ4q6eTVHoOK3M1fkKL40izXKsiIoVW8GI64bQId%2FUrmtIzBFH7GJyWauWdXpqmG2bxl0n9QKYQehqQku7zkQ9vSfYtgeYBtW7ZYXPTroAGirZ5Vx97c870uqRIJara1SZaWmftuPCf96WReX7UJMKWNZIUiixlKKBk2hclLVj37KzuqDSy2JT%2FENnqyFX8MTSLoqTX7q%2FSQMnZO%2BsFNPBM5KSNopmQ42UCGYlp0tYnX7nBiYLkpogoX7BdDw%2BQUBqV0A3EvMLgmHD3I%2FbwuOBerOwXpYr7QGA4M2rWTq%2BJjw0zgNOmazYDsdm39o6CKc%2B0f4EjdMBLszkGj5TnBiVLNTJnGvllmjmIPad29dhuDKSK7K6PbH2SUShPbPb73AHi9n8bItNmnw4CWMp2IHpCqUjONGGuxgw%2BSbxIWdnB9nurIMsrSUQd%2BIOu1OeSsZtGgH8w%2FrSN1wY6pgFIwzEtUfkLcL8YAgcGpZMIusX4XGXycspcMNCQWR0g8b7mzK8xo8JIZAByL%2F2buPDWiHt2HwLfcAd7hWQMgjLAglrCtRoJtuU2M0WVqgkmyUW%2B%2Bo9PRpOrASle%2Fu4deFXZC%2FGgk%2Fwp1Lq1eJXpSCh4g7M9RvJw6Ej39DYStLm6nEUn8tRnfv89mh7hQYkWcJASb%2BFv%2BLG2WqE8vyKRR4YrbX9O61BT&X-Amz-Signature=969de3b71f02c85dbc5ef07c337c2f26b12fbf167eb2944931833120c774ed79&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663I2SKPF6%2F20261029%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261029T145656Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFcaCXVzLXdlc3QtMiJGMEQCIB47uKGWbUnyfjQEu3AxNa3zLA%2Fz8v9QaIeQ4MNtmeSUAiBTFWTQEFFq0VqRCFHsMesdsbS8N9pDTBARA2%2F9rRikaCr%2FAwgfEAAaDDYzNzQyMzE4MzgwNSIMYFIUNq5zT2cjtfb0KtwDGRufUBnX1R8yuJ%2FIz5KZWtmQf6AYXtD0RIFH0rufsNPNFqgd5q976r3e1oT4mESXyXfqoZ2jAHrBtD8%2F%2FS8ySu8QpfAvb7J98%2B7oSIFDqeIJsYME27CQxwJUNJ%2BPZ%2Fm6F6gzXi%2FXRYP%2BegkyrFqH3aLgzpUs1Aqq7vwIBRF88FEfuACDjuva%2BBNAJk3N1%2Fb%2FMwErPk63Xens72S5gWXqIDh5AHSy%2FmA%2F63T9jKIjLUgVrZJJm2pfZlfW3MHmI6KHlv0f878cFc282mZQhPDWPAHicvVystsit7PH7ebmmxdEVP30Z2AWDvrh9ZW7fydLG%2BrTUlRnvKBCyePRnMJNePzH5psiVzcad7mQIqBn2bvsmcqJVI%2BqXjqQVy%2FCqL46g9D%2FzV5WCHmOho0qK3kK8RZQGcefBLhP3FBz5yF2yxw3UYPYcYZEX6iTSmg2WdW4PWHuDFy6XhdyPimrv0DA1BVs3hHYR9WvwMdDZrXC%2BFgnuA7uJB%2FY3UvONUMe40MTJ%2BOg9a93VT9%2FOGSP8gZxYNLkTGZCgiFDQgnZKjMyqwJ%2BjIY8j4D7ge1U9Or9fC4LcZOXjpX5AfdjqGch%2BysI0hOgTueRiYazKuuPZbdZZR31kmLvqH7UBnITC3kwi7KN1wY6pgFkAmSasif1Dn1VKdsTcdVhi2eLBYXX8n4v4CnKWS866PBSnQNrIP%2FllNpVyu6bQEdjinlziN32w3KttoZNI3KNlAG0BAM2oo5iZiM%2FA3SAueoBm8Mx%2BjkNDyC2TU%2BEMcpgwYhrTVaoUoykupXU2cvp%2F4EMpr%2B4Jzwt1mXwBeewlXMP0Ldx5UI845dxSVubYMngouFKt7Hh%2F%2B4X4PEC4qKkptMwESPB&X-Amz-Signature=8c7dbde9e7071256e940090b90dc859ec6ede61f85a9dd8009f3123c924ad7b0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663I2SKPF6%2F20261029%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261029T145656Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFcaCXVzLXdlc3QtMiJGMEQCIB47uKGWbUnyfjQEu3AxNa3zLA%2Fz8v9QaIeQ4MNtmeSUAiBTFWTQEFFq0VqRCFHsMesdsbS8N9pDTBARA2%2F9rRikaCr%2FAwgfEAAaDDYzNzQyMzE4MzgwNSIMYFIUNq5zT2cjtfb0KtwDGRufUBnX1R8yuJ%2FIz5KZWtmQf6AYXtD0RIFH0rufsNPNFqgd5q976r3e1oT4mESXyXfqoZ2jAHrBtD8%2F%2FS8ySu8QpfAvb7J98%2B7oSIFDqeIJsYME27CQxwJUNJ%2BPZ%2Fm6F6gzXi%2FXRYP%2BegkyrFqH3aLgzpUs1Aqq7vwIBRF88FEfuACDjuva%2BBNAJk3N1%2Fb%2FMwErPk63Xens72S5gWXqIDh5AHSy%2FmA%2F63T9jKIjLUgVrZJJm2pfZlfW3MHmI6KHlv0f878cFc282mZQhPDWPAHicvVystsit7PH7ebmmxdEVP30Z2AWDvrh9ZW7fydLG%2BrTUlRnvKBCyePRnMJNePzH5psiVzcad7mQIqBn2bvsmcqJVI%2BqXjqQVy%2FCqL46g9D%2FzV5WCHmOho0qK3kK8RZQGcefBLhP3FBz5yF2yxw3UYPYcYZEX6iTSmg2WdW4PWHuDFy6XhdyPimrv0DA1BVs3hHYR9WvwMdDZrXC%2BFgnuA7uJB%2FY3UvONUMe40MTJ%2BOg9a93VT9%2FOGSP8gZxYNLkTGZCgiFDQgnZKjMyqwJ%2BjIY8j4D7ge1U9Or9fC4LcZOXjpX5AfdjqGch%2BysI0hOgTueRiYazKuuPZbdZZR31kmLvqH7UBnITC3kwi7KN1wY6pgFkAmSasif1Dn1VKdsTcdVhi2eLBYXX8n4v4CnKWS866PBSnQNrIP%2FllNpVyu6bQEdjinlziN32w3KttoZNI3KNlAG0BAM2oo5iZiM%2FA3SAueoBm8Mx%2BjkNDyC2TU%2BEMcpgwYhrTVaoUoykupXU2cvp%2F4EMpr%2B4Jzwt1mXwBeewlXMP0Ldx5UI845dxSVubYMngouFKt7Hh%2F%2B4X4PEC4qKkptMwESPB&X-Amz-Signature=e405368fe5ec5a2a687c0ae3b761c0226c4abf3be5803d045f246bd4b9f0b2b5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663I2SKPF6%2F20261029%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261029T145656Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFcaCXVzLXdlc3QtMiJGMEQCIB47uKGWbUnyfjQEu3AxNa3zLA%2Fz8v9QaIeQ4MNtmeSUAiBTFWTQEFFq0VqRCFHsMesdsbS8N9pDTBARA2%2F9rRikaCr%2FAwgfEAAaDDYzNzQyMzE4MzgwNSIMYFIUNq5zT2cjtfb0KtwDGRufUBnX1R8yuJ%2FIz5KZWtmQf6AYXtD0RIFH0rufsNPNFqgd5q976r3e1oT4mESXyXfqoZ2jAHrBtD8%2F%2FS8ySu8QpfAvb7J98%2B7oSIFDqeIJsYME27CQxwJUNJ%2BPZ%2Fm6F6gzXi%2FXRYP%2BegkyrFqH3aLgzpUs1Aqq7vwIBRF88FEfuACDjuva%2BBNAJk3N1%2Fb%2FMwErPk63Xens72S5gWXqIDh5AHSy%2FmA%2F63T9jKIjLUgVrZJJm2pfZlfW3MHmI6KHlv0f878cFc282mZQhPDWPAHicvVystsit7PH7ebmmxdEVP30Z2AWDvrh9ZW7fydLG%2BrTUlRnvKBCyePRnMJNePzH5psiVzcad7mQIqBn2bvsmcqJVI%2BqXjqQVy%2FCqL46g9D%2FzV5WCHmOho0qK3kK8RZQGcefBLhP3FBz5yF2yxw3UYPYcYZEX6iTSmg2WdW4PWHuDFy6XhdyPimrv0DA1BVs3hHYR9WvwMdDZrXC%2BFgnuA7uJB%2FY3UvONUMe40MTJ%2BOg9a93VT9%2FOGSP8gZxYNLkTGZCgiFDQgnZKjMyqwJ%2BjIY8j4D7ge1U9Or9fC4LcZOXjpX5AfdjqGch%2BysI0hOgTueRiYazKuuPZbdZZR31kmLvqH7UBnITC3kwi7KN1wY6pgFkAmSasif1Dn1VKdsTcdVhi2eLBYXX8n4v4CnKWS866PBSnQNrIP%2FllNpVyu6bQEdjinlziN32w3KttoZNI3KNlAG0BAM2oo5iZiM%2FA3SAueoBm8Mx%2BjkNDyC2TU%2BEMcpgwYhrTVaoUoykupXU2cvp%2F4EMpr%2B4Jzwt1mXwBeewlXMP0Ldx5UI845dxSVubYMngouFKt7Hh%2F%2B4X4PEC4qKkptMwESPB&X-Amz-Signature=cef70fbe397154708ae942bb02b2c73bdd5c99e19b5bc95d74598090e87dab32&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663I2SKPF6%2F20261029%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261029T145656Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFcaCXVzLXdlc3QtMiJGMEQCIB47uKGWbUnyfjQEu3AxNa3zLA%2Fz8v9QaIeQ4MNtmeSUAiBTFWTQEFFq0VqRCFHsMesdsbS8N9pDTBARA2%2F9rRikaCr%2FAwgfEAAaDDYzNzQyMzE4MzgwNSIMYFIUNq5zT2cjtfb0KtwDGRufUBnX1R8yuJ%2FIz5KZWtmQf6AYXtD0RIFH0rufsNPNFqgd5q976r3e1oT4mESXyXfqoZ2jAHrBtD8%2F%2FS8ySu8QpfAvb7J98%2B7oSIFDqeIJsYME27CQxwJUNJ%2BPZ%2Fm6F6gzXi%2FXRYP%2BegkyrFqH3aLgzpUs1Aqq7vwIBRF88FEfuACDjuva%2BBNAJk3N1%2Fb%2FMwErPk63Xens72S5gWXqIDh5AHSy%2FmA%2F63T9jKIjLUgVrZJJm2pfZlfW3MHmI6KHlv0f878cFc282mZQhPDWPAHicvVystsit7PH7ebmmxdEVP30Z2AWDvrh9ZW7fydLG%2BrTUlRnvKBCyePRnMJNePzH5psiVzcad7mQIqBn2bvsmcqJVI%2BqXjqQVy%2FCqL46g9D%2FzV5WCHmOho0qK3kK8RZQGcefBLhP3FBz5yF2yxw3UYPYcYZEX6iTSmg2WdW4PWHuDFy6XhdyPimrv0DA1BVs3hHYR9WvwMdDZrXC%2BFgnuA7uJB%2FY3UvONUMe40MTJ%2BOg9a93VT9%2FOGSP8gZxYNLkTGZCgiFDQgnZKjMyqwJ%2BjIY8j4D7ge1U9Or9fC4LcZOXjpX5AfdjqGch%2BysI0hOgTueRiYazKuuPZbdZZR31kmLvqH7UBnITC3kwi7KN1wY6pgFkAmSasif1Dn1VKdsTcdVhi2eLBYXX8n4v4CnKWS866PBSnQNrIP%2FllNpVyu6bQEdjinlziN32w3KttoZNI3KNlAG0BAM2oo5iZiM%2FA3SAueoBm8Mx%2BjkNDyC2TU%2BEMcpgwYhrTVaoUoykupXU2cvp%2F4EMpr%2B4Jzwt1mXwBeewlXMP0Ldx5UI845dxSVubYMngouFKt7Hh%2F%2B4X4PEC4qKkptMwESPB&X-Amz-Signature=bae8a1a3f782fbe09e6d7afc2ffede8548fdad7f6c92a49ea753c84d9054db85&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666ZI2CUVK%2F20261029%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261029T145656Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFcaCXVzLXdlc3QtMiJHMEUCICgwnfi8nq8GLk%2FKHAvPFByVyVW%2FkRtiNpZ2XQDV36%2FvAiEAwwTLEXpNvAvhaG1EqhCH1ralttG89N85LYec9pVILrkq%2FwMIHxAAGgw2Mzc0MjMxODM4MDUiDFbzTRa5Xos9MNjb8yrcAyTAqYg7LAXESRSmBPiiyA9i8Tob%2FQS9W%2BLxFNGasfCv2d%2FpvifnieXF6wgBaauIKWvCEeYlRj1ahVS2oQJvUF7NmiwScBUqIqg50jkBG%2Bqq2nwf9YsWAKbz1U0BHAAJABh3tQfLZ1biGCfhrzmbDlK9HQ8vRqMCddg66LgjtcvyhTTcGiu9Dw1cyUuUeTGjaNejUsdCkiI0K6LaGJEd8X5HyqW1f84l%2FGCARcqkm5AopfgGjq74ciexDDfNeNz7ul%2F%2Bxwm%2B5MHjcWnacxZ0p%2FSY8lvmAEtde1EmqKrLnNI5amSMzq6OeKYNbbFJIcH%2FwPN7ciKxEFtCfMfDpiYajVM3A3ge4ZpBDWnXjLDhI88KPJjCa9y%2Bbbg70B3giIM2bNrP6CzoUPoEdAUJ3AkzLmtc4ZNiRnWHWVCcyQOG9fFRpkYySaBlpn3Duy7WIFitVv3JGYepAP7KqcOwmrhsNqwM19SAdUt2hN8QGKwcd%2BLaMxAnMVhzavXOMOejXpuJZgze7XppV%2FYjRDXM5Sg%2FpjVk3%2BYebhjtn89OsSM8XS5Dx6uVdhpr7xp%2FJifC%2BsITUM2miCHBEQ4bzRYNXaVbOX4C7j9zMDK%2FajR1CkyQXMXFbEjyfypHpc46Jw%2BcML60jdcGOqUB2YCmFkUkTUox7%2Bnre9UY4hV3OZmUjKzXO8a5y%2FfbdcCa10o4FXyW2g1pgwsKI4iqqdmzlFFuVUTQIPV4vpYjNzwZSipQS1bLXymK7H%2FOgz3G7KrRGx9W8oMABNQ4T53thMX9okpRX7JIkHGEheCkYA9eM3O%2BfH%2FlUqvUng1oOvUEwA7EZP7jppYtnmq0R9uHhu%2FEir%2BKVrRQ6MOhohxgGBJyiIO5&X-Amz-Signature=50bb1820f1739f4b64ac21d4957b29897588927317fe38ae9e73cc630b5da3f6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WCAOPJ3T%2F20261029%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261029T145656Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFcaCXVzLXdlc3QtMiJIMEYCIQCt2XAB2IUDcHyQG92prfdk0xsJx%2BjU08q2CT6J31E2LgIhANwWoviHis7Y7S49JB26J4TappUM61e7WjtTCS6EZ%2BKJKv8DCB8QABoMNjM3NDIzMTgzODA1Igy8XZ7HeiI9iTwSyncq3AOu3ul%2FMKXzjowSjlkSMJY9XGhlVrEEGp7RzFZ2JVgPIQMlFW4%2FH%2F88BRPuawOYu4qBYk7gexYe%2F8F5LFpqHNesG6uI95PiRfd4tXNuvDZ6GRgjI1lEMItB2%2BOw4Sd%2BVdHoRCOm6ysHlXhxc8PDXL0%2BPXj22I55FbkDPI0YrJWz2h9TbAXse3M3WmjjM%2FKjWcoBylGHIUkzRlK%2BvGvVE9OD%2BiXZZuG%2Fqjrz7AlTOUkTHdA1ofoevzgy2tiXmWGmqTgJsSyVIFkeqy%2BktHUaAonerc1fJkdXAy471ZkFjn0fwiyy2c68sr3r7mN80nmX2V1aEOgLh1oG0cUl%2BshcUDn0JDORV49XfJkp%2FtoR8S%2B0taV2cJVNtEjpq0YIBd7FfiMDMo%2F44n7KUxqXklDiBM9ybC97y0MQPJeuQtgT1GKDgy%2F11D%2Bzh%2Bt2zfFm5NZCh%2B6Ed30bY2NjEu3pMVAJAgwIkAOF9s%2B3SAYtEMRiL%2F4oo0bRhayOy%2B%2B30Rvh2Q9%2F%2B729pil9O2CXIJTo0c7LvxBtz8mGzItFG05GZLJaFmBusSpr1uPQ6VlHLB086rNSGEyzRjMNq5QDMI6P8OMU6LqGoGyhRu8lNvv4Njp8HR64f4SiUyKL6MaievLquDD0sY3XBjqkAbhJDLIQ%2FR8VaysUa3KNSf5hbE0qiaS6RkEy9eE8tX9ZYOu%2FD6vNQiitwZXHgxGtizHQ5pK6j2MLsYNqwUND14joNKryrS4zE9vslQYQpMo3wM1pTmWWr2F47f5xLmtMdXeoFFUf%2B91W8wHUMXIOKQK9wmevBNWQ7wr9HiiKyhwhV8z6Z%2FW3wuWIzWftwdkAkdv6RYsmmPh4JbYG4%2BXSnvZCghwD&X-Amz-Signature=0ff0f7981feaa7d30a3312bbfb0e8a847a349a790eb13c130aaea6e2c0b892cf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WCAOPJ3T%2F20261029%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261029T145656Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFcaCXVzLXdlc3QtMiJIMEYCIQCt2XAB2IUDcHyQG92prfdk0xsJx%2BjU08q2CT6J31E2LgIhANwWoviHis7Y7S49JB26J4TappUM61e7WjtTCS6EZ%2BKJKv8DCB8QABoMNjM3NDIzMTgzODA1Igy8XZ7HeiI9iTwSyncq3AOu3ul%2FMKXzjowSjlkSMJY9XGhlVrEEGp7RzFZ2JVgPIQMlFW4%2FH%2F88BRPuawOYu4qBYk7gexYe%2F8F5LFpqHNesG6uI95PiRfd4tXNuvDZ6GRgjI1lEMItB2%2BOw4Sd%2BVdHoRCOm6ysHlXhxc8PDXL0%2BPXj22I55FbkDPI0YrJWz2h9TbAXse3M3WmjjM%2FKjWcoBylGHIUkzRlK%2BvGvVE9OD%2BiXZZuG%2Fqjrz7AlTOUkTHdA1ofoevzgy2tiXmWGmqTgJsSyVIFkeqy%2BktHUaAonerc1fJkdXAy471ZkFjn0fwiyy2c68sr3r7mN80nmX2V1aEOgLh1oG0cUl%2BshcUDn0JDORV49XfJkp%2FtoR8S%2B0taV2cJVNtEjpq0YIBd7FfiMDMo%2F44n7KUxqXklDiBM9ybC97y0MQPJeuQtgT1GKDgy%2F11D%2Bzh%2Bt2zfFm5NZCh%2B6Ed30bY2NjEu3pMVAJAgwIkAOF9s%2B3SAYtEMRiL%2F4oo0bRhayOy%2B%2B30Rvh2Q9%2F%2B729pil9O2CXIJTo0c7LvxBtz8mGzItFG05GZLJaFmBusSpr1uPQ6VlHLB086rNSGEyzRjMNq5QDMI6P8OMU6LqGoGyhRu8lNvv4Njp8HR64f4SiUyKL6MaievLquDD0sY3XBjqkAbhJDLIQ%2FR8VaysUa3KNSf5hbE0qiaS6RkEy9eE8tX9ZYOu%2FD6vNQiitwZXHgxGtizHQ5pK6j2MLsYNqwUND14joNKryrS4zE9vslQYQpMo3wM1pTmWWr2F47f5xLmtMdXeoFFUf%2B91W8wHUMXIOKQK9wmevBNWQ7wr9HiiKyhwhV8z6Z%2FW3wuWIzWftwdkAkdv6RYsmmPh4JbYG4%2BXSnvZCghwD&X-Amz-Signature=b15e97b00f4161678f9680be06aca34be51f1036ab411745f72c3316c840a1fb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
