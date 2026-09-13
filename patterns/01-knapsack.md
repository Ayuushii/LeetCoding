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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663BLGOXSI%2F20260913%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260913T130644Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAIaCXVzLXdlc3QtMiJHMEUCIEaWc4LWhr7u%2BNbpdOUeWIMMACv1C0oM%2BwV%2Besz2%2FU4mAiEAo57QfitLH9wrcpJzbS0wLPk3ihts04%2Fy2S%2FErd4X1sIqiAQIy%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBoM7sDm%2FvmSWc9wnSrcA16tw5VTeP2Ps8ci6%2FDakegR30BHNlguAv7Ft4rnQr1sMAiGmoNd3XQ2Fq8mihIje%2Bskoq04UreeVOmNDO6ifNMM7zXqlE4n5%2BltlYW%2BbL%2F7me7kRcYmYh3J47EB7wI1DeXg1zuGwc7ScBjMfuTB7F%2FzNLV8tgnDwIxHccISTrCwrn7woTMTpYx7aufqLAMaEr4gz0xWXG1x4wiCfGYjsNjbc0GCbn3izKzhvo9q6FI2lBj6B%2BO4bL8P9kcza4zmfnqg5Ya5ZCCej3vjcls%2BZIt2PZemwKJoCta%2BnVN7C%2FV4yWv1AGoNnCWpLLDFtqo7BHy32TsR0ZaYAf%2BWLhYNx4vyKAcfOLSK%2BD2g5vC0HhxErOIqfhyvzm7mFYSKvw8Jw0xRe%2BBHnUiipYdTVEx5JZwKhy%2BLU3oVSJWTN%2FR99v0M2NaaQVEXIKRQFfjtSRCd84ky5NZLqCiEISdksIOcpxz%2B2zLtFRT%2BH87n%2FjpvByBG0q3Z58Xs9hmfkYMnsPOLGSEuUh9cElJgDP%2BifaZzTLBlndoJglewGISkKED1dwx1ZfL6BPqYAaKM06R4Qg1FfvqD61%2BooSQqOe7nJsQopbYjHIn9tBU0MQoU873s11OgaGcXzYsh%2BJtkiL91MIzimdUGOqUBdSmjJcDoiI2N8SGKK716xgKIWLS0mkkxBvsNz813qtjkvcaOwtubK4ihBatteyhh1kxB28LxtyJLgdDnk57KnOGe%2F5EsqB3rPm7c83Nk3G90aiXazcvI88TNwGWiuuwTW%2BsGY2b03KwEVsGUz3I13zN%2Bd7hLZ40SMNZonW8%2B%2B1fUTMxZn6vA9oK0Lnmw57TAAzqLc1MwJve5MXcyMwBbYByeSYdd&X-Amz-Signature=f68704bb5193bf9668457d73df116af3a9bb12cab8f46b175a6fa7678d620560&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663BLGOXSI%2F20260913%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260913T130644Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAIaCXVzLXdlc3QtMiJHMEUCIEaWc4LWhr7u%2BNbpdOUeWIMMACv1C0oM%2BwV%2Besz2%2FU4mAiEAo57QfitLH9wrcpJzbS0wLPk3ihts04%2Fy2S%2FErd4X1sIqiAQIy%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBoM7sDm%2FvmSWc9wnSrcA16tw5VTeP2Ps8ci6%2FDakegR30BHNlguAv7Ft4rnQr1sMAiGmoNd3XQ2Fq8mihIje%2Bskoq04UreeVOmNDO6ifNMM7zXqlE4n5%2BltlYW%2BbL%2F7me7kRcYmYh3J47EB7wI1DeXg1zuGwc7ScBjMfuTB7F%2FzNLV8tgnDwIxHccISTrCwrn7woTMTpYx7aufqLAMaEr4gz0xWXG1x4wiCfGYjsNjbc0GCbn3izKzhvo9q6FI2lBj6B%2BO4bL8P9kcza4zmfnqg5Ya5ZCCej3vjcls%2BZIt2PZemwKJoCta%2BnVN7C%2FV4yWv1AGoNnCWpLLDFtqo7BHy32TsR0ZaYAf%2BWLhYNx4vyKAcfOLSK%2BD2g5vC0HhxErOIqfhyvzm7mFYSKvw8Jw0xRe%2BBHnUiipYdTVEx5JZwKhy%2BLU3oVSJWTN%2FR99v0M2NaaQVEXIKRQFfjtSRCd84ky5NZLqCiEISdksIOcpxz%2B2zLtFRT%2BH87n%2FjpvByBG0q3Z58Xs9hmfkYMnsPOLGSEuUh9cElJgDP%2BifaZzTLBlndoJglewGISkKED1dwx1ZfL6BPqYAaKM06R4Qg1FfvqD61%2BooSQqOe7nJsQopbYjHIn9tBU0MQoU873s11OgaGcXzYsh%2BJtkiL91MIzimdUGOqUBdSmjJcDoiI2N8SGKK716xgKIWLS0mkkxBvsNz813qtjkvcaOwtubK4ihBatteyhh1kxB28LxtyJLgdDnk57KnOGe%2F5EsqB3rPm7c83Nk3G90aiXazcvI88TNwGWiuuwTW%2BsGY2b03KwEVsGUz3I13zN%2Bd7hLZ40SMNZonW8%2B%2B1fUTMxZn6vA9oK0Lnmw57TAAzqLc1MwJve5MXcyMwBbYByeSYdd&X-Amz-Signature=a21956d872d54ea5f8d25706bc9bbabb5655fbffe580eadcbf1e2dcaa3c3b3d7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663BLGOXSI%2F20260913%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260913T130644Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAIaCXVzLXdlc3QtMiJHMEUCIEaWc4LWhr7u%2BNbpdOUeWIMMACv1C0oM%2BwV%2Besz2%2FU4mAiEAo57QfitLH9wrcpJzbS0wLPk3ihts04%2Fy2S%2FErd4X1sIqiAQIy%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBoM7sDm%2FvmSWc9wnSrcA16tw5VTeP2Ps8ci6%2FDakegR30BHNlguAv7Ft4rnQr1sMAiGmoNd3XQ2Fq8mihIje%2Bskoq04UreeVOmNDO6ifNMM7zXqlE4n5%2BltlYW%2BbL%2F7me7kRcYmYh3J47EB7wI1DeXg1zuGwc7ScBjMfuTB7F%2FzNLV8tgnDwIxHccISTrCwrn7woTMTpYx7aufqLAMaEr4gz0xWXG1x4wiCfGYjsNjbc0GCbn3izKzhvo9q6FI2lBj6B%2BO4bL8P9kcza4zmfnqg5Ya5ZCCej3vjcls%2BZIt2PZemwKJoCta%2BnVN7C%2FV4yWv1AGoNnCWpLLDFtqo7BHy32TsR0ZaYAf%2BWLhYNx4vyKAcfOLSK%2BD2g5vC0HhxErOIqfhyvzm7mFYSKvw8Jw0xRe%2BBHnUiipYdTVEx5JZwKhy%2BLU3oVSJWTN%2FR99v0M2NaaQVEXIKRQFfjtSRCd84ky5NZLqCiEISdksIOcpxz%2B2zLtFRT%2BH87n%2FjpvByBG0q3Z58Xs9hmfkYMnsPOLGSEuUh9cElJgDP%2BifaZzTLBlndoJglewGISkKED1dwx1ZfL6BPqYAaKM06R4Qg1FfvqD61%2BooSQqOe7nJsQopbYjHIn9tBU0MQoU873s11OgaGcXzYsh%2BJtkiL91MIzimdUGOqUBdSmjJcDoiI2N8SGKK716xgKIWLS0mkkxBvsNz813qtjkvcaOwtubK4ihBatteyhh1kxB28LxtyJLgdDnk57KnOGe%2F5EsqB3rPm7c83Nk3G90aiXazcvI88TNwGWiuuwTW%2BsGY2b03KwEVsGUz3I13zN%2Bd7hLZ40SMNZonW8%2B%2B1fUTMxZn6vA9oK0Lnmw57TAAzqLc1MwJve5MXcyMwBbYByeSYdd&X-Amz-Signature=233271188afb20025b1759d06c15bd827cf89d82b25ef093e47d1549ccdaf541&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666UJVGKCF%2F20260913%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260913T130644Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAIaCXVzLXdlc3QtMiJIMEYCIQDSrIqmsbB4x18pX4X4gP%2BAXC0UpqO3dEm%2F%2FQfemtzTagIhAPrPWn505A8sAVDtxPAM7eKhdziz8viYxbT%2Bhvd0%2ByblKogECMv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwamKThGFB7yz3wZ8gq3ANlhOcYAqBnD6foHRYZXlCADHtoy1DWCryyRsn740Xjq%2F2aMbv%2BkcneBZaFDT14Myb3RYXvCNaXYjzsUz1drIqxs2mbD3AB40NN2kikFee5ZsCOvcZnpRUKjmSzzUrqN616o92qbLRJvxkatxKakvr%2FeuE2blW02VI28yOAC0YK1d2Z6Eq21MC6nrph6%2BwU%2Fx7PDDpcyU%2B5Y%2F1I10hoRMyiQPk2e7Fkaj9Rtl3NGOP9I0tThOx2ER2u6OLtXq67dUS7uAhrWNmFNPAaysNnXUY0i66I3mpvhxDBEd2i3O1W6oo36IAVxPS1YYwzi8wW5uh%2FpY%2FgvvRv9cf1VbcHQU0PxEmlmkJSqTkP4q2P80UU%2F2loltLHlrSvObXDhaYCC3hZe8iyClQ9Bh3vOCDVSrS0A5AzUv%2FYyDCsfK%2BKDwKnEstzCddYSzBfyhGKydzP0ZUHS8ZqNSCQ%2BfswmL9FfZu%2Fgr7w2T8gsXAr%2B08UitGtDUAtcOfcmIVAQCB0RxSju9c4jYd1sm7GaiRfnFIcV468u4aKBGTyCx992v%2FMEmpGCz7yK3zPylM2YKC2iqpuyLjKIOEZw0D2c4GhUP4SudUQxGB8A854M1%2BxNTPnC3kbMb6P79C3MHMZfenKNzDL75nVBjqkAe8s3gbFFpovLmI8FDmNU3kkXUpU0vlyCfszjs7JvQTStSoNdU97U5IfHp3bCPDmRvhLnWYjBi9udjcfrzmqgEvyIS0op2aAKSkU2M7E0T5jRxPjo58XHvPBXg6Nf5FUdkcZTrrkhYp9tjwHC1RmtL837kkq9FBmDpDYtV2jbq%2BCfXJG9dn1gVftLhlxsznbptbcgyN2BaanLT6dC%2Bwj21u61yFE&X-Amz-Signature=2925938b03ce0a2a1afb7ddba273ea96db7a3d6dd6a837977b3301a429106e64&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666UJVGKCF%2F20260913%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260913T130644Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAIaCXVzLXdlc3QtMiJIMEYCIQDSrIqmsbB4x18pX4X4gP%2BAXC0UpqO3dEm%2F%2FQfemtzTagIhAPrPWn505A8sAVDtxPAM7eKhdziz8viYxbT%2Bhvd0%2ByblKogECMv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwamKThGFB7yz3wZ8gq3ANlhOcYAqBnD6foHRYZXlCADHtoy1DWCryyRsn740Xjq%2F2aMbv%2BkcneBZaFDT14Myb3RYXvCNaXYjzsUz1drIqxs2mbD3AB40NN2kikFee5ZsCOvcZnpRUKjmSzzUrqN616o92qbLRJvxkatxKakvr%2FeuE2blW02VI28yOAC0YK1d2Z6Eq21MC6nrph6%2BwU%2Fx7PDDpcyU%2B5Y%2F1I10hoRMyiQPk2e7Fkaj9Rtl3NGOP9I0tThOx2ER2u6OLtXq67dUS7uAhrWNmFNPAaysNnXUY0i66I3mpvhxDBEd2i3O1W6oo36IAVxPS1YYwzi8wW5uh%2FpY%2FgvvRv9cf1VbcHQU0PxEmlmkJSqTkP4q2P80UU%2F2loltLHlrSvObXDhaYCC3hZe8iyClQ9Bh3vOCDVSrS0A5AzUv%2FYyDCsfK%2BKDwKnEstzCddYSzBfyhGKydzP0ZUHS8ZqNSCQ%2BfswmL9FfZu%2Fgr7w2T8gsXAr%2B08UitGtDUAtcOfcmIVAQCB0RxSju9c4jYd1sm7GaiRfnFIcV468u4aKBGTyCx992v%2FMEmpGCz7yK3zPylM2YKC2iqpuyLjKIOEZw0D2c4GhUP4SudUQxGB8A854M1%2BxNTPnC3kbMb6P79C3MHMZfenKNzDL75nVBjqkAe8s3gbFFpovLmI8FDmNU3kkXUpU0vlyCfszjs7JvQTStSoNdU97U5IfHp3bCPDmRvhLnWYjBi9udjcfrzmqgEvyIS0op2aAKSkU2M7E0T5jRxPjo58XHvPBXg6Nf5FUdkcZTrrkhYp9tjwHC1RmtL837kkq9FBmDpDYtV2jbq%2BCfXJG9dn1gVftLhlxsznbptbcgyN2BaanLT6dC%2Bwj21u61yFE&X-Amz-Signature=1d6e5d9f01390841f78d0fcb6b8629788494f0dfeb91644c1db299591d4cc35c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666UJVGKCF%2F20260913%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260913T130644Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAIaCXVzLXdlc3QtMiJIMEYCIQDSrIqmsbB4x18pX4X4gP%2BAXC0UpqO3dEm%2F%2FQfemtzTagIhAPrPWn505A8sAVDtxPAM7eKhdziz8viYxbT%2Bhvd0%2ByblKogECMv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwamKThGFB7yz3wZ8gq3ANlhOcYAqBnD6foHRYZXlCADHtoy1DWCryyRsn740Xjq%2F2aMbv%2BkcneBZaFDT14Myb3RYXvCNaXYjzsUz1drIqxs2mbD3AB40NN2kikFee5ZsCOvcZnpRUKjmSzzUrqN616o92qbLRJvxkatxKakvr%2FeuE2blW02VI28yOAC0YK1d2Z6Eq21MC6nrph6%2BwU%2Fx7PDDpcyU%2B5Y%2F1I10hoRMyiQPk2e7Fkaj9Rtl3NGOP9I0tThOx2ER2u6OLtXq67dUS7uAhrWNmFNPAaysNnXUY0i66I3mpvhxDBEd2i3O1W6oo36IAVxPS1YYwzi8wW5uh%2FpY%2FgvvRv9cf1VbcHQU0PxEmlmkJSqTkP4q2P80UU%2F2loltLHlrSvObXDhaYCC3hZe8iyClQ9Bh3vOCDVSrS0A5AzUv%2FYyDCsfK%2BKDwKnEstzCddYSzBfyhGKydzP0ZUHS8ZqNSCQ%2BfswmL9FfZu%2Fgr7w2T8gsXAr%2B08UitGtDUAtcOfcmIVAQCB0RxSju9c4jYd1sm7GaiRfnFIcV468u4aKBGTyCx992v%2FMEmpGCz7yK3zPylM2YKC2iqpuyLjKIOEZw0D2c4GhUP4SudUQxGB8A854M1%2BxNTPnC3kbMb6P79C3MHMZfenKNzDL75nVBjqkAe8s3gbFFpovLmI8FDmNU3kkXUpU0vlyCfszjs7JvQTStSoNdU97U5IfHp3bCPDmRvhLnWYjBi9udjcfrzmqgEvyIS0op2aAKSkU2M7E0T5jRxPjo58XHvPBXg6Nf5FUdkcZTrrkhYp9tjwHC1RmtL837kkq9FBmDpDYtV2jbq%2BCfXJG9dn1gVftLhlxsznbptbcgyN2BaanLT6dC%2Bwj21u61yFE&X-Amz-Signature=b01de6ccba67f2c356d15ce80f14c712bb1067a03833c0d66a49a786a4fd0447&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666UJVGKCF%2F20260913%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260913T130644Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAIaCXVzLXdlc3QtMiJIMEYCIQDSrIqmsbB4x18pX4X4gP%2BAXC0UpqO3dEm%2F%2FQfemtzTagIhAPrPWn505A8sAVDtxPAM7eKhdziz8viYxbT%2Bhvd0%2ByblKogECMv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwamKThGFB7yz3wZ8gq3ANlhOcYAqBnD6foHRYZXlCADHtoy1DWCryyRsn740Xjq%2F2aMbv%2BkcneBZaFDT14Myb3RYXvCNaXYjzsUz1drIqxs2mbD3AB40NN2kikFee5ZsCOvcZnpRUKjmSzzUrqN616o92qbLRJvxkatxKakvr%2FeuE2blW02VI28yOAC0YK1d2Z6Eq21MC6nrph6%2BwU%2Fx7PDDpcyU%2B5Y%2F1I10hoRMyiQPk2e7Fkaj9Rtl3NGOP9I0tThOx2ER2u6OLtXq67dUS7uAhrWNmFNPAaysNnXUY0i66I3mpvhxDBEd2i3O1W6oo36IAVxPS1YYwzi8wW5uh%2FpY%2FgvvRv9cf1VbcHQU0PxEmlmkJSqTkP4q2P80UU%2F2loltLHlrSvObXDhaYCC3hZe8iyClQ9Bh3vOCDVSrS0A5AzUv%2FYyDCsfK%2BKDwKnEstzCddYSzBfyhGKydzP0ZUHS8ZqNSCQ%2BfswmL9FfZu%2Fgr7w2T8gsXAr%2B08UitGtDUAtcOfcmIVAQCB0RxSju9c4jYd1sm7GaiRfnFIcV468u4aKBGTyCx992v%2FMEmpGCz7yK3zPylM2YKC2iqpuyLjKIOEZw0D2c4GhUP4SudUQxGB8A854M1%2BxNTPnC3kbMb6P79C3MHMZfenKNzDL75nVBjqkAe8s3gbFFpovLmI8FDmNU3kkXUpU0vlyCfszjs7JvQTStSoNdU97U5IfHp3bCPDmRvhLnWYjBi9udjcfrzmqgEvyIS0op2aAKSkU2M7E0T5jRxPjo58XHvPBXg6Nf5FUdkcZTrrkhYp9tjwHC1RmtL837kkq9FBmDpDYtV2jbq%2BCfXJG9dn1gVftLhlxsznbptbcgyN2BaanLT6dC%2Bwj21u61yFE&X-Amz-Signature=604463184773479a837ed83ec2397e1044e40805d4bb6d862729965ba46dc8e5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46637ZYPNUU%2F20260913%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260913T130645Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJHMEUCIQCE93ztbVI5iZlYJIsfEsPnZCr9BvPWK630EyaJS%2FFGCAIgPHKYnsGQJNhQrGFJDJkLTdtWlr5H9LatKP7%2BCE%2Fej60qiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBpXLBJIFpTOUSDVhCrcA30ipSlP1hudUmqRBYsppPbt9mRu%2FBJzcj1Xf3HdKA8a%2FE5u8yAKIZ52DLqCd6RIENWtUH8Zqjj3%2B6PFtYyORYNsTns%2BlrGJENJAzNubL4bP%2Fv3R1mOMMXxWzY%2F1Zl%2BjLUVU07lhutrQPLIFhmWQU1Uu5tv34Z8DNEpt5Kca4JXSf7pthQgeaVJbal%2FLh14yARtORcpKG2AZE%2FBPIls8%2FULvWB3qH3Ydq8Tu3vWiYL5JVQSfdB8QLCKcgtyN9f4yHTXQgVcnFQDIipWvjMIsuQ%2BIiLsCCThR182oZ7onVAfjbmcEuVUFKipxLHV5yjGi01GnWdDeJubhJXIqjeOlWX%2BrC8TztrxFSWrZ%2B5qvrS1BJbFWhEGA9Xm%2Fp8nXekE672e3Ye%2BWR9cbiUWvEnNEtF6Fv%2FVCgINGmSF02c6eGK1%2Fw3%2BXg6JuJmiBXyUSqLpcO1c1JN%2BS0WaLCX%2FFOoqRlDf81qJrbTmGw8Y9PPTBFcUbiyemiY2fhiECxiNiDncsQZZMELnM9zmQ%2Fe77XO9Vs7uQ1zuPJ1w%2BG8CoWNAxJcUUFiCO6nXAZ5HHLtEcZKgRLUJCm7eS%2FCVTDBrV7AjXTqs6M642tZY8CEKvtadaV8YOzQ28m6QrOVwaUKVtMI%2F2mdUGOqUB04BuJmS1ltAPjXMo9GidBqYszvkxMZhXvnOf9awDqS8cEN45o3nbbwU%2FGBmp9YdFGeoM%2BzUfkKkVRDW8NPKueFJfnttJEawW52oTjlv0fp6yGFVyXCG0K1hc580z%2FD9zfLoNDp6Mh3X%2Bplv%2BpXYIQTTZfrmTUZBORifZNpU8SZ7nZmncGJUw9TfDj0fLRfIm3RWQy%2BkHHbg3ZgkQkOXabM64BsTe&X-Amz-Signature=32997c599c45960fab54319d4600644562d94c8d8da515178c96a8caaa90b60c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664VELVSQI%2F20260913%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260913T130645Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJHMEUCIQCcWgiPn%2BmM6HJwMpTzkv3Iyi7K5ZG7KNSQMLGBBS%2Fi5QIgU9RJuikZH4l2L4uucoyDt0qYXL3XWbdOccVhDyFGBLMqiAQIy%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLDoxrIHv2x783bV4CrcA4FoGRRATU2%2BcPBYo4sBe8tmUvLPvkE7w8UM1TQCYlYysPqQzwxFhAYy1LOewrHOL6J%2Ftf3vqCqd5FsTRWgvQU8rqdvk3Vx5Rw5belX33pr30FC2eeTZloKOVNJMHyAqHqqPJ0lD6OtWsn%2FVihFTh%2F6RwNG8%2BZYVwrd8bzwb%2FWUEgZNEPGbD5Lk%2FzRkeGYEIIMQeuDJDThmUnW5syi4VIlsnwJl%2FVtQ3j6urNAggm9u4I3Yc5ILjWTVSXL0ZavE6AAeIUphNKQle%2BG7PiDgvLuUceJv3aAwRcGUBvzc65OUvDCXDt%2B7v7Hn9pDSZfvFsPB0kMiClt2di79qRL6DicGODkwlgEpBAl1eOTYAddTEBQlDSV2DHqbxZ7XJnZlHe%2Bwru5rHMDsPGkOREil%2F7CxzSZgWpL7lhlirI11vlaM6PTJ7GopiXrGEy2UOzF0pBEQ91WgF%2B6CN9%2FkVJjuL4IGG6WYTYi4Rqksjm9ij6pnGSU3VyMTZTq7CBUCxnroBc4S6DykKiq1QuQTOXGhu36W5vIOt3xLfPnebsH9n6A5mPSWwYrB7eET3SftagIbciydK6I90yOzLXvn26uE8T8c%2BTK1g6gLEhD%2FslDY9mpPWvMbDXV0ES5KH22ckXMMvymdUGOqUB89XwZS6edvdyHlcuf1%2BKT7TXgn2efcJxGRMrp9tXBYlRqDisB9Fi4VKQKKhkT3UKum0qQG1eY%2FpXaBue4XRYGYQ7%2FGzM9N9Sd4sSWMecQRILSFR7hnYWWFrOMwuwPzoIDKN2qFGXQVrFWLG1WNL4rwFI6%2Filz%2FRCmxpLyNIqbUP%2FqI1AiH5pdZuBSXfSRUJ%2FBnso5AhJjkUHT0d%2BDkj8nmPrtD8B&X-Amz-Signature=d435d78fb726c54388ff966d9e714dc37171d67ac9cdd1bf53b4a26fbba11c5b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664VELVSQI%2F20260913%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260913T130645Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJHMEUCIQCcWgiPn%2BmM6HJwMpTzkv3Iyi7K5ZG7KNSQMLGBBS%2Fi5QIgU9RJuikZH4l2L4uucoyDt0qYXL3XWbdOccVhDyFGBLMqiAQIy%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLDoxrIHv2x783bV4CrcA4FoGRRATU2%2BcPBYo4sBe8tmUvLPvkE7w8UM1TQCYlYysPqQzwxFhAYy1LOewrHOL6J%2Ftf3vqCqd5FsTRWgvQU8rqdvk3Vx5Rw5belX33pr30FC2eeTZloKOVNJMHyAqHqqPJ0lD6OtWsn%2FVihFTh%2F6RwNG8%2BZYVwrd8bzwb%2FWUEgZNEPGbD5Lk%2FzRkeGYEIIMQeuDJDThmUnW5syi4VIlsnwJl%2FVtQ3j6urNAggm9u4I3Yc5ILjWTVSXL0ZavE6AAeIUphNKQle%2BG7PiDgvLuUceJv3aAwRcGUBvzc65OUvDCXDt%2B7v7Hn9pDSZfvFsPB0kMiClt2di79qRL6DicGODkwlgEpBAl1eOTYAddTEBQlDSV2DHqbxZ7XJnZlHe%2Bwru5rHMDsPGkOREil%2F7CxzSZgWpL7lhlirI11vlaM6PTJ7GopiXrGEy2UOzF0pBEQ91WgF%2B6CN9%2FkVJjuL4IGG6WYTYi4Rqksjm9ij6pnGSU3VyMTZTq7CBUCxnroBc4S6DykKiq1QuQTOXGhu36W5vIOt3xLfPnebsH9n6A5mPSWwYrB7eET3SftagIbciydK6I90yOzLXvn26uE8T8c%2BTK1g6gLEhD%2FslDY9mpPWvMbDXV0ES5KH22ckXMMvymdUGOqUB89XwZS6edvdyHlcuf1%2BKT7TXgn2efcJxGRMrp9tXBYlRqDisB9Fi4VKQKKhkT3UKum0qQG1eY%2FpXaBue4XRYGYQ7%2FGzM9N9Sd4sSWMecQRILSFR7hnYWWFrOMwuwPzoIDKN2qFGXQVrFWLG1WNL4rwFI6%2Filz%2FRCmxpLyNIqbUP%2FqI1AiH5pdZuBSXfSRUJ%2FBnso5AhJjkUHT0d%2BDkj8nmPrtD8B&X-Amz-Signature=93d505ecb9a11dbf09763ded11739a05ecb4facb2e0542c3213b4d8942d30b82&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
