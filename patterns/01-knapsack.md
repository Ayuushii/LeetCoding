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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TAKJFFSF%2F20260220%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260220T083946Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCU9UACfpk1pFdkQ91ZqQNflgZU98FvU8dziAd9WmMgqAIhALTkeLCUV9b7%2BiFvWYh2Up0bErK4FYXytSsgNKR%2FtcYQKogECJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxOzurOJIP3nzBUhr0q3APvsaiteq0i7ig7AOha6PcUCPIWxl6AaqTqgC8WwTy1njL9%2FN5JYwRKSujJI7H0QTeB0jgDYeH02%2FguRHDiVUXv%2FZWZPkKD7I84eqv02blIv2Ug%2FFs3IlsBWyBU%2BBur9NXIIYFXPafjNJQufuYb23FKmccUyNONox7EbT2kYVaN8z54oBvTOWc1k31ubcNdiBMYoFNAbp2UB7z%2BV2op9ksewGuNnzCeNlZgeM7iYQcSpKqSeutZbnNX7smKMvndQK1i10Cn7FK57%2BDgkBvF84deENQ4Nb%2BRskkZG0Z67p4%2B0CtzWQ0xQ5BFi20zEPHfGEhfFwTXuuzVYeNE2gIlSKwqBcv7SaDJW6eTdRwXeBMM3ZHjU2fk%2BzHxWW4SNixRVs1MWmizNAoqWNpPL5m2yTJ%2Bw9pMnQ2H8%2B%2F%2F32WXTiSPlEI0hSJKT%2FWAwXJtVMNpjPwjRLPRIMAwIJ%2B2gNdD7KK9qralV4y3rnMpouyCTbVXvJelj7QkZNi%2BMlhY%2F8vjxOuLo0zungK8V%2FTQbjNT1gVaE%2FkwFrY3BVGARkmjmjaGD16CGlXCfjLrUFtgmpo2CaoZut02VFskUzMOJlVHyx%2F1YkgD%2Fe%2FIhl74hMFrlZ2N8XEsNOEcZp4LS2KwWzDgiuDMBjqkAT0K4m0R0SX1f4SvpKRXLYNdnZymtKeVYzfhaDn80xTnbHexASe6We8YkPWW9xlQYZhskxS%2Ft2JPrmueQniHPe7087e6Cv8XYx54gGt1o%2FHx002%2FEtosy1pkjO6XuE5j5xZT67TezAon027sZ4%2B2VWeBP6m%2FHefXUUVZ53fkPNNcDfVmIl%2FYWGh%2Fk%2FzflkoBSGYrtBOhJdanxt8HI2GilZFC9cKk&X-Amz-Signature=7271b3b81a3222e6bb0dd7e9c043e66c2d324cdce79d3d0e2e381fb9a268f4a8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TAKJFFSF%2F20260220%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260220T083946Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCU9UACfpk1pFdkQ91ZqQNflgZU98FvU8dziAd9WmMgqAIhALTkeLCUV9b7%2BiFvWYh2Up0bErK4FYXytSsgNKR%2FtcYQKogECJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxOzurOJIP3nzBUhr0q3APvsaiteq0i7ig7AOha6PcUCPIWxl6AaqTqgC8WwTy1njL9%2FN5JYwRKSujJI7H0QTeB0jgDYeH02%2FguRHDiVUXv%2FZWZPkKD7I84eqv02blIv2Ug%2FFs3IlsBWyBU%2BBur9NXIIYFXPafjNJQufuYb23FKmccUyNONox7EbT2kYVaN8z54oBvTOWc1k31ubcNdiBMYoFNAbp2UB7z%2BV2op9ksewGuNnzCeNlZgeM7iYQcSpKqSeutZbnNX7smKMvndQK1i10Cn7FK57%2BDgkBvF84deENQ4Nb%2BRskkZG0Z67p4%2B0CtzWQ0xQ5BFi20zEPHfGEhfFwTXuuzVYeNE2gIlSKwqBcv7SaDJW6eTdRwXeBMM3ZHjU2fk%2BzHxWW4SNixRVs1MWmizNAoqWNpPL5m2yTJ%2Bw9pMnQ2H8%2B%2F%2F32WXTiSPlEI0hSJKT%2FWAwXJtVMNpjPwjRLPRIMAwIJ%2B2gNdD7KK9qralV4y3rnMpouyCTbVXvJelj7QkZNi%2BMlhY%2F8vjxOuLo0zungK8V%2FTQbjNT1gVaE%2FkwFrY3BVGARkmjmjaGD16CGlXCfjLrUFtgmpo2CaoZut02VFskUzMOJlVHyx%2F1YkgD%2Fe%2FIhl74hMFrlZ2N8XEsNOEcZp4LS2KwWzDgiuDMBjqkAT0K4m0R0SX1f4SvpKRXLYNdnZymtKeVYzfhaDn80xTnbHexASe6We8YkPWW9xlQYZhskxS%2Ft2JPrmueQniHPe7087e6Cv8XYx54gGt1o%2FHx002%2FEtosy1pkjO6XuE5j5xZT67TezAon027sZ4%2B2VWeBP6m%2FHefXUUVZ53fkPNNcDfVmIl%2FYWGh%2Fk%2FzflkoBSGYrtBOhJdanxt8HI2GilZFC9cKk&X-Amz-Signature=77516652f3968cc42e516ebf0dd38a7730080accd31678d800300af2a87d208c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TAKJFFSF%2F20260220%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260220T083946Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCU9UACfpk1pFdkQ91ZqQNflgZU98FvU8dziAd9WmMgqAIhALTkeLCUV9b7%2BiFvWYh2Up0bErK4FYXytSsgNKR%2FtcYQKogECJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxOzurOJIP3nzBUhr0q3APvsaiteq0i7ig7AOha6PcUCPIWxl6AaqTqgC8WwTy1njL9%2FN5JYwRKSujJI7H0QTeB0jgDYeH02%2FguRHDiVUXv%2FZWZPkKD7I84eqv02blIv2Ug%2FFs3IlsBWyBU%2BBur9NXIIYFXPafjNJQufuYb23FKmccUyNONox7EbT2kYVaN8z54oBvTOWc1k31ubcNdiBMYoFNAbp2UB7z%2BV2op9ksewGuNnzCeNlZgeM7iYQcSpKqSeutZbnNX7smKMvndQK1i10Cn7FK57%2BDgkBvF84deENQ4Nb%2BRskkZG0Z67p4%2B0CtzWQ0xQ5BFi20zEPHfGEhfFwTXuuzVYeNE2gIlSKwqBcv7SaDJW6eTdRwXeBMM3ZHjU2fk%2BzHxWW4SNixRVs1MWmizNAoqWNpPL5m2yTJ%2Bw9pMnQ2H8%2B%2F%2F32WXTiSPlEI0hSJKT%2FWAwXJtVMNpjPwjRLPRIMAwIJ%2B2gNdD7KK9qralV4y3rnMpouyCTbVXvJelj7QkZNi%2BMlhY%2F8vjxOuLo0zungK8V%2FTQbjNT1gVaE%2FkwFrY3BVGARkmjmjaGD16CGlXCfjLrUFtgmpo2CaoZut02VFskUzMOJlVHyx%2F1YkgD%2Fe%2FIhl74hMFrlZ2N8XEsNOEcZp4LS2KwWzDgiuDMBjqkAT0K4m0R0SX1f4SvpKRXLYNdnZymtKeVYzfhaDn80xTnbHexASe6We8YkPWW9xlQYZhskxS%2Ft2JPrmueQniHPe7087e6Cv8XYx54gGt1o%2FHx002%2FEtosy1pkjO6XuE5j5xZT67TezAon027sZ4%2B2VWeBP6m%2FHefXUUVZ53fkPNNcDfVmIl%2FYWGh%2Fk%2FzflkoBSGYrtBOhJdanxt8HI2GilZFC9cKk&X-Amz-Signature=a859415a400d6e34e59a3f6d55f107d918a4ca14ea3f863f2f3dc819bc7aa179&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XIJAR7FZ%2F20260220%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260220T083946Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBzeGPAolX1oc0J0WUFbP5At6yaSULWYHmWdcOrsxHxrAiEAysqhOOUuJLfVNfyjTkmZA8JkwAY9xAzLPl0bs4C9NUsqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDChLzhd8uCLTSIHMACrcA8n0FAo2V39J56uJQSybVOXv312t2Nyxl4PR8PxSMyPNCAw78swZSxBXWS%2Fns%2BJNxF9galoQZ0ISXlmBXBTKS389pdp8ICBxqBRzXcmZozfr50aJX2Y0zH5qjYMuDwEJzAtylDE%2FuognKPX3b7ZRMUwsa52XWQ6TOHjp4C04Tt313qyus1VBD9Z%2FGJn0tSMwpjwiZUYComLkW1PIJL%2B36T01TJhepTgx00w2vi6YM4f3uUAqU6xOB5cHv9pVLBzza%2FEQIWffFLOXf3F0C3tpk4RFgYdmgvQXtzPVi7lU4sEQq%2FrRZJABUCDvXdqK5hJK0QnK20A1okZ6EGAauocPXIymvbHOgIf7vJS9%2BjwrKGZfxVKCGjF%2F5H6wxaPgYfNIGwrepOwJNRnA%2FkbQB8rbjTFdwR1AHNLUCN3awGRBbDvgdiw0WN%2BmdfgrdbbXwQVOenDugmwHtHiBuSe6MhZARorRnL7AgCP85iTJMHPxtXV3uMYfFR%2Ft%2FK2AF6w4bha%2FrVWnTsWXlq5rGUy60kKfmqerU17zLINWhEiUGt%2FxCMKAYKJLd9qbMzAfhwJzVh8uTFdAe9W4Vt8SbckeyNi94rxH03yZws4hKgOoPXrOp0geOudrtdtxnHMRi0OdMPm54MwGOqUBdfbikBKD6mEc8WTO%2FmsMo2KnpFAuat8fzhaEVhDBRX3bpWfDxlhHQQVXhOycnAcVW2aLio6npBci5uKrhE55Q9ASKynduKJHilXP537AE2zusytnWAeI%2B9Ff7oLFGl3Oe1YjLergt2SWHJqnlkoabXKq0k25f5%2BXXvNtqfMpOIpOywZoP6eBVl5YpkX0Rly%2B%2FbcRovTmM3%2BW82wO2uTDKHB4SW3H&X-Amz-Signature=ad646b4d87ee61e5b7b39a004e16cbcf0a1e0cc7617515ef652e3e71452dc330&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XIJAR7FZ%2F20260220%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260220T083946Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBzeGPAolX1oc0J0WUFbP5At6yaSULWYHmWdcOrsxHxrAiEAysqhOOUuJLfVNfyjTkmZA8JkwAY9xAzLPl0bs4C9NUsqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDChLzhd8uCLTSIHMACrcA8n0FAo2V39J56uJQSybVOXv312t2Nyxl4PR8PxSMyPNCAw78swZSxBXWS%2Fns%2BJNxF9galoQZ0ISXlmBXBTKS389pdp8ICBxqBRzXcmZozfr50aJX2Y0zH5qjYMuDwEJzAtylDE%2FuognKPX3b7ZRMUwsa52XWQ6TOHjp4C04Tt313qyus1VBD9Z%2FGJn0tSMwpjwiZUYComLkW1PIJL%2B36T01TJhepTgx00w2vi6YM4f3uUAqU6xOB5cHv9pVLBzza%2FEQIWffFLOXf3F0C3tpk4RFgYdmgvQXtzPVi7lU4sEQq%2FrRZJABUCDvXdqK5hJK0QnK20A1okZ6EGAauocPXIymvbHOgIf7vJS9%2BjwrKGZfxVKCGjF%2F5H6wxaPgYfNIGwrepOwJNRnA%2FkbQB8rbjTFdwR1AHNLUCN3awGRBbDvgdiw0WN%2BmdfgrdbbXwQVOenDugmwHtHiBuSe6MhZARorRnL7AgCP85iTJMHPxtXV3uMYfFR%2Ft%2FK2AF6w4bha%2FrVWnTsWXlq5rGUy60kKfmqerU17zLINWhEiUGt%2FxCMKAYKJLd9qbMzAfhwJzVh8uTFdAe9W4Vt8SbckeyNi94rxH03yZws4hKgOoPXrOp0geOudrtdtxnHMRi0OdMPm54MwGOqUBdfbikBKD6mEc8WTO%2FmsMo2KnpFAuat8fzhaEVhDBRX3bpWfDxlhHQQVXhOycnAcVW2aLio6npBci5uKrhE55Q9ASKynduKJHilXP537AE2zusytnWAeI%2B9Ff7oLFGl3Oe1YjLergt2SWHJqnlkoabXKq0k25f5%2BXXvNtqfMpOIpOywZoP6eBVl5YpkX0Rly%2B%2FbcRovTmM3%2BW82wO2uTDKHB4SW3H&X-Amz-Signature=d9647a66d215b89449065a47f8eadef9fb10a71e513f7557d65ac96e0f84716a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XIJAR7FZ%2F20260220%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260220T083946Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBzeGPAolX1oc0J0WUFbP5At6yaSULWYHmWdcOrsxHxrAiEAysqhOOUuJLfVNfyjTkmZA8JkwAY9xAzLPl0bs4C9NUsqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDChLzhd8uCLTSIHMACrcA8n0FAo2V39J56uJQSybVOXv312t2Nyxl4PR8PxSMyPNCAw78swZSxBXWS%2Fns%2BJNxF9galoQZ0ISXlmBXBTKS389pdp8ICBxqBRzXcmZozfr50aJX2Y0zH5qjYMuDwEJzAtylDE%2FuognKPX3b7ZRMUwsa52XWQ6TOHjp4C04Tt313qyus1VBD9Z%2FGJn0tSMwpjwiZUYComLkW1PIJL%2B36T01TJhepTgx00w2vi6YM4f3uUAqU6xOB5cHv9pVLBzza%2FEQIWffFLOXf3F0C3tpk4RFgYdmgvQXtzPVi7lU4sEQq%2FrRZJABUCDvXdqK5hJK0QnK20A1okZ6EGAauocPXIymvbHOgIf7vJS9%2BjwrKGZfxVKCGjF%2F5H6wxaPgYfNIGwrepOwJNRnA%2FkbQB8rbjTFdwR1AHNLUCN3awGRBbDvgdiw0WN%2BmdfgrdbbXwQVOenDugmwHtHiBuSe6MhZARorRnL7AgCP85iTJMHPxtXV3uMYfFR%2Ft%2FK2AF6w4bha%2FrVWnTsWXlq5rGUy60kKfmqerU17zLINWhEiUGt%2FxCMKAYKJLd9qbMzAfhwJzVh8uTFdAe9W4Vt8SbckeyNi94rxH03yZws4hKgOoPXrOp0geOudrtdtxnHMRi0OdMPm54MwGOqUBdfbikBKD6mEc8WTO%2FmsMo2KnpFAuat8fzhaEVhDBRX3bpWfDxlhHQQVXhOycnAcVW2aLio6npBci5uKrhE55Q9ASKynduKJHilXP537AE2zusytnWAeI%2B9Ff7oLFGl3Oe1YjLergt2SWHJqnlkoabXKq0k25f5%2BXXvNtqfMpOIpOywZoP6eBVl5YpkX0Rly%2B%2FbcRovTmM3%2BW82wO2uTDKHB4SW3H&X-Amz-Signature=6cf645bc9d1562f09d31cafd68a133d876b1c39bec95f5ccd1a412b5a265fe54&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XIJAR7FZ%2F20260220%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260220T083946Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBzeGPAolX1oc0J0WUFbP5At6yaSULWYHmWdcOrsxHxrAiEAysqhOOUuJLfVNfyjTkmZA8JkwAY9xAzLPl0bs4C9NUsqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDChLzhd8uCLTSIHMACrcA8n0FAo2V39J56uJQSybVOXv312t2Nyxl4PR8PxSMyPNCAw78swZSxBXWS%2Fns%2BJNxF9galoQZ0ISXlmBXBTKS389pdp8ICBxqBRzXcmZozfr50aJX2Y0zH5qjYMuDwEJzAtylDE%2FuognKPX3b7ZRMUwsa52XWQ6TOHjp4C04Tt313qyus1VBD9Z%2FGJn0tSMwpjwiZUYComLkW1PIJL%2B36T01TJhepTgx00w2vi6YM4f3uUAqU6xOB5cHv9pVLBzza%2FEQIWffFLOXf3F0C3tpk4RFgYdmgvQXtzPVi7lU4sEQq%2FrRZJABUCDvXdqK5hJK0QnK20A1okZ6EGAauocPXIymvbHOgIf7vJS9%2BjwrKGZfxVKCGjF%2F5H6wxaPgYfNIGwrepOwJNRnA%2FkbQB8rbjTFdwR1AHNLUCN3awGRBbDvgdiw0WN%2BmdfgrdbbXwQVOenDugmwHtHiBuSe6MhZARorRnL7AgCP85iTJMHPxtXV3uMYfFR%2Ft%2FK2AF6w4bha%2FrVWnTsWXlq5rGUy60kKfmqerU17zLINWhEiUGt%2FxCMKAYKJLd9qbMzAfhwJzVh8uTFdAe9W4Vt8SbckeyNi94rxH03yZws4hKgOoPXrOp0geOudrtdtxnHMRi0OdMPm54MwGOqUBdfbikBKD6mEc8WTO%2FmsMo2KnpFAuat8fzhaEVhDBRX3bpWfDxlhHQQVXhOycnAcVW2aLio6npBci5uKrhE55Q9ASKynduKJHilXP537AE2zusytnWAeI%2B9Ff7oLFGl3Oe1YjLergt2SWHJqnlkoabXKq0k25f5%2BXXvNtqfMpOIpOywZoP6eBVl5YpkX0Rly%2B%2FbcRovTmM3%2BW82wO2uTDKHB4SW3H&X-Amz-Signature=a4f16d09d212ce7c7c4c1e3057d78f42b92cfb29261e222bdbffe67bb9e7cd88&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667J5V7B4W%2F20260220%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260220T083947Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDA49vT0lhi2y%2FzFXLabkQnGQDKQ7bkgHRY%2F36n3gOHXwIhAKX7t9CxRAebiw2jwHf5fQ%2BjjdDu6U18SjAta4RWMtBbKogECJL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyphSAhU2qnC7hBe5Iq3AN0bpDJhG4%2FmiRCd75F2kcOzqqQ2VK1uNVz0pHJvfaGOEJTmByNmGVTkjicBiVIx6IwYI0LU1NeRxf1Ed4%2Fgd5fpcuTyRMSZzjI6r%2FO9b5Gq1fk%2Bj%2B0NJdf1e0HLc%2F27kahFbKiJjpXUZwEBr1flXO%2FbyIvx2WTZPWSKPpd1ZCule0Z4uWfMyxpwebVSagtj%2Bmij26U1RKXk12979wunSYZWR3LiwJsdXTiRHh88Y2reAAYL0W6o0uH%2FJYpnf6sIoOawAJaSEp4mebvtAglgGmh%2Bu7Q1cXbuWplcQuqt4%2BQYTkv7FHWWdnQDr127p4fmhh%2BuVcs2xaghnWhTsr92xk6e35wTsET%2FpjxQsX%2F6TMS4DUwCNspO0%2Fuhecn7J8x9Ytf90dZVkA7gRrwLcPoarVx0gXMiumHqrjQSbt6QsS2iucN5onSdalOCVwhx1IVaGWSn278IWfBmuri4fyLmq%2F%2FS9jIKj1tZ5IxxdQbXKORxYj%2Bq%2FmlR2VnQtiAk%2B2xoWT6bXOHhkgCn07FXisfqP1gcW6dv%2BEmQP5H8JPLNwiac3tB9ilzfJKujgebU7Dyoil1OPdHu%2F%2BV7kZClYzSX53Ty8%2F5OBghSeYksWR1IG%2FOX5mv4mXTfIDORtvFiDDLuuDMBjqkAbx5H9bTR4%2Bp7gltspYO%2Fev8AIRTgty7qSEgrm04BGLTDphsCvkaZCoY7FnE72mj8aYt18szskNoHbuu2zR4sYtoU9z1sNL8u7VKxmCbeOsNbXfCi7dq0uXg%2FVwaPM3VApZCx29zPpUNUXDFYNDc3XUFpE2KlYR63FZDenV9zoTFbdnrIB2M4tG4t5DnItmK6PjqK1TjbX3MGK7hbhVgaQhYSD5v&X-Amz-Signature=20a8aac83beb0dc51eb9b079c1c2ca04a1df91c1fc700874291a3ff066e490ef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FRMTPA4%2F20260220%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260220T083947Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD163h3Zbu0iNRUyjxX%2BFer8%2BtIADTLB6pc9pX2MgkQvwIgZQquksPgNF1ZS1dr%2B7GUxHZxSVPFKXWdhsIid%2Bfi5CoqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOCMpomVzHILV4h%2BGircAynDPSMw11ISmpo2TIPsqHNUQvFGydHIS6hJNWRsvBs4mdfiLFXBeY6hzquJanLAMhtmnOrM%2FjJSu0QykgUHeA%2B5Il76ep5Br8EvBb5NagRa5HDgM3EIxSGoz2JcNOO%2FriTvIAgsX8zRxVVccoZ5u9taBDnJUBP5RXD0WMmaY0VIZfS8dcKipzT%2BqwJUyrGCbAn0Iv9sd2AkbQBq633NDgNfM0WqMzo0X3h4Ypc45oxcdM2IvBnYvODtZuswHRyM6M6UKSPN%2B7F38cZzZe0IVapAoDveDMS96JA1P%2B9p2i77Xo1jmsrQDMaqpPheQG%2FEv458kmldu3CLs181ANXmpxiehnBGw34Sdj2mWxaJNWd2N3G9MQijCRUH5ox1Lz5D0ASkW99CgpOReKZp9z8aGdBa1BvSk0RvfRjrsTUBLC8OkLN1QqyZFdSftQ0eJT65LLnytQZh5Li6pHp2db0%2BTWp2NKPyogfgwnnMNOegvcx5i1nQrCUyFFUdCxANfg6DM7YLbiAfAx64I0fjKNarFyf%2BBFzKYRq8QbMzD%2FnrBrXw4CNaIXFnRsX12nT7VevOn2hvPSVREh1W%2BPyFQAwJVB%2F%2FYC2e0L8s7WOUW7U%2BRbHfG0A8r8IbV%2BLtWqs6ML664MwGOqUB0dvNCR5mxUxVIA8U4Yej%2BrDnlV2Iucorby3QGrQ5PiOonHCCuepuPQoA2wUikF6wrUYkVCa4OIiXapHoxm55LTGg6GHllXdP0rCDPUPqxZT2UZSVvavKzate%2FjHnS2nNyeritVvLNLHUx2pDRtmQfRCgxBueHku9BQ672EqFcZmCpF4zI2vd6eYp3VUg%2BBim%2FOPoGqd2GVisAFkoE5G3lkKhGAky&X-Amz-Signature=24cc27beb853ec74f0b3e99dfcc118ba4b9c995ee746657f6ada4d4f0e773b59&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FRMTPA4%2F20260220%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260220T083947Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD163h3Zbu0iNRUyjxX%2BFer8%2BtIADTLB6pc9pX2MgkQvwIgZQquksPgNF1ZS1dr%2B7GUxHZxSVPFKXWdhsIid%2Bfi5CoqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOCMpomVzHILV4h%2BGircAynDPSMw11ISmpo2TIPsqHNUQvFGydHIS6hJNWRsvBs4mdfiLFXBeY6hzquJanLAMhtmnOrM%2FjJSu0QykgUHeA%2B5Il76ep5Br8EvBb5NagRa5HDgM3EIxSGoz2JcNOO%2FriTvIAgsX8zRxVVccoZ5u9taBDnJUBP5RXD0WMmaY0VIZfS8dcKipzT%2BqwJUyrGCbAn0Iv9sd2AkbQBq633NDgNfM0WqMzo0X3h4Ypc45oxcdM2IvBnYvODtZuswHRyM6M6UKSPN%2B7F38cZzZe0IVapAoDveDMS96JA1P%2B9p2i77Xo1jmsrQDMaqpPheQG%2FEv458kmldu3CLs181ANXmpxiehnBGw34Sdj2mWxaJNWd2N3G9MQijCRUH5ox1Lz5D0ASkW99CgpOReKZp9z8aGdBa1BvSk0RvfRjrsTUBLC8OkLN1QqyZFdSftQ0eJT65LLnytQZh5Li6pHp2db0%2BTWp2NKPyogfgwnnMNOegvcx5i1nQrCUyFFUdCxANfg6DM7YLbiAfAx64I0fjKNarFyf%2BBFzKYRq8QbMzD%2FnrBrXw4CNaIXFnRsX12nT7VevOn2hvPSVREh1W%2BPyFQAwJVB%2F%2FYC2e0L8s7WOUW7U%2BRbHfG0A8r8IbV%2BLtWqs6ML664MwGOqUB0dvNCR5mxUxVIA8U4Yej%2BrDnlV2Iucorby3QGrQ5PiOonHCCuepuPQoA2wUikF6wrUYkVCa4OIiXapHoxm55LTGg6GHllXdP0rCDPUPqxZT2UZSVvavKzate%2FjHnS2nNyeritVvLNLHUx2pDRtmQfRCgxBueHku9BQ672EqFcZmCpF4zI2vd6eYp3VUg%2BBim%2FOPoGqd2GVisAFkoE5G3lkKhGAky&X-Amz-Signature=db6af24e0edcf15040fd7b505cf3ef5394efa0995b17620b060bb3b29eb81869&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
