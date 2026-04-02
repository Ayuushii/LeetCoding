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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XDEVKJPE%2F20260402%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260402T085617Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIG8tp8BRvf5rI23GUuP0CgiofiUWvyvt7mOQVcU%2FTWoQAiBnIT6ROOgDako2WLoM5VzNVH0WPu2o7HQb45kKrd36Vir%2FAwhpEAAaDDYzNzQyMzE4MzgwNSIMCypQlJ%2B3URb0FQ9sKtwDLkwm0mRTSozOJaMmLu9YIYqjq0hK7xFKU%2Ft7evOxZ39A5gU3t09kmtJ0mKWCGKQppkXkyzVxliu8LeGCIJ7ERBMJ32NqquNDXfqyrwdyqVefQMtElu8r59pob%2FBGX3Ug1ABfS%2F22bizyyU03B0TGYCQj7XRn2UhbedlmR2hINuTEXvM1%2BVnVDt57zMTWyeLlugz66iHkYJniAibiIANWxttxnfFC6QhVb10QQpKRNg%2FFaj8hwDE1kKkF1FuLmlWq1OjhnXAmKe94793fFL5N0%2B8Lu8cg7pg1NQI7eTmzij%2FRbXKlsXAqGXnntrulVcIQ%2FSedC5cmDzI%2Bq6paN%2FxI14se1lWz2mHr9RvlpY3Hro%2BPD32xBvSHDtBbTq2zSSF4dkXoy4PpNZbImAN3LtgrmzITE7x6jEeXekwaSnhotTG0%2FaTtvsVf5p2pnx0EOB2GA4xRvnYssA5R9ZQBhBXRuURLJ7iBm0Z5jPab2cBsBzbx84uTguaUDoUoBxDF6Xm5H2o8ewZg2ErVKL3BwBksjcOBQNmoQOj1YXbWA2kCMBX6%2Bgxvb9QTQiSSk13eRQN%2FuH8mvviaz3YzNWnohXBFSNJnbesAHQ21tptSFREOphpG706qXJu%2Feawpe8kwmsS4zgY6pgFn%2Ft%2Fb7jRo9fZpTkTTnIWISIc1IMuYDmGroN2LSpyAq6WcEUdl1zSjO2fHD%2FaJjqPUZ6H%2B4Ixd52iwFf%2BD1kLhiSgTMPXbMm0VsCe1XqIRfkr%2B85BkTctylE4TSBBvGyiPwbn3VjcVbp1oq18fBfGKSl6Jy3iwDVJTpnGIw304aNrOX6d3r6VbiHNYJZy5to4gnT9dG%2BEAF1qfcO%2FQj%2BAB7M0DMoE%2B&X-Amz-Signature=ddc20d0d1bf5b25ab2d861801d40c01140badd398e7ab28ee83d9c92efbb7cf1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XDEVKJPE%2F20260402%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260402T085617Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIG8tp8BRvf5rI23GUuP0CgiofiUWvyvt7mOQVcU%2FTWoQAiBnIT6ROOgDako2WLoM5VzNVH0WPu2o7HQb45kKrd36Vir%2FAwhpEAAaDDYzNzQyMzE4MzgwNSIMCypQlJ%2B3URb0FQ9sKtwDLkwm0mRTSozOJaMmLu9YIYqjq0hK7xFKU%2Ft7evOxZ39A5gU3t09kmtJ0mKWCGKQppkXkyzVxliu8LeGCIJ7ERBMJ32NqquNDXfqyrwdyqVefQMtElu8r59pob%2FBGX3Ug1ABfS%2F22bizyyU03B0TGYCQj7XRn2UhbedlmR2hINuTEXvM1%2BVnVDt57zMTWyeLlugz66iHkYJniAibiIANWxttxnfFC6QhVb10QQpKRNg%2FFaj8hwDE1kKkF1FuLmlWq1OjhnXAmKe94793fFL5N0%2B8Lu8cg7pg1NQI7eTmzij%2FRbXKlsXAqGXnntrulVcIQ%2FSedC5cmDzI%2Bq6paN%2FxI14se1lWz2mHr9RvlpY3Hro%2BPD32xBvSHDtBbTq2zSSF4dkXoy4PpNZbImAN3LtgrmzITE7x6jEeXekwaSnhotTG0%2FaTtvsVf5p2pnx0EOB2GA4xRvnYssA5R9ZQBhBXRuURLJ7iBm0Z5jPab2cBsBzbx84uTguaUDoUoBxDF6Xm5H2o8ewZg2ErVKL3BwBksjcOBQNmoQOj1YXbWA2kCMBX6%2Bgxvb9QTQiSSk13eRQN%2FuH8mvviaz3YzNWnohXBFSNJnbesAHQ21tptSFREOphpG706qXJu%2Feawpe8kwmsS4zgY6pgFn%2Ft%2Fb7jRo9fZpTkTTnIWISIc1IMuYDmGroN2LSpyAq6WcEUdl1zSjO2fHD%2FaJjqPUZ6H%2B4Ixd52iwFf%2BD1kLhiSgTMPXbMm0VsCe1XqIRfkr%2B85BkTctylE4TSBBvGyiPwbn3VjcVbp1oq18fBfGKSl6Jy3iwDVJTpnGIw304aNrOX6d3r6VbiHNYJZy5to4gnT9dG%2BEAF1qfcO%2FQj%2BAB7M0DMoE%2B&X-Amz-Signature=6fd5ac8b5464f4cf819afb3d5ed5cd695f73d23ed56ca732750baef6900741e6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XDEVKJPE%2F20260402%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260402T085617Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIG8tp8BRvf5rI23GUuP0CgiofiUWvyvt7mOQVcU%2FTWoQAiBnIT6ROOgDako2WLoM5VzNVH0WPu2o7HQb45kKrd36Vir%2FAwhpEAAaDDYzNzQyMzE4MzgwNSIMCypQlJ%2B3URb0FQ9sKtwDLkwm0mRTSozOJaMmLu9YIYqjq0hK7xFKU%2Ft7evOxZ39A5gU3t09kmtJ0mKWCGKQppkXkyzVxliu8LeGCIJ7ERBMJ32NqquNDXfqyrwdyqVefQMtElu8r59pob%2FBGX3Ug1ABfS%2F22bizyyU03B0TGYCQj7XRn2UhbedlmR2hINuTEXvM1%2BVnVDt57zMTWyeLlugz66iHkYJniAibiIANWxttxnfFC6QhVb10QQpKRNg%2FFaj8hwDE1kKkF1FuLmlWq1OjhnXAmKe94793fFL5N0%2B8Lu8cg7pg1NQI7eTmzij%2FRbXKlsXAqGXnntrulVcIQ%2FSedC5cmDzI%2Bq6paN%2FxI14se1lWz2mHr9RvlpY3Hro%2BPD32xBvSHDtBbTq2zSSF4dkXoy4PpNZbImAN3LtgrmzITE7x6jEeXekwaSnhotTG0%2FaTtvsVf5p2pnx0EOB2GA4xRvnYssA5R9ZQBhBXRuURLJ7iBm0Z5jPab2cBsBzbx84uTguaUDoUoBxDF6Xm5H2o8ewZg2ErVKL3BwBksjcOBQNmoQOj1YXbWA2kCMBX6%2Bgxvb9QTQiSSk13eRQN%2FuH8mvviaz3YzNWnohXBFSNJnbesAHQ21tptSFREOphpG706qXJu%2Feawpe8kwmsS4zgY6pgFn%2Ft%2Fb7jRo9fZpTkTTnIWISIc1IMuYDmGroN2LSpyAq6WcEUdl1zSjO2fHD%2FaJjqPUZ6H%2B4Ixd52iwFf%2BD1kLhiSgTMPXbMm0VsCe1XqIRfkr%2B85BkTctylE4TSBBvGyiPwbn3VjcVbp1oq18fBfGKSl6Jy3iwDVJTpnGIw304aNrOX6d3r6VbiHNYJZy5to4gnT9dG%2BEAF1qfcO%2FQj%2BAB7M0DMoE%2B&X-Amz-Signature=1dca34a3b89dcf11fe26abccb6da9ae12890183eb7df9f534dc690f63c618674&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SRMGMFIV%2F20260402%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260402T085618Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC01zz7eQpu1Ba6YWmP5E%2BI%2FzbdhAJL%2B1mv2SBn0KJ8wgIgPgPCN0OCkPxojEVrToAi3EMZcUM4XAKn2oiemUCjwQcq%2FwMIaRAAGgw2Mzc0MjMxODM4MDUiDL4aW1inicnHeKRaJyrcA8c1rLUsQ%2BxJNXKBnwFAa25tXzThShGVDr4vwUjA18fHxUX2NgzxWIwGT01CH0nC%2FD5dzbBo4fKx9WFcvDh7b0OuAMDyVwZNUYb6rqI27Vm4nJjpCpMhEmvY2rx%2FGfCv4cvJ5fk6DX681%2BDhSRcTUAtFvogE9B4bln7S2WmGQJmAx2htDW%2FVRh9rx2vGBn8%2B%2B%2Flv98FWjSx41IcRq943su%2BYlYv%2FX9UjawstzkzJRxqGYdYSkTr6aVaxLfqyARJREaHBnv8WaiipvmVAphv%2F678KbMTVJAb6x4A68tVqSLo5fJALj61U0MoSU3eiGrS1SdwwLcSMJ2a8zM2BKgU1oKG6PZx6WJyeP%2Ft3LMfxq2MRpaef%2BaEPbFrVZKDOHmEyDqOjkqZ23BMW70xjMXRseS%2By%2BQTlXEb%2FUi50eZrmbBLLvBRMPX0w4t2oIvNmNKwiUUlUy2jy5U7Gq79RPOGlyyoJMbQwwpCrTtPNiY1l0SglefuXlVhksMe8%2Bezgi8CSKS3OIxMPs3C2uZT45qDcLrnymdZpXEaLBTgwNv50lzgST0zQzZj%2FR96DE8wULFxfLdYZKM17Of%2BI%2BN%2FRl2JkUtLM1sbBQvTRajkpLs5lQiNWLBOQmhDWIFKlLXRRMP%2FCuM4GOqUBviWF6ZXZXrHk66Ozlcc96iJ3ATwUN6IYZ%2FjAJthqho7XO%2BfO3Q7kewYZ80Nn75vrPRmMGeNxQMuuIRJdOR8AJjQe93%2BpKHUeOVbICSD2O4Pgp6dCn4zeLHmDPR98GcipNydskLovd4l92QuKxj1rg64zf0bpZ82mk%2Fh8KpguSMO5Xa6LJFGdeSDGBwLq%2FTZcVUkYSIEbXHHVHhZl7gfMMc4EEAfr&X-Amz-Signature=dfc344a8ed5eaa001ccf0ec7620719e454e8a7cb633f84a2f64e8cf0a8872758&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SRMGMFIV%2F20260402%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260402T085618Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC01zz7eQpu1Ba6YWmP5E%2BI%2FzbdhAJL%2B1mv2SBn0KJ8wgIgPgPCN0OCkPxojEVrToAi3EMZcUM4XAKn2oiemUCjwQcq%2FwMIaRAAGgw2Mzc0MjMxODM4MDUiDL4aW1inicnHeKRaJyrcA8c1rLUsQ%2BxJNXKBnwFAa25tXzThShGVDr4vwUjA18fHxUX2NgzxWIwGT01CH0nC%2FD5dzbBo4fKx9WFcvDh7b0OuAMDyVwZNUYb6rqI27Vm4nJjpCpMhEmvY2rx%2FGfCv4cvJ5fk6DX681%2BDhSRcTUAtFvogE9B4bln7S2WmGQJmAx2htDW%2FVRh9rx2vGBn8%2B%2B%2Flv98FWjSx41IcRq943su%2BYlYv%2FX9UjawstzkzJRxqGYdYSkTr6aVaxLfqyARJREaHBnv8WaiipvmVAphv%2F678KbMTVJAb6x4A68tVqSLo5fJALj61U0MoSU3eiGrS1SdwwLcSMJ2a8zM2BKgU1oKG6PZx6WJyeP%2Ft3LMfxq2MRpaef%2BaEPbFrVZKDOHmEyDqOjkqZ23BMW70xjMXRseS%2By%2BQTlXEb%2FUi50eZrmbBLLvBRMPX0w4t2oIvNmNKwiUUlUy2jy5U7Gq79RPOGlyyoJMbQwwpCrTtPNiY1l0SglefuXlVhksMe8%2Bezgi8CSKS3OIxMPs3C2uZT45qDcLrnymdZpXEaLBTgwNv50lzgST0zQzZj%2FR96DE8wULFxfLdYZKM17Of%2BI%2BN%2FRl2JkUtLM1sbBQvTRajkpLs5lQiNWLBOQmhDWIFKlLXRRMP%2FCuM4GOqUBviWF6ZXZXrHk66Ozlcc96iJ3ATwUN6IYZ%2FjAJthqho7XO%2BfO3Q7kewYZ80Nn75vrPRmMGeNxQMuuIRJdOR8AJjQe93%2BpKHUeOVbICSD2O4Pgp6dCn4zeLHmDPR98GcipNydskLovd4l92QuKxj1rg64zf0bpZ82mk%2Fh8KpguSMO5Xa6LJFGdeSDGBwLq%2FTZcVUkYSIEbXHHVHhZl7gfMMc4EEAfr&X-Amz-Signature=946830bf97c3b01c42841ac77e3da0faa85d27be530d34fc7f5e3c9bf5df1072&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SRMGMFIV%2F20260402%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260402T085618Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC01zz7eQpu1Ba6YWmP5E%2BI%2FzbdhAJL%2B1mv2SBn0KJ8wgIgPgPCN0OCkPxojEVrToAi3EMZcUM4XAKn2oiemUCjwQcq%2FwMIaRAAGgw2Mzc0MjMxODM4MDUiDL4aW1inicnHeKRaJyrcA8c1rLUsQ%2BxJNXKBnwFAa25tXzThShGVDr4vwUjA18fHxUX2NgzxWIwGT01CH0nC%2FD5dzbBo4fKx9WFcvDh7b0OuAMDyVwZNUYb6rqI27Vm4nJjpCpMhEmvY2rx%2FGfCv4cvJ5fk6DX681%2BDhSRcTUAtFvogE9B4bln7S2WmGQJmAx2htDW%2FVRh9rx2vGBn8%2B%2B%2Flv98FWjSx41IcRq943su%2BYlYv%2FX9UjawstzkzJRxqGYdYSkTr6aVaxLfqyARJREaHBnv8WaiipvmVAphv%2F678KbMTVJAb6x4A68tVqSLo5fJALj61U0MoSU3eiGrS1SdwwLcSMJ2a8zM2BKgU1oKG6PZx6WJyeP%2Ft3LMfxq2MRpaef%2BaEPbFrVZKDOHmEyDqOjkqZ23BMW70xjMXRseS%2By%2BQTlXEb%2FUi50eZrmbBLLvBRMPX0w4t2oIvNmNKwiUUlUy2jy5U7Gq79RPOGlyyoJMbQwwpCrTtPNiY1l0SglefuXlVhksMe8%2Bezgi8CSKS3OIxMPs3C2uZT45qDcLrnymdZpXEaLBTgwNv50lzgST0zQzZj%2FR96DE8wULFxfLdYZKM17Of%2BI%2BN%2FRl2JkUtLM1sbBQvTRajkpLs5lQiNWLBOQmhDWIFKlLXRRMP%2FCuM4GOqUBviWF6ZXZXrHk66Ozlcc96iJ3ATwUN6IYZ%2FjAJthqho7XO%2BfO3Q7kewYZ80Nn75vrPRmMGeNxQMuuIRJdOR8AJjQe93%2BpKHUeOVbICSD2O4Pgp6dCn4zeLHmDPR98GcipNydskLovd4l92QuKxj1rg64zf0bpZ82mk%2Fh8KpguSMO5Xa6LJFGdeSDGBwLq%2FTZcVUkYSIEbXHHVHhZl7gfMMc4EEAfr&X-Amz-Signature=8c7108eada0b35c681696b1ad8e0e4c373451d0c5fdc3eb19b549189f59aad9d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SRMGMFIV%2F20260402%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260402T085618Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC01zz7eQpu1Ba6YWmP5E%2BI%2FzbdhAJL%2B1mv2SBn0KJ8wgIgPgPCN0OCkPxojEVrToAi3EMZcUM4XAKn2oiemUCjwQcq%2FwMIaRAAGgw2Mzc0MjMxODM4MDUiDL4aW1inicnHeKRaJyrcA8c1rLUsQ%2BxJNXKBnwFAa25tXzThShGVDr4vwUjA18fHxUX2NgzxWIwGT01CH0nC%2FD5dzbBo4fKx9WFcvDh7b0OuAMDyVwZNUYb6rqI27Vm4nJjpCpMhEmvY2rx%2FGfCv4cvJ5fk6DX681%2BDhSRcTUAtFvogE9B4bln7S2WmGQJmAx2htDW%2FVRh9rx2vGBn8%2B%2B%2Flv98FWjSx41IcRq943su%2BYlYv%2FX9UjawstzkzJRxqGYdYSkTr6aVaxLfqyARJREaHBnv8WaiipvmVAphv%2F678KbMTVJAb6x4A68tVqSLo5fJALj61U0MoSU3eiGrS1SdwwLcSMJ2a8zM2BKgU1oKG6PZx6WJyeP%2Ft3LMfxq2MRpaef%2BaEPbFrVZKDOHmEyDqOjkqZ23BMW70xjMXRseS%2By%2BQTlXEb%2FUi50eZrmbBLLvBRMPX0w4t2oIvNmNKwiUUlUy2jy5U7Gq79RPOGlyyoJMbQwwpCrTtPNiY1l0SglefuXlVhksMe8%2Bezgi8CSKS3OIxMPs3C2uZT45qDcLrnymdZpXEaLBTgwNv50lzgST0zQzZj%2FR96DE8wULFxfLdYZKM17Of%2BI%2BN%2FRl2JkUtLM1sbBQvTRajkpLs5lQiNWLBOQmhDWIFKlLXRRMP%2FCuM4GOqUBviWF6ZXZXrHk66Ozlcc96iJ3ATwUN6IYZ%2FjAJthqho7XO%2BfO3Q7kewYZ80Nn75vrPRmMGeNxQMuuIRJdOR8AJjQe93%2BpKHUeOVbICSD2O4Pgp6dCn4zeLHmDPR98GcipNydskLovd4l92QuKxj1rg64zf0bpZ82mk%2Fh8KpguSMO5Xa6LJFGdeSDGBwLq%2FTZcVUkYSIEbXHHVHhZl7gfMMc4EEAfr&X-Amz-Signature=44325b5f885a35ac9f7007cc58defd182801ece43740b085cc9449f1894416dc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665Q7PXM5H%2F20260402%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260402T085619Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDecQi%2Bg8t6kxKNpZo5B6DmeX2aR47bbh8nAjMv4lAkXQIgJweI36HwrJ2fRF8u0QVzCVsyKcA7LYJaSBxts2%2F%2Fu%2Boq%2FwMIaRAAGgw2Mzc0MjMxODM4MDUiDD0NEnExchy7CUUl4SrcA6RCUfgksR0bSDT62OOY8zz2kSJcP19WOpkey8h84EyN%2BD%2F889dKO9lzhfCDCQCBPyzz0mndzpZIijgcmUMY7ACtY8yptyGLiAnetvRdGZwHy9N5mN8oA0GHAmHBcqyvf2QdTH9e8ByUHgzNb5cMtDdJ%2BkimMd9DnQLB6VfQDr545NTvIK%2BMaHw27sdRJ1d0U6DilVlqRiyz2UPqH4bTj6c21U7dnNohDlW%2BpRxuB9pIepk1429IBUsKGsn7ZXockYDvXd10mNozjygkvd%2BGndICCQB3UkhSreyx9s5WoHIrR3nLNa7eW%2Bvc9q9KMacK9%2BJvZX8AyXHgD1c9tgmn0ZD8s%2FPG64ahCEh0xFAI%2BvjgzLjh1CfEbwFtd9sHgfT5rXW9yXBzGjKns7DUP6JralRq6pptzk2JT4kejaPWGY1GFTRQ1fnn9klYZJGtE5Xp6uz3bVGZs2nqtCDakdodKENEK0QA4q6zAT6FN7ViXa%2BXLB%2BmFAMUevQQ99s56nd%2BZw3KjT7KisT5Hif00%2FFIjQuVh4auEmpmXDW0Z07vABMXFcq4qT4tP%2FECG5Zyh4sNPZLYTNmsHoc%2B1zLsyWT5mN6rfPcFl8I3MU5uEWudDp5zVoclV2PNtRCl%2FgUwMLTFuM4GOqUBipTsqyXdO9DA6eOYXkzADGFvmNDqn55YpCbFB497ClYJQtHWu2W1Adf5e7e0QE2dtwXjltCRBYhO8epH8ulV64U6dIxR8PFrV9yv4NVkAzTAyiPGsYzqOshq%2FHDgxRBB%2F4yLD0oyimENjzgbVw9bCALqqS0R%2B4G3hLVqICjjDtjQIfNsvvwgtbhdO7x%2FRN26HNGEy0H%2F5nkW5%2Bp4LViGMIyBiyxD&X-Amz-Signature=b75b4fd2023a9989ff1e5ad315296bb9aca0c053dbf329f9c86a6c080a1615d6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665EAAWVXP%2F20260402%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260402T085619Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDLFC3sOInkYoFqs4re0NMSJwXdI%2FLrSHkmhQvrpuHXLQIgO981rpWGxBrtHfYMjb9Blc8rQoe9Ezyd23Ydl6TdWaoq%2FwMIaRAAGgw2Mzc0MjMxODM4MDUiDKIrI4BQczEi2KsJPyrcA49i16gEngHJiewENj1uDbzNaHdzU4qazkkAV6iuf%2FqHyWCJg0f%2B6tcWG4VEraoxQhO9Ctd70FfQ3clZf%2Bj75%2B3Aeuqo8XBngsk7%2Fef4YQo41EGLWDm9Ev1RCFIwPrSxExKhgKhWdW1Z4ucP83qSIVMBfqpu76Z1v3y%2BYNpRMaibFBWFfv2l9KIyC17%2FVKElEEoS7%2FDwst6WRZI9Mv%2BhTABEcmrbiL%2BOBdF%2FlZkzaca8DObZypsRsNg30yLJ2p4Vu%2FcuOF12nCqgkFpClO749pby4rm%2BJICx6vghwmwTAFA6AStOvO0Io6b%2BbuKauNpybDiYMdLj6Cf%2BnJk6DKEQhhvGn6Pk7ryiPdyWMunrsnD9lm28vJvCm0q9izrRmQHP6UFScsjmJAHoU9GpPHjmVSNWmGJFdBR5BzYzRP3Cae25WqgAOaBEpRxp6xWxIxbmHvlhl%2BYgUU5MNb99t8ACGbIoLLM%2FuUdqK7rtadLgcifc0bodCpl%2Fg8o1dSt4aUFgOOGUooF7zgnRxh1Ym32QDpoYzjhd7ZR3A1epRcJCY%2FyrgIFb%2FIihRWMZwc6UXrNIHISd3PzRfS0XdsPDiyV8Rm7sbXtf%2FfgskQ6zUEIBJKZHi69sjl6tQM5LMJctMMHDuM4GOqUBrkPIRD37pqW9g5RgPonTpuHVOCS36NenE5%2FwI56vGmzdEyJ%2BRH8wlMjpn%2BcE624xVtFCxyyDJ6qgSHwIQwWM%2FVq9VCcRbxrtjDRL352BplXvoWvwZ6v6rmdoU2lCpzG81Sjcrpffa1NeTFHjnk4Nu3oOOXADcjGJlMNh%2FkFONfY6krUg0AtuMQOgfJ7qItDNSAOhXqn1%2FQn%2BGZAnQaBKWJLd9O7I&X-Amz-Signature=bb6289f94a53fe974c22ddc57bb5fc0764f5ca120169527863eb25b11244b679&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665EAAWVXP%2F20260402%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260402T085619Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDLFC3sOInkYoFqs4re0NMSJwXdI%2FLrSHkmhQvrpuHXLQIgO981rpWGxBrtHfYMjb9Blc8rQoe9Ezyd23Ydl6TdWaoq%2FwMIaRAAGgw2Mzc0MjMxODM4MDUiDKIrI4BQczEi2KsJPyrcA49i16gEngHJiewENj1uDbzNaHdzU4qazkkAV6iuf%2FqHyWCJg0f%2B6tcWG4VEraoxQhO9Ctd70FfQ3clZf%2Bj75%2B3Aeuqo8XBngsk7%2Fef4YQo41EGLWDm9Ev1RCFIwPrSxExKhgKhWdW1Z4ucP83qSIVMBfqpu76Z1v3y%2BYNpRMaibFBWFfv2l9KIyC17%2FVKElEEoS7%2FDwst6WRZI9Mv%2BhTABEcmrbiL%2BOBdF%2FlZkzaca8DObZypsRsNg30yLJ2p4Vu%2FcuOF12nCqgkFpClO749pby4rm%2BJICx6vghwmwTAFA6AStOvO0Io6b%2BbuKauNpybDiYMdLj6Cf%2BnJk6DKEQhhvGn6Pk7ryiPdyWMunrsnD9lm28vJvCm0q9izrRmQHP6UFScsjmJAHoU9GpPHjmVSNWmGJFdBR5BzYzRP3Cae25WqgAOaBEpRxp6xWxIxbmHvlhl%2BYgUU5MNb99t8ACGbIoLLM%2FuUdqK7rtadLgcifc0bodCpl%2Fg8o1dSt4aUFgOOGUooF7zgnRxh1Ym32QDpoYzjhd7ZR3A1epRcJCY%2FyrgIFb%2FIihRWMZwc6UXrNIHISd3PzRfS0XdsPDiyV8Rm7sbXtf%2FfgskQ6zUEIBJKZHi69sjl6tQM5LMJctMMHDuM4GOqUBrkPIRD37pqW9g5RgPonTpuHVOCS36NenE5%2FwI56vGmzdEyJ%2BRH8wlMjpn%2BcE624xVtFCxyyDJ6qgSHwIQwWM%2FVq9VCcRbxrtjDRL352BplXvoWvwZ6v6rmdoU2lCpzG81Sjcrpffa1NeTFHjnk4Nu3oOOXADcjGJlMNh%2FkFONfY6krUg0AtuMQOgfJ7qItDNSAOhXqn1%2FQn%2BGZAnQaBKWJLd9O7I&X-Amz-Signature=6e76bf521b338617b12aeaadac156b6fa9a39475c3bd32749b3d19eb4e7fd175&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
