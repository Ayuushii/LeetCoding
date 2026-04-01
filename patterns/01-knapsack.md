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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XA6PQ36P%2F20260401%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260401T090352Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEXFOKBlXci2QydMl2bF%2FDC34gR3kDeXs6Kms80GeMXSAiEA1poEfE7XmDltdSM9fRDqXdwpjz6anvIBrDWWEaufrdwq%2FwMIURAAGgw2Mzc0MjMxODM4MDUiDDQrNmJYRPlsEZfYQyrcAwc4fbU7HhMR1Jfiuabv786RTqz3YC1fLuhnWySfOb1FzSQei5DjSzzfqxDAOnaEUm5QI2k%2BBmMbMnF3NgpJz%2B8jC7waL06wpTUbdHjOEIjpsgRMP8Umj6PpmjTFifDciAsENFM7tRPuq3t6zY7SYMMUGAy3pXkWm0fo06IIA09%2BhnPcU6FQgf8QNrgkYniYRp%2BzzTuyqqXtg9rZxdLkJH4q%2BMdfR3KJEU8oTRlsvvLmcC9Zp9TIuG5du6yzmfMx6inm75f%2BhNUFCCcRxwgnO%2BZGOfUNtmnr8m2MrRv8V57VjPcg0YxY3hvwvawnNhGauNEv6ibI3AQlv3i%2BoXdGQ63CQgPwAuMvooHoAeeUcsrT6bgrXipH%2FRE9i6Nf73Zz1i5CJgc4CCgpwB9S9D2kmWZdkLk5%2FK12HiXSNUFBfvgZODwNLKtS1LmVEPw1uOLf62UxtlyMwRtkSZsDLXtZJQT0Nix6nOx8IqxMKhnyXB6ObXol8pmOrq3eqTo%2FxAbifClTThXsjsjmIWHsakm6No93eLd%2B3vPWCh0zC6ByUCmVuTQmCFGB8hmL%2BmYXf2hOCuuju%2BApxF0GlF%2BGWD%2F2VSfPLdlPtuF%2Ba6Vp8Mo9q2o4ebPUSZ2rFM1UqQWfMIils84GOqUBB%2B5IaYnHaBSNkkgv%2BaiaBORtMJ6aLNTnK9qO3Aqtx6hWf8OtIEUwgAmQOyLuJ%2FqkizX%2BwLkeWi%2BdWvGV4HqQuVQ7%2FJrGhDY9Bd045qAFh4qsinS%2FP2WrUGQiH1B3Gop9dBnzPBk4lwKzKt%2BpKFxc0BiH3clHaXpQVq%2Fz%2FS7h1ZiH7R5pabAZUkRMD4OBL2U1Lu4rkMdesqX9oWqpMk2VejocyXgP&X-Amz-Signature=4b2cbfab27db6510e953007e28736824def73724e3f2a113e23a6621d8f6fad8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XA6PQ36P%2F20260401%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260401T090352Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEXFOKBlXci2QydMl2bF%2FDC34gR3kDeXs6Kms80GeMXSAiEA1poEfE7XmDltdSM9fRDqXdwpjz6anvIBrDWWEaufrdwq%2FwMIURAAGgw2Mzc0MjMxODM4MDUiDDQrNmJYRPlsEZfYQyrcAwc4fbU7HhMR1Jfiuabv786RTqz3YC1fLuhnWySfOb1FzSQei5DjSzzfqxDAOnaEUm5QI2k%2BBmMbMnF3NgpJz%2B8jC7waL06wpTUbdHjOEIjpsgRMP8Umj6PpmjTFifDciAsENFM7tRPuq3t6zY7SYMMUGAy3pXkWm0fo06IIA09%2BhnPcU6FQgf8QNrgkYniYRp%2BzzTuyqqXtg9rZxdLkJH4q%2BMdfR3KJEU8oTRlsvvLmcC9Zp9TIuG5du6yzmfMx6inm75f%2BhNUFCCcRxwgnO%2BZGOfUNtmnr8m2MrRv8V57VjPcg0YxY3hvwvawnNhGauNEv6ibI3AQlv3i%2BoXdGQ63CQgPwAuMvooHoAeeUcsrT6bgrXipH%2FRE9i6Nf73Zz1i5CJgc4CCgpwB9S9D2kmWZdkLk5%2FK12HiXSNUFBfvgZODwNLKtS1LmVEPw1uOLf62UxtlyMwRtkSZsDLXtZJQT0Nix6nOx8IqxMKhnyXB6ObXol8pmOrq3eqTo%2FxAbifClTThXsjsjmIWHsakm6No93eLd%2B3vPWCh0zC6ByUCmVuTQmCFGB8hmL%2BmYXf2hOCuuju%2BApxF0GlF%2BGWD%2F2VSfPLdlPtuF%2Ba6Vp8Mo9q2o4ebPUSZ2rFM1UqQWfMIils84GOqUBB%2B5IaYnHaBSNkkgv%2BaiaBORtMJ6aLNTnK9qO3Aqtx6hWf8OtIEUwgAmQOyLuJ%2FqkizX%2BwLkeWi%2BdWvGV4HqQuVQ7%2FJrGhDY9Bd045qAFh4qsinS%2FP2WrUGQiH1B3Gop9dBnzPBk4lwKzKt%2BpKFxc0BiH3clHaXpQVq%2Fz%2FS7h1ZiH7R5pabAZUkRMD4OBL2U1Lu4rkMdesqX9oWqpMk2VejocyXgP&X-Amz-Signature=dd17098498ef4622c0a0f24839c1902c2754b50baecb9f44fe15d2236af1c5aa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XA6PQ36P%2F20260401%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260401T090352Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEXFOKBlXci2QydMl2bF%2FDC34gR3kDeXs6Kms80GeMXSAiEA1poEfE7XmDltdSM9fRDqXdwpjz6anvIBrDWWEaufrdwq%2FwMIURAAGgw2Mzc0MjMxODM4MDUiDDQrNmJYRPlsEZfYQyrcAwc4fbU7HhMR1Jfiuabv786RTqz3YC1fLuhnWySfOb1FzSQei5DjSzzfqxDAOnaEUm5QI2k%2BBmMbMnF3NgpJz%2B8jC7waL06wpTUbdHjOEIjpsgRMP8Umj6PpmjTFifDciAsENFM7tRPuq3t6zY7SYMMUGAy3pXkWm0fo06IIA09%2BhnPcU6FQgf8QNrgkYniYRp%2BzzTuyqqXtg9rZxdLkJH4q%2BMdfR3KJEU8oTRlsvvLmcC9Zp9TIuG5du6yzmfMx6inm75f%2BhNUFCCcRxwgnO%2BZGOfUNtmnr8m2MrRv8V57VjPcg0YxY3hvwvawnNhGauNEv6ibI3AQlv3i%2BoXdGQ63CQgPwAuMvooHoAeeUcsrT6bgrXipH%2FRE9i6Nf73Zz1i5CJgc4CCgpwB9S9D2kmWZdkLk5%2FK12HiXSNUFBfvgZODwNLKtS1LmVEPw1uOLf62UxtlyMwRtkSZsDLXtZJQT0Nix6nOx8IqxMKhnyXB6ObXol8pmOrq3eqTo%2FxAbifClTThXsjsjmIWHsakm6No93eLd%2B3vPWCh0zC6ByUCmVuTQmCFGB8hmL%2BmYXf2hOCuuju%2BApxF0GlF%2BGWD%2F2VSfPLdlPtuF%2Ba6Vp8Mo9q2o4ebPUSZ2rFM1UqQWfMIils84GOqUBB%2B5IaYnHaBSNkkgv%2BaiaBORtMJ6aLNTnK9qO3Aqtx6hWf8OtIEUwgAmQOyLuJ%2FqkizX%2BwLkeWi%2BdWvGV4HqQuVQ7%2FJrGhDY9Bd045qAFh4qsinS%2FP2WrUGQiH1B3Gop9dBnzPBk4lwKzKt%2BpKFxc0BiH3clHaXpQVq%2Fz%2FS7h1ZiH7R5pabAZUkRMD4OBL2U1Lu4rkMdesqX9oWqpMk2VejocyXgP&X-Amz-Signature=e8c17f8d90fc6d8cd8e408baefa8363d9390dfe517730a111310c550e05f7c50&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664KD4UA7K%2F20260401%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260401T090352Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDg9nVHDQLT6FZCFprxXObKSEuJs0LSH%2BpWipBTksrriQIgHZfGfhao8lressi0PbXx25N2UHGiVrCQ%2BtuBwmg4RuMq%2FwMIURAAGgw2Mzc0MjMxODM4MDUiDA6ZSYDR%2BW9wqiwehyrcA8CrINsM%2BRSM7glJS%2F1OaRutjGRUH%2BBAEZPVO21Is3S2%2Fd2F%2BQ06HysjHE1XcBWDt8HeUAFjOSMUqQ4gI6KaordPsmlEp7S1W3u5GE45dy5SbzSYg5dtao2ObQLKcs8sK2n63xvw3nn%2Fv38BqGA%2Ft0IkIkZhAgT0ylXU2GnI9H10Js6Ro4%2BZgUtDVfNxKfkkZMPM%2BCbXTG2M3bs3gYm0fwZJesE4yl97Qv1UvzxlkCMlyrmhQalUHCXrPoEhNDP1uasIWNu0DJrUqtHlBXdjb%2BzPsem9fcX3Y49KjMrt6r4ztRlFRgZdsUm72jF0btmbQbTsKPd2FVraCNBHtMTTXpiKktomRDCvbD1s%2BzqccbhjSWRTFtKrH%2BwKKHVh9CTzOJp9Wnn7DEXuAJlizCwG9toI365dPE73sqaTwzUWJadlG5WgTqHdgLHRB73VpZk%2BkRK5bD4JvFXq86vs1YSivcf2B3VaJGHFmgjRoUiDszGRH6dLTK4g%2FdxWD1IFi2KF%2F8Quln2MWJdkwx0SkDb8%2FOrDIFA%2B6VlcBtxiDmOD8oxLb21IIuW02Hs8GaM%2B7rYeB5b8K5BwQgWR5MZ6FPdwnXHlx8ELN5CX2xuC2Ok9EFRw36omxpldkxhvQIDtMPmis84GOqUBNm3PZI1169qfAANP0pXzQRStD0foenERvTvPkBP5KYioxG67XGyOraAHYEZP157K98%2F8gFPlmy%2FYWekA3AL0Ahgpky6VX0G%2BltuanHQf7J3qATj1xWsd4XnHR98gfXgOjDgA5QgW4B1zqMrWA5Hl%2FzYCLdou1Uc%2Bnm%2FSkrFwbbaxEvSXqryGgPVKX%2FkwlW0sGzMtBRY%2F5F4KmOgOgyzyco%2F2qjWL&X-Amz-Signature=a766b5093279e7061031f8fd6331dd4c2f43be435f690f68be6db029b3395f40&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664KD4UA7K%2F20260401%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260401T090352Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDg9nVHDQLT6FZCFprxXObKSEuJs0LSH%2BpWipBTksrriQIgHZfGfhao8lressi0PbXx25N2UHGiVrCQ%2BtuBwmg4RuMq%2FwMIURAAGgw2Mzc0MjMxODM4MDUiDA6ZSYDR%2BW9wqiwehyrcA8CrINsM%2BRSM7glJS%2F1OaRutjGRUH%2BBAEZPVO21Is3S2%2Fd2F%2BQ06HysjHE1XcBWDt8HeUAFjOSMUqQ4gI6KaordPsmlEp7S1W3u5GE45dy5SbzSYg5dtao2ObQLKcs8sK2n63xvw3nn%2Fv38BqGA%2Ft0IkIkZhAgT0ylXU2GnI9H10Js6Ro4%2BZgUtDVfNxKfkkZMPM%2BCbXTG2M3bs3gYm0fwZJesE4yl97Qv1UvzxlkCMlyrmhQalUHCXrPoEhNDP1uasIWNu0DJrUqtHlBXdjb%2BzPsem9fcX3Y49KjMrt6r4ztRlFRgZdsUm72jF0btmbQbTsKPd2FVraCNBHtMTTXpiKktomRDCvbD1s%2BzqccbhjSWRTFtKrH%2BwKKHVh9CTzOJp9Wnn7DEXuAJlizCwG9toI365dPE73sqaTwzUWJadlG5WgTqHdgLHRB73VpZk%2BkRK5bD4JvFXq86vs1YSivcf2B3VaJGHFmgjRoUiDszGRH6dLTK4g%2FdxWD1IFi2KF%2F8Quln2MWJdkwx0SkDb8%2FOrDIFA%2B6VlcBtxiDmOD8oxLb21IIuW02Hs8GaM%2B7rYeB5b8K5BwQgWR5MZ6FPdwnXHlx8ELN5CX2xuC2Ok9EFRw36omxpldkxhvQIDtMPmis84GOqUBNm3PZI1169qfAANP0pXzQRStD0foenERvTvPkBP5KYioxG67XGyOraAHYEZP157K98%2F8gFPlmy%2FYWekA3AL0Ahgpky6VX0G%2BltuanHQf7J3qATj1xWsd4XnHR98gfXgOjDgA5QgW4B1zqMrWA5Hl%2FzYCLdou1Uc%2Bnm%2FSkrFwbbaxEvSXqryGgPVKX%2FkwlW0sGzMtBRY%2F5F4KmOgOgyzyco%2F2qjWL&X-Amz-Signature=83ac49a153d4302596c29e02ba420cd44e3d09ebdd4d2f0bf842cd5046fcd844&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664KD4UA7K%2F20260401%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260401T090352Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDg9nVHDQLT6FZCFprxXObKSEuJs0LSH%2BpWipBTksrriQIgHZfGfhao8lressi0PbXx25N2UHGiVrCQ%2BtuBwmg4RuMq%2FwMIURAAGgw2Mzc0MjMxODM4MDUiDA6ZSYDR%2BW9wqiwehyrcA8CrINsM%2BRSM7glJS%2F1OaRutjGRUH%2BBAEZPVO21Is3S2%2Fd2F%2BQ06HysjHE1XcBWDt8HeUAFjOSMUqQ4gI6KaordPsmlEp7S1W3u5GE45dy5SbzSYg5dtao2ObQLKcs8sK2n63xvw3nn%2Fv38BqGA%2Ft0IkIkZhAgT0ylXU2GnI9H10Js6Ro4%2BZgUtDVfNxKfkkZMPM%2BCbXTG2M3bs3gYm0fwZJesE4yl97Qv1UvzxlkCMlyrmhQalUHCXrPoEhNDP1uasIWNu0DJrUqtHlBXdjb%2BzPsem9fcX3Y49KjMrt6r4ztRlFRgZdsUm72jF0btmbQbTsKPd2FVraCNBHtMTTXpiKktomRDCvbD1s%2BzqccbhjSWRTFtKrH%2BwKKHVh9CTzOJp9Wnn7DEXuAJlizCwG9toI365dPE73sqaTwzUWJadlG5WgTqHdgLHRB73VpZk%2BkRK5bD4JvFXq86vs1YSivcf2B3VaJGHFmgjRoUiDszGRH6dLTK4g%2FdxWD1IFi2KF%2F8Quln2MWJdkwx0SkDb8%2FOrDIFA%2B6VlcBtxiDmOD8oxLb21IIuW02Hs8GaM%2B7rYeB5b8K5BwQgWR5MZ6FPdwnXHlx8ELN5CX2xuC2Ok9EFRw36omxpldkxhvQIDtMPmis84GOqUBNm3PZI1169qfAANP0pXzQRStD0foenERvTvPkBP5KYioxG67XGyOraAHYEZP157K98%2F8gFPlmy%2FYWekA3AL0Ahgpky6VX0G%2BltuanHQf7J3qATj1xWsd4XnHR98gfXgOjDgA5QgW4B1zqMrWA5Hl%2FzYCLdou1Uc%2Bnm%2FSkrFwbbaxEvSXqryGgPVKX%2FkwlW0sGzMtBRY%2F5F4KmOgOgyzyco%2F2qjWL&X-Amz-Signature=bb77ea488b3c6ec6680de35a6cde471bb59e6d935fbd93f08848d6b0a672b300&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664KD4UA7K%2F20260401%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260401T090352Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDg9nVHDQLT6FZCFprxXObKSEuJs0LSH%2BpWipBTksrriQIgHZfGfhao8lressi0PbXx25N2UHGiVrCQ%2BtuBwmg4RuMq%2FwMIURAAGgw2Mzc0MjMxODM4MDUiDA6ZSYDR%2BW9wqiwehyrcA8CrINsM%2BRSM7glJS%2F1OaRutjGRUH%2BBAEZPVO21Is3S2%2Fd2F%2BQ06HysjHE1XcBWDt8HeUAFjOSMUqQ4gI6KaordPsmlEp7S1W3u5GE45dy5SbzSYg5dtao2ObQLKcs8sK2n63xvw3nn%2Fv38BqGA%2Ft0IkIkZhAgT0ylXU2GnI9H10Js6Ro4%2BZgUtDVfNxKfkkZMPM%2BCbXTG2M3bs3gYm0fwZJesE4yl97Qv1UvzxlkCMlyrmhQalUHCXrPoEhNDP1uasIWNu0DJrUqtHlBXdjb%2BzPsem9fcX3Y49KjMrt6r4ztRlFRgZdsUm72jF0btmbQbTsKPd2FVraCNBHtMTTXpiKktomRDCvbD1s%2BzqccbhjSWRTFtKrH%2BwKKHVh9CTzOJp9Wnn7DEXuAJlizCwG9toI365dPE73sqaTwzUWJadlG5WgTqHdgLHRB73VpZk%2BkRK5bD4JvFXq86vs1YSivcf2B3VaJGHFmgjRoUiDszGRH6dLTK4g%2FdxWD1IFi2KF%2F8Quln2MWJdkwx0SkDb8%2FOrDIFA%2B6VlcBtxiDmOD8oxLb21IIuW02Hs8GaM%2B7rYeB5b8K5BwQgWR5MZ6FPdwnXHlx8ELN5CX2xuC2Ok9EFRw36omxpldkxhvQIDtMPmis84GOqUBNm3PZI1169qfAANP0pXzQRStD0foenERvTvPkBP5KYioxG67XGyOraAHYEZP157K98%2F8gFPlmy%2FYWekA3AL0Ahgpky6VX0G%2BltuanHQf7J3qATj1xWsd4XnHR98gfXgOjDgA5QgW4B1zqMrWA5Hl%2FzYCLdou1Uc%2Bnm%2FSkrFwbbaxEvSXqryGgPVKX%2FkwlW0sGzMtBRY%2F5F4KmOgOgyzyco%2F2qjWL&X-Amz-Signature=5c0d757860989f8f309fab0970f2cbda47048ca70a4d89fe7c2531afc70f3448&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QGODXNIH%2F20260401%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260401T090353Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGuKBRQpAV1zOw3Y6oE3CGao2BzaBJpGL2lqN16mVq7PAiEArFlCBW7ca%2FH8og%2Fmpf7vqwK3YE%2B3krJXjyCgQL2ORLQq%2FwMIURAAGgw2Mzc0MjMxODM4MDUiDN8vgW%2Fo0vIBAKCjGyrcA6PJq7Bohev%2F1V6mKwfb9DYTZm2tdMYv%2Fp5OTi5AV39a4N80dSOhDVXgjMwgufAdngjMqchtIId97V%2BzAw2XeuVhYDDlW4PQZ0SVQl%2FY7Gs5DwW%2BruS%2FFn87TP7Qikk%2FfJS6IdMQPrB7tfORBRJm147ZcyA%2FclAe8%2Fks4ykik6zSHW3DjFJPBabaQgFnwIeDwIUPlrGO%2B0PZ4z9l1ZpdJvJhHEpq%2FmyUvPvi4YJKn5cfK%2FAbG08BPgiLS851Pi5bGyCSsCgrfR47XhtLDWK8SdOpt1pTxaNQKb3RP9BpxxIPpX2U5BUZapGqLtSx9E9k2wMrPdGL8ZMgFMHA3mymel562Rxzq6qIK%2FPL65uTt9v%2BM39noNdpwbsOWV7sVWjUuXEwsdXo2p7XQWYa3i95X2mY4bnVYdVImeGgPuqMLyIgr9D%2Br5fIs9FjqUcaK7tJWdcljaf8Av9mxT5XpvH5EKSxRnHNaTQcxeDvgX1VJ53veA8I6BXTc31Bha3drCGiFu8CkIiCEEz7g4JAQ5FomobiHqhi7Pr3GufWP2jcCEHMzLERoFyIy4PnzTBuZkGnFtYYewZqLTQmNPNlA%2Bfq0IKOLReNIleSHOc0zuHfyqBZyzYuuo0Svjr6pLBKMKeks84GOqUBV7ovtKl4xg4FBarqrpFg%2BuaiZAe6Q%2Fdi3mVMhhgcX2QaoM%2FbWVBBwan7U%2B6Vt%2Bn2vvIEHlq7xDoGM1xP%2FqFXU%2BwYSfmDMSYGxeNddtLc3t%2BD0yxJCpJqY1GU%2FLdiuMqrtossp2HI3UvJNtkrfSBSqCQ%2Bz3ilBuA3by5EG6xvU9TGb0sYGQ8jMpLEr0qS%2B3Oblb9FQGrgJ%2F7350XMHwLLEqgpVdC5&X-Amz-Signature=1a72452e323daae130733c5625285d08d0a6bf51f4e5057d48dd836a8af01fe7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46654PVUOG2%2F20260401%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260401T090353Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICxWP2WrYJUuqbuM6BUFk4IxT5J06wUPmBT1kj62SXgbAiA4OhvZgHR3NCTFR7RwY82XBmMHtZ34DkHuHJDAFaIq7Sr%2FAwhREAAaDDYzNzQyMzE4MzgwNSIMo51x71reAW2lqYc%2BKtwDKXwNHGlYWKrV45VZGK5dJFzr%2BxAdo%2Blz0f5omsCxbfXYUBP2BqIZ%2Fje2Emu4IttdaNTQTWRlQ%2FKXV7myPD3wAdtZtu36oMAfcPlIZfw9gYFg%2F%2Fh1zFFFFep4zaT0nzerBFW5Vgp4JDjSNzWSh4ejh4HcNqAdc4xkEGWL2YqiBWYR792UZcQRULcZjt%2Bes4avU70LDFNwi%2F%2BJLzosIQ4ldW24%2FZ7NqowlaondknZR2okDqve6O%2F%2Fj8cclt%2Fi%2F3i4tKQV6P7GYD58TX6Bt8dNqOXlmuNXCIY1tBSYTdun4WnIpBtaGkeYXeSRPnsPZXO31eHTCyIo3Rp0nrdYI2%2BvoAenuNKO9u5bQQ6umcPgLM3m7N0Zf0TV9uBkZnL7JW6L0Hokjs6JGxpuAfrD%2BBvm6pt8%2FngM9x8rhYnQ58%2BHw8iLlF%2Fk6QI9Ci4CzYbAfpcZv8xD%2BiYTOQCG6C4OjT4RFtT%2BVorsSdJ9MFWvkfS1flqZA%2FalVjg6UOyYNGoLQJ37QdaMJsswMuwh5okPsxkzdWZwLsKP5YRSLuecyDB6ZqwvaOHRsO%2FGrYdOEIrUnXtIniJiLhPDUBTtxzJmqA%2BOi6qXeYJDe8z7ySbrOlxKMwlWyjSNsUXDCRyJSZZgwiaOzzgY6pgEqixWN9NNbauCutht4LJw%2B7QC9J7dFc9h27e3B2pRjLTjfBspWuXBZVNCDgFAscpW5%2BDsfyo7lIEY5gXCQpYH9Q9B%2FlSn4j1bwQSCJOlLZz5CZQSxqLW%2BTRNBDcyAuXMTo1ee1K6ZyQb9eG8EMXoWwxchYMbgLPnAqd273cKNe6O8VoY6CwODXxb6Pecn3aYx%2BYbVmKvkV4rBy3YoSCaJpr6fdifVA&X-Amz-Signature=5fa113cc3f07ad9c92822e90b1ac71798d6ca1eb5b56e8d3eb8b7ae91689139b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46654PVUOG2%2F20260401%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260401T090353Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICxWP2WrYJUuqbuM6BUFk4IxT5J06wUPmBT1kj62SXgbAiA4OhvZgHR3NCTFR7RwY82XBmMHtZ34DkHuHJDAFaIq7Sr%2FAwhREAAaDDYzNzQyMzE4MzgwNSIMo51x71reAW2lqYc%2BKtwDKXwNHGlYWKrV45VZGK5dJFzr%2BxAdo%2Blz0f5omsCxbfXYUBP2BqIZ%2Fje2Emu4IttdaNTQTWRlQ%2FKXV7myPD3wAdtZtu36oMAfcPlIZfw9gYFg%2F%2Fh1zFFFFep4zaT0nzerBFW5Vgp4JDjSNzWSh4ejh4HcNqAdc4xkEGWL2YqiBWYR792UZcQRULcZjt%2Bes4avU70LDFNwi%2F%2BJLzosIQ4ldW24%2FZ7NqowlaondknZR2okDqve6O%2F%2Fj8cclt%2Fi%2F3i4tKQV6P7GYD58TX6Bt8dNqOXlmuNXCIY1tBSYTdun4WnIpBtaGkeYXeSRPnsPZXO31eHTCyIo3Rp0nrdYI2%2BvoAenuNKO9u5bQQ6umcPgLM3m7N0Zf0TV9uBkZnL7JW6L0Hokjs6JGxpuAfrD%2BBvm6pt8%2FngM9x8rhYnQ58%2BHw8iLlF%2Fk6QI9Ci4CzYbAfpcZv8xD%2BiYTOQCG6C4OjT4RFtT%2BVorsSdJ9MFWvkfS1flqZA%2FalVjg6UOyYNGoLQJ37QdaMJsswMuwh5okPsxkzdWZwLsKP5YRSLuecyDB6ZqwvaOHRsO%2FGrYdOEIrUnXtIniJiLhPDUBTtxzJmqA%2BOi6qXeYJDe8z7ySbrOlxKMwlWyjSNsUXDCRyJSZZgwiaOzzgY6pgEqixWN9NNbauCutht4LJw%2B7QC9J7dFc9h27e3B2pRjLTjfBspWuXBZVNCDgFAscpW5%2BDsfyo7lIEY5gXCQpYH9Q9B%2FlSn4j1bwQSCJOlLZz5CZQSxqLW%2BTRNBDcyAuXMTo1ee1K6ZyQb9eG8EMXoWwxchYMbgLPnAqd273cKNe6O8VoY6CwODXxb6Pecn3aYx%2BYbVmKvkV4rBy3YoSCaJpr6fdifVA&X-Amz-Signature=866509407e0a68782ef7b0bdfba946181683fe85f691e3dfbe11fea63c6fef7b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
