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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46643A56J2G%2F20260819%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260819T083508Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQChUK7wP6pRVgaU%2B0bBcKkS%2FttQicstQ1pVOtXfL9clYQIgC8H34vpgh24d1KoUCdvbapJB%2Bu1VLE4f5k6QXnDlXIYq%2FwMIcBAAGgw2Mzc0MjMxODM4MDUiDCrReRoElRLC5N9lsCrcA2daV2Ji0hMWdZV8Q3%2BAnQ7dHBkZVpemNkSc0b6SR84DnM%2BcvLMsyA1%2FSq1wQClsfvqniLQYejTSLPa5VutoKZkyccBHN%2FPLNMlow7FBKE4yJSlJ0RkUrFnnnSE4EMrjXQldZ%2BW7rUzxJyf5WZx8l0%2BEeHCeA2gIvROKO0taaIdr6ZJWPbedvtGSfogYQWslZoyoftKF13RNC65tJTMUpIPfPwqyUaofNxcQB0f3igGs5gzoEB15WXwh0qiMGZH82LmouYimIhLpf1UrxDDqq5Vi%2B86454ODo%2Fiah1o%2BxXBXbldZAJ77SKLuYR6ZuoRVmr5kAjwRx6y%2F9hYSeRaB7KsLNKwaKLD4PNdBuUI%2FN%2FkymtCg4xwbnG6m3lN%2FsP%2FuVdDcdpsQVEXhu0AdxM4hP3Ft17ops73GcKn2%2FxR9xngAWH3GinDQSNp23%2FuTiuzn25yMQboY10u3qmvhp4bwOxZEpcNBgE5%2BK3zIEQZ4RRDLEFINfxtXmD4lC7e%2FtIyMAQl4YFFQzcCbBK3VEaGZ%2Fx5gSQ%2BcxyHoMSFvpIpv6B9x1YPaDGWpVrtE3hOmJmz1jSk9FRXe%2BlT95wspMIqlvW5%2Fs8plRNqLKVX4Hu3dTJjGvOCS26wvzsH8aIfFMI%2BfldQGOqUBUEaI6SnerJQRghGZSOXb2GYQ17x95xXhfXizBRBhi0%2FAZy1yTRSKs5opJn8HV4iLWHKbkOH2YTymBDbujshuNlGRezlnuJllYamA7oV5GOCJMo1bpVCXj6gRrPxIIeo1wiD4%2BX2amtZc%2BzZbwmMug8R%2Bf7O5m0WHdjYxzeonClMex%2B3bunD1FPw3yHPjl2xpzFOp8S%2FEMXWhidbJhvC0yR17Gy1f&X-Amz-Signature=a5ad7325e5184fb15d8e2cee1ffd566b020928ffa1c2e3346359bacb4876c9f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46643A56J2G%2F20260819%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260819T083508Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQChUK7wP6pRVgaU%2B0bBcKkS%2FttQicstQ1pVOtXfL9clYQIgC8H34vpgh24d1KoUCdvbapJB%2Bu1VLE4f5k6QXnDlXIYq%2FwMIcBAAGgw2Mzc0MjMxODM4MDUiDCrReRoElRLC5N9lsCrcA2daV2Ji0hMWdZV8Q3%2BAnQ7dHBkZVpemNkSc0b6SR84DnM%2BcvLMsyA1%2FSq1wQClsfvqniLQYejTSLPa5VutoKZkyccBHN%2FPLNMlow7FBKE4yJSlJ0RkUrFnnnSE4EMrjXQldZ%2BW7rUzxJyf5WZx8l0%2BEeHCeA2gIvROKO0taaIdr6ZJWPbedvtGSfogYQWslZoyoftKF13RNC65tJTMUpIPfPwqyUaofNxcQB0f3igGs5gzoEB15WXwh0qiMGZH82LmouYimIhLpf1UrxDDqq5Vi%2B86454ODo%2Fiah1o%2BxXBXbldZAJ77SKLuYR6ZuoRVmr5kAjwRx6y%2F9hYSeRaB7KsLNKwaKLD4PNdBuUI%2FN%2FkymtCg4xwbnG6m3lN%2FsP%2FuVdDcdpsQVEXhu0AdxM4hP3Ft17ops73GcKn2%2FxR9xngAWH3GinDQSNp23%2FuTiuzn25yMQboY10u3qmvhp4bwOxZEpcNBgE5%2BK3zIEQZ4RRDLEFINfxtXmD4lC7e%2FtIyMAQl4YFFQzcCbBK3VEaGZ%2Fx5gSQ%2BcxyHoMSFvpIpv6B9x1YPaDGWpVrtE3hOmJmz1jSk9FRXe%2BlT95wspMIqlvW5%2Fs8plRNqLKVX4Hu3dTJjGvOCS26wvzsH8aIfFMI%2BfldQGOqUBUEaI6SnerJQRghGZSOXb2GYQ17x95xXhfXizBRBhi0%2FAZy1yTRSKs5opJn8HV4iLWHKbkOH2YTymBDbujshuNlGRezlnuJllYamA7oV5GOCJMo1bpVCXj6gRrPxIIeo1wiD4%2BX2amtZc%2BzZbwmMug8R%2Bf7O5m0WHdjYxzeonClMex%2B3bunD1FPw3yHPjl2xpzFOp8S%2FEMXWhidbJhvC0yR17Gy1f&X-Amz-Signature=12d08d65281a8cbdbe58add6fd808919c0931c8276f3d8b7e374e3cc2cba4e11&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46643A56J2G%2F20260819%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260819T083508Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQChUK7wP6pRVgaU%2B0bBcKkS%2FttQicstQ1pVOtXfL9clYQIgC8H34vpgh24d1KoUCdvbapJB%2Bu1VLE4f5k6QXnDlXIYq%2FwMIcBAAGgw2Mzc0MjMxODM4MDUiDCrReRoElRLC5N9lsCrcA2daV2Ji0hMWdZV8Q3%2BAnQ7dHBkZVpemNkSc0b6SR84DnM%2BcvLMsyA1%2FSq1wQClsfvqniLQYejTSLPa5VutoKZkyccBHN%2FPLNMlow7FBKE4yJSlJ0RkUrFnnnSE4EMrjXQldZ%2BW7rUzxJyf5WZx8l0%2BEeHCeA2gIvROKO0taaIdr6ZJWPbedvtGSfogYQWslZoyoftKF13RNC65tJTMUpIPfPwqyUaofNxcQB0f3igGs5gzoEB15WXwh0qiMGZH82LmouYimIhLpf1UrxDDqq5Vi%2B86454ODo%2Fiah1o%2BxXBXbldZAJ77SKLuYR6ZuoRVmr5kAjwRx6y%2F9hYSeRaB7KsLNKwaKLD4PNdBuUI%2FN%2FkymtCg4xwbnG6m3lN%2FsP%2FuVdDcdpsQVEXhu0AdxM4hP3Ft17ops73GcKn2%2FxR9xngAWH3GinDQSNp23%2FuTiuzn25yMQboY10u3qmvhp4bwOxZEpcNBgE5%2BK3zIEQZ4RRDLEFINfxtXmD4lC7e%2FtIyMAQl4YFFQzcCbBK3VEaGZ%2Fx5gSQ%2BcxyHoMSFvpIpv6B9x1YPaDGWpVrtE3hOmJmz1jSk9FRXe%2BlT95wspMIqlvW5%2Fs8plRNqLKVX4Hu3dTJjGvOCS26wvzsH8aIfFMI%2BfldQGOqUBUEaI6SnerJQRghGZSOXb2GYQ17x95xXhfXizBRBhi0%2FAZy1yTRSKs5opJn8HV4iLWHKbkOH2YTymBDbujshuNlGRezlnuJllYamA7oV5GOCJMo1bpVCXj6gRrPxIIeo1wiD4%2BX2amtZc%2BzZbwmMug8R%2Bf7O5m0WHdjYxzeonClMex%2B3bunD1FPw3yHPjl2xpzFOp8S%2FEMXWhidbJhvC0yR17Gy1f&X-Amz-Signature=f8dd80daba62e97c2590877d1330d0f97ce698f6df426605e3e79650cbf1592b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666V7UPQVT%2F20260819%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260819T083508Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBHhUBzRWtoG7Z4GEi3AlWO0pNrGaj965N3jGRywCYLDAiB0UjoT9sHLsPz3FVTjYp1L%2FUT1%2F2XASyQAu9KFPK5%2FdSr%2FAwhwEAAaDDYzNzQyMzE4MzgwNSIMYFSutB%2FC2OMJyDShKtwDtPnBNUxg8kt0jdGYw4lZ6fJ%2FmD2nfdrUdF6XHl7kB1fHm0%2Fvj8RXdbss0T0C0v%2FbQqGtB7SKZZR0tyhJ%2BmfCrd%2B%2FofFeq2eZ%2FNlpISLM23yDVjDxicjqXSDI6uTDnB6gnrFy2oIM71yVnBVUKaPX5CpHifMX4Bm5mH87JefAOy%2F5mLo7ViwSOZXv4iWJOYAhzQJ0VCcuN%2Bd%2B9Biz7r3lkkLM20Ereg9pBBGGO5VnvTTGSfA5pnO3eb9UJQIPgNW958gpCiMsl9bKpC3rbY2cWaw3IwCIGr8%2Fz60Tl4Cay6JpmMsienuHGrpHr3586DYTyeRnfaooSTF2L9b0dzBUAuGlreqxFf5Uwztrf96JmfkqKVOWs%2FGlZCcLEMF8h3FJkoufblrSTHOSxq0UBOuhaFcdrwbPyBXSolg0euTok4aFpFt7ovmuPF2iMSY4s48MCkUe0VfwXPF4ZPvvRwHXr3l7TeRFFhkP8jI%2FzCm1H9WvMLIfkLxVAqrwgzN7xCHItrn94KswLRvLsbbMdjuxcTTg7MR81rKodp6j9Td3wnck2Tw45oGJBYcc1ZfjeVTwQyVUpWGVCaEvILKvf7%2F3VEIpSmKEZaq%2Frw4DRwJvgfH5NNiIP1MGRa3%2FIOUws5%2BV1AY6pgE1glc%2FUxde6u4GMgHIdUAZHc6Si2HKzC4hUqVZqmiFHefHozdF7A9Cpm0fKKmONZoU8A%2FdPu2XWJuhuxlDDRT7BlcW2vAERDImsSIO50%2FQBamfrvaRyeGEcOwW2B%2B68i%2BdJyPnYgag54FX46ABE3Ayfnspr3Plk7MOpvQqAfqCROwcp6BUmFPKnwKczPGNZidxWaembwtGwGpR3J8J2xI6y%2BL01XFx&X-Amz-Signature=ba745e30b25616e7f09b30ab806ecac766faec67e85a7ca9b5a98cb3d5c1a2df&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666V7UPQVT%2F20260819%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260819T083508Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBHhUBzRWtoG7Z4GEi3AlWO0pNrGaj965N3jGRywCYLDAiB0UjoT9sHLsPz3FVTjYp1L%2FUT1%2F2XASyQAu9KFPK5%2FdSr%2FAwhwEAAaDDYzNzQyMzE4MzgwNSIMYFSutB%2FC2OMJyDShKtwDtPnBNUxg8kt0jdGYw4lZ6fJ%2FmD2nfdrUdF6XHl7kB1fHm0%2Fvj8RXdbss0T0C0v%2FbQqGtB7SKZZR0tyhJ%2BmfCrd%2B%2FofFeq2eZ%2FNlpISLM23yDVjDxicjqXSDI6uTDnB6gnrFy2oIM71yVnBVUKaPX5CpHifMX4Bm5mH87JefAOy%2F5mLo7ViwSOZXv4iWJOYAhzQJ0VCcuN%2Bd%2B9Biz7r3lkkLM20Ereg9pBBGGO5VnvTTGSfA5pnO3eb9UJQIPgNW958gpCiMsl9bKpC3rbY2cWaw3IwCIGr8%2Fz60Tl4Cay6JpmMsienuHGrpHr3586DYTyeRnfaooSTF2L9b0dzBUAuGlreqxFf5Uwztrf96JmfkqKVOWs%2FGlZCcLEMF8h3FJkoufblrSTHOSxq0UBOuhaFcdrwbPyBXSolg0euTok4aFpFt7ovmuPF2iMSY4s48MCkUe0VfwXPF4ZPvvRwHXr3l7TeRFFhkP8jI%2FzCm1H9WvMLIfkLxVAqrwgzN7xCHItrn94KswLRvLsbbMdjuxcTTg7MR81rKodp6j9Td3wnck2Tw45oGJBYcc1ZfjeVTwQyVUpWGVCaEvILKvf7%2F3VEIpSmKEZaq%2Frw4DRwJvgfH5NNiIP1MGRa3%2FIOUws5%2BV1AY6pgE1glc%2FUxde6u4GMgHIdUAZHc6Si2HKzC4hUqVZqmiFHefHozdF7A9Cpm0fKKmONZoU8A%2FdPu2XWJuhuxlDDRT7BlcW2vAERDImsSIO50%2FQBamfrvaRyeGEcOwW2B%2B68i%2BdJyPnYgag54FX46ABE3Ayfnspr3Plk7MOpvQqAfqCROwcp6BUmFPKnwKczPGNZidxWaembwtGwGpR3J8J2xI6y%2BL01XFx&X-Amz-Signature=98e0e1ac66302d3d3fd54d1a51fc461b8aa3e3cc15979a0fa5dc89b2856183bb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666V7UPQVT%2F20260819%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260819T083508Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBHhUBzRWtoG7Z4GEi3AlWO0pNrGaj965N3jGRywCYLDAiB0UjoT9sHLsPz3FVTjYp1L%2FUT1%2F2XASyQAu9KFPK5%2FdSr%2FAwhwEAAaDDYzNzQyMzE4MzgwNSIMYFSutB%2FC2OMJyDShKtwDtPnBNUxg8kt0jdGYw4lZ6fJ%2FmD2nfdrUdF6XHl7kB1fHm0%2Fvj8RXdbss0T0C0v%2FbQqGtB7SKZZR0tyhJ%2BmfCrd%2B%2FofFeq2eZ%2FNlpISLM23yDVjDxicjqXSDI6uTDnB6gnrFy2oIM71yVnBVUKaPX5CpHifMX4Bm5mH87JefAOy%2F5mLo7ViwSOZXv4iWJOYAhzQJ0VCcuN%2Bd%2B9Biz7r3lkkLM20Ereg9pBBGGO5VnvTTGSfA5pnO3eb9UJQIPgNW958gpCiMsl9bKpC3rbY2cWaw3IwCIGr8%2Fz60Tl4Cay6JpmMsienuHGrpHr3586DYTyeRnfaooSTF2L9b0dzBUAuGlreqxFf5Uwztrf96JmfkqKVOWs%2FGlZCcLEMF8h3FJkoufblrSTHOSxq0UBOuhaFcdrwbPyBXSolg0euTok4aFpFt7ovmuPF2iMSY4s48MCkUe0VfwXPF4ZPvvRwHXr3l7TeRFFhkP8jI%2FzCm1H9WvMLIfkLxVAqrwgzN7xCHItrn94KswLRvLsbbMdjuxcTTg7MR81rKodp6j9Td3wnck2Tw45oGJBYcc1ZfjeVTwQyVUpWGVCaEvILKvf7%2F3VEIpSmKEZaq%2Frw4DRwJvgfH5NNiIP1MGRa3%2FIOUws5%2BV1AY6pgE1glc%2FUxde6u4GMgHIdUAZHc6Si2HKzC4hUqVZqmiFHefHozdF7A9Cpm0fKKmONZoU8A%2FdPu2XWJuhuxlDDRT7BlcW2vAERDImsSIO50%2FQBamfrvaRyeGEcOwW2B%2B68i%2BdJyPnYgag54FX46ABE3Ayfnspr3Plk7MOpvQqAfqCROwcp6BUmFPKnwKczPGNZidxWaembwtGwGpR3J8J2xI6y%2BL01XFx&X-Amz-Signature=8920d457bc891d8bb72ecdbc2d53495fde90d69485e9aa23682606b78d58b968&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666V7UPQVT%2F20260819%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260819T083508Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBHhUBzRWtoG7Z4GEi3AlWO0pNrGaj965N3jGRywCYLDAiB0UjoT9sHLsPz3FVTjYp1L%2FUT1%2F2XASyQAu9KFPK5%2FdSr%2FAwhwEAAaDDYzNzQyMzE4MzgwNSIMYFSutB%2FC2OMJyDShKtwDtPnBNUxg8kt0jdGYw4lZ6fJ%2FmD2nfdrUdF6XHl7kB1fHm0%2Fvj8RXdbss0T0C0v%2FbQqGtB7SKZZR0tyhJ%2BmfCrd%2B%2FofFeq2eZ%2FNlpISLM23yDVjDxicjqXSDI6uTDnB6gnrFy2oIM71yVnBVUKaPX5CpHifMX4Bm5mH87JefAOy%2F5mLo7ViwSOZXv4iWJOYAhzQJ0VCcuN%2Bd%2B9Biz7r3lkkLM20Ereg9pBBGGO5VnvTTGSfA5pnO3eb9UJQIPgNW958gpCiMsl9bKpC3rbY2cWaw3IwCIGr8%2Fz60Tl4Cay6JpmMsienuHGrpHr3586DYTyeRnfaooSTF2L9b0dzBUAuGlreqxFf5Uwztrf96JmfkqKVOWs%2FGlZCcLEMF8h3FJkoufblrSTHOSxq0UBOuhaFcdrwbPyBXSolg0euTok4aFpFt7ovmuPF2iMSY4s48MCkUe0VfwXPF4ZPvvRwHXr3l7TeRFFhkP8jI%2FzCm1H9WvMLIfkLxVAqrwgzN7xCHItrn94KswLRvLsbbMdjuxcTTg7MR81rKodp6j9Td3wnck2Tw45oGJBYcc1ZfjeVTwQyVUpWGVCaEvILKvf7%2F3VEIpSmKEZaq%2Frw4DRwJvgfH5NNiIP1MGRa3%2FIOUws5%2BV1AY6pgE1glc%2FUxde6u4GMgHIdUAZHc6Si2HKzC4hUqVZqmiFHefHozdF7A9Cpm0fKKmONZoU8A%2FdPu2XWJuhuxlDDRT7BlcW2vAERDImsSIO50%2FQBamfrvaRyeGEcOwW2B%2B68i%2BdJyPnYgag54FX46ABE3Ayfnspr3Plk7MOpvQqAfqCROwcp6BUmFPKnwKczPGNZidxWaembwtGwGpR3J8J2xI6y%2BL01XFx&X-Amz-Signature=87de4bc7b7518a76efd90e0c20c83440a9d25c348909f892ad7c2474e6634e07&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUMMBBMJ%2F20260819%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260819T083508Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHR5dZiJFCFTuAFjChml5NvhMEseizLq4cdlFbry9Cb9AiEAn3TkKZ13vfAW40GmkWUxux4uGiSWCHavDAv875%2BMIM8q%2FwMIcBAAGgw2Mzc0MjMxODM4MDUiDBPsIvCjF8z%2FSgwMkSrcA%2BAz8aCHusjEmk8u1ocPP0DrhHfwTovzp%2Fyub2si2SK7ZPGrP6T5Hy3Ny8Z7psJt5Rhsr0tkzcj%2B9TqbcnGCJtyT5SmrEHlBNl0nTMpccniOgQe09calJ35t1d9zgzExwRSPHHzzF60wmtQLPJoX%2B22OsbSd6dSMuL8GnJrCxOllaiX2om9Qie7vaBrAhStNpSDQYIISCSwRSGqvxoMVwHQXaMFYM9hrhs5Kuuxhyk2tQZQpms6uwIDbl7Jb8n5O51hGe5xU8t%2F4GepHzxZodEx7eNUAO9sORpjJBBkhB6bfVb2cMXSYs5xwXZCvDwIFtyD3sOacA0hy%2FWuVl1L1KoK%2BGQqpc1gxkM%2FxXH1Iz95fGhyWL5dVklDFtvWViW594nWutv6I3BDrDGGASw50WWZBXzRE7ERTzWSdVSv3RMSyfePMH7WbAdLAHGmElW1PZZnoOFPYtZgkhV1NzteLGMX1nXqC3%2B6BR0WeVs7s73wagYKCPmcDx41wU7whfkPiyzxg0y5GWAoeXRx4tdRllZqyxL61EYSQRDSDTrH0r3%2Fic03WPrSmghm7b5MdtKv1xkdW9csybx2%2BCi3h7d6kPq6oRi%2FZTs0v5FiUadcYod4f1TcbnWoFxKIW%2F6IBMICildQGOqUBWf81D%2B8rKoYrsvAxuK44%2F6ktDwLXoTZwEaxr4D2MnAIco0avkhwtBNqXoUh%2BtKATi%2FovagTekiWRYgWs%2FKrr3TXgLKMDbRin68n5l6UEa0qIvIZNeFnGgLwPAvSPi9WBb8oY1GofkeSpZDSErIr1jifMigc1Fe%2FqTc2xhhRuTJb%2BYW65BalygAup53agIggThUPtytqx5Q%2Ff1DgFzOCnIXAtcUX%2F&X-Amz-Signature=7b82f1a331df5b695cdf0fa9f0ec473dabded57f88fabc685b1a69fe1dabd0fa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46655ACPLZG%2F20260819%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260819T083509Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDW5ZQtLT7q%2FNK9R0o2VVAN2m2boseaZ2JMppT6NZggDAIhAMqMwSSRZ9kM80W65srv0DxImYXtL7Chd6LLdk6LT%2FScKv8DCHAQABoMNjM3NDIzMTgzODA1IgxKiA1HohVeONYWNWwq3AOK%2FdLZ3MVzsiziP3mElKDRluXDrT4hXnwv2KhdimrBjbU%2BSW8XMshBZUaSn1IF3W%2FcAbwzitpIaG6wSqjwEBEePm4Lx6B1utomBNaH6jHEGJEaVwLtWLhWCfdSjH%2F5XmtJ17LEKG4y6B9TrT3mZj%2BfqvyCvcgEHoOJSt8GChibOKb7oHkL6QeXvIYCBMcQqcW%2Bglpu5LxfSdKz2cLvXqmoVR%2Bl9utRmhUmZ6IklgBsnmCJZ5XmTzW8yzIVCYWgZua8QSLSJGFyIjhAA%2FvJu%2FJ79wSwkrm5Q3gY2qkKbKhFZATGPhOS3hoOlIDpw5WNKm2Sriomq2lCzhpJfrKqKKWIDRpIiuEh8k1vkukUh%2Bw%2BkluwyOIWbDnPGYmAfnj7AqlVB%2F0LrKDYsKtVgQMLPa3PwpzyWxNwDM1bETlDMgTIW41h5weV9VeoFejjYy4vHGTsswe7uW851lWFLcIg593pA%2BukSDu9CvlQRhFUWOzsQ0VtIYhly86FzzqV6kypBprqkkJ3f6Cs%2FwYOdPKInI8354tRlr%2FMpTCSyIvgkZYvpzEqCGzKe20GCMmiRnjr8TDu9QTT%2F6kXbbWKdnGheIIjZkR6eGbg4zk8m%2FLm%2FaBFRpDIlhlj%2BMi7TLLWNTCGopXUBjqkAa0oLuAnluQPRe1KDgEV5GtN7KipQ3aAVS%2FvID0uToPwUiXHhC5wderEEZDN1BZIRJczm9vwUk0qDgZZ9AB1nCkM5jI7xbeRAzH3cOaOYqmAbtxmzjXOIf4ad5z4j735Kh87S30%2BtwkpKtCrZUbzym%2FnA6MXgfeFrcIctkfrxHLDEwKNdtDQOKClelucI1OFXSQndoE8LtLhcx0z3Spmc2qdlE38&X-Amz-Signature=907b2bdc43ad269852a448cdea9adeb881ad27bf7be4d8247b212d91555cd4dd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46655ACPLZG%2F20260819%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260819T083509Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDW5ZQtLT7q%2FNK9R0o2VVAN2m2boseaZ2JMppT6NZggDAIhAMqMwSSRZ9kM80W65srv0DxImYXtL7Chd6LLdk6LT%2FScKv8DCHAQABoMNjM3NDIzMTgzODA1IgxKiA1HohVeONYWNWwq3AOK%2FdLZ3MVzsiziP3mElKDRluXDrT4hXnwv2KhdimrBjbU%2BSW8XMshBZUaSn1IF3W%2FcAbwzitpIaG6wSqjwEBEePm4Lx6B1utomBNaH6jHEGJEaVwLtWLhWCfdSjH%2F5XmtJ17LEKG4y6B9TrT3mZj%2BfqvyCvcgEHoOJSt8GChibOKb7oHkL6QeXvIYCBMcQqcW%2Bglpu5LxfSdKz2cLvXqmoVR%2Bl9utRmhUmZ6IklgBsnmCJZ5XmTzW8yzIVCYWgZua8QSLSJGFyIjhAA%2FvJu%2FJ79wSwkrm5Q3gY2qkKbKhFZATGPhOS3hoOlIDpw5WNKm2Sriomq2lCzhpJfrKqKKWIDRpIiuEh8k1vkukUh%2Bw%2BkluwyOIWbDnPGYmAfnj7AqlVB%2F0LrKDYsKtVgQMLPa3PwpzyWxNwDM1bETlDMgTIW41h5weV9VeoFejjYy4vHGTsswe7uW851lWFLcIg593pA%2BukSDu9CvlQRhFUWOzsQ0VtIYhly86FzzqV6kypBprqkkJ3f6Cs%2FwYOdPKInI8354tRlr%2FMpTCSyIvgkZYvpzEqCGzKe20GCMmiRnjr8TDu9QTT%2F6kXbbWKdnGheIIjZkR6eGbg4zk8m%2FLm%2FaBFRpDIlhlj%2BMi7TLLWNTCGopXUBjqkAa0oLuAnluQPRe1KDgEV5GtN7KipQ3aAVS%2FvID0uToPwUiXHhC5wderEEZDN1BZIRJczm9vwUk0qDgZZ9AB1nCkM5jI7xbeRAzH3cOaOYqmAbtxmzjXOIf4ad5z4j735Kh87S30%2BtwkpKtCrZUbzym%2FnA6MXgfeFrcIctkfrxHLDEwKNdtDQOKClelucI1OFXSQndoE8LtLhcx0z3Spmc2qdlE38&X-Amz-Signature=63b6814fc17908941793419ad1c578c9b0cf1de09508e104734080a0f37f53e9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
