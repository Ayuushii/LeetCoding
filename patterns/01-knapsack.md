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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XWKRFDWF%2F20260623%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260623T111522Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFEaCXVzLXdlc3QtMiJHMEUCIQDi4dEYMhRaYRU6Sg4m4G5039NDCUGmgr40bG3aX7i97AIgb7WPNrL1MG0mLy3hOyPxXnCVX7ILKbwe1ShudGe6FIUq%2FwMIGhAAGgw2Mzc0MjMxODM4MDUiDMELBSP%2FB523BGBljCrcAzoGdAqqPRQxnkSV806CCxzej764B5DBLajnWBfVJDE%2BwEGV64Op2cPtEZmxrM1ulCE87JQv9r9lXA0MYC2QK2Y7rEnhBQdZRlZum8arYpMqZrVzi8xLJVRHV1I%2BvfcGOCkI7uJ84Mk6N3sFui6K2zoxm5nndeWgEJnPhKqgwEIq4akqgjtv1JLEoOAAhSKSKB%2BYAwTV7%2FAJXQbwvTtcNqOk0A9nLU0NSpvPNxbyQEeojg8hY%2F1cR7HyGPQ%2BhPvn3qvh%2FBIWMRucpPQ2Om7hB5HwHMcU30aWMfRa71G85E74ffGMPU4tcMAM7Ge1V6qz9ENtTxc%2BK9F11n%2BPPwS2mGJ7%2F2jyEOHclCw1oH%2BVgwZHypZiiMfOWV86Xr0aVjkem5OVKUSf2g1x20DgsIyn1RwOQjO7fi4ccfMVaZB%2FHrpewqP3Ev9PBfXFsm%2FmId0pK46fMuIPrEpfIOmj34c5sbyPAUr23Vo1KlL09Kr35eep8ih5rtsy6Zzaiag%2Btry%2FQPa95cTQpOn7DxnNT9GkKdGYbTPCcuRBTjPktZ7Gsm%2FMJ8BAA4thd%2F%2FvUcFxvv1r%2BAWTDfVdyf2k8ia4nI%2FqtDpY8BfuNcgG%2FJle6y%2Fp8%2FNVMR6D29fWQ4tPSG7xMI2b6dEGOqUBo4c7KxJyVTpEKfgdWGVYWdP3xkglS2strn3O6rhEHn4q1Jn4ILB%2FeDeerJRvTKqUN2VWUvKmTW1uX%2BFcHE8OvHPHGV86Ftz7gjrm5cYQgEH0NwxxNMWFlqKqIFqYBVOTQtcDX1P%2FQr305xfEZtCXhG%2FDTteUAtf7bCkIkGgSvNepawdQFYs6oxAkcJrdI6Rbz7PWgO%2FJm0czQQCUCT%2B5UOlixpz0&X-Amz-Signature=bf0a502528aafed2946afdfedf5b5f43f56de2adfb15c1b4567d030ae4a8f735&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XWKRFDWF%2F20260623%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260623T111522Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFEaCXVzLXdlc3QtMiJHMEUCIQDi4dEYMhRaYRU6Sg4m4G5039NDCUGmgr40bG3aX7i97AIgb7WPNrL1MG0mLy3hOyPxXnCVX7ILKbwe1ShudGe6FIUq%2FwMIGhAAGgw2Mzc0MjMxODM4MDUiDMELBSP%2FB523BGBljCrcAzoGdAqqPRQxnkSV806CCxzej764B5DBLajnWBfVJDE%2BwEGV64Op2cPtEZmxrM1ulCE87JQv9r9lXA0MYC2QK2Y7rEnhBQdZRlZum8arYpMqZrVzi8xLJVRHV1I%2BvfcGOCkI7uJ84Mk6N3sFui6K2zoxm5nndeWgEJnPhKqgwEIq4akqgjtv1JLEoOAAhSKSKB%2BYAwTV7%2FAJXQbwvTtcNqOk0A9nLU0NSpvPNxbyQEeojg8hY%2F1cR7HyGPQ%2BhPvn3qvh%2FBIWMRucpPQ2Om7hB5HwHMcU30aWMfRa71G85E74ffGMPU4tcMAM7Ge1V6qz9ENtTxc%2BK9F11n%2BPPwS2mGJ7%2F2jyEOHclCw1oH%2BVgwZHypZiiMfOWV86Xr0aVjkem5OVKUSf2g1x20DgsIyn1RwOQjO7fi4ccfMVaZB%2FHrpewqP3Ev9PBfXFsm%2FmId0pK46fMuIPrEpfIOmj34c5sbyPAUr23Vo1KlL09Kr35eep8ih5rtsy6Zzaiag%2Btry%2FQPa95cTQpOn7DxnNT9GkKdGYbTPCcuRBTjPktZ7Gsm%2FMJ8BAA4thd%2F%2FvUcFxvv1r%2BAWTDfVdyf2k8ia4nI%2FqtDpY8BfuNcgG%2FJle6y%2Fp8%2FNVMR6D29fWQ4tPSG7xMI2b6dEGOqUBo4c7KxJyVTpEKfgdWGVYWdP3xkglS2strn3O6rhEHn4q1Jn4ILB%2FeDeerJRvTKqUN2VWUvKmTW1uX%2BFcHE8OvHPHGV86Ftz7gjrm5cYQgEH0NwxxNMWFlqKqIFqYBVOTQtcDX1P%2FQr305xfEZtCXhG%2FDTteUAtf7bCkIkGgSvNepawdQFYs6oxAkcJrdI6Rbz7PWgO%2FJm0czQQCUCT%2B5UOlixpz0&X-Amz-Signature=aaf49b0843de23bd648489538ed64b403804434494e5e79be1c4458e293aea5e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XWKRFDWF%2F20260623%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260623T111522Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFEaCXVzLXdlc3QtMiJHMEUCIQDi4dEYMhRaYRU6Sg4m4G5039NDCUGmgr40bG3aX7i97AIgb7WPNrL1MG0mLy3hOyPxXnCVX7ILKbwe1ShudGe6FIUq%2FwMIGhAAGgw2Mzc0MjMxODM4MDUiDMELBSP%2FB523BGBljCrcAzoGdAqqPRQxnkSV806CCxzej764B5DBLajnWBfVJDE%2BwEGV64Op2cPtEZmxrM1ulCE87JQv9r9lXA0MYC2QK2Y7rEnhBQdZRlZum8arYpMqZrVzi8xLJVRHV1I%2BvfcGOCkI7uJ84Mk6N3sFui6K2zoxm5nndeWgEJnPhKqgwEIq4akqgjtv1JLEoOAAhSKSKB%2BYAwTV7%2FAJXQbwvTtcNqOk0A9nLU0NSpvPNxbyQEeojg8hY%2F1cR7HyGPQ%2BhPvn3qvh%2FBIWMRucpPQ2Om7hB5HwHMcU30aWMfRa71G85E74ffGMPU4tcMAM7Ge1V6qz9ENtTxc%2BK9F11n%2BPPwS2mGJ7%2F2jyEOHclCw1oH%2BVgwZHypZiiMfOWV86Xr0aVjkem5OVKUSf2g1x20DgsIyn1RwOQjO7fi4ccfMVaZB%2FHrpewqP3Ev9PBfXFsm%2FmId0pK46fMuIPrEpfIOmj34c5sbyPAUr23Vo1KlL09Kr35eep8ih5rtsy6Zzaiag%2Btry%2FQPa95cTQpOn7DxnNT9GkKdGYbTPCcuRBTjPktZ7Gsm%2FMJ8BAA4thd%2F%2FvUcFxvv1r%2BAWTDfVdyf2k8ia4nI%2FqtDpY8BfuNcgG%2FJle6y%2Fp8%2FNVMR6D29fWQ4tPSG7xMI2b6dEGOqUBo4c7KxJyVTpEKfgdWGVYWdP3xkglS2strn3O6rhEHn4q1Jn4ILB%2FeDeerJRvTKqUN2VWUvKmTW1uX%2BFcHE8OvHPHGV86Ftz7gjrm5cYQgEH0NwxxNMWFlqKqIFqYBVOTQtcDX1P%2FQr305xfEZtCXhG%2FDTteUAtf7bCkIkGgSvNepawdQFYs6oxAkcJrdI6Rbz7PWgO%2FJm0czQQCUCT%2B5UOlixpz0&X-Amz-Signature=55e508f9ca93dac507c1df16c2642a0010c91b355656e0ae5a636560c9d5e588&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YNUWTXXT%2F20260623%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260623T111522Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFEaCXVzLXdlc3QtMiJIMEYCIQDgaW7cPIP3vy%2FWKaaiuMlKiRDemcpv06n%2FuC2PMAzHDwIhAJCIboMrjkkrr0JhtPYkB7fW6GT%2FinO%2B7LjpRX2xF2RFKv8DCBoQABoMNjM3NDIzMTgzODA1IgyvPWcW3JMdJs3WYtwq3APqf7G5s1U5rbb3gkL25cbiLKV6Qg4Kc6cyQWGo4%2FDsPkQwCewnP2QzUkpJksnY6wkHN7Q7JCMKhozMEXf2moR8aCerHaJttKli2Y%2Brjw4ZyX2ZuEvMq4lxF9jKTLrr7ULX5TWmiUtXlusq6w%2FUJzRwI%2BXBrmAvhwrAdaoJDxSQAwPevw3icmexgM5403dBkK%2BUBw14nxs%2BgIA6TNo5ELfKA2%2BvF2EcPr9O%2FRh0tjDyA4SWU1VhMRkOVaGFlrg3%2FLMacUHnDf3UXDSJQtlRqw2BkdbNcqcELS0BrLwUMfnnNMu4dVeVPw9UxJmDZ1Y2StjtD47psq34xYEHC1On2%2FnsVGu%2FZgWygs5%2F2pJEpQirJJroBgmmD6iyE%2BVcN07S0eWqXRZyp3%2B5f%2BiKWvOv%2FYc4LL6NdImsZIcVYHwaQZC5TissqoHAWmxakcKX7vIXOJ9EU1u3MvgDfL8et9FxjVGlY%2FKb77O9WhtsQxHaTL4ZTE53UZCz85UnXxXJSzFiKxKl%2F1yfyBZv2fbYT14cxNJPE9LeT2DnGj7d04B9xdI5JanctUODpWcR2%2B0FNVE%2BZdPi3ELq1uwiCWAlGJUvwZaaAbhgOIvUnWaRUJVsQIxXdgEto7Uq8n0C%2BG5JnTD7nenRBjqkAYybrBSVyP6PMKDn2Wy%2FzTkE%2BaEejzx5U6tMXzD6SBT85ZzBDy5lfM1KAMdGtHXzC%2F31e2ZL9%2B1VSxRXesrE9Y1McUVL0tf1cEuKboxTWEw1zr6%2B%2B%2BiYge0Vv%2BUcVAL7OVzv2AgLnpiT9pt0ma%2Fbtj8JaHOXh1AADDwSiDubvHd0Ls5cpp0%2B3ykn1WQL2YZ7Q6HhOGTq6eF%2FOixNMOphyBbabBDL&X-Amz-Signature=d5fcb99cc67562bfaad5df444d5f340d1a93d1b84a175780933350c5d937ac5b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YNUWTXXT%2F20260623%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260623T111523Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFEaCXVzLXdlc3QtMiJIMEYCIQDgaW7cPIP3vy%2FWKaaiuMlKiRDemcpv06n%2FuC2PMAzHDwIhAJCIboMrjkkrr0JhtPYkB7fW6GT%2FinO%2B7LjpRX2xF2RFKv8DCBoQABoMNjM3NDIzMTgzODA1IgyvPWcW3JMdJs3WYtwq3APqf7G5s1U5rbb3gkL25cbiLKV6Qg4Kc6cyQWGo4%2FDsPkQwCewnP2QzUkpJksnY6wkHN7Q7JCMKhozMEXf2moR8aCerHaJttKli2Y%2Brjw4ZyX2ZuEvMq4lxF9jKTLrr7ULX5TWmiUtXlusq6w%2FUJzRwI%2BXBrmAvhwrAdaoJDxSQAwPevw3icmexgM5403dBkK%2BUBw14nxs%2BgIA6TNo5ELfKA2%2BvF2EcPr9O%2FRh0tjDyA4SWU1VhMRkOVaGFlrg3%2FLMacUHnDf3UXDSJQtlRqw2BkdbNcqcELS0BrLwUMfnnNMu4dVeVPw9UxJmDZ1Y2StjtD47psq34xYEHC1On2%2FnsVGu%2FZgWygs5%2F2pJEpQirJJroBgmmD6iyE%2BVcN07S0eWqXRZyp3%2B5f%2BiKWvOv%2FYc4LL6NdImsZIcVYHwaQZC5TissqoHAWmxakcKX7vIXOJ9EU1u3MvgDfL8et9FxjVGlY%2FKb77O9WhtsQxHaTL4ZTE53UZCz85UnXxXJSzFiKxKl%2F1yfyBZv2fbYT14cxNJPE9LeT2DnGj7d04B9xdI5JanctUODpWcR2%2B0FNVE%2BZdPi3ELq1uwiCWAlGJUvwZaaAbhgOIvUnWaRUJVsQIxXdgEto7Uq8n0C%2BG5JnTD7nenRBjqkAYybrBSVyP6PMKDn2Wy%2FzTkE%2BaEejzx5U6tMXzD6SBT85ZzBDy5lfM1KAMdGtHXzC%2F31e2ZL9%2B1VSxRXesrE9Y1McUVL0tf1cEuKboxTWEw1zr6%2B%2B%2BiYge0Vv%2BUcVAL7OVzv2AgLnpiT9pt0ma%2Fbtj8JaHOXh1AADDwSiDubvHd0Ls5cpp0%2B3ykn1WQL2YZ7Q6HhOGTq6eF%2FOixNMOphyBbabBDL&X-Amz-Signature=4450afd01d46649cea4b997672b4e3ddeb0bb4bb0aa7142a4ee8536526337d05&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YNUWTXXT%2F20260623%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260623T111523Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFEaCXVzLXdlc3QtMiJIMEYCIQDgaW7cPIP3vy%2FWKaaiuMlKiRDemcpv06n%2FuC2PMAzHDwIhAJCIboMrjkkrr0JhtPYkB7fW6GT%2FinO%2B7LjpRX2xF2RFKv8DCBoQABoMNjM3NDIzMTgzODA1IgyvPWcW3JMdJs3WYtwq3APqf7G5s1U5rbb3gkL25cbiLKV6Qg4Kc6cyQWGo4%2FDsPkQwCewnP2QzUkpJksnY6wkHN7Q7JCMKhozMEXf2moR8aCerHaJttKli2Y%2Brjw4ZyX2ZuEvMq4lxF9jKTLrr7ULX5TWmiUtXlusq6w%2FUJzRwI%2BXBrmAvhwrAdaoJDxSQAwPevw3icmexgM5403dBkK%2BUBw14nxs%2BgIA6TNo5ELfKA2%2BvF2EcPr9O%2FRh0tjDyA4SWU1VhMRkOVaGFlrg3%2FLMacUHnDf3UXDSJQtlRqw2BkdbNcqcELS0BrLwUMfnnNMu4dVeVPw9UxJmDZ1Y2StjtD47psq34xYEHC1On2%2FnsVGu%2FZgWygs5%2F2pJEpQirJJroBgmmD6iyE%2BVcN07S0eWqXRZyp3%2B5f%2BiKWvOv%2FYc4LL6NdImsZIcVYHwaQZC5TissqoHAWmxakcKX7vIXOJ9EU1u3MvgDfL8et9FxjVGlY%2FKb77O9WhtsQxHaTL4ZTE53UZCz85UnXxXJSzFiKxKl%2F1yfyBZv2fbYT14cxNJPE9LeT2DnGj7d04B9xdI5JanctUODpWcR2%2B0FNVE%2BZdPi3ELq1uwiCWAlGJUvwZaaAbhgOIvUnWaRUJVsQIxXdgEto7Uq8n0C%2BG5JnTD7nenRBjqkAYybrBSVyP6PMKDn2Wy%2FzTkE%2BaEejzx5U6tMXzD6SBT85ZzBDy5lfM1KAMdGtHXzC%2F31e2ZL9%2B1VSxRXesrE9Y1McUVL0tf1cEuKboxTWEw1zr6%2B%2B%2BiYge0Vv%2BUcVAL7OVzv2AgLnpiT9pt0ma%2Fbtj8JaHOXh1AADDwSiDubvHd0Ls5cpp0%2B3ykn1WQL2YZ7Q6HhOGTq6eF%2FOixNMOphyBbabBDL&X-Amz-Signature=e97557790d9de62d4336b2a28f2a5b0a4b6628faf3512bccecbae7100fdc41d8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YNUWTXXT%2F20260623%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260623T111523Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFEaCXVzLXdlc3QtMiJIMEYCIQDgaW7cPIP3vy%2FWKaaiuMlKiRDemcpv06n%2FuC2PMAzHDwIhAJCIboMrjkkrr0JhtPYkB7fW6GT%2FinO%2B7LjpRX2xF2RFKv8DCBoQABoMNjM3NDIzMTgzODA1IgyvPWcW3JMdJs3WYtwq3APqf7G5s1U5rbb3gkL25cbiLKV6Qg4Kc6cyQWGo4%2FDsPkQwCewnP2QzUkpJksnY6wkHN7Q7JCMKhozMEXf2moR8aCerHaJttKli2Y%2Brjw4ZyX2ZuEvMq4lxF9jKTLrr7ULX5TWmiUtXlusq6w%2FUJzRwI%2BXBrmAvhwrAdaoJDxSQAwPevw3icmexgM5403dBkK%2BUBw14nxs%2BgIA6TNo5ELfKA2%2BvF2EcPr9O%2FRh0tjDyA4SWU1VhMRkOVaGFlrg3%2FLMacUHnDf3UXDSJQtlRqw2BkdbNcqcELS0BrLwUMfnnNMu4dVeVPw9UxJmDZ1Y2StjtD47psq34xYEHC1On2%2FnsVGu%2FZgWygs5%2F2pJEpQirJJroBgmmD6iyE%2BVcN07S0eWqXRZyp3%2B5f%2BiKWvOv%2FYc4LL6NdImsZIcVYHwaQZC5TissqoHAWmxakcKX7vIXOJ9EU1u3MvgDfL8et9FxjVGlY%2FKb77O9WhtsQxHaTL4ZTE53UZCz85UnXxXJSzFiKxKl%2F1yfyBZv2fbYT14cxNJPE9LeT2DnGj7d04B9xdI5JanctUODpWcR2%2B0FNVE%2BZdPi3ELq1uwiCWAlGJUvwZaaAbhgOIvUnWaRUJVsQIxXdgEto7Uq8n0C%2BG5JnTD7nenRBjqkAYybrBSVyP6PMKDn2Wy%2FzTkE%2BaEejzx5U6tMXzD6SBT85ZzBDy5lfM1KAMdGtHXzC%2F31e2ZL9%2B1VSxRXesrE9Y1McUVL0tf1cEuKboxTWEw1zr6%2B%2B%2BiYge0Vv%2BUcVAL7OVzv2AgLnpiT9pt0ma%2Fbtj8JaHOXh1AADDwSiDubvHd0Ls5cpp0%2B3ykn1WQL2YZ7Q6HhOGTq6eF%2FOixNMOphyBbabBDL&X-Amz-Signature=a81284eef5461785ff74b4ace521f4b3e562183904c0674ce1a0b805bb8656b8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663NW6O7RC%2F20260623%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260623T111523Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFEaCXVzLXdlc3QtMiJIMEYCIQCot8jGc4I8GIIt6TmG2yx6D3eUs7auM5lyp2evEl5lJQIhALlrdD%2FRa5%2FJe7J%2BKxgB11%2F9APGAOUm58WgknrknjvWaKv8DCBoQABoMNjM3NDIzMTgzODA1IgzCuDQ7B9SlMlWZTDUq3APBn0W28EFsxvAE41iaNmKuH%2BsU7A1uCf7CKgvDngadceYghrPdbtm5%2BzzrlIsNimaB9a%2FJ2ZopM50D7gcqw%2BzdyY05B9mnBvkffusBAOQnGdmNyh7SkOIl%2FhX35P7H15EOscl6d9qWbiEXfQunigRaRDEvSE2ISmPmH9SYVUfKHcfvx1cMQ3McVa1EmgD84lMJWiKLTXDNhahrG0vDbbyBIv%2BqAB8BN35zOZradiB3X1DduOc6ZT3ym9dR5i4Eg%2FsdcZX8epsdxgpqZV3VFG0tQPEM56jVXC6IgyusB9mTfgtKqX%2F2nOoHXb%2FCsfs6qWDJ8DsDJnB54YfsIwppBPcJHHl6Y9mZ8iYrgdJ60L%2BGEWJlD%2FwWkFEu0sF5W%2Fe2WayDrlCvHz0G1GQ6vHo0sniq8NMKSLLyjKTms54bgKnnFv1Q16phPhl9DkgnEQ9c3nyFEkBnf2lCXdqL6h3T1qsHvIo1hRPS8%2FP7ykWf6r2IrK2%2BKp0hEMu17CknIegVLVte6s2hpQ0cPMrYIUeMnZMXFTQBrtziyg5I9B9oq15DSYFi%2FMd%2FkqoZyiJoAyl%2F7KOSiGd8V3C2nA6mP70tR7dMCDURhZJLiaXXNVGA3CZlzTz%2BglYpC93NFLt5BzCNnOnRBjqkARyMO1mNoTDJ1yUcxqHy8o77BYoT%2B3JdZYJFUmxRQ8hE8sbUlr9mWIAd%2BLp0wEZhkzjrc4BCYmGZpbx09WfB%2B9Fnmrz5LfJPf9%2BNPyCBuahjrStoG2B2XzmSZtyHp%2FYrfaVHinvseNHKiVXhezpPWRWfrdri2RfLnFzwWq%2FvpCrgm9s%2FLCTCNGzMAaosAI%2FkBq%2BqDgf8moDvAu%2FiJnPKC5cIvJbZ&X-Amz-Signature=700ce0bba8b1efaa362aef4aa1503efa282af288eaa1a997730535479e338c3b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662IODADHG%2F20260623%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260623T111523Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFEaCXVzLXdlc3QtMiJGMEQCIHJfUx4h718eDp5XKswPW3Iuwv%2B2KG6yhK5rOdfb7rh8AiBH99H%2B3zV5PDFPiUN%2FjO3NQN6OPrHVNJ5hKPbAd4LCEir%2FAwgaEAAaDDYzNzQyMzE4MzgwNSIMIqMRDWSdXz3DT%2FHDKtwDlW8Ru%2FwM07wK%2B8SyGtcXOxfZJVz4oeaAOHeU3GZrlYe%2F6Zfho92HyyDf7T3aYjomKrBTd3Choq%2FWmsQbC1PVy40XTpc1tgnJSgXLTgD6ke2IbVkOq9b0W0ln1hPkMrPoHf%2FMw5J4H35mCVyEmGJuUrSYES2t%2BrkIFSnQQddpFSrUauBu20dfYKpL2W2idD7Wwuu2iUFmq829IPKHlOLio9byAq1Z14AqoTUVC8qpmZ48baZkoeykHCptWA5snryk5UAJtOaxpZkEnrzRhQVRDvSOxY0UFqXGA9aftq9N9Qq1uM3SIHrlMB576Q29JiglrkF8MJduwYs5JFTqJYakHVem6rXLCBbYeofY3KV3Shzd%2FVbYJAvdBdAar0OflvkqqmQ5IWZeFkkyZlWjGnlyDPpeXWS9QnjjHzJPqQKL%2FJbYKgRCVT1tjQKHaigYYs83m5AL2BU6nY9NIoNe7Jfr2Xdp%2FFceYgQ8MwrEjhz1YXefLzKm9wmKfAEEYUat7f%2Bu15DDuoHbMkSppa55gab3jmqYebI5ATkq7Lv1VFeCmOD3cXuvQO6cEStogxchfdW%2BIUX8iAGUWg%2BveHJkSEJAFP7DPVUzESsk0lXGeXTZRx9BhbUl8QwM2rqhJ2cwjpzp0QY6pgHrkB7ZKAx0sEEUIp4S0AEx3euTwdkQqoZvOF6W3aVrZb7ynYNP8ndD7USQu3vyoAicZL4Za4Vm4WUwyC%2BQ7int44aY66rvUWqfBa7P2ooBHjjQ7ovLpwEWtI260USncJPcFsRFzgIeHtbEibUPFW%2FPzGVMCroH0oX8KbvwIzKCzebs6HueNWBiVihT3unAJxVrp0BDNmPE3%2F%2FsvmUOjPPs0wTg7gMl&X-Amz-Signature=19c0a67f23c1b0180ed185e5cdb5687b7ddadcd36de59f0f3db8e6bb36e16622&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662IODADHG%2F20260623%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260623T111523Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFEaCXVzLXdlc3QtMiJGMEQCIHJfUx4h718eDp5XKswPW3Iuwv%2B2KG6yhK5rOdfb7rh8AiBH99H%2B3zV5PDFPiUN%2FjO3NQN6OPrHVNJ5hKPbAd4LCEir%2FAwgaEAAaDDYzNzQyMzE4MzgwNSIMIqMRDWSdXz3DT%2FHDKtwDlW8Ru%2FwM07wK%2B8SyGtcXOxfZJVz4oeaAOHeU3GZrlYe%2F6Zfho92HyyDf7T3aYjomKrBTd3Choq%2FWmsQbC1PVy40XTpc1tgnJSgXLTgD6ke2IbVkOq9b0W0ln1hPkMrPoHf%2FMw5J4H35mCVyEmGJuUrSYES2t%2BrkIFSnQQddpFSrUauBu20dfYKpL2W2idD7Wwuu2iUFmq829IPKHlOLio9byAq1Z14AqoTUVC8qpmZ48baZkoeykHCptWA5snryk5UAJtOaxpZkEnrzRhQVRDvSOxY0UFqXGA9aftq9N9Qq1uM3SIHrlMB576Q29JiglrkF8MJduwYs5JFTqJYakHVem6rXLCBbYeofY3KV3Shzd%2FVbYJAvdBdAar0OflvkqqmQ5IWZeFkkyZlWjGnlyDPpeXWS9QnjjHzJPqQKL%2FJbYKgRCVT1tjQKHaigYYs83m5AL2BU6nY9NIoNe7Jfr2Xdp%2FFceYgQ8MwrEjhz1YXefLzKm9wmKfAEEYUat7f%2Bu15DDuoHbMkSppa55gab3jmqYebI5ATkq7Lv1VFeCmOD3cXuvQO6cEStogxchfdW%2BIUX8iAGUWg%2BveHJkSEJAFP7DPVUzESsk0lXGeXTZRx9BhbUl8QwM2rqhJ2cwjpzp0QY6pgHrkB7ZKAx0sEEUIp4S0AEx3euTwdkQqoZvOF6W3aVrZb7ynYNP8ndD7USQu3vyoAicZL4Za4Vm4WUwyC%2BQ7int44aY66rvUWqfBa7P2ooBHjjQ7ovLpwEWtI260USncJPcFsRFzgIeHtbEibUPFW%2FPzGVMCroH0oX8KbvwIzKCzebs6HueNWBiVihT3unAJxVrp0BDNmPE3%2F%2FsvmUOjPPs0wTg7gMl&X-Amz-Signature=eaf3c4665f5e3ac385453d96e06d5c0cc91e600e0e851c2182f3397282f4516e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
