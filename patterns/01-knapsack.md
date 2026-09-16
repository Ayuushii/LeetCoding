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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFO3FGO4%2F20260916%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260916T130931Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEwaCXVzLXdlc3QtMiJHMEUCIHhqg2R2deAGpYtlAFnie%2FPFIVzvz%2FITZ55njuJ5%2BkdCAiEAmu819w1imBB%2BJL8wCod8hquDAqsyuc75cKkpsx3X%2Booq%2FwMIFRAAGgw2Mzc0MjMxODM4MDUiDPWrnfacj1A3NHtNcSrcA1b8GDjjH%2FtwpCpt20y4qQQ9p9YIQeqO2JoOC%2BzfnRCtMsrdQ7igcK4fjEUNHXbaEayr9kL%2FsmjiXZIbT6ZF4nXDlGU5Ml8%2BRQhKrOv5Aq3oOCH9mgClp2S0AZkolYbTTc%2Bu5AYYfYS6lPhurjLHDsPHQ1d9KYM6fG0oEyZj03yAVPpENnb7GHtrWyj2ZHvhSoZUlyhHE8V43X1bL574AjKqdgt5fXNKnxA5lU3DSgw9Rf5HgHkAcW0U4Cw4604iCa77ATrXETjq%2BvXhqGQ%2B7gV%2B4NO5Zxh9XQz3ak7E6h0hlGazi6b68jChU9OSNAZUR%2FjA5BAu%2BYvhB%2B8Vv0hDiSlrfZApxoL6ixW%2FR4Agr1m5Fxdnhu7uiW5yUyeYpxGFxF%2FwHZtHbRDrJ7SiB4i1rdf4UBXZ%2Fk46rFatyfyzQCXjNekdOLS%2FfB7PoSgSrPkPA4KK%2BbAuA30vc4VHwFgA%2Fimegh04HcxMq2W8wM%2FFiaO4hBJY71kiUbSnR8L2cyxRt2j5wSjj91ukKpfW2Ao7h922t7Uq%2FFGTN7B9DAikQYInI7DwhbyAJ3uh4Q5MlDGoFMgYnwlnCAl9lhZyswM4xbjvwsv3hVaTJwPaPsxhxrIYhIgokol6yQ7avDDFMPeLqtUGOqUBLH%2FgKpofLvvym9nqhHECPLcKfzn%2B%2FbuXKslmRbRkzIcT1v5XjH%2FH3jjTIiCKdQ86vpnyKo%2FCVWFZrM%2BQNWerIua12tTrU%2Bv3kfEoOyfhEnOsrGnvgAqjgo27GmP2EbEPt438NEjg6P2uS0v3K4tGeJmoCmoUDNg8N0wM10DFVl%2BOnR6RVjX8wbj7kuX3pRgoZ7KfEYwd%2BRU3YD8jAwAkMw0uuvw2&X-Amz-Signature=2093b8de13607c137be0460778bd39eafd71281cca3f70b01d966d699c438965&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFO3FGO4%2F20260916%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260916T130931Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEwaCXVzLXdlc3QtMiJHMEUCIHhqg2R2deAGpYtlAFnie%2FPFIVzvz%2FITZ55njuJ5%2BkdCAiEAmu819w1imBB%2BJL8wCod8hquDAqsyuc75cKkpsx3X%2Booq%2FwMIFRAAGgw2Mzc0MjMxODM4MDUiDPWrnfacj1A3NHtNcSrcA1b8GDjjH%2FtwpCpt20y4qQQ9p9YIQeqO2JoOC%2BzfnRCtMsrdQ7igcK4fjEUNHXbaEayr9kL%2FsmjiXZIbT6ZF4nXDlGU5Ml8%2BRQhKrOv5Aq3oOCH9mgClp2S0AZkolYbTTc%2Bu5AYYfYS6lPhurjLHDsPHQ1d9KYM6fG0oEyZj03yAVPpENnb7GHtrWyj2ZHvhSoZUlyhHE8V43X1bL574AjKqdgt5fXNKnxA5lU3DSgw9Rf5HgHkAcW0U4Cw4604iCa77ATrXETjq%2BvXhqGQ%2B7gV%2B4NO5Zxh9XQz3ak7E6h0hlGazi6b68jChU9OSNAZUR%2FjA5BAu%2BYvhB%2B8Vv0hDiSlrfZApxoL6ixW%2FR4Agr1m5Fxdnhu7uiW5yUyeYpxGFxF%2FwHZtHbRDrJ7SiB4i1rdf4UBXZ%2Fk46rFatyfyzQCXjNekdOLS%2FfB7PoSgSrPkPA4KK%2BbAuA30vc4VHwFgA%2Fimegh04HcxMq2W8wM%2FFiaO4hBJY71kiUbSnR8L2cyxRt2j5wSjj91ukKpfW2Ao7h922t7Uq%2FFGTN7B9DAikQYInI7DwhbyAJ3uh4Q5MlDGoFMgYnwlnCAl9lhZyswM4xbjvwsv3hVaTJwPaPsxhxrIYhIgokol6yQ7avDDFMPeLqtUGOqUBLH%2FgKpofLvvym9nqhHECPLcKfzn%2B%2FbuXKslmRbRkzIcT1v5XjH%2FH3jjTIiCKdQ86vpnyKo%2FCVWFZrM%2BQNWerIua12tTrU%2Bv3kfEoOyfhEnOsrGnvgAqjgo27GmP2EbEPt438NEjg6P2uS0v3K4tGeJmoCmoUDNg8N0wM10DFVl%2BOnR6RVjX8wbj7kuX3pRgoZ7KfEYwd%2BRU3YD8jAwAkMw0uuvw2&X-Amz-Signature=6498c0faca68cf5add38d49ba897fe66ab0010ea859db46bb106d1b4c9b78c43&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFO3FGO4%2F20260916%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260916T130931Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEwaCXVzLXdlc3QtMiJHMEUCIHhqg2R2deAGpYtlAFnie%2FPFIVzvz%2FITZ55njuJ5%2BkdCAiEAmu819w1imBB%2BJL8wCod8hquDAqsyuc75cKkpsx3X%2Booq%2FwMIFRAAGgw2Mzc0MjMxODM4MDUiDPWrnfacj1A3NHtNcSrcA1b8GDjjH%2FtwpCpt20y4qQQ9p9YIQeqO2JoOC%2BzfnRCtMsrdQ7igcK4fjEUNHXbaEayr9kL%2FsmjiXZIbT6ZF4nXDlGU5Ml8%2BRQhKrOv5Aq3oOCH9mgClp2S0AZkolYbTTc%2Bu5AYYfYS6lPhurjLHDsPHQ1d9KYM6fG0oEyZj03yAVPpENnb7GHtrWyj2ZHvhSoZUlyhHE8V43X1bL574AjKqdgt5fXNKnxA5lU3DSgw9Rf5HgHkAcW0U4Cw4604iCa77ATrXETjq%2BvXhqGQ%2B7gV%2B4NO5Zxh9XQz3ak7E6h0hlGazi6b68jChU9OSNAZUR%2FjA5BAu%2BYvhB%2B8Vv0hDiSlrfZApxoL6ixW%2FR4Agr1m5Fxdnhu7uiW5yUyeYpxGFxF%2FwHZtHbRDrJ7SiB4i1rdf4UBXZ%2Fk46rFatyfyzQCXjNekdOLS%2FfB7PoSgSrPkPA4KK%2BbAuA30vc4VHwFgA%2Fimegh04HcxMq2W8wM%2FFiaO4hBJY71kiUbSnR8L2cyxRt2j5wSjj91ukKpfW2Ao7h922t7Uq%2FFGTN7B9DAikQYInI7DwhbyAJ3uh4Q5MlDGoFMgYnwlnCAl9lhZyswM4xbjvwsv3hVaTJwPaPsxhxrIYhIgokol6yQ7avDDFMPeLqtUGOqUBLH%2FgKpofLvvym9nqhHECPLcKfzn%2B%2FbuXKslmRbRkzIcT1v5XjH%2FH3jjTIiCKdQ86vpnyKo%2FCVWFZrM%2BQNWerIua12tTrU%2Bv3kfEoOyfhEnOsrGnvgAqjgo27GmP2EbEPt438NEjg6P2uS0v3K4tGeJmoCmoUDNg8N0wM10DFVl%2BOnR6RVjX8wbj7kuX3pRgoZ7KfEYwd%2BRU3YD8jAwAkMw0uuvw2&X-Amz-Signature=eabb5a0b5042bd2959926dd6e7d8c23f4a1be0b2233de1b5073bd9e0a21e8e13&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RQR4RWPN%2F20260916%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260916T130931Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEwaCXVzLXdlc3QtMiJHMEUCIGoncOv06c7drHPnpemjqgKFkDRdSgF8un1Wc93lmAXOAiEA2i7uK7pqA5Ee0wjA8wyCYUzAiPBoQZWPTQfiLK9%2BRjAq%2FwMIFRAAGgw2Mzc0MjMxODM4MDUiDJEjteI%2BqQkNG2oBgircA7XgyXgrLqSNlqUiZSvuYxP%2BohhDKOGb0zofXLvCR4HQdIIXvvcNK6aJwvTCTQNTEXpZSuGti1VlcJelFisVfQyEMTVUU1oRIUjDQcLpmUM%2BC%2BTR%2BFA0k4sin2uvwvxnZ8gN98wGFdlLO2PgjJMWCmKIpoWVr83KSKNK1AW%2BZr9EgKI1FplXzUIgIOLV8T1HC68K7zYgkjBDIHzzCGjpQnCD%2FPlOtoENK2BL35n5LtiPdKrEcT6QQmriTn9wzSoGFN%2FlVph7XW9sU%2Fjh6U52u1T%2BACrLheCMYUpnXIkjU%2FkR9n0czhPOPT4ZVWVp4siPSqIlmeBc%2BBr96Nwae3OcC32w%2BXp3%2FaY3EI2klN4HUrAaxW4a83bVV%2BFTrYkTx1SRYaErg5o5NKGQqF9woh8JVDJ31yzv3%2Bt2PhTMVCfXUMyeQjtUg0hSje9Wqjgf9bln0ThtybMCJ02mW4%2FkMZhH%2BAGpJOjfRG5l94EMzB8RO7oDrFe2eehdEyIb1PT98t2zNdpE6iRYiFvc4yI4vGoJbQIAbEHLJFCmM8PNH0xAkYjZKhB5Aojr8Nehe%2BujQXSDILUCN69AI%2FrArwQlOZOS4dVC%2BzP4Ete40Y97B7NjaZysL59OQ%2BOugkxchaUBMMOJqtUGOqUBZfokp324XcPhUrB314Afm%2B0ObKV8PvshLm%2FOxHQl1dtOjkz0alPnUlzkvtrsi7iBnENfdr05WCiAi6Jgf%2F2Z1q6IRzhe89A3eo7NhwTwKYdIyHxv1%2BvIhzqdnbpVeBvAOUqtjd9lSwn1M%2BOeGRp0TNa4pt5Ma3xL0ZVf4GbOJyBmx3yVBooFENpXFEJCHhs4Lncj89IAEt0xjB%2FamNwt7nhXjEuQ&X-Amz-Signature=0dba27ce25ba39e432ca7d263b8ecf262e3b7819cf7caf73456ee361c7a44be9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RQR4RWPN%2F20260916%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260916T130931Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEwaCXVzLXdlc3QtMiJHMEUCIGoncOv06c7drHPnpemjqgKFkDRdSgF8un1Wc93lmAXOAiEA2i7uK7pqA5Ee0wjA8wyCYUzAiPBoQZWPTQfiLK9%2BRjAq%2FwMIFRAAGgw2Mzc0MjMxODM4MDUiDJEjteI%2BqQkNG2oBgircA7XgyXgrLqSNlqUiZSvuYxP%2BohhDKOGb0zofXLvCR4HQdIIXvvcNK6aJwvTCTQNTEXpZSuGti1VlcJelFisVfQyEMTVUU1oRIUjDQcLpmUM%2BC%2BTR%2BFA0k4sin2uvwvxnZ8gN98wGFdlLO2PgjJMWCmKIpoWVr83KSKNK1AW%2BZr9EgKI1FplXzUIgIOLV8T1HC68K7zYgkjBDIHzzCGjpQnCD%2FPlOtoENK2BL35n5LtiPdKrEcT6QQmriTn9wzSoGFN%2FlVph7XW9sU%2Fjh6U52u1T%2BACrLheCMYUpnXIkjU%2FkR9n0czhPOPT4ZVWVp4siPSqIlmeBc%2BBr96Nwae3OcC32w%2BXp3%2FaY3EI2klN4HUrAaxW4a83bVV%2BFTrYkTx1SRYaErg5o5NKGQqF9woh8JVDJ31yzv3%2Bt2PhTMVCfXUMyeQjtUg0hSje9Wqjgf9bln0ThtybMCJ02mW4%2FkMZhH%2BAGpJOjfRG5l94EMzB8RO7oDrFe2eehdEyIb1PT98t2zNdpE6iRYiFvc4yI4vGoJbQIAbEHLJFCmM8PNH0xAkYjZKhB5Aojr8Nehe%2BujQXSDILUCN69AI%2FrArwQlOZOS4dVC%2BzP4Ete40Y97B7NjaZysL59OQ%2BOugkxchaUBMMOJqtUGOqUBZfokp324XcPhUrB314Afm%2B0ObKV8PvshLm%2FOxHQl1dtOjkz0alPnUlzkvtrsi7iBnENfdr05WCiAi6Jgf%2F2Z1q6IRzhe89A3eo7NhwTwKYdIyHxv1%2BvIhzqdnbpVeBvAOUqtjd9lSwn1M%2BOeGRp0TNa4pt5Ma3xL0ZVf4GbOJyBmx3yVBooFENpXFEJCHhs4Lncj89IAEt0xjB%2FamNwt7nhXjEuQ&X-Amz-Signature=235cefeeb2ea915ebc73ab28e8762510457962436f13cf79dc780b9765293faf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RQR4RWPN%2F20260916%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260916T130931Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEwaCXVzLXdlc3QtMiJHMEUCIGoncOv06c7drHPnpemjqgKFkDRdSgF8un1Wc93lmAXOAiEA2i7uK7pqA5Ee0wjA8wyCYUzAiPBoQZWPTQfiLK9%2BRjAq%2FwMIFRAAGgw2Mzc0MjMxODM4MDUiDJEjteI%2BqQkNG2oBgircA7XgyXgrLqSNlqUiZSvuYxP%2BohhDKOGb0zofXLvCR4HQdIIXvvcNK6aJwvTCTQNTEXpZSuGti1VlcJelFisVfQyEMTVUU1oRIUjDQcLpmUM%2BC%2BTR%2BFA0k4sin2uvwvxnZ8gN98wGFdlLO2PgjJMWCmKIpoWVr83KSKNK1AW%2BZr9EgKI1FplXzUIgIOLV8T1HC68K7zYgkjBDIHzzCGjpQnCD%2FPlOtoENK2BL35n5LtiPdKrEcT6QQmriTn9wzSoGFN%2FlVph7XW9sU%2Fjh6U52u1T%2BACrLheCMYUpnXIkjU%2FkR9n0czhPOPT4ZVWVp4siPSqIlmeBc%2BBr96Nwae3OcC32w%2BXp3%2FaY3EI2klN4HUrAaxW4a83bVV%2BFTrYkTx1SRYaErg5o5NKGQqF9woh8JVDJ31yzv3%2Bt2PhTMVCfXUMyeQjtUg0hSje9Wqjgf9bln0ThtybMCJ02mW4%2FkMZhH%2BAGpJOjfRG5l94EMzB8RO7oDrFe2eehdEyIb1PT98t2zNdpE6iRYiFvc4yI4vGoJbQIAbEHLJFCmM8PNH0xAkYjZKhB5Aojr8Nehe%2BujQXSDILUCN69AI%2FrArwQlOZOS4dVC%2BzP4Ete40Y97B7NjaZysL59OQ%2BOugkxchaUBMMOJqtUGOqUBZfokp324XcPhUrB314Afm%2B0ObKV8PvshLm%2FOxHQl1dtOjkz0alPnUlzkvtrsi7iBnENfdr05WCiAi6Jgf%2F2Z1q6IRzhe89A3eo7NhwTwKYdIyHxv1%2BvIhzqdnbpVeBvAOUqtjd9lSwn1M%2BOeGRp0TNa4pt5Ma3xL0ZVf4GbOJyBmx3yVBooFENpXFEJCHhs4Lncj89IAEt0xjB%2FamNwt7nhXjEuQ&X-Amz-Signature=da0825eab4a92cb42486cb7e8b89f2cf4817ee3226eafbf0f5237d4b227c0ad8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RQR4RWPN%2F20260916%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260916T130931Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEwaCXVzLXdlc3QtMiJHMEUCIGoncOv06c7drHPnpemjqgKFkDRdSgF8un1Wc93lmAXOAiEA2i7uK7pqA5Ee0wjA8wyCYUzAiPBoQZWPTQfiLK9%2BRjAq%2FwMIFRAAGgw2Mzc0MjMxODM4MDUiDJEjteI%2BqQkNG2oBgircA7XgyXgrLqSNlqUiZSvuYxP%2BohhDKOGb0zofXLvCR4HQdIIXvvcNK6aJwvTCTQNTEXpZSuGti1VlcJelFisVfQyEMTVUU1oRIUjDQcLpmUM%2BC%2BTR%2BFA0k4sin2uvwvxnZ8gN98wGFdlLO2PgjJMWCmKIpoWVr83KSKNK1AW%2BZr9EgKI1FplXzUIgIOLV8T1HC68K7zYgkjBDIHzzCGjpQnCD%2FPlOtoENK2BL35n5LtiPdKrEcT6QQmriTn9wzSoGFN%2FlVph7XW9sU%2Fjh6U52u1T%2BACrLheCMYUpnXIkjU%2FkR9n0czhPOPT4ZVWVp4siPSqIlmeBc%2BBr96Nwae3OcC32w%2BXp3%2FaY3EI2klN4HUrAaxW4a83bVV%2BFTrYkTx1SRYaErg5o5NKGQqF9woh8JVDJ31yzv3%2Bt2PhTMVCfXUMyeQjtUg0hSje9Wqjgf9bln0ThtybMCJ02mW4%2FkMZhH%2BAGpJOjfRG5l94EMzB8RO7oDrFe2eehdEyIb1PT98t2zNdpE6iRYiFvc4yI4vGoJbQIAbEHLJFCmM8PNH0xAkYjZKhB5Aojr8Nehe%2BujQXSDILUCN69AI%2FrArwQlOZOS4dVC%2BzP4Ete40Y97B7NjaZysL59OQ%2BOugkxchaUBMMOJqtUGOqUBZfokp324XcPhUrB314Afm%2B0ObKV8PvshLm%2FOxHQl1dtOjkz0alPnUlzkvtrsi7iBnENfdr05WCiAi6Jgf%2F2Z1q6IRzhe89A3eo7NhwTwKYdIyHxv1%2BvIhzqdnbpVeBvAOUqtjd9lSwn1M%2BOeGRp0TNa4pt5Ma3xL0ZVf4GbOJyBmx3yVBooFENpXFEJCHhs4Lncj89IAEt0xjB%2FamNwt7nhXjEuQ&X-Amz-Signature=a9b5b1113d2f87a79d0538b1885ab36d2d5878775c680a43bf86e9630fd66fe7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663I5XNTID%2F20260916%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260916T130931Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEwaCXVzLXdlc3QtMiJGMEQCIC1MceLjYOYLqDkx0QPbL0CcM73n6OzsTcD0%2BVGF4N9YAiBWhoCWb8b3xr4cA4EMvWS67B3Rh61T5WS%2BIr2ysRH1wyr%2FAwgVEAAaDDYzNzQyMzE4MzgwNSIMamFPsOmbIpHhqTSWKtwDySGq5kKVRN4FnbVA74Qll%2Bh%2FE2D19TlmPULT2lAtiCxpxNEoFeAuzpvZHN%2BIY8ZpudChmL52ueMKvoZqdIcgxXsygezKCL5Wegi8tZ0dXe31et0v5UFNkjkmKB8CNE6czV2NQ2jWzlqOATh3fOW2VPP3832lPDdRCRVTojq7tiW3nqKxD276AHK2LRwHchS8CeFtHiNUF4zM6tOU5g7wy5jHQXuPfDho63oEi4887WF86qJbWESZwFHS1Etxw%2FaCc8Pn%2Bb4Y%2BiV5Qcp9UHNfF22yKsUo5XMJVYJTqGjJGqPlRKwmRln8x0H6e4PjejPUbdriclVtcLA%2BvrNgrKiGmQPP1gzteUwsvwYxfSFg6Zvtfds1ORNBrbSk6kuuQufo4mFcPdr6peajH1DYaFrTNS1X2ikrMDLGBlgfJ8gR9c2DGN2ZdctOaJjkMK8PoruZBwGmpcuB1HO9X2XykeovP2VzFNdpPlzVvd09UKfbICK0ygxvwomyXQ4LfUcCKXg0uNL06xx0qifrj%2F1eqzT3PY43th8ehM09dON6rkhFQwxA1ok3RrPzB7KghPs5S8F2XgMVss48BQF2qsXUDjj4FH2O1iFHnLT0EGDWACydftfDtX8BTLQvGwnUTFww%2F4uq1QY6pgF52t%2FN3b1rfrRsNZVoWNiW2UvrjrHMFmiUd28uwPkBZSsgRxe2AcuUeEG6zt2xhzsrDsWlbPgbAfsq7IiCNrS%2BZqWpV2%2FEM36%2FtFGDORLX5QUXVwjtlxwSCfRjDEQo5Dtt%2FcrKIvG8xnifJeAJjaA8kLnt5lWABTxIpdyCfT7xoaOcw7oQZwsgokn9ynaXLT64b5wU0vWH9Qyg2k0cUimL0nFtVgXU&X-Amz-Signature=2fd25daad0acee6411ef198818475ce77a4776d514f5060c866626981042061d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDIMPUIH%2F20260916%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260916T130931Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEwaCXVzLXdlc3QtMiJHMEUCIQCu0mk7%2FgA4yDU1T%2BjP6XQL69PtAX9P0Ry80H73AOZcRAIgG2Ubi8CQFUNjODQxgjXv9fQeZWwNmFw%2BrjRQxfWmrNMq%2FwMIFRAAGgw2Mzc0MjMxODM4MDUiDA4NBrUju1ASN0pWZSrcA1JDVo3njYWVnkmRbT8gqxCvNrkSIRCYghyRh33KzGauPDi2T7j9tlfDv3OgzSSWXM3RtQq6xc2uaD4gPyVatsxveHtvYHp5RU9Hb%2Bxr1gDe6ecmW3pv3lIPgG0buGu%2FLifSd9Rz6azuCySHtHmYiVUqbKVdQp%2BLR4mQB%2FWKz%2FHv8F6FlIbC%2BNLIgb46TKH58AmaaW0nrfMIOmqoLXSWraek7pt3yicuyMWAWjI1e7B0WzXraDwHbQredZwBGFPWHNDXzTLe%2FYRQyRuhAA30ZLYW5T01U0xTje5usQCa8tnEqWt3TuXIOcyjdfZSm2CL6hQTog1UtSL5iHCJ4BtljL79ZZ5kzzG%2FzxxwhkeeJBsL7qgTSSzsDNRjsHse94soxz7h6844nxFNU6h%2BlHQZpoN3Xw2C6rylOrOZbaSqVzZVj5v%2FTuwpHnufcdo1xhPxsQIuwwPtz1F5EXygWocELp8OvYGjSMnC4x9z5lKJpdrDr7OVF%2BfSHDxoSWLChrZ2PEc64UeOekF2KgsyBa2aZGiUpNgOl5EQW%2FMJWGeMSARjPlxYMizsam0lPssb9kIptvjQnXe56KPPhIj0gej7NetS47a%2BrQOycfXW4W1yzrVQ76Bzk8pGUOckXELJMNqKqtUGOqUBsjrFKhk4NKvxuiL4aLROR1Vp1IrITl7c0fwV576Vx%2FY9sWZHFrRu6yy6sLZ23jv0I4JVjHgABpkBGy%2FIL1xs5uqT4YaeXYyU5IN%2FWb4kHHv2pMzAQJyutikA9KJid0UM2wL09r%2Bke6qs7CdnKsdkwu%2F%2FOHkQu%2BoYcUTGAYFvOP0Ig0Vs8nZLvkuwOHVk0mgnPnfVdxlQU3gbg9Y8cBQKlhtz2l%2Bp&X-Amz-Signature=1a3e586409a8684feca461fd7ac8b378ba9bbdf45ca1e831cb40e5f5b0d336b1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDIMPUIH%2F20260916%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260916T130931Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEwaCXVzLXdlc3QtMiJHMEUCIQCu0mk7%2FgA4yDU1T%2BjP6XQL69PtAX9P0Ry80H73AOZcRAIgG2Ubi8CQFUNjODQxgjXv9fQeZWwNmFw%2BrjRQxfWmrNMq%2FwMIFRAAGgw2Mzc0MjMxODM4MDUiDA4NBrUju1ASN0pWZSrcA1JDVo3njYWVnkmRbT8gqxCvNrkSIRCYghyRh33KzGauPDi2T7j9tlfDv3OgzSSWXM3RtQq6xc2uaD4gPyVatsxveHtvYHp5RU9Hb%2Bxr1gDe6ecmW3pv3lIPgG0buGu%2FLifSd9Rz6azuCySHtHmYiVUqbKVdQp%2BLR4mQB%2FWKz%2FHv8F6FlIbC%2BNLIgb46TKH58AmaaW0nrfMIOmqoLXSWraek7pt3yicuyMWAWjI1e7B0WzXraDwHbQredZwBGFPWHNDXzTLe%2FYRQyRuhAA30ZLYW5T01U0xTje5usQCa8tnEqWt3TuXIOcyjdfZSm2CL6hQTog1UtSL5iHCJ4BtljL79ZZ5kzzG%2FzxxwhkeeJBsL7qgTSSzsDNRjsHse94soxz7h6844nxFNU6h%2BlHQZpoN3Xw2C6rylOrOZbaSqVzZVj5v%2FTuwpHnufcdo1xhPxsQIuwwPtz1F5EXygWocELp8OvYGjSMnC4x9z5lKJpdrDr7OVF%2BfSHDxoSWLChrZ2PEc64UeOekF2KgsyBa2aZGiUpNgOl5EQW%2FMJWGeMSARjPlxYMizsam0lPssb9kIptvjQnXe56KPPhIj0gej7NetS47a%2BrQOycfXW4W1yzrVQ76Bzk8pGUOckXELJMNqKqtUGOqUBsjrFKhk4NKvxuiL4aLROR1Vp1IrITl7c0fwV576Vx%2FY9sWZHFrRu6yy6sLZ23jv0I4JVjHgABpkBGy%2FIL1xs5uqT4YaeXYyU5IN%2FWb4kHHv2pMzAQJyutikA9KJid0UM2wL09r%2Bke6qs7CdnKsdkwu%2F%2FOHkQu%2BoYcUTGAYFvOP0Ig0Vs8nZLvkuwOHVk0mgnPnfVdxlQU3gbg9Y8cBQKlhtz2l%2Bp&X-Amz-Signature=a552229cb28068dd926abfc8dc2058ecc72f61da338512b5e90b3b514be6b87c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
