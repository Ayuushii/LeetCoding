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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663XVC54JY%2F20261120%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261120T164241Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIEp2K6mv9GAHCpruefjcwriXqVmnYQvIrZnbL2s9pAq3AiEA7iws%2Bt0RU3uYaSitczQcwEhCE2fBpJOK9x%2BandT2MZMq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDPnckGz1UJs3%2B7HnsircAzyggWJWJO6C5VaAOR1i2%2BvrucyD0HbvCxvjKGJz65dV%2FLR56fHe%2F23W3JzQyo6hbLwUrFeyoMOP9PSBme518JFgDbYcGGiC74n5hq25j%2B1qV5dJMNrnWkxpFfjXKlczBM2gcy9iOpEIhLt9nbBAPQwm%2Fy2Z%2BJy35DEufbsvNOMRhBbsESslh%2FVWQAB0ViDmVJ7iyR%2ByfcTNPWYU5dtucEGsVvcay2BCqnP6i2lq1hRzfoPmI6uZabXZ7Rq3cqCCA9fRcOH4qql49O6xP1zxm4Kl9O0i9RMMqTDwdepRVXuTthlrk8V%2FQqVQpu7TwuJKiQBKpqwe7neMsn2b4zQf9vwp4qbOAwcjfeMSAOjHtuyIQRh4cmP%2BebrAEOdJC6TygD29JrcFv2JFUrxv2H5O4iCh1BPKbiiluDM1ZDDXYZI5w5ipcA5kQrsgPzI%2FXKCBNzvZjuTLuBD5s6iCW%2Bv%2FLara6xfSeyHAuJDvd0GhNiLib7js0jk24S%2BMYNSpKP%2FekO7SdUE87h4p7fy0DtkOKuY9TuSSzAdxm9k5DCCwwAdM4xVa64H6jO7bFc1LuBjuJwjxge94fRsY%2FpHHyVhXa7Xe6SDB1C30K7s9Ar0TRk7LmCp1bqQQ0Wiuh5VQMJ3fgdgGOqUBpuwggqXx%2Fnzf94S0dfxu4GPNuHVAO99Pz0izsMAJXM8BBuVMUs%2BTIX7%2FJZfep3vvoWv6Shaym5Sid6kS4eBC0QgcsSZQ%2BOf9kkmTBbMTUq18%2B82%2FIXeW%2BvfarARDgdWNIFwHuW%2BHCF9pmJqQvszOOe1DqLiaiEHwkG9JDkn6kTkPGvGOvKD5m4mpwVB%2BB4AEv1CbVrqs2C6qMpmQAJjmKw46C46j&X-Amz-Signature=775a9ba8a760a98d870d9b2dbadf6e926987248e7ad030c8108196ff43e24d8a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663XVC54JY%2F20261120%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261120T164241Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIEp2K6mv9GAHCpruefjcwriXqVmnYQvIrZnbL2s9pAq3AiEA7iws%2Bt0RU3uYaSitczQcwEhCE2fBpJOK9x%2BandT2MZMq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDPnckGz1UJs3%2B7HnsircAzyggWJWJO6C5VaAOR1i2%2BvrucyD0HbvCxvjKGJz65dV%2FLR56fHe%2F23W3JzQyo6hbLwUrFeyoMOP9PSBme518JFgDbYcGGiC74n5hq25j%2B1qV5dJMNrnWkxpFfjXKlczBM2gcy9iOpEIhLt9nbBAPQwm%2Fy2Z%2BJy35DEufbsvNOMRhBbsESslh%2FVWQAB0ViDmVJ7iyR%2ByfcTNPWYU5dtucEGsVvcay2BCqnP6i2lq1hRzfoPmI6uZabXZ7Rq3cqCCA9fRcOH4qql49O6xP1zxm4Kl9O0i9RMMqTDwdepRVXuTthlrk8V%2FQqVQpu7TwuJKiQBKpqwe7neMsn2b4zQf9vwp4qbOAwcjfeMSAOjHtuyIQRh4cmP%2BebrAEOdJC6TygD29JrcFv2JFUrxv2H5O4iCh1BPKbiiluDM1ZDDXYZI5w5ipcA5kQrsgPzI%2FXKCBNzvZjuTLuBD5s6iCW%2Bv%2FLara6xfSeyHAuJDvd0GhNiLib7js0jk24S%2BMYNSpKP%2FekO7SdUE87h4p7fy0DtkOKuY9TuSSzAdxm9k5DCCwwAdM4xVa64H6jO7bFc1LuBjuJwjxge94fRsY%2FpHHyVhXa7Xe6SDB1C30K7s9Ar0TRk7LmCp1bqQQ0Wiuh5VQMJ3fgdgGOqUBpuwggqXx%2Fnzf94S0dfxu4GPNuHVAO99Pz0izsMAJXM8BBuVMUs%2BTIX7%2FJZfep3vvoWv6Shaym5Sid6kS4eBC0QgcsSZQ%2BOf9kkmTBbMTUq18%2B82%2FIXeW%2BvfarARDgdWNIFwHuW%2BHCF9pmJqQvszOOe1DqLiaiEHwkG9JDkn6kTkPGvGOvKD5m4mpwVB%2BB4AEv1CbVrqs2C6qMpmQAJjmKw46C46j&X-Amz-Signature=00710a6f541c08098df3ab6714790b179a9f7ab5367fcd1fe40a610c5bcfc8d0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663XVC54JY%2F20261120%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261120T164241Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIEp2K6mv9GAHCpruefjcwriXqVmnYQvIrZnbL2s9pAq3AiEA7iws%2Bt0RU3uYaSitczQcwEhCE2fBpJOK9x%2BandT2MZMq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDPnckGz1UJs3%2B7HnsircAzyggWJWJO6C5VaAOR1i2%2BvrucyD0HbvCxvjKGJz65dV%2FLR56fHe%2F23W3JzQyo6hbLwUrFeyoMOP9PSBme518JFgDbYcGGiC74n5hq25j%2B1qV5dJMNrnWkxpFfjXKlczBM2gcy9iOpEIhLt9nbBAPQwm%2Fy2Z%2BJy35DEufbsvNOMRhBbsESslh%2FVWQAB0ViDmVJ7iyR%2ByfcTNPWYU5dtucEGsVvcay2BCqnP6i2lq1hRzfoPmI6uZabXZ7Rq3cqCCA9fRcOH4qql49O6xP1zxm4Kl9O0i9RMMqTDwdepRVXuTthlrk8V%2FQqVQpu7TwuJKiQBKpqwe7neMsn2b4zQf9vwp4qbOAwcjfeMSAOjHtuyIQRh4cmP%2BebrAEOdJC6TygD29JrcFv2JFUrxv2H5O4iCh1BPKbiiluDM1ZDDXYZI5w5ipcA5kQrsgPzI%2FXKCBNzvZjuTLuBD5s6iCW%2Bv%2FLara6xfSeyHAuJDvd0GhNiLib7js0jk24S%2BMYNSpKP%2FekO7SdUE87h4p7fy0DtkOKuY9TuSSzAdxm9k5DCCwwAdM4xVa64H6jO7bFc1LuBjuJwjxge94fRsY%2FpHHyVhXa7Xe6SDB1C30K7s9Ar0TRk7LmCp1bqQQ0Wiuh5VQMJ3fgdgGOqUBpuwggqXx%2Fnzf94S0dfxu4GPNuHVAO99Pz0izsMAJXM8BBuVMUs%2BTIX7%2FJZfep3vvoWv6Shaym5Sid6kS4eBC0QgcsSZQ%2BOf9kkmTBbMTUq18%2B82%2FIXeW%2BvfarARDgdWNIFwHuW%2BHCF9pmJqQvszOOe1DqLiaiEHwkG9JDkn6kTkPGvGOvKD5m4mpwVB%2BB4AEv1CbVrqs2C6qMpmQAJjmKw46C46j&X-Amz-Signature=dbe53d18a7a88687704f89334c63b2448cb33024510138aebb72cf0bb9b6e5a3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CYKP56I%2F20261120%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261120T164241Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIQDi4cuF2qbHx6eWxQF0qxn0cyiwXahVNnbMEgLbnHTVkwIgCuBO4OxpO5BbsHei%2BQhDj%2Flm9zE9F%2Bu30jm89QyKhZoq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDNu4HVOoDpFGi%2BYgOCrcA4HN5e1d%2B8saB14PYdVvrQ6Ja2Cme8t2182tar%2BgrZYypV3JATFDU6nVtqQNuT1CoXbODKo1%2FOVTb3e6D%2BJhWWDHk4Fu%2BosN3cLxjlfqeZygCeWHhwRS%2BUIZWDEg82amVJdL%2Bmgv%2FEmRpcuoW0t7ERxmB0mlo3wHh2ff9ij53wzaJ079LOKnNcez9pXSR80i1QNEZTseNe7n8pTmMbKOIfuBYNfbAU6FC9rfU4s4B90zcBED3EGwNmyiF8np9yIJgRNZnhI%2B%2F3e2rPTcVrdbc1ne3milpwAJpHjqJ2Px77iOlp%2B59o82me69RrH1TTDTaH6CY9HV2lU8Bl3mso1crcAK5YHDuRo2TECVBMsT01Ld9Pxytl6KCCu8lBc6yynL4KwSacY2wxq4WBFayA5nL3YuMdyLU70cXPNmSsCAwOaXiabrM3W3zcQDGZ1CPcjKQY3bUohDv6FL1JuWgmt0fTLdEBDo0yXsqeqKMSdm6NvWWFWHm%2FQYCu%2BoT%2F4Gn%2FdOwHcgF%2Fmgj5C7mmsmkNj22PjhEvewTOwXL%2B1zEpYgZTD3FghVVSBjicICTU%2BDP5N1vVm7MWIQt%2F%2F99eP5YuIbKA%2F1ZMjuy4ex9dgioGag2F6vKfDUNygzWnCdp3CsMKHggdgGOqUBU%2BPVHPF3%2FOoXMx3vJTcZYT3BkoDX7ozpfGkSV7z%2B7je5bZPGjByk6vlmyBuqGMIPwhpwCBdmgWgVrRPFObkONEGSVVGxVSuxwji%2BG8v4uXP2XpmKOCVLRLYNxL9u%2Bp97DLzvSLDFOZui116HkiIr7sfuKyvO2l91c0gbIRunW9nu6uPrxklXDjzp9slRFc7P5JMtcJbtBolFW34BI27VmDY1nXbs&X-Amz-Signature=fbd85a3c7f51002a7908bc0ffc1ee90dfebbbe3d476856d272d3d5110b22de6c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CYKP56I%2F20261120%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261120T164241Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIQDi4cuF2qbHx6eWxQF0qxn0cyiwXahVNnbMEgLbnHTVkwIgCuBO4OxpO5BbsHei%2BQhDj%2Flm9zE9F%2Bu30jm89QyKhZoq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDNu4HVOoDpFGi%2BYgOCrcA4HN5e1d%2B8saB14PYdVvrQ6Ja2Cme8t2182tar%2BgrZYypV3JATFDU6nVtqQNuT1CoXbODKo1%2FOVTb3e6D%2BJhWWDHk4Fu%2BosN3cLxjlfqeZygCeWHhwRS%2BUIZWDEg82amVJdL%2Bmgv%2FEmRpcuoW0t7ERxmB0mlo3wHh2ff9ij53wzaJ079LOKnNcez9pXSR80i1QNEZTseNe7n8pTmMbKOIfuBYNfbAU6FC9rfU4s4B90zcBED3EGwNmyiF8np9yIJgRNZnhI%2B%2F3e2rPTcVrdbc1ne3milpwAJpHjqJ2Px77iOlp%2B59o82me69RrH1TTDTaH6CY9HV2lU8Bl3mso1crcAK5YHDuRo2TECVBMsT01Ld9Pxytl6KCCu8lBc6yynL4KwSacY2wxq4WBFayA5nL3YuMdyLU70cXPNmSsCAwOaXiabrM3W3zcQDGZ1CPcjKQY3bUohDv6FL1JuWgmt0fTLdEBDo0yXsqeqKMSdm6NvWWFWHm%2FQYCu%2BoT%2F4Gn%2FdOwHcgF%2Fmgj5C7mmsmkNj22PjhEvewTOwXL%2B1zEpYgZTD3FghVVSBjicICTU%2BDP5N1vVm7MWIQt%2F%2F99eP5YuIbKA%2F1ZMjuy4ex9dgioGag2F6vKfDUNygzWnCdp3CsMKHggdgGOqUBU%2BPVHPF3%2FOoXMx3vJTcZYT3BkoDX7ozpfGkSV7z%2B7je5bZPGjByk6vlmyBuqGMIPwhpwCBdmgWgVrRPFObkONEGSVVGxVSuxwji%2BG8v4uXP2XpmKOCVLRLYNxL9u%2Bp97DLzvSLDFOZui116HkiIr7sfuKyvO2l91c0gbIRunW9nu6uPrxklXDjzp9slRFc7P5JMtcJbtBolFW34BI27VmDY1nXbs&X-Amz-Signature=740b7d46a0ebf5aec53db94c58800d5dafe0790f632519fa18c8f7cebd168c45&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CYKP56I%2F20261120%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261120T164241Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIQDi4cuF2qbHx6eWxQF0qxn0cyiwXahVNnbMEgLbnHTVkwIgCuBO4OxpO5BbsHei%2BQhDj%2Flm9zE9F%2Bu30jm89QyKhZoq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDNu4HVOoDpFGi%2BYgOCrcA4HN5e1d%2B8saB14PYdVvrQ6Ja2Cme8t2182tar%2BgrZYypV3JATFDU6nVtqQNuT1CoXbODKo1%2FOVTb3e6D%2BJhWWDHk4Fu%2BosN3cLxjlfqeZygCeWHhwRS%2BUIZWDEg82amVJdL%2Bmgv%2FEmRpcuoW0t7ERxmB0mlo3wHh2ff9ij53wzaJ079LOKnNcez9pXSR80i1QNEZTseNe7n8pTmMbKOIfuBYNfbAU6FC9rfU4s4B90zcBED3EGwNmyiF8np9yIJgRNZnhI%2B%2F3e2rPTcVrdbc1ne3milpwAJpHjqJ2Px77iOlp%2B59o82me69RrH1TTDTaH6CY9HV2lU8Bl3mso1crcAK5YHDuRo2TECVBMsT01Ld9Pxytl6KCCu8lBc6yynL4KwSacY2wxq4WBFayA5nL3YuMdyLU70cXPNmSsCAwOaXiabrM3W3zcQDGZ1CPcjKQY3bUohDv6FL1JuWgmt0fTLdEBDo0yXsqeqKMSdm6NvWWFWHm%2FQYCu%2BoT%2F4Gn%2FdOwHcgF%2Fmgj5C7mmsmkNj22PjhEvewTOwXL%2B1zEpYgZTD3FghVVSBjicICTU%2BDP5N1vVm7MWIQt%2F%2F99eP5YuIbKA%2F1ZMjuy4ex9dgioGag2F6vKfDUNygzWnCdp3CsMKHggdgGOqUBU%2BPVHPF3%2FOoXMx3vJTcZYT3BkoDX7ozpfGkSV7z%2B7je5bZPGjByk6vlmyBuqGMIPwhpwCBdmgWgVrRPFObkONEGSVVGxVSuxwji%2BG8v4uXP2XpmKOCVLRLYNxL9u%2Bp97DLzvSLDFOZui116HkiIr7sfuKyvO2l91c0gbIRunW9nu6uPrxklXDjzp9slRFc7P5JMtcJbtBolFW34BI27VmDY1nXbs&X-Amz-Signature=9b4781eb449ddad654d175da504ddec597bc7e3f57e4d04b5d65bed08de33463&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CYKP56I%2F20261120%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261120T164241Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIQDi4cuF2qbHx6eWxQF0qxn0cyiwXahVNnbMEgLbnHTVkwIgCuBO4OxpO5BbsHei%2BQhDj%2Flm9zE9F%2Bu30jm89QyKhZoq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDNu4HVOoDpFGi%2BYgOCrcA4HN5e1d%2B8saB14PYdVvrQ6Ja2Cme8t2182tar%2BgrZYypV3JATFDU6nVtqQNuT1CoXbODKo1%2FOVTb3e6D%2BJhWWDHk4Fu%2BosN3cLxjlfqeZygCeWHhwRS%2BUIZWDEg82amVJdL%2Bmgv%2FEmRpcuoW0t7ERxmB0mlo3wHh2ff9ij53wzaJ079LOKnNcez9pXSR80i1QNEZTseNe7n8pTmMbKOIfuBYNfbAU6FC9rfU4s4B90zcBED3EGwNmyiF8np9yIJgRNZnhI%2B%2F3e2rPTcVrdbc1ne3milpwAJpHjqJ2Px77iOlp%2B59o82me69RrH1TTDTaH6CY9HV2lU8Bl3mso1crcAK5YHDuRo2TECVBMsT01Ld9Pxytl6KCCu8lBc6yynL4KwSacY2wxq4WBFayA5nL3YuMdyLU70cXPNmSsCAwOaXiabrM3W3zcQDGZ1CPcjKQY3bUohDv6FL1JuWgmt0fTLdEBDo0yXsqeqKMSdm6NvWWFWHm%2FQYCu%2BoT%2F4Gn%2FdOwHcgF%2Fmgj5C7mmsmkNj22PjhEvewTOwXL%2B1zEpYgZTD3FghVVSBjicICTU%2BDP5N1vVm7MWIQt%2F%2F99eP5YuIbKA%2F1ZMjuy4ex9dgioGag2F6vKfDUNygzWnCdp3CsMKHggdgGOqUBU%2BPVHPF3%2FOoXMx3vJTcZYT3BkoDX7ozpfGkSV7z%2B7je5bZPGjByk6vlmyBuqGMIPwhpwCBdmgWgVrRPFObkONEGSVVGxVSuxwji%2BG8v4uXP2XpmKOCVLRLYNxL9u%2Bp97DLzvSLDFOZui116HkiIr7sfuKyvO2l91c0gbIRunW9nu6uPrxklXDjzp9slRFc7P5JMtcJbtBolFW34BI27VmDY1nXbs&X-Amz-Signature=b705e9207bce8dc39c7f80381e729009a6e0a8194e113f17a433e8697764b360&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XIURTAVI%2F20261120%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261120T164242Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIHg87L3y%2F8UrdDlFLSzKDgQ4VQiXa5j1SruUNonjlE6RAiEAvBfOvwyJgY1WIF9zrAEN9iogsnB0GAWn76tJArGZRv0q%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDPyAM0ZHc%2Bn0hcFjKCrcA8f1MFA8ySQlIlwJPj%2BrRrU3hss8Y%2FLoA7xkuivY8HfTkHiiXbXXMrLW72YzEX%2FBuqn5rrOfLV9rgNvkhUVlcVq7BsBJ0AeGwv4oHoH%2Bk4INwhxsHH3P%2FruTIeL68wERv5dIWvzrFf6gLqKE1IbG3noF8pToxQqH6oJIeF%2FQHax3%2BqBHL2%2BKmrZxlFqKsLU61F9Dnl7%2BdPDIyHnQfoTar05zb59Vt90%2FMpU7DY1LCr7r9qnIZH%2BqjMU%2B98kZ6G1U790DRZ1RXJc%2FwEPMCvowYltr6BHSOJ4UIos7O6wLzGSkLHTIk3Dss8uNYuciGm3%2FGgDk0qJbkia6IMig5%2BjLRJfFBAcm1lv5iY38QDruuzUiyRKi7p8xniJ1wW7cAzu3qNzAXQ7d%2BKQ%2FKYVrVgMOye5u1xxVUwZrjKtynoy6bYtI8YV4TRTEt6H4VoqEO0KNxJZseEoJgxbX7Wfxxzy9aYymJD3kic2jCIIg1N%2FrhCHPcWW6EvvyXDAtb2HAmf%2B25M4E2x8h%2BLpdKMtTlPhbVGTvWIVperQ83uXlYBGoG8oZsu24MoadPOg5m3mn7kFhs%2Fp41DwzdSDpHgeG5Da0x07P71e8VJC8dfR6AU5QhQ38fBd%2FJkgCfx%2B9IH8eMP7igdgGOqUBVj7eWRQ2AJE1C01snWHfbtB%2FsEHiBYEPYRQsRGkJCBOLAXREtW7mx2O3tuZDONyTLklM6j6hB5OeJqW5Q%2Fj5ET7FIXdm56I1ySe2DLuggVbGUWYKqjdCqIr5Tp24YDwKJvNv7syyxTd%2ByE1IbfL97NJLmcOsVey5k5%2BYIoTE7rjc6dZvkVruEEwoTA8NE6n%2FLUQL5%2BRvw1uQIxMH0GYvZmSww0cE&X-Amz-Signature=22e4410bf124553205f690d1a1a8540c2e7a17841dd3dbba73367be63ea395b9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RPB6RX4R%2F20261120%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261120T164242Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJGMEQCIHiMeOFuh1GfRcXMrrsOWRyU5HoNPAc2Jw%2FxK94tZ1jjAiAyw3sERLLO6GV7kZpet13A3s5C30L2pP%2BLMDgMF8vcQyr%2FAwgxEAAaDDYzNzQyMzE4MzgwNSIMDVKNzn8yhErqEjoxKtwDkMurRWI2obT3dPcT6FnMlP%2BSphY07wjY0Ti3d1Oz%2FOU%2B1E8uRU6WGZ1itEvppoJ6S2mNP6IONTm19qGilytb8J7DD5bMUNa%2B0tVCoSaX50QlFGnz5k0fPf7f9Jpi7Y4CJfoyvF5L8WL8hawNBn5EbvH%2FV0Ot%2FJZBtMVarhc98Qk1Yduja9ZAZfhoo6doDlm9OaOxYG5%2Fpc2Tv4iJQ6Yd%2FheLqojwL8LOs%2FNJqaWjzbyDwv9rEZD42O862SOBEFhC7TD8wgvV6uSRLn2Iiv%2FHIPRq3xVACA6kJJ8H0OxWSPywWc3vyG%2FEt7t%2FlKCYPO2MTmJJ%2BpYjZ%2FbrhWfVrPDFmTAIF1KQu8yNBblCdngtJ3lJyGztUZFH%2FSoyxL3%2F%2Bm1stQazj2SO%2FaD5M3t9xunoZvxW8Pz6pX0l%2BvYc6zWSPYnFJ%2Bp%2Ba88ZcAPgFruAYhSCfSNkoYfj%2Bvq6NxU5m6eRIH5XQKPkxJNkapQqq1zfS1S6fZd9O8hArhqKpapGC4xriHiJMhz9im31ueCntV3LEoNl6ZwthMyo7iB1eJ%2FVtaooQ%2BhF3wJbNhqgBkaZpg0tuvMQmqa6JIuLW%2FHwaHIvr5Uygs5ghR53vhPg7CCJ5720wMShXOHxXUEtewMwid%2BB2AY6pgGRR1OkjEaUwszXFLY01y6mswWHVAwuh14D2uCaiD0xA09vrZtLCe%2FblkykURazCrfSehyYutswJhbaQFH0IGJrAxZzMni3hnJr5rMKe228Aevf%2Bb6oeEXHpACDMZldLYPoiEUjNI01%2F%2FOYKvIriSlbdaic5nfdNZPV2fmkDzW4ZHKhFKOFehy47MUfox9WxJFTO5V6HRPJDuQa%2Bv9YCeqB8Py%2Fqdpi&X-Amz-Signature=7aaa2436d268a6bb08c8260f04bed6933c4a7701be4e3edcc7d40c6bec2332ab&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RPB6RX4R%2F20261120%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261120T164242Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJGMEQCIHiMeOFuh1GfRcXMrrsOWRyU5HoNPAc2Jw%2FxK94tZ1jjAiAyw3sERLLO6GV7kZpet13A3s5C30L2pP%2BLMDgMF8vcQyr%2FAwgxEAAaDDYzNzQyMzE4MzgwNSIMDVKNzn8yhErqEjoxKtwDkMurRWI2obT3dPcT6FnMlP%2BSphY07wjY0Ti3d1Oz%2FOU%2B1E8uRU6WGZ1itEvppoJ6S2mNP6IONTm19qGilytb8J7DD5bMUNa%2B0tVCoSaX50QlFGnz5k0fPf7f9Jpi7Y4CJfoyvF5L8WL8hawNBn5EbvH%2FV0Ot%2FJZBtMVarhc98Qk1Yduja9ZAZfhoo6doDlm9OaOxYG5%2Fpc2Tv4iJQ6Yd%2FheLqojwL8LOs%2FNJqaWjzbyDwv9rEZD42O862SOBEFhC7TD8wgvV6uSRLn2Iiv%2FHIPRq3xVACA6kJJ8H0OxWSPywWc3vyG%2FEt7t%2FlKCYPO2MTmJJ%2BpYjZ%2FbrhWfVrPDFmTAIF1KQu8yNBblCdngtJ3lJyGztUZFH%2FSoyxL3%2F%2Bm1stQazj2SO%2FaD5M3t9xunoZvxW8Pz6pX0l%2BvYc6zWSPYnFJ%2Bp%2Ba88ZcAPgFruAYhSCfSNkoYfj%2Bvq6NxU5m6eRIH5XQKPkxJNkapQqq1zfS1S6fZd9O8hArhqKpapGC4xriHiJMhz9im31ueCntV3LEoNl6ZwthMyo7iB1eJ%2FVtaooQ%2BhF3wJbNhqgBkaZpg0tuvMQmqa6JIuLW%2FHwaHIvr5Uygs5ghR53vhPg7CCJ5720wMShXOHxXUEtewMwid%2BB2AY6pgGRR1OkjEaUwszXFLY01y6mswWHVAwuh14D2uCaiD0xA09vrZtLCe%2FblkykURazCrfSehyYutswJhbaQFH0IGJrAxZzMni3hnJr5rMKe228Aevf%2Bb6oeEXHpACDMZldLYPoiEUjNI01%2F%2FOYKvIriSlbdaic5nfdNZPV2fmkDzW4ZHKhFKOFehy47MUfox9WxJFTO5V6HRPJDuQa%2Bv9YCeqB8Py%2Fqdpi&X-Amz-Signature=3f763f6fc24686ab994c8d6c24d34266b111f3f169b14c1ab8186eda5223e9e7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
