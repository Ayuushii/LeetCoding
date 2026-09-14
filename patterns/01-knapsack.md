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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662WRLRWDY%2F20260914%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260914T144422Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB0aCXVzLXdlc3QtMiJGMEQCIC%2BK7ZOHSRLnb%2FBxZW106YjMS1MXlG5iPQiZCcwwpIDCAiBiD4Yu1I6pA5CmN7dNLpnKYqtq%2BMyIzu1ByMWSWl7aviqIBAjm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMogupruupN%2FOK%2FDEQKtwDM2wZpDs9tNfRYShslTAuKeR3ZGCYib%2BvyrpH7yyAt%2Bznir3oDrLsbhGGI6TvSrd6QLKWII00Biu%2FTJYgku5kUfdZBXCNZjOyidQ4VDJmJZw1TLEd5Mt7VhLPKLlAjWBVb54qSgvEe%2FUJeAjGJjRK%2FNVzSpmJq%2FfM3qFjgNUOyHMg5j6jKi8Z3Ou3GB60eWhKcbdQeiLc%2BKxquL6If4z3euM3fSkDdktTpwv%2BFMW0durVr8geUkIKEtEjWVopbLrEMXtEruKk4VOV9Nrn6FYiGVB47GhF9PWFqjaP4JC1tyzimmjsKUXEJDD%2B3ajqL%2F5xerqHMYoPt8eWb3b4TKnS2Sim6gk8CHz9vMnvWsd4qE2ezY6HyIr6KXqq9PVEBGtYGpSRYzdU69Yaic2wLMmtY6b7tmE1uCxpo0FHRtbEeE7hQNtEtgbvIngGhoM8m%2FrqTmb%2BrW313tZhrRnfSqFCcOt9saXRDPVKbo6R8v6tkbLGl3JK%2B6Fs5JqN2BMym%2FIrXOKch8%2B804wcTEFOkio1w7KPxby48SwgiDtJvaTQfG67mG02HvOSl3Nm%2F8klE02jp7s1yatz7RuaynGrUpLCzDfz%2FbPbYAj29VYKnTJLO7Vz3bBZj53l%2B6UC0Q8wjtif1QY6pgFX934WPBjs%2FX5PNoc19raxoyGLoqcTXAqw3KX8yoNLps3Ge5RCBN%2Bbuk4SscamRh2coUXtNM3nsAD88pMAYKqLLiL2PFZv6zsP%2B3%2F6d%2FFaSG02d9rBkPMaoGtO0%2BJHcevPxnzadSX%2BeFMKol%2FcElaDdiXo8qu%2Fp9NIGL7ixcmiHg1L9UTk%2BPWKyFQq3AsuFimrxElFWpPTIm%2BRFBSgpM1OLKOyli3p&X-Amz-Signature=f8eb262130c32f6dc1f007648c2268ba2b672d6299b093706f094c8fd0342870&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662WRLRWDY%2F20260914%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260914T144422Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB0aCXVzLXdlc3QtMiJGMEQCIC%2BK7ZOHSRLnb%2FBxZW106YjMS1MXlG5iPQiZCcwwpIDCAiBiD4Yu1I6pA5CmN7dNLpnKYqtq%2BMyIzu1ByMWSWl7aviqIBAjm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMogupruupN%2FOK%2FDEQKtwDM2wZpDs9tNfRYShslTAuKeR3ZGCYib%2BvyrpH7yyAt%2Bznir3oDrLsbhGGI6TvSrd6QLKWII00Biu%2FTJYgku5kUfdZBXCNZjOyidQ4VDJmJZw1TLEd5Mt7VhLPKLlAjWBVb54qSgvEe%2FUJeAjGJjRK%2FNVzSpmJq%2FfM3qFjgNUOyHMg5j6jKi8Z3Ou3GB60eWhKcbdQeiLc%2BKxquL6If4z3euM3fSkDdktTpwv%2BFMW0durVr8geUkIKEtEjWVopbLrEMXtEruKk4VOV9Nrn6FYiGVB47GhF9PWFqjaP4JC1tyzimmjsKUXEJDD%2B3ajqL%2F5xerqHMYoPt8eWb3b4TKnS2Sim6gk8CHz9vMnvWsd4qE2ezY6HyIr6KXqq9PVEBGtYGpSRYzdU69Yaic2wLMmtY6b7tmE1uCxpo0FHRtbEeE7hQNtEtgbvIngGhoM8m%2FrqTmb%2BrW313tZhrRnfSqFCcOt9saXRDPVKbo6R8v6tkbLGl3JK%2B6Fs5JqN2BMym%2FIrXOKch8%2B804wcTEFOkio1w7KPxby48SwgiDtJvaTQfG67mG02HvOSl3Nm%2F8klE02jp7s1yatz7RuaynGrUpLCzDfz%2FbPbYAj29VYKnTJLO7Vz3bBZj53l%2B6UC0Q8wjtif1QY6pgFX934WPBjs%2FX5PNoc19raxoyGLoqcTXAqw3KX8yoNLps3Ge5RCBN%2Bbuk4SscamRh2coUXtNM3nsAD88pMAYKqLLiL2PFZv6zsP%2B3%2F6d%2FFaSG02d9rBkPMaoGtO0%2BJHcevPxnzadSX%2BeFMKol%2FcElaDdiXo8qu%2Fp9NIGL7ixcmiHg1L9UTk%2BPWKyFQq3AsuFimrxElFWpPTIm%2BRFBSgpM1OLKOyli3p&X-Amz-Signature=40aa5438255b9ce15f64c95ce76d430210a8602984cea3eef9b41d920e1933b4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662WRLRWDY%2F20260914%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260914T144422Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB0aCXVzLXdlc3QtMiJGMEQCIC%2BK7ZOHSRLnb%2FBxZW106YjMS1MXlG5iPQiZCcwwpIDCAiBiD4Yu1I6pA5CmN7dNLpnKYqtq%2BMyIzu1ByMWSWl7aviqIBAjm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMogupruupN%2FOK%2FDEQKtwDM2wZpDs9tNfRYShslTAuKeR3ZGCYib%2BvyrpH7yyAt%2Bznir3oDrLsbhGGI6TvSrd6QLKWII00Biu%2FTJYgku5kUfdZBXCNZjOyidQ4VDJmJZw1TLEd5Mt7VhLPKLlAjWBVb54qSgvEe%2FUJeAjGJjRK%2FNVzSpmJq%2FfM3qFjgNUOyHMg5j6jKi8Z3Ou3GB60eWhKcbdQeiLc%2BKxquL6If4z3euM3fSkDdktTpwv%2BFMW0durVr8geUkIKEtEjWVopbLrEMXtEruKk4VOV9Nrn6FYiGVB47GhF9PWFqjaP4JC1tyzimmjsKUXEJDD%2B3ajqL%2F5xerqHMYoPt8eWb3b4TKnS2Sim6gk8CHz9vMnvWsd4qE2ezY6HyIr6KXqq9PVEBGtYGpSRYzdU69Yaic2wLMmtY6b7tmE1uCxpo0FHRtbEeE7hQNtEtgbvIngGhoM8m%2FrqTmb%2BrW313tZhrRnfSqFCcOt9saXRDPVKbo6R8v6tkbLGl3JK%2B6Fs5JqN2BMym%2FIrXOKch8%2B804wcTEFOkio1w7KPxby48SwgiDtJvaTQfG67mG02HvOSl3Nm%2F8klE02jp7s1yatz7RuaynGrUpLCzDfz%2FbPbYAj29VYKnTJLO7Vz3bBZj53l%2B6UC0Q8wjtif1QY6pgFX934WPBjs%2FX5PNoc19raxoyGLoqcTXAqw3KX8yoNLps3Ge5RCBN%2Bbuk4SscamRh2coUXtNM3nsAD88pMAYKqLLiL2PFZv6zsP%2B3%2F6d%2FFaSG02d9rBkPMaoGtO0%2BJHcevPxnzadSX%2BeFMKol%2FcElaDdiXo8qu%2Fp9NIGL7ixcmiHg1L9UTk%2BPWKyFQq3AsuFimrxElFWpPTIm%2BRFBSgpM1OLKOyli3p&X-Amz-Signature=d869a2fdcc1970b049cc651e8d81a75911aedd28c532ab1c310a85294cb5a801&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TI6PGABG%2F20260914%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260914T144422Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB0aCXVzLXdlc3QtMiJHMEUCIEp6TeSuVang%2BGMRFzyrzQh1Ei%2BgQVEs57ngmG88zp%2BBAiEAp85kQ%2F%2BH1q1qx3FyeP2aLZDRpdtOpkLq8k%2BtS6%2BGME8qiAQI5v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOkWuT6uC%2Btc%2FoeAnyrcA%2FlcEqgC2SU2LH4K2clrelE63PFgt5%2FRNFOuVotKF5pRtjngEQIWO5gZxGGTxy4pAUQ7YzWrwhjmaLLohbGL%2F49U%2BONVMJBuIr7BoB%2BtmynOihyUc5eDXLPTbLCUFK6V%2FLHOfNocInBvNMwUQH3XVGMxzFPO7GGxwA%2F9GLYNuObxtAH1v9EByhDP4K1Jv%2FmJBft5BpCN7oXGTJWg5uCHIselTkqOl4ik42TYDcV9mX5zqnsyIDw%2BSSrE5xSxLfpA2gR474o%2BXzjv7hjojioXAQDGmbp9pFUldGV7KJfrJz0YmG8qj55HSEzRmoGDNur4h10dZi0vo1wtO%2Ffch%2Bq%2Bfs%2F4QzweZ1inNlXKC0vHeVtrbxsBLK5YdLrk%2FBukx2b12uf8kYYR%2FgtafWK41PZzzsrt%2FX2I7jnPgyn2yIE3bT%2BfB7dBtXc8tpd82VHFwTpOc9ymGhOQVQU11vueVVx1jVf%2F6Rneo1cw4m0tqHHNXXrYfjciRRL6S%2Bej1X9Np%2BHGhXJX5EudPnwL4rcPM%2F%2FzuA7MKIX2jm3vFUUKebqTA26L%2FaWQA2DMeq4UATDtlGktiZuhm9H%2BiDN6m0aphf4A1i%2BbuoTWvRtkblqDBXfWVGdYnL0MfKF2NEtens1tMOPXn9UGOqUBHdU01blOdigCpz9kUpMKDEwrJH0wn4HRpnKtxypc5NistcAe8jA618zqlFn1rU%2FzcqJgZ2wvff%2Fuj3RggR4fuSnc%2F%2FZ0f940ohmfVp%2F4luKywkh%2Fk9IugpcQ18IboVuqMlKkyYMkAuhrF3OTmQa1kT5GvRAV3vF2TZDRdLogon6R0EYiNbDgFDDVJwzxowU1bocyqsVCacMeObc%2BL3JshpNR89uq&X-Amz-Signature=8369c24a977c31ddd874efe30b25c476d58ecb7880829117d3984dd6196e2e3a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TI6PGABG%2F20260914%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260914T144422Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB0aCXVzLXdlc3QtMiJHMEUCIEp6TeSuVang%2BGMRFzyrzQh1Ei%2BgQVEs57ngmG88zp%2BBAiEAp85kQ%2F%2BH1q1qx3FyeP2aLZDRpdtOpkLq8k%2BtS6%2BGME8qiAQI5v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOkWuT6uC%2Btc%2FoeAnyrcA%2FlcEqgC2SU2LH4K2clrelE63PFgt5%2FRNFOuVotKF5pRtjngEQIWO5gZxGGTxy4pAUQ7YzWrwhjmaLLohbGL%2F49U%2BONVMJBuIr7BoB%2BtmynOihyUc5eDXLPTbLCUFK6V%2FLHOfNocInBvNMwUQH3XVGMxzFPO7GGxwA%2F9GLYNuObxtAH1v9EByhDP4K1Jv%2FmJBft5BpCN7oXGTJWg5uCHIselTkqOl4ik42TYDcV9mX5zqnsyIDw%2BSSrE5xSxLfpA2gR474o%2BXzjv7hjojioXAQDGmbp9pFUldGV7KJfrJz0YmG8qj55HSEzRmoGDNur4h10dZi0vo1wtO%2Ffch%2Bq%2Bfs%2F4QzweZ1inNlXKC0vHeVtrbxsBLK5YdLrk%2FBukx2b12uf8kYYR%2FgtafWK41PZzzsrt%2FX2I7jnPgyn2yIE3bT%2BfB7dBtXc8tpd82VHFwTpOc9ymGhOQVQU11vueVVx1jVf%2F6Rneo1cw4m0tqHHNXXrYfjciRRL6S%2Bej1X9Np%2BHGhXJX5EudPnwL4rcPM%2F%2FzuA7MKIX2jm3vFUUKebqTA26L%2FaWQA2DMeq4UATDtlGktiZuhm9H%2BiDN6m0aphf4A1i%2BbuoTWvRtkblqDBXfWVGdYnL0MfKF2NEtens1tMOPXn9UGOqUBHdU01blOdigCpz9kUpMKDEwrJH0wn4HRpnKtxypc5NistcAe8jA618zqlFn1rU%2FzcqJgZ2wvff%2Fuj3RggR4fuSnc%2F%2FZ0f940ohmfVp%2F4luKywkh%2Fk9IugpcQ18IboVuqMlKkyYMkAuhrF3OTmQa1kT5GvRAV3vF2TZDRdLogon6R0EYiNbDgFDDVJwzxowU1bocyqsVCacMeObc%2BL3JshpNR89uq&X-Amz-Signature=2a49808f1732013db4891dc4bc5c8134fc3ca9290e00f7e7ca5a08d36e131cd3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TI6PGABG%2F20260914%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260914T144422Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB0aCXVzLXdlc3QtMiJHMEUCIEp6TeSuVang%2BGMRFzyrzQh1Ei%2BgQVEs57ngmG88zp%2BBAiEAp85kQ%2F%2BH1q1qx3FyeP2aLZDRpdtOpkLq8k%2BtS6%2BGME8qiAQI5v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOkWuT6uC%2Btc%2FoeAnyrcA%2FlcEqgC2SU2LH4K2clrelE63PFgt5%2FRNFOuVotKF5pRtjngEQIWO5gZxGGTxy4pAUQ7YzWrwhjmaLLohbGL%2F49U%2BONVMJBuIr7BoB%2BtmynOihyUc5eDXLPTbLCUFK6V%2FLHOfNocInBvNMwUQH3XVGMxzFPO7GGxwA%2F9GLYNuObxtAH1v9EByhDP4K1Jv%2FmJBft5BpCN7oXGTJWg5uCHIselTkqOl4ik42TYDcV9mX5zqnsyIDw%2BSSrE5xSxLfpA2gR474o%2BXzjv7hjojioXAQDGmbp9pFUldGV7KJfrJz0YmG8qj55HSEzRmoGDNur4h10dZi0vo1wtO%2Ffch%2Bq%2Bfs%2F4QzweZ1inNlXKC0vHeVtrbxsBLK5YdLrk%2FBukx2b12uf8kYYR%2FgtafWK41PZzzsrt%2FX2I7jnPgyn2yIE3bT%2BfB7dBtXc8tpd82VHFwTpOc9ymGhOQVQU11vueVVx1jVf%2F6Rneo1cw4m0tqHHNXXrYfjciRRL6S%2Bej1X9Np%2BHGhXJX5EudPnwL4rcPM%2F%2FzuA7MKIX2jm3vFUUKebqTA26L%2FaWQA2DMeq4UATDtlGktiZuhm9H%2BiDN6m0aphf4A1i%2BbuoTWvRtkblqDBXfWVGdYnL0MfKF2NEtens1tMOPXn9UGOqUBHdU01blOdigCpz9kUpMKDEwrJH0wn4HRpnKtxypc5NistcAe8jA618zqlFn1rU%2FzcqJgZ2wvff%2Fuj3RggR4fuSnc%2F%2FZ0f940ohmfVp%2F4luKywkh%2Fk9IugpcQ18IboVuqMlKkyYMkAuhrF3OTmQa1kT5GvRAV3vF2TZDRdLogon6R0EYiNbDgFDDVJwzxowU1bocyqsVCacMeObc%2BL3JshpNR89uq&X-Amz-Signature=880f53cdcd97d5081e697a09d97497e0dc69989aba54ccd1a197a1a7a3c127f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TI6PGABG%2F20260914%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260914T144422Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB0aCXVzLXdlc3QtMiJHMEUCIEp6TeSuVang%2BGMRFzyrzQh1Ei%2BgQVEs57ngmG88zp%2BBAiEAp85kQ%2F%2BH1q1qx3FyeP2aLZDRpdtOpkLq8k%2BtS6%2BGME8qiAQI5v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOkWuT6uC%2Btc%2FoeAnyrcA%2FlcEqgC2SU2LH4K2clrelE63PFgt5%2FRNFOuVotKF5pRtjngEQIWO5gZxGGTxy4pAUQ7YzWrwhjmaLLohbGL%2F49U%2BONVMJBuIr7BoB%2BtmynOihyUc5eDXLPTbLCUFK6V%2FLHOfNocInBvNMwUQH3XVGMxzFPO7GGxwA%2F9GLYNuObxtAH1v9EByhDP4K1Jv%2FmJBft5BpCN7oXGTJWg5uCHIselTkqOl4ik42TYDcV9mX5zqnsyIDw%2BSSrE5xSxLfpA2gR474o%2BXzjv7hjojioXAQDGmbp9pFUldGV7KJfrJz0YmG8qj55HSEzRmoGDNur4h10dZi0vo1wtO%2Ffch%2Bq%2Bfs%2F4QzweZ1inNlXKC0vHeVtrbxsBLK5YdLrk%2FBukx2b12uf8kYYR%2FgtafWK41PZzzsrt%2FX2I7jnPgyn2yIE3bT%2BfB7dBtXc8tpd82VHFwTpOc9ymGhOQVQU11vueVVx1jVf%2F6Rneo1cw4m0tqHHNXXrYfjciRRL6S%2Bej1X9Np%2BHGhXJX5EudPnwL4rcPM%2F%2FzuA7MKIX2jm3vFUUKebqTA26L%2FaWQA2DMeq4UATDtlGktiZuhm9H%2BiDN6m0aphf4A1i%2BbuoTWvRtkblqDBXfWVGdYnL0MfKF2NEtens1tMOPXn9UGOqUBHdU01blOdigCpz9kUpMKDEwrJH0wn4HRpnKtxypc5NistcAe8jA618zqlFn1rU%2FzcqJgZ2wvff%2Fuj3RggR4fuSnc%2F%2FZ0f940ohmfVp%2F4luKywkh%2Fk9IugpcQ18IboVuqMlKkyYMkAuhrF3OTmQa1kT5GvRAV3vF2TZDRdLogon6R0EYiNbDgFDDVJwzxowU1bocyqsVCacMeObc%2BL3JshpNR89uq&X-Amz-Signature=94b9c6c007731e24f8a8142e0510fb5903130e4a341671a9429d03d44c3415d6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TMNAHGS6%2F20260914%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260914T144423Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB0aCXVzLXdlc3QtMiJIMEYCIQCjFAod0bgPDDU0zMuDybUtTBC%2FByBZEm%2FYZB%2Fv4lKpEQIhAMAnZ%2F9ZOXcgYMhbCY1wqjDnbpIkUU15D0WSnuNTGVVZKogECOb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxztYSzxMjY6HA99ikq3ANkjf59Jb3qbYFng10I%2FX6xeEb3vCEy5mRGQzToqHQpsX0oAcYG8P1yMIFJ53eeZRNRm17QcD0JrMlLm6%2BmH2DrFne41ffY2TQD78w7xiI%2FQWQgnpsAZMf9oL%2BzX8gSPdIc%2Fz%2Bp8WR6UmRusfA%2FHDweEllZFaUyHl6v4nBZz5PL47lmlIXE5qS0hh3ePBRIH31%2Fd4RWn55MnJldl7YJ8E2HgLQXclFIk8njkJ2fyuHOJtJJ2fEKYLWJrNnfl1P2%2FnukBYrvFH2VIMzl8G9%2BgdjvXrbCvYw5nSwMJnNkg%2FiasCp8pxEtc7rv23OzzH3JXeV%2F5DnZgLTAmGIjuV1Z90tVu0BIHIL6yaiFa%2BDzqKqwjNScmMdLRdf7rMOjtcvmGDo1ewLWwllXxZLuK18lFOCLPpOOYkSy93R1XTK9DD0KDJv4PVBWlogQVCFn%2BL03QFcvUiBFIBnpGy%2Br49T3tua9Ujggo1EET%2FBIECbQdylLmk2Zc9beUNQ0Xw4LbGWiZIeiAWMGMl%2FQse%2FAHCxWe5lSk%2BYEsLAae3L1wbG38r6%2B2bWZm0RVTcG0nL%2BWZRKqU%2FyQtyfegVdAGe%2BkxNDZQ2xKNGAZIxNISJeO%2F81ampNe6LWUZsM%2FAZdmuDx1lDDh1Z%2FVBjqkAZhx1uAZNNHs%2FYT0CoA6kYp497qyvTS6mOp1Lv9GbuQW6%2FtlXhR0wSZZUWilsTwH2eUWHeJhRF%2BVCsGmrV%2B0CJqF9OycU%2BNAt%2BrLdSH6i%2BWjggzT6gdGU%2BRVWdlT%2FsX4VOkKdK9Sr2TVccTyR2beyX1gHn6QZOZIZ83W%2F6a5eD0%2FXBXEgAh4NQWVpJDdAQu5ZUYjHwrOxAfpwtjccikvXTbvOj%2Fa&X-Amz-Signature=c509d9ae2ef55498d012ea138ab3b50a95c15b6d519a2480440d68dab27e51be&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RHBKWB2L%2F20260914%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260914T144423Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB0aCXVzLXdlc3QtMiJHMEUCIHmYvNHS43nKRa0nAHbTsAJ3W8%2FijybsEdiq6%2BUcSk%2BbAiEAqKi7lcApJ%2Bpcu5Yu9ANCIz0EV8uMtipMFw1ma5qecAcqiAQI5v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAiMqoW1u4Ya7E%2BeoCrcAwVCSbPETFZnRkpo0%2FEuoq9kms3YCIPgCSkrlbRBC%2B1XSAO6Trl5VnlciWD%2FoqLhbYguTWh2lOJZ%2FT27aJFoldzdEU2Rpy4Coe7onkO8iPVxCQQEV%2Fv7jGVvBobT3GaF4ASu1qp5jBzbo0vrHPkxutn9Aj4n%2F%2FrfxD1E4cziVFaD%2BjpVW1dmbFuvPyV15X0gS%2BpMwd6NKT9uD3KO%2FWNnTnPI%2Fig%2FJD2quv9Dbf3HxAog7pl%2F%2BH0o54xCb0cgiUx4M%2BDKcnBYF7lZ0IrIDVPyaepwvC6TDpU03Ok%2BlFrVFtY2ZvBw9vZtmVPZ19SyWLFv6AvbVId2ys4kGDc5RyXW7zcsKcyBkHrOCxshAVdRS6nTDwYVKqrFvX%2Fb5gqKZOZD3w7qQgboGk1NSMoF6x0l7SH2RhpY04T9wX8hE2nMRj0A3WD0P6gG4vtwIDktO7C2Ygt6uwLdB6LjJqCjfGY%2FNOVWz%2BOh%2FgDXaOZTxiBmG8v2fY2PuA8FZK5E%2ByVzmn2kmwDUeTUmPFMtLwKylV4VDxHPn%2FLd8g%2Ffxsj2Jr6qPzOskMs2ES6bDIFqXB%2Fz%2F6fhtcUszJAws97fdjBQ0imKhLCnJDTnriqNacnLYDRBCoa9ObqtYsAAvBYU1zpVMLfYn9UGOqUBxu5VeiVPU32NFo09mryBcoa3QGwM%2BBguu7YQGS3ECeflFDj0Hced5bAFjULodGh5aQpStLeJxARAm6jxlEfNh8sUtoMVZymv1ZFCTR1JPJ0PvxJXguVU3wdF2xaFybf21okI07PhsBxNhZWpHdsQLG1jvczx2Z%2BE8ifKDBKn3FIHz72BBmzivmYFEXPaj7CrQB65c5hQaZwSimiGGl4km1dY7GpR&X-Amz-Signature=e66ad78cfa4ae87b9cce55154f973aa42905fa5d33c4ae5e22d7dea31b6f54dc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RHBKWB2L%2F20260914%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260914T144423Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB0aCXVzLXdlc3QtMiJHMEUCIHmYvNHS43nKRa0nAHbTsAJ3W8%2FijybsEdiq6%2BUcSk%2BbAiEAqKi7lcApJ%2Bpcu5Yu9ANCIz0EV8uMtipMFw1ma5qecAcqiAQI5v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAiMqoW1u4Ya7E%2BeoCrcAwVCSbPETFZnRkpo0%2FEuoq9kms3YCIPgCSkrlbRBC%2B1XSAO6Trl5VnlciWD%2FoqLhbYguTWh2lOJZ%2FT27aJFoldzdEU2Rpy4Coe7onkO8iPVxCQQEV%2Fv7jGVvBobT3GaF4ASu1qp5jBzbo0vrHPkxutn9Aj4n%2F%2FrfxD1E4cziVFaD%2BjpVW1dmbFuvPyV15X0gS%2BpMwd6NKT9uD3KO%2FWNnTnPI%2Fig%2FJD2quv9Dbf3HxAog7pl%2F%2BH0o54xCb0cgiUx4M%2BDKcnBYF7lZ0IrIDVPyaepwvC6TDpU03Ok%2BlFrVFtY2ZvBw9vZtmVPZ19SyWLFv6AvbVId2ys4kGDc5RyXW7zcsKcyBkHrOCxshAVdRS6nTDwYVKqrFvX%2Fb5gqKZOZD3w7qQgboGk1NSMoF6x0l7SH2RhpY04T9wX8hE2nMRj0A3WD0P6gG4vtwIDktO7C2Ygt6uwLdB6LjJqCjfGY%2FNOVWz%2BOh%2FgDXaOZTxiBmG8v2fY2PuA8FZK5E%2ByVzmn2kmwDUeTUmPFMtLwKylV4VDxHPn%2FLd8g%2Ffxsj2Jr6qPzOskMs2ES6bDIFqXB%2Fz%2F6fhtcUszJAws97fdjBQ0imKhLCnJDTnriqNacnLYDRBCoa9ObqtYsAAvBYU1zpVMLfYn9UGOqUBxu5VeiVPU32NFo09mryBcoa3QGwM%2BBguu7YQGS3ECeflFDj0Hced5bAFjULodGh5aQpStLeJxARAm6jxlEfNh8sUtoMVZymv1ZFCTR1JPJ0PvxJXguVU3wdF2xaFybf21okI07PhsBxNhZWpHdsQLG1jvczx2Z%2BE8ifKDBKn3FIHz72BBmzivmYFEXPaj7CrQB65c5hQaZwSimiGGl4km1dY7GpR&X-Amz-Signature=6d9ee4358b219e5b502511c333eac370f11d15548d4968eb2836f57d1965b1d8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
