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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663TYU2D6V%2F20260512%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260512T103033Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGIaCXVzLXdlc3QtMiJIMEYCIQD4%2FQcHVCT%2FMIImiiNKk7%2BwANGsJ0t8lkbygMnZ3eEPOAIhAPruusFl2KyNDefJdrR8%2Buz9ZL5xnHrRHg9a5eOWpjjDKv8DCCsQABoMNjM3NDIzMTgzODA1IgzEJKiNYy9aJLPmPk0q3AN0dTYx7aishYvwaigeHh8Prh1XI9sGUUcJZsbcBHvr9SCt1FSYtrKX5ghCN61y8kSFDcW9tUXNiNb6BecwDlkULKDISMkHNn4J%2FSewydJf1KddcZHiUNjQUCnMDHfPGvbGDI4qlk84oQScuEjf4a3VYTCfOh4j9aZf5XTVfUOwZPa598rtTtFWYxLpqSi0rk0Q1Z53LBC7YiikQQdaO6Y0TaCvi1lJzQVKFICaTbiQ98%2Fo0pnm4MmEKvdLrnH63n9la7SWDAfKwfjaSfSkRf5SiUUH94MxHrotFzM867Tx8Px9KhjwEwBr6q3mEJanOQL8OI7hGnd78kd8maZcDpFXJaMiC43Mr9i6GjdjP1vnTzxBihi5MmHpu6ySkGWy9z%2FvfxT%2Fc6455U5BT%2BOcHcoKE49UGmSAk1rPh59hQUCezuAA%2FISI2NnGPN2MSMftmGS5CDoV7lha%2BsJRgcpG%2BwFCU03oaprsCaCnslDClPL0wF2F0Dr%2FirH12qcnhUaNi7HGkyhj0zMx66tP0yCYBxoxE8fDgVB3eFcakWjhDoIIggf3ZonlpGTzh%2BtlXzmgBBaIxtTEfqDZ%2FQpCAYjjR3xyW6AvILesu0SIz08Q1Iv5XJQHq1Q5EIaOzLqYtTCj94vQBjqkAWv4zCo%2Fp%2FgaP%2BRrNXCk1%2BiJyFwU6vmkEBD0bt1iqKMpiw7kg%2FJd5cLr4BcDDFUDgIzQm1j%2FZGzxc8XD4SBjkbRph5HumCMvxqB4PLidG2hZggwzECPBuV4xKb4EB4cmx25zgkQ2bGrqeGVR7CFyupXCCfTKcWWafsXqYCjHMt5aSJ5X1Idi35R6GYX5lBZaUydsYQiu7sLiUCeICZxS2ERXN0wo&X-Amz-Signature=94e646aa7a0695d501f792f8176566de4677bdaf284d40fe299cf7f9f9c6cdf4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663TYU2D6V%2F20260512%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260512T103033Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGIaCXVzLXdlc3QtMiJIMEYCIQD4%2FQcHVCT%2FMIImiiNKk7%2BwANGsJ0t8lkbygMnZ3eEPOAIhAPruusFl2KyNDefJdrR8%2Buz9ZL5xnHrRHg9a5eOWpjjDKv8DCCsQABoMNjM3NDIzMTgzODA1IgzEJKiNYy9aJLPmPk0q3AN0dTYx7aishYvwaigeHh8Prh1XI9sGUUcJZsbcBHvr9SCt1FSYtrKX5ghCN61y8kSFDcW9tUXNiNb6BecwDlkULKDISMkHNn4J%2FSewydJf1KddcZHiUNjQUCnMDHfPGvbGDI4qlk84oQScuEjf4a3VYTCfOh4j9aZf5XTVfUOwZPa598rtTtFWYxLpqSi0rk0Q1Z53LBC7YiikQQdaO6Y0TaCvi1lJzQVKFICaTbiQ98%2Fo0pnm4MmEKvdLrnH63n9la7SWDAfKwfjaSfSkRf5SiUUH94MxHrotFzM867Tx8Px9KhjwEwBr6q3mEJanOQL8OI7hGnd78kd8maZcDpFXJaMiC43Mr9i6GjdjP1vnTzxBihi5MmHpu6ySkGWy9z%2FvfxT%2Fc6455U5BT%2BOcHcoKE49UGmSAk1rPh59hQUCezuAA%2FISI2NnGPN2MSMftmGS5CDoV7lha%2BsJRgcpG%2BwFCU03oaprsCaCnslDClPL0wF2F0Dr%2FirH12qcnhUaNi7HGkyhj0zMx66tP0yCYBxoxE8fDgVB3eFcakWjhDoIIggf3ZonlpGTzh%2BtlXzmgBBaIxtTEfqDZ%2FQpCAYjjR3xyW6AvILesu0SIz08Q1Iv5XJQHq1Q5EIaOzLqYtTCj94vQBjqkAWv4zCo%2Fp%2FgaP%2BRrNXCk1%2BiJyFwU6vmkEBD0bt1iqKMpiw7kg%2FJd5cLr4BcDDFUDgIzQm1j%2FZGzxc8XD4SBjkbRph5HumCMvxqB4PLidG2hZggwzECPBuV4xKb4EB4cmx25zgkQ2bGrqeGVR7CFyupXCCfTKcWWafsXqYCjHMt5aSJ5X1Idi35R6GYX5lBZaUydsYQiu7sLiUCeICZxS2ERXN0wo&X-Amz-Signature=25836c2b7ea762a10ce51307abdf0f2bedc67062d3146cdafd6a942999e05c22&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663TYU2D6V%2F20260512%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260512T103033Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGIaCXVzLXdlc3QtMiJIMEYCIQD4%2FQcHVCT%2FMIImiiNKk7%2BwANGsJ0t8lkbygMnZ3eEPOAIhAPruusFl2KyNDefJdrR8%2Buz9ZL5xnHrRHg9a5eOWpjjDKv8DCCsQABoMNjM3NDIzMTgzODA1IgzEJKiNYy9aJLPmPk0q3AN0dTYx7aishYvwaigeHh8Prh1XI9sGUUcJZsbcBHvr9SCt1FSYtrKX5ghCN61y8kSFDcW9tUXNiNb6BecwDlkULKDISMkHNn4J%2FSewydJf1KddcZHiUNjQUCnMDHfPGvbGDI4qlk84oQScuEjf4a3VYTCfOh4j9aZf5XTVfUOwZPa598rtTtFWYxLpqSi0rk0Q1Z53LBC7YiikQQdaO6Y0TaCvi1lJzQVKFICaTbiQ98%2Fo0pnm4MmEKvdLrnH63n9la7SWDAfKwfjaSfSkRf5SiUUH94MxHrotFzM867Tx8Px9KhjwEwBr6q3mEJanOQL8OI7hGnd78kd8maZcDpFXJaMiC43Mr9i6GjdjP1vnTzxBihi5MmHpu6ySkGWy9z%2FvfxT%2Fc6455U5BT%2BOcHcoKE49UGmSAk1rPh59hQUCezuAA%2FISI2NnGPN2MSMftmGS5CDoV7lha%2BsJRgcpG%2BwFCU03oaprsCaCnslDClPL0wF2F0Dr%2FirH12qcnhUaNi7HGkyhj0zMx66tP0yCYBxoxE8fDgVB3eFcakWjhDoIIggf3ZonlpGTzh%2BtlXzmgBBaIxtTEfqDZ%2FQpCAYjjR3xyW6AvILesu0SIz08Q1Iv5XJQHq1Q5EIaOzLqYtTCj94vQBjqkAWv4zCo%2Fp%2FgaP%2BRrNXCk1%2BiJyFwU6vmkEBD0bt1iqKMpiw7kg%2FJd5cLr4BcDDFUDgIzQm1j%2FZGzxc8XD4SBjkbRph5HumCMvxqB4PLidG2hZggwzECPBuV4xKb4EB4cmx25zgkQ2bGrqeGVR7CFyupXCCfTKcWWafsXqYCjHMt5aSJ5X1Idi35R6GYX5lBZaUydsYQiu7sLiUCeICZxS2ERXN0wo&X-Amz-Signature=2ab1ced281579cc911f9d2e118230c676e5b1341e6222759712cabaa9966d00b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664OLHOGZ5%2F20260512%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260512T103033Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGIaCXVzLXdlc3QtMiJHMEUCIDu9CmMo90l%2FFNL9qBXJYfMHbA%2FT57sJb9w5H7wOmupOAiEA8S5FcV06FM3Qj%2Bg7RwB4CFZJQnf48qx5g17ONOMyCegq%2FwMIKxAAGgw2Mzc0MjMxODM4MDUiDAnr75KWQlyWm8gazCrcA%2BtXmIlFHETEz9QLbm9aEm0fid%2Fl%2BTnljY0h11gIEpFDXHTEvW3mbOVD8uIgwzqfA1JXtSsd6%2Fn%2FxHSuJIlVohg3cSjvuUqGodsEK3UmNvzPz6C2A0kt5B9SJjQGaa0QkgOD0t%2FpgsrzjFmV6taE%2Fxv2aMuWslYneAhO3KltULJ%2FCmF2JO4bl6A1DYnUVCWjJXSSzSKd%2BvWF%2BIMZLUM1ZEMN8eL2sHO7YACzqRxl%2BgLJZvsdLE38RNwUEgMKBahsB%2Fle%2FMzH%2BWlozAc4Q6lwlYyL5nvSGd%2FMqBwBABa89wwSsTv%2FpbDNZ2V6xdbfSwTatKUvDbX3ZObhxdEXueSSPtPJzAJ3FQIPsoGvqcxGt0AUJDV%2F1OSfx0xlxRn%2BmeGl%2Fk6J4jonEk6ZZU%2BlSZ8ykA1JmhRLvwBU596JK97au2Pa5e8RBk%2FAdzLyvyaJS88DLwg%2B6%2F%2FoHMyrxwCdGmb3tZ6rZXA7E01Bf9jdl6iubub3qFNljAg4ezmKPlzbAJgofpRnTBZk0q%2F4S16bcWT7EWifs3%2B9yYz01vdQ1uqeulg9uZ2ASpZ7kuGGXFg6I9xW3ISvdXFReZApmUZXziAvGDswM6CxEwXadkl6i8qiw8bumRg%2Fe7rqYRtl1vi%2BMOD2i9AGOqUBWHdS6yDNbZDlVtSFLOacxFrLunq9Uim3aFTBVF6H6y2LVSf6yuXvsHczxHV7VWs1qiOLeRJQTl%2BxyZ7Jf5YbKkauXFQ%2Bqhmbl3X8%2B35b9Cp92HbGvGFJg%2FDTvtay7Q5jZUkmnkEnCu1NqccElNWuQHiYH3Jm%2F13CrnMNAG%2F5FuvPpycKP0h%2B7VN9e2TqRt1eQ8JCqknLB3gdL9TxoMvZf4Es3zd1&X-Amz-Signature=f316a96996a45673079815641de0b7641ef74cef7434346269109af327239774&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664OLHOGZ5%2F20260512%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260512T103033Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGIaCXVzLXdlc3QtMiJHMEUCIDu9CmMo90l%2FFNL9qBXJYfMHbA%2FT57sJb9w5H7wOmupOAiEA8S5FcV06FM3Qj%2Bg7RwB4CFZJQnf48qx5g17ONOMyCegq%2FwMIKxAAGgw2Mzc0MjMxODM4MDUiDAnr75KWQlyWm8gazCrcA%2BtXmIlFHETEz9QLbm9aEm0fid%2Fl%2BTnljY0h11gIEpFDXHTEvW3mbOVD8uIgwzqfA1JXtSsd6%2Fn%2FxHSuJIlVohg3cSjvuUqGodsEK3UmNvzPz6C2A0kt5B9SJjQGaa0QkgOD0t%2FpgsrzjFmV6taE%2Fxv2aMuWslYneAhO3KltULJ%2FCmF2JO4bl6A1DYnUVCWjJXSSzSKd%2BvWF%2BIMZLUM1ZEMN8eL2sHO7YACzqRxl%2BgLJZvsdLE38RNwUEgMKBahsB%2Fle%2FMzH%2BWlozAc4Q6lwlYyL5nvSGd%2FMqBwBABa89wwSsTv%2FpbDNZ2V6xdbfSwTatKUvDbX3ZObhxdEXueSSPtPJzAJ3FQIPsoGvqcxGt0AUJDV%2F1OSfx0xlxRn%2BmeGl%2Fk6J4jonEk6ZZU%2BlSZ8ykA1JmhRLvwBU596JK97au2Pa5e8RBk%2FAdzLyvyaJS88DLwg%2B6%2F%2FoHMyrxwCdGmb3tZ6rZXA7E01Bf9jdl6iubub3qFNljAg4ezmKPlzbAJgofpRnTBZk0q%2F4S16bcWT7EWifs3%2B9yYz01vdQ1uqeulg9uZ2ASpZ7kuGGXFg6I9xW3ISvdXFReZApmUZXziAvGDswM6CxEwXadkl6i8qiw8bumRg%2Fe7rqYRtl1vi%2BMOD2i9AGOqUBWHdS6yDNbZDlVtSFLOacxFrLunq9Uim3aFTBVF6H6y2LVSf6yuXvsHczxHV7VWs1qiOLeRJQTl%2BxyZ7Jf5YbKkauXFQ%2Bqhmbl3X8%2B35b9Cp92HbGvGFJg%2FDTvtay7Q5jZUkmnkEnCu1NqccElNWuQHiYH3Jm%2F13CrnMNAG%2F5FuvPpycKP0h%2B7VN9e2TqRt1eQ8JCqknLB3gdL9TxoMvZf4Es3zd1&X-Amz-Signature=a51413388e90d98abccc3b5b3b773827f5dacc589d28250ed9be8850e7613a4f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664OLHOGZ5%2F20260512%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260512T103033Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGIaCXVzLXdlc3QtMiJHMEUCIDu9CmMo90l%2FFNL9qBXJYfMHbA%2FT57sJb9w5H7wOmupOAiEA8S5FcV06FM3Qj%2Bg7RwB4CFZJQnf48qx5g17ONOMyCegq%2FwMIKxAAGgw2Mzc0MjMxODM4MDUiDAnr75KWQlyWm8gazCrcA%2BtXmIlFHETEz9QLbm9aEm0fid%2Fl%2BTnljY0h11gIEpFDXHTEvW3mbOVD8uIgwzqfA1JXtSsd6%2Fn%2FxHSuJIlVohg3cSjvuUqGodsEK3UmNvzPz6C2A0kt5B9SJjQGaa0QkgOD0t%2FpgsrzjFmV6taE%2Fxv2aMuWslYneAhO3KltULJ%2FCmF2JO4bl6A1DYnUVCWjJXSSzSKd%2BvWF%2BIMZLUM1ZEMN8eL2sHO7YACzqRxl%2BgLJZvsdLE38RNwUEgMKBahsB%2Fle%2FMzH%2BWlozAc4Q6lwlYyL5nvSGd%2FMqBwBABa89wwSsTv%2FpbDNZ2V6xdbfSwTatKUvDbX3ZObhxdEXueSSPtPJzAJ3FQIPsoGvqcxGt0AUJDV%2F1OSfx0xlxRn%2BmeGl%2Fk6J4jonEk6ZZU%2BlSZ8ykA1JmhRLvwBU596JK97au2Pa5e8RBk%2FAdzLyvyaJS88DLwg%2B6%2F%2FoHMyrxwCdGmb3tZ6rZXA7E01Bf9jdl6iubub3qFNljAg4ezmKPlzbAJgofpRnTBZk0q%2F4S16bcWT7EWifs3%2B9yYz01vdQ1uqeulg9uZ2ASpZ7kuGGXFg6I9xW3ISvdXFReZApmUZXziAvGDswM6CxEwXadkl6i8qiw8bumRg%2Fe7rqYRtl1vi%2BMOD2i9AGOqUBWHdS6yDNbZDlVtSFLOacxFrLunq9Uim3aFTBVF6H6y2LVSf6yuXvsHczxHV7VWs1qiOLeRJQTl%2BxyZ7Jf5YbKkauXFQ%2Bqhmbl3X8%2B35b9Cp92HbGvGFJg%2FDTvtay7Q5jZUkmnkEnCu1NqccElNWuQHiYH3Jm%2F13CrnMNAG%2F5FuvPpycKP0h%2B7VN9e2TqRt1eQ8JCqknLB3gdL9TxoMvZf4Es3zd1&X-Amz-Signature=e22c420b5196daa01648071d17aaff8379aa2f7cd59be1acfb5723214095628e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664OLHOGZ5%2F20260512%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260512T103033Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGIaCXVzLXdlc3QtMiJHMEUCIDu9CmMo90l%2FFNL9qBXJYfMHbA%2FT57sJb9w5H7wOmupOAiEA8S5FcV06FM3Qj%2Bg7RwB4CFZJQnf48qx5g17ONOMyCegq%2FwMIKxAAGgw2Mzc0MjMxODM4MDUiDAnr75KWQlyWm8gazCrcA%2BtXmIlFHETEz9QLbm9aEm0fid%2Fl%2BTnljY0h11gIEpFDXHTEvW3mbOVD8uIgwzqfA1JXtSsd6%2Fn%2FxHSuJIlVohg3cSjvuUqGodsEK3UmNvzPz6C2A0kt5B9SJjQGaa0QkgOD0t%2FpgsrzjFmV6taE%2Fxv2aMuWslYneAhO3KltULJ%2FCmF2JO4bl6A1DYnUVCWjJXSSzSKd%2BvWF%2BIMZLUM1ZEMN8eL2sHO7YACzqRxl%2BgLJZvsdLE38RNwUEgMKBahsB%2Fle%2FMzH%2BWlozAc4Q6lwlYyL5nvSGd%2FMqBwBABa89wwSsTv%2FpbDNZ2V6xdbfSwTatKUvDbX3ZObhxdEXueSSPtPJzAJ3FQIPsoGvqcxGt0AUJDV%2F1OSfx0xlxRn%2BmeGl%2Fk6J4jonEk6ZZU%2BlSZ8ykA1JmhRLvwBU596JK97au2Pa5e8RBk%2FAdzLyvyaJS88DLwg%2B6%2F%2FoHMyrxwCdGmb3tZ6rZXA7E01Bf9jdl6iubub3qFNljAg4ezmKPlzbAJgofpRnTBZk0q%2F4S16bcWT7EWifs3%2B9yYz01vdQ1uqeulg9uZ2ASpZ7kuGGXFg6I9xW3ISvdXFReZApmUZXziAvGDswM6CxEwXadkl6i8qiw8bumRg%2Fe7rqYRtl1vi%2BMOD2i9AGOqUBWHdS6yDNbZDlVtSFLOacxFrLunq9Uim3aFTBVF6H6y2LVSf6yuXvsHczxHV7VWs1qiOLeRJQTl%2BxyZ7Jf5YbKkauXFQ%2Bqhmbl3X8%2B35b9Cp92HbGvGFJg%2FDTvtay7Q5jZUkmnkEnCu1NqccElNWuQHiYH3Jm%2F13CrnMNAG%2F5FuvPpycKP0h%2B7VN9e2TqRt1eQ8JCqknLB3gdL9TxoMvZf4Es3zd1&X-Amz-Signature=a9587639397f0e5d5be063af864bb2f0f066255c5f9069fad3e7a351809ce03e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662NLV6N3Q%2F20260512%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260512T103033Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGIaCXVzLXdlc3QtMiJIMEYCIQC030jPeIwa4aFVA3G%2BVABppyTa%2FpRl08Ks9RopRK3gXgIhANa%2BnBM%2FiAjyasazvy5UjEbIPbFgU%2FcbPO21Kc8ICFMfKv8DCCsQABoMNjM3NDIzMTgzODA1Igwmg77MPXS2fVC79k4q3ANs6bNAW5U7eOhsdjJjXE%2BVBHTmjQq0Cw8CHs%2FxKizSJzXjHnisvNSCIdGvGyGlt7TTTz2aoTd9lsSazX1pzYItUe0P%2BBFJESa3YQNyAfr9KbmTMmAtaXZof2GpQuQJ3bdMFrda1SuvkoPinLuIEF2VZN%2BQJ4sGdhZCv%2BtPRO7IP6im5KbeVaUSOIydky3TSXpkBHGwjQshwvNXTXzLRHZ1UIU9JuN237VZb1Ie7zibK4ZqHlNbg1U8ZXa7Jp93rQKfYtQ1RsPrE%2FsAeuLyppgXLnowfQnUnzbbV%2B%2B8Q9fdKSEPd6FC1b5ijFyoGYMezePS1D8KzktggXwH8A4NxYRzFQTrYwvc%2BHYCbFlx8FDRaf80Qe13wUMsad8Fz7OXRqn6098IgFj%2BeEUYvcirDi8FaN23CMnZNPXvGbCEBeJsU0LMQsVOZAxpLwws0VvAjIGHfKMBq2MIBkIdCUPUaUK2MDG9yLqaZJIdJq39I4RtDSzqUN6k0ccy577wBXitsZ9FAfzV6X0vV7flbqLZ52BgVLbO8dcZKmkJcjVlMvBVFTSWMNM54qiG5effKbjZaLPKEj8z1q4YqizjZBc6jgzzdX4rZl%2FoFAgPbPHpA8%2Ft1ZQ5LHdD7dpGo57oVTCj%2BIvQBjqkAWwxmddwqULquQeQSo9OI5ubhePnZ7b%2F5BolHgGUoxvwK119pW5G72ZNdZfzh9iyXJA78kRVz%2Bvtxdb2o1gmYRo8ABGdbGPfx4ENf%2FhstcySKN4TFDQBQ3kHl%2FhRIjoxCFfONEAry2lvGVsQjspk20xdSciEi9JYTEJ2SuDyLhRFlK54oeW7DC%2FaWRTMWv9iwR3LiUrg%2FIbK%2BZ8%2Fj9e46fk8YYlu&X-Amz-Signature=ba45611ead57d816fbe4d00fd3b48aaef477cb38022ce2594b742ab179f74aa3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46622AUDBQU%2F20260512%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260512T103033Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGIaCXVzLXdlc3QtMiJGMEQCIChuw6RzWK4mgBIykrIIEnnVR7Utbdp59d0pVZ8KYKruAiBSKU4c8okKLj52%2BDnYifTEEy0AFDeW7PeJknHDP6mi%2Fyr%2FAwgrEAAaDDYzNzQyMzE4MzgwNSIMJ78rtWtFZMssSsAOKtwDmdLTUSgYKRVZMqLBaY6g6aPvw7pr17Zc%2FnjoBULbUwEPYF2CR3cBeaNO2aGRcNZcHxI7qgNUZsgSD3qqPwr3lqZhxWLpVR12ujTI669INgbETYOsx7dX1e1G%2BwbHfyp%2BB4N6chV%2BxbWN%2FAHGcFnEnYxEQ%2Fs3b4%2FNSc4GWHFNa%2FdY0A%2FkPF7jftkHHzR78ofPgY2FIjuClnU%2B9rXWiqBu%2FkkAplURkdp2Sp%2FQ53%2FAPwh59VVJzi7JHQjKNYjQbLtlRpRI8VdlCgKYVXTGwggVspSV8FX0IYA%2FBWI%2FpShSxhxZDiRUdW4LMjfNOgsu7B4S1Ci4Gmq3u8jMb2Z1JR0fUGbXzQiCh%2Fvgk8oMnbXodYpVwhNocqubGv86c6qlWrXDmWgUjIoWoCC8y1JAzdjJyX79cxcwJEUHlXqRPUWeMjk09BdT2QGxbLw2A2WvXYZn1ZtzUxk6C3fh5YLpu2kjJmX%2BIbEY%2FK6ytL6s4LYNnp5k9NZqfUGpmnklNXRGdiMz%2FHD%2FlRubEUtSTcNzJvJSNNw078pDeSjYWip5HymJF7eyK%2ByBbOurYvFRwz7V0WPyhc3ZYT69Ngxx%2BZO46OoEuwTHjhEFHzdotQa3Fcl1axMLBq4xsxj89SPS2CkwkveL0AY6pgFBYML6rC%2FyDu%2FtBW6Fd3zc6rQqudo7%2Fiac66xRqILhLARAsmmgiGw5Ob9JLu%2FMi%2B8JtBDNO5fuiAPQkJMMPh%2BxHDKe12UL31UZslEG4%2BtoxFYGesU3d5HvhB8FmtNh6erpyRXwN2Xb%2BFuVddfBQFLoEGAY6AIKiPorHakOwXdsgwC%2BP0u9%2FkodaMIjJ4UT%2Bs5jiOUyiBeDDPH0o56yHsoLXykmCaBw&X-Amz-Signature=2637499a80b5874d0e189e071f502a92b51f591bf88697630ef55e25a4b0ff44&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46622AUDBQU%2F20260512%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260512T103033Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGIaCXVzLXdlc3QtMiJGMEQCIChuw6RzWK4mgBIykrIIEnnVR7Utbdp59d0pVZ8KYKruAiBSKU4c8okKLj52%2BDnYifTEEy0AFDeW7PeJknHDP6mi%2Fyr%2FAwgrEAAaDDYzNzQyMzE4MzgwNSIMJ78rtWtFZMssSsAOKtwDmdLTUSgYKRVZMqLBaY6g6aPvw7pr17Zc%2FnjoBULbUwEPYF2CR3cBeaNO2aGRcNZcHxI7qgNUZsgSD3qqPwr3lqZhxWLpVR12ujTI669INgbETYOsx7dX1e1G%2BwbHfyp%2BB4N6chV%2BxbWN%2FAHGcFnEnYxEQ%2Fs3b4%2FNSc4GWHFNa%2FdY0A%2FkPF7jftkHHzR78ofPgY2FIjuClnU%2B9rXWiqBu%2FkkAplURkdp2Sp%2FQ53%2FAPwh59VVJzi7JHQjKNYjQbLtlRpRI8VdlCgKYVXTGwggVspSV8FX0IYA%2FBWI%2FpShSxhxZDiRUdW4LMjfNOgsu7B4S1Ci4Gmq3u8jMb2Z1JR0fUGbXzQiCh%2Fvgk8oMnbXodYpVwhNocqubGv86c6qlWrXDmWgUjIoWoCC8y1JAzdjJyX79cxcwJEUHlXqRPUWeMjk09BdT2QGxbLw2A2WvXYZn1ZtzUxk6C3fh5YLpu2kjJmX%2BIbEY%2FK6ytL6s4LYNnp5k9NZqfUGpmnklNXRGdiMz%2FHD%2FlRubEUtSTcNzJvJSNNw078pDeSjYWip5HymJF7eyK%2ByBbOurYvFRwz7V0WPyhc3ZYT69Ngxx%2BZO46OoEuwTHjhEFHzdotQa3Fcl1axMLBq4xsxj89SPS2CkwkveL0AY6pgFBYML6rC%2FyDu%2FtBW6Fd3zc6rQqudo7%2Fiac66xRqILhLARAsmmgiGw5Ob9JLu%2FMi%2B8JtBDNO5fuiAPQkJMMPh%2BxHDKe12UL31UZslEG4%2BtoxFYGesU3d5HvhB8FmtNh6erpyRXwN2Xb%2BFuVddfBQFLoEGAY6AIKiPorHakOwXdsgwC%2BP0u9%2FkodaMIjJ4UT%2Bs5jiOUyiBeDDPH0o56yHsoLXykmCaBw&X-Amz-Signature=3d79397de8badfc49e8cbbf8f41756d0b8b6c6f8233ba4d8f19d97666bdcd796&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
