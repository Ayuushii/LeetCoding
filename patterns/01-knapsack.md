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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SQFTDNFS%2F20260625%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260625T104028Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCycV6yNYB4e2X5NpMNVgZnKB5%2BZSGBW%2FIMC2eBlTVQIgIgZL%2FKXqaTLzyuwIcST4Mtd%2FFpHtccur4OR%2Bth1WsdIv8q%2FwMIShAAGgw2Mzc0MjMxODM4MDUiDIo5dBnLZFXnR%2FYj1SrcAw%2F51vOWx6lkDA9ZDMetlVKd4WUOCg13wkIaGkEThJiM5M6eFmZbMN6jY43VEL2uTrg9OFHtaj3%2FEqQYZujhV2EN4qHHLWL6YL1xI81AP5cDPdecle5I9ThbCIKrzv7i8mnJMRGJOewbjRe74saH23JKtofV6XjF0oUpvvH%2BckVZzb1l7YDJwKvnRZ5R1l%2BAc9PIailBoIF6yqUBH6w3QuElHLaVmD2aom5hpmx4POULqFh5L7Lo%2By1%2BtajzPCRYaBfgczVVfullssWBiRlf7J5tuhH66Rf1%2BAiXMT4Ai%2FRKO46RGc8wQb0Zz3eFKmtLB%2BTCFRPDWK%2FXAUPtanXwNdfTXgRTIsimq6Q5THuBHSj%2BaVXUV7o2rarCF7uM90%2FhqUhmY9U9EnO3IMsTq3fAJ4DSt4YxUgF5UMb2kUVrtvaeUDLxJAKc%2F%2BujEssM%2BXJInh7NOGyxY%2Fwg4GGu5CvdIZKHw1VKJUPXwAJdI3nwN0NDgUjGhbwLzp2AmXH4ilCCGgN4%2F8vqsElFmLzgLVYFyrHtg%2BkbGg75PAJ3e5DWp86khTfARm0m2Qe1ruPwk5F%2BKCXXexchZEddKqkjbLs0OImazz1gDcvyEsLnDEgJtPXLCgTW5j27BSHZk558MJjP89EGOqUBMUsWLUAE%2FraM%2B4b8vxTkBs02RMDXuW0QLfrsVkjdL0VBfyyXjeUf7DCP%2F4HpWN%2FSP7WFAw5GZGwLnpMrv0N6Pb9xUUoGevAVbFImSmIu54vf6YEBoipfBle8h6ohil9Lo92nd9yb2TSoWMp9GyEm%2BjEUUUEBmLEVPSpEfbmFQRo99Ihv4fa0rgAfv8E6ihzNNTKXIK7807ddrYAcsfZt1sScMMi2&X-Amz-Signature=39aaa4d2af03674be975ebd00fc4b78f3146dde131d5ea693a6a57caaa7bbfbb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SQFTDNFS%2F20260625%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260625T104028Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCycV6yNYB4e2X5NpMNVgZnKB5%2BZSGBW%2FIMC2eBlTVQIgIgZL%2FKXqaTLzyuwIcST4Mtd%2FFpHtccur4OR%2Bth1WsdIv8q%2FwMIShAAGgw2Mzc0MjMxODM4MDUiDIo5dBnLZFXnR%2FYj1SrcAw%2F51vOWx6lkDA9ZDMetlVKd4WUOCg13wkIaGkEThJiM5M6eFmZbMN6jY43VEL2uTrg9OFHtaj3%2FEqQYZujhV2EN4qHHLWL6YL1xI81AP5cDPdecle5I9ThbCIKrzv7i8mnJMRGJOewbjRe74saH23JKtofV6XjF0oUpvvH%2BckVZzb1l7YDJwKvnRZ5R1l%2BAc9PIailBoIF6yqUBH6w3QuElHLaVmD2aom5hpmx4POULqFh5L7Lo%2By1%2BtajzPCRYaBfgczVVfullssWBiRlf7J5tuhH66Rf1%2BAiXMT4Ai%2FRKO46RGc8wQb0Zz3eFKmtLB%2BTCFRPDWK%2FXAUPtanXwNdfTXgRTIsimq6Q5THuBHSj%2BaVXUV7o2rarCF7uM90%2FhqUhmY9U9EnO3IMsTq3fAJ4DSt4YxUgF5UMb2kUVrtvaeUDLxJAKc%2F%2BujEssM%2BXJInh7NOGyxY%2Fwg4GGu5CvdIZKHw1VKJUPXwAJdI3nwN0NDgUjGhbwLzp2AmXH4ilCCGgN4%2F8vqsElFmLzgLVYFyrHtg%2BkbGg75PAJ3e5DWp86khTfARm0m2Qe1ruPwk5F%2BKCXXexchZEddKqkjbLs0OImazz1gDcvyEsLnDEgJtPXLCgTW5j27BSHZk558MJjP89EGOqUBMUsWLUAE%2FraM%2B4b8vxTkBs02RMDXuW0QLfrsVkjdL0VBfyyXjeUf7DCP%2F4HpWN%2FSP7WFAw5GZGwLnpMrv0N6Pb9xUUoGevAVbFImSmIu54vf6YEBoipfBle8h6ohil9Lo92nd9yb2TSoWMp9GyEm%2BjEUUUEBmLEVPSpEfbmFQRo99Ihv4fa0rgAfv8E6ihzNNTKXIK7807ddrYAcsfZt1sScMMi2&X-Amz-Signature=0172ed4a277b72cc18852b517e9e4fe98a96e2b2ccaa7db8cf4cfb6650ab3f77&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SQFTDNFS%2F20260625%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260625T104028Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCycV6yNYB4e2X5NpMNVgZnKB5%2BZSGBW%2FIMC2eBlTVQIgIgZL%2FKXqaTLzyuwIcST4Mtd%2FFpHtccur4OR%2Bth1WsdIv8q%2FwMIShAAGgw2Mzc0MjMxODM4MDUiDIo5dBnLZFXnR%2FYj1SrcAw%2F51vOWx6lkDA9ZDMetlVKd4WUOCg13wkIaGkEThJiM5M6eFmZbMN6jY43VEL2uTrg9OFHtaj3%2FEqQYZujhV2EN4qHHLWL6YL1xI81AP5cDPdecle5I9ThbCIKrzv7i8mnJMRGJOewbjRe74saH23JKtofV6XjF0oUpvvH%2BckVZzb1l7YDJwKvnRZ5R1l%2BAc9PIailBoIF6yqUBH6w3QuElHLaVmD2aom5hpmx4POULqFh5L7Lo%2By1%2BtajzPCRYaBfgczVVfullssWBiRlf7J5tuhH66Rf1%2BAiXMT4Ai%2FRKO46RGc8wQb0Zz3eFKmtLB%2BTCFRPDWK%2FXAUPtanXwNdfTXgRTIsimq6Q5THuBHSj%2BaVXUV7o2rarCF7uM90%2FhqUhmY9U9EnO3IMsTq3fAJ4DSt4YxUgF5UMb2kUVrtvaeUDLxJAKc%2F%2BujEssM%2BXJInh7NOGyxY%2Fwg4GGu5CvdIZKHw1VKJUPXwAJdI3nwN0NDgUjGhbwLzp2AmXH4ilCCGgN4%2F8vqsElFmLzgLVYFyrHtg%2BkbGg75PAJ3e5DWp86khTfARm0m2Qe1ruPwk5F%2BKCXXexchZEddKqkjbLs0OImazz1gDcvyEsLnDEgJtPXLCgTW5j27BSHZk558MJjP89EGOqUBMUsWLUAE%2FraM%2B4b8vxTkBs02RMDXuW0QLfrsVkjdL0VBfyyXjeUf7DCP%2F4HpWN%2FSP7WFAw5GZGwLnpMrv0N6Pb9xUUoGevAVbFImSmIu54vf6YEBoipfBle8h6ohil9Lo92nd9yb2TSoWMp9GyEm%2BjEUUUEBmLEVPSpEfbmFQRo99Ihv4fa0rgAfv8E6ihzNNTKXIK7807ddrYAcsfZt1sScMMi2&X-Amz-Signature=dcb0b300c201e1374161ae27c5d9e4260274b5819f739a145a734f713a8754eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q5VN4I3Y%2F20260625%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260625T104029Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDOznWjHPKN7PyIMrTrE3aBck2jCj6yrXieaiQDH7XbXQIhAO3QMmJLWna7cDhwrN5qzUKpz5Oonrb%2B4TESvbUzH1%2BZKv8DCEwQABoMNjM3NDIzMTgzODA1Igz0ckOK1MOQ89xBpAAq3APCu064MFS2JQJiXHvU%2B5B0ZtwjtCkTWhcBsiHnZ7dLdn0bugtYOq6YraGF76GMe0TeLsOHbzqmG0hMpIQXHXHG9w5Rc5zzME0tGzH9wRxXq%2Fq3pE0SubTPFD2ys1yW%2B%2BEofpPp%2Bbpf2Sm9psmZVGUAydW2yCjYoT0kZ7ENrtHith0O1g6c8%2FFYEA%2FIu%2B1AeMZUKafJhurpL4OCuC0UiEiQkxxBtuxwKUvcuyfl3RkcgLJjS5vFUQPrMXULQ18jRS3fPtUxDh2BErZ06AKaxj9SnwJ9Pg%2B3WDMCaHBms9A3M2YSoCRbWNMoyq1Vz%2BPIUVKeNN9rMCUm88d3XCkvB4HHYN4lDK4YJ2QcAkEfwIlRhzNndI0FhL14B27dmJMf7hcAiO6Kbc66267QO82Dy3YYmCnYXPQffkLXA2kLy5DoZLbfSNSI1IgCR6sNliIG50hoaXbMx36q1%2FF3I72DiJC06g9OTHTUs%2BQipthR1bxhGuOwhLZt9pF1rYuAbgnbFQAKFBNNrNHT078F1qfN7WAD%2BY8SzwSxq6tFLTMcRX5ASUagJYiUxNA3oc8VFADZ3f38ty0WD%2B822cCCs%2BfZSe0E2EHAzN2Q7v5wjMVnZPXjdyNPHydZdNcbOdJOXjDfivTRBjqkAYTtuubMlLlN3ahU6o3pG3KVKN7kWWfieg4NezJb7qNMq4yMW2AujXdHCBlh5kZtiwp%2B8Jl7yZyRSnwc72c7rWqMFTrI4VbGZCsXK32kN23HG3ihCZkLiJfDU93j2PRpfPlDQbm4Ae%2F3J4kZdq6XDoz9HPrurmOOxrn97Y8vFbS8QNM%2B8t703sYQmAzdkH9CVPaxrjqpGepFMQaoJX4w2oqH%2BIqW&X-Amz-Signature=696bf4aa7bf249ed425409d94e1cffc09cff1b5095111e0d0c4246840a58f19b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q5VN4I3Y%2F20260625%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260625T104029Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDOznWjHPKN7PyIMrTrE3aBck2jCj6yrXieaiQDH7XbXQIhAO3QMmJLWna7cDhwrN5qzUKpz5Oonrb%2B4TESvbUzH1%2BZKv8DCEwQABoMNjM3NDIzMTgzODA1Igz0ckOK1MOQ89xBpAAq3APCu064MFS2JQJiXHvU%2B5B0ZtwjtCkTWhcBsiHnZ7dLdn0bugtYOq6YraGF76GMe0TeLsOHbzqmG0hMpIQXHXHG9w5Rc5zzME0tGzH9wRxXq%2Fq3pE0SubTPFD2ys1yW%2B%2BEofpPp%2Bbpf2Sm9psmZVGUAydW2yCjYoT0kZ7ENrtHith0O1g6c8%2FFYEA%2FIu%2B1AeMZUKafJhurpL4OCuC0UiEiQkxxBtuxwKUvcuyfl3RkcgLJjS5vFUQPrMXULQ18jRS3fPtUxDh2BErZ06AKaxj9SnwJ9Pg%2B3WDMCaHBms9A3M2YSoCRbWNMoyq1Vz%2BPIUVKeNN9rMCUm88d3XCkvB4HHYN4lDK4YJ2QcAkEfwIlRhzNndI0FhL14B27dmJMf7hcAiO6Kbc66267QO82Dy3YYmCnYXPQffkLXA2kLy5DoZLbfSNSI1IgCR6sNliIG50hoaXbMx36q1%2FF3I72DiJC06g9OTHTUs%2BQipthR1bxhGuOwhLZt9pF1rYuAbgnbFQAKFBNNrNHT078F1qfN7WAD%2BY8SzwSxq6tFLTMcRX5ASUagJYiUxNA3oc8VFADZ3f38ty0WD%2B822cCCs%2BfZSe0E2EHAzN2Q7v5wjMVnZPXjdyNPHydZdNcbOdJOXjDfivTRBjqkAYTtuubMlLlN3ahU6o3pG3KVKN7kWWfieg4NezJb7qNMq4yMW2AujXdHCBlh5kZtiwp%2B8Jl7yZyRSnwc72c7rWqMFTrI4VbGZCsXK32kN23HG3ihCZkLiJfDU93j2PRpfPlDQbm4Ae%2F3J4kZdq6XDoz9HPrurmOOxrn97Y8vFbS8QNM%2B8t703sYQmAzdkH9CVPaxrjqpGepFMQaoJX4w2oqH%2BIqW&X-Amz-Signature=ec6c927979684660ea6de7de374d11d1f6c7da66f7120c383275fa502b61bb2c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q5VN4I3Y%2F20260625%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260625T104029Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDOznWjHPKN7PyIMrTrE3aBck2jCj6yrXieaiQDH7XbXQIhAO3QMmJLWna7cDhwrN5qzUKpz5Oonrb%2B4TESvbUzH1%2BZKv8DCEwQABoMNjM3NDIzMTgzODA1Igz0ckOK1MOQ89xBpAAq3APCu064MFS2JQJiXHvU%2B5B0ZtwjtCkTWhcBsiHnZ7dLdn0bugtYOq6YraGF76GMe0TeLsOHbzqmG0hMpIQXHXHG9w5Rc5zzME0tGzH9wRxXq%2Fq3pE0SubTPFD2ys1yW%2B%2BEofpPp%2Bbpf2Sm9psmZVGUAydW2yCjYoT0kZ7ENrtHith0O1g6c8%2FFYEA%2FIu%2B1AeMZUKafJhurpL4OCuC0UiEiQkxxBtuxwKUvcuyfl3RkcgLJjS5vFUQPrMXULQ18jRS3fPtUxDh2BErZ06AKaxj9SnwJ9Pg%2B3WDMCaHBms9A3M2YSoCRbWNMoyq1Vz%2BPIUVKeNN9rMCUm88d3XCkvB4HHYN4lDK4YJ2QcAkEfwIlRhzNndI0FhL14B27dmJMf7hcAiO6Kbc66267QO82Dy3YYmCnYXPQffkLXA2kLy5DoZLbfSNSI1IgCR6sNliIG50hoaXbMx36q1%2FF3I72DiJC06g9OTHTUs%2BQipthR1bxhGuOwhLZt9pF1rYuAbgnbFQAKFBNNrNHT078F1qfN7WAD%2BY8SzwSxq6tFLTMcRX5ASUagJYiUxNA3oc8VFADZ3f38ty0WD%2B822cCCs%2BfZSe0E2EHAzN2Q7v5wjMVnZPXjdyNPHydZdNcbOdJOXjDfivTRBjqkAYTtuubMlLlN3ahU6o3pG3KVKN7kWWfieg4NezJb7qNMq4yMW2AujXdHCBlh5kZtiwp%2B8Jl7yZyRSnwc72c7rWqMFTrI4VbGZCsXK32kN23HG3ihCZkLiJfDU93j2PRpfPlDQbm4Ae%2F3J4kZdq6XDoz9HPrurmOOxrn97Y8vFbS8QNM%2B8t703sYQmAzdkH9CVPaxrjqpGepFMQaoJX4w2oqH%2BIqW&X-Amz-Signature=2ff981a23ef6373b098cfd1923c62e3d47024b7b975dc35979b487f7ae8398cd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q5VN4I3Y%2F20260625%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260625T104029Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDOznWjHPKN7PyIMrTrE3aBck2jCj6yrXieaiQDH7XbXQIhAO3QMmJLWna7cDhwrN5qzUKpz5Oonrb%2B4TESvbUzH1%2BZKv8DCEwQABoMNjM3NDIzMTgzODA1Igz0ckOK1MOQ89xBpAAq3APCu064MFS2JQJiXHvU%2B5B0ZtwjtCkTWhcBsiHnZ7dLdn0bugtYOq6YraGF76GMe0TeLsOHbzqmG0hMpIQXHXHG9w5Rc5zzME0tGzH9wRxXq%2Fq3pE0SubTPFD2ys1yW%2B%2BEofpPp%2Bbpf2Sm9psmZVGUAydW2yCjYoT0kZ7ENrtHith0O1g6c8%2FFYEA%2FIu%2B1AeMZUKafJhurpL4OCuC0UiEiQkxxBtuxwKUvcuyfl3RkcgLJjS5vFUQPrMXULQ18jRS3fPtUxDh2BErZ06AKaxj9SnwJ9Pg%2B3WDMCaHBms9A3M2YSoCRbWNMoyq1Vz%2BPIUVKeNN9rMCUm88d3XCkvB4HHYN4lDK4YJ2QcAkEfwIlRhzNndI0FhL14B27dmJMf7hcAiO6Kbc66267QO82Dy3YYmCnYXPQffkLXA2kLy5DoZLbfSNSI1IgCR6sNliIG50hoaXbMx36q1%2FF3I72DiJC06g9OTHTUs%2BQipthR1bxhGuOwhLZt9pF1rYuAbgnbFQAKFBNNrNHT078F1qfN7WAD%2BY8SzwSxq6tFLTMcRX5ASUagJYiUxNA3oc8VFADZ3f38ty0WD%2B822cCCs%2BfZSe0E2EHAzN2Q7v5wjMVnZPXjdyNPHydZdNcbOdJOXjDfivTRBjqkAYTtuubMlLlN3ahU6o3pG3KVKN7kWWfieg4NezJb7qNMq4yMW2AujXdHCBlh5kZtiwp%2B8Jl7yZyRSnwc72c7rWqMFTrI4VbGZCsXK32kN23HG3ihCZkLiJfDU93j2PRpfPlDQbm4Ae%2F3J4kZdq6XDoz9HPrurmOOxrn97Y8vFbS8QNM%2B8t703sYQmAzdkH9CVPaxrjqpGepFMQaoJX4w2oqH%2BIqW&X-Amz-Signature=444cb341119294711b255fe01126edcf30cb14ef521e436fcee553bfc7b18fdc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZPM25S5W%2F20260625%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260625T104029Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIExLCQLfbv7xAmmMqDhPwwaquH78SOSl3IFnrEji94w8AiA4LgS31O87ucUZQ8Yp9mCS8YWJ22bGz3kCagbZwYbF9Sr%2FAwhKEAAaDDYzNzQyMzE4MzgwNSIMHg7S7Kh9eUHC9s4XKtwDju7dsQLlRwy0TA3VJrO2zMfwEimUrzt9Dvs21qRmiaZ7%2FGTvnqOLAIwKkZT5igFkcD7fbo7khjfKllcB8wvv2EppMAHQGDG3DZUYvveexHnyJku2NyKEYafgRoGCF3sBxjiHv%2FuPOx4LGhX4AeCzl1YtiPdW3acBOUBBOwQR356BoPbMq8JEaE9hBvVzWzNuNvEHUCf8v8YmmVxOI0VwiKGKluBHYVVpbSYuEVltQEQuHM6gOenk6GXEx3AQAqnChKytlAX6K7d4MbWVwzP7ic38GVT6Ms%2FTXRj3MAUBjPX17kHjF4WUzNLFUSka4dmq2VGUK%2F%2FcLlrEGE4OXfJWQbJvStMqruhss3Qa0AyfvzYyO91V6FpEJ0%2FOvA%2FDBDwWSwC0odwhHCf7ca1YFSxnc%2FukqlpkxLu6wTIehm481qOnpr5Ks%2FUd2qt63rLhEXHYDJtcMQOriHauEWkXz4lDhFS7x8HRv44u0u7BNae041PpbPLMfn2ifaqeyPfhkgF9DRQp5u1TJkaD0iv7cyP3pzj%2B9KA86QAHR%2FhI2pZXnQvqr7OP7UDVXQLm1nDLMpKJc33nqDFLZB5Wi3tI1jG2XTfx6xwphoMLL7iVqPEH6e0EhrUGoloiLVN%2Bn3kw4szz0QY6pgHPRRkHnKe6AMsB%2BrR%2FX0a3zDnlTu5BMUmYILZGkOyeJTD92uzsYAA2shLlEqFVhhu9hlUymgf%2F5hpyXA8uvID85M2wgsoqGNuYQ%2FwtMpncc7LBlUASuIzyvV5deXkOYRQhtTQ8DgV04UL%2BURNO8DTRu2yvh%2Bh2MJ2HmuqLQzBgUo0dzEW8pFLSTCYy2esbeY79c9H4zHFSyz4MgYswnQRUS26MKfvv&X-Amz-Signature=282a6649955cee32e9aeb392916e893a09d920f2ea50603dd9915f78d15aabcd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VESHH2XY%2F20260625%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260625T104030Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEFukGZLwIZiK%2FyScDfPDaQDYptlfnxkS1TgU1Tvd5F3AiEAzq137t31BUtGpKWBbO3i95NoHd69peOE6i4JffVx8SQq%2FwMIShAAGgw2Mzc0MjMxODM4MDUiDEQxQrtzgGh%2FBYkUVyrcAzC4f1Nch%2FJR9IhZmNJc%2F%2FosEncm98cUoAMBV4b%2F2y2vmCSnHtbCAhn6c5nb9XSXXs9koT8mzneStcKjs6vfbKnrzZPiVc0Wp6SbbRDs4YxlXs%2BplASD%2BTUbWgrALckzGXO8uwcX%2FbKX4tFDvoYz1ddvz2PLoT8HfWJXbXQun%2BtxwP6TDEAet0cKf3v0zDj6nK8taEpKjQZq3iBHoqGogQ%2B7uXfcLrbjJVmFk9AZC5LNgLI4LLNVQ4pgwu2YD5bWNuY2wSV9obgh1FLaLWVCWjcJCluYY6lX2Cs2Cf1UbL91o6zYtA7haOWTYFUbxlQpV7yA0XZA2zCvNav0055%2B4wAKMpJgdBWmn9tkzMFVYB%2F7e3KFvYEMTFYz6x%2F5m7A7nao07zoKRDR3lcuiKgp6LbfqCxB9iDDWLEsBSvZNwuO1paJmu8UHbJEBoUe7%2BcCiQIOpVanLNyqZJbXovGFGFbw40eGOuzF1xm5bleyfSTZGZz13ZqA7EC8UEXf9kM1Syav8IF690AvNGDYeXW9ku8VlUJuJX%2FqjO7FPeoV%2F%2F9bfofyhXSj4KQwUxWYv62rv2UvU97IDr6Z%2Fnvikx%2Fw9nXu3ZqEQRsOGDT2sVtSP4ewwyHEeN0zHQpwhOrZLMIzP89EGOqUBnYdP5uBuOgGEPv7%2FLpQO%2FBlZz7mTJGD5iQMW29%2F6k%2B73M%2FCmIhv4SAlMSu8UafaBitXztC0aY7CKtDMoMedE61mku7g83PUABA6ollHb2ecO6c1duhUlNOsMQyTmrVcF3DbUhH4Vv3GUCOx8%2BRW9aL620TVOpQ6RpIbRW1ka3y3n1%2BYYmz5TCP6BfkdFW7UDS07qA%2FFKCYwZlSCs6pYfu%2B4zdu3G&X-Amz-Signature=918a305dcfe66b1000801711630237ecac021d06ac41395aa412e0a7667d00cc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VESHH2XY%2F20260625%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260625T104030Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEFukGZLwIZiK%2FyScDfPDaQDYptlfnxkS1TgU1Tvd5F3AiEAzq137t31BUtGpKWBbO3i95NoHd69peOE6i4JffVx8SQq%2FwMIShAAGgw2Mzc0MjMxODM4MDUiDEQxQrtzgGh%2FBYkUVyrcAzC4f1Nch%2FJR9IhZmNJc%2F%2FosEncm98cUoAMBV4b%2F2y2vmCSnHtbCAhn6c5nb9XSXXs9koT8mzneStcKjs6vfbKnrzZPiVc0Wp6SbbRDs4YxlXs%2BplASD%2BTUbWgrALckzGXO8uwcX%2FbKX4tFDvoYz1ddvz2PLoT8HfWJXbXQun%2BtxwP6TDEAet0cKf3v0zDj6nK8taEpKjQZq3iBHoqGogQ%2B7uXfcLrbjJVmFk9AZC5LNgLI4LLNVQ4pgwu2YD5bWNuY2wSV9obgh1FLaLWVCWjcJCluYY6lX2Cs2Cf1UbL91o6zYtA7haOWTYFUbxlQpV7yA0XZA2zCvNav0055%2B4wAKMpJgdBWmn9tkzMFVYB%2F7e3KFvYEMTFYz6x%2F5m7A7nao07zoKRDR3lcuiKgp6LbfqCxB9iDDWLEsBSvZNwuO1paJmu8UHbJEBoUe7%2BcCiQIOpVanLNyqZJbXovGFGFbw40eGOuzF1xm5bleyfSTZGZz13ZqA7EC8UEXf9kM1Syav8IF690AvNGDYeXW9ku8VlUJuJX%2FqjO7FPeoV%2F%2F9bfofyhXSj4KQwUxWYv62rv2UvU97IDr6Z%2Fnvikx%2Fw9nXu3ZqEQRsOGDT2sVtSP4ewwyHEeN0zHQpwhOrZLMIzP89EGOqUBnYdP5uBuOgGEPv7%2FLpQO%2FBlZz7mTJGD5iQMW29%2F6k%2B73M%2FCmIhv4SAlMSu8UafaBitXztC0aY7CKtDMoMedE61mku7g83PUABA6ollHb2ecO6c1duhUlNOsMQyTmrVcF3DbUhH4Vv3GUCOx8%2BRW9aL620TVOpQ6RpIbRW1ka3y3n1%2BYYmz5TCP6BfkdFW7UDS07qA%2FFKCYwZlSCs6pYfu%2B4zdu3G&X-Amz-Signature=00badacee0062b385d7be87400392de1bd9cd8b93dda7dfca6e2ec33ae342b48&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
