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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RW2W56AP%2F20261003%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261003T130237Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAI0XMHCdhAS84IvZHj2%2BPiV%2FLoOKsQ6gYvLGZB6%2BcFdAiA0OvRsWV5oynQFy0TFfeaVeWUbW9inYo0zqX853PPwICqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2FHED9AWwk7Ee%2BXZKKtwD8buuboIpH4c00RgLI3vz6zjU4mZrVpbtSwJZzVJpfvFivEcuWXcsy6T36S76kemyxZcM8zZW0Jiw%2BubAAkucVaWoV9XMfRkATo5neTGETCUGUWFvskjYwbatMjha17iIK8efwTKPzj08%2BYBVPLvfHL1QXS8m%2FovCaPJpumdtWCB%2BI0bCN7JPvjx3PRoU48uldhxSwSatCjLAnpXieTOzMOsub5rMVbQRKpPdG%2B7M8GkSeNaqupXp6mPvYCNvxsK4nWjDpQl3wUvfestMr7FUMn32%2BMCyzRmtNk1D82Vx%2Fcrq1k1zucQoLlKOns2QlIz3AQhLASWavgwNJ3J872G%2FnF6i7CRLDi8pHSpC%2B7H575QnGpQYYFGFd5g2MB7gG%2F3nvmBtL9XgRWhwA%2F1gOzne7F2rYGCzarBYXVTJtsGFT%2BmNLajGP57lPpYR4wwq4s4PzxSEBb1a6JxGjHjmZYPcbqi9cUZb%2BEj%2Fm30GpkIxzmlmkvTst0QHd7vVsEVavc%2Bj0LJLSYSQRJZ6vnbbgqBnEIfmZmJtAKPvrSUNtqUeh4DGlU%2Byj6K62a%2FL4LR403Ru%2FvMjO4y6YpIXFUXmxzmDcqDbQVoMTRUvthugrz%2F76%2BWcDBi7%2Fa1OUZgdb1EwvbGD1gY6pgHb24bKCLUadoDTBQ2HFgxYPqMYWpTUJU0TPYLUtsyCWFQmRU7vShdLuOqruoTSpEI7dRZhHZrdPOrVIhSNSWXWu%2FNZQiaoIQ9lEOpBLRulkpaBOliyiPMn5GXJPUaeXpSlsolappwj2qrT1ijqB%2ByPpugrEWEEK4luqk5PkV%2FrIbd4NLA17ETWlUqAhEBjVdh0Xhvu%2B0H4%2F5PI0Rgdj5APiVZQNhmW&X-Amz-Signature=32241e3865adf842c28fe92a436ae87d81d638cb1115f73499a01ad7304714e0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RW2W56AP%2F20261003%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261003T130237Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAI0XMHCdhAS84IvZHj2%2BPiV%2FLoOKsQ6gYvLGZB6%2BcFdAiA0OvRsWV5oynQFy0TFfeaVeWUbW9inYo0zqX853PPwICqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2FHED9AWwk7Ee%2BXZKKtwD8buuboIpH4c00RgLI3vz6zjU4mZrVpbtSwJZzVJpfvFivEcuWXcsy6T36S76kemyxZcM8zZW0Jiw%2BubAAkucVaWoV9XMfRkATo5neTGETCUGUWFvskjYwbatMjha17iIK8efwTKPzj08%2BYBVPLvfHL1QXS8m%2FovCaPJpumdtWCB%2BI0bCN7JPvjx3PRoU48uldhxSwSatCjLAnpXieTOzMOsub5rMVbQRKpPdG%2B7M8GkSeNaqupXp6mPvYCNvxsK4nWjDpQl3wUvfestMr7FUMn32%2BMCyzRmtNk1D82Vx%2Fcrq1k1zucQoLlKOns2QlIz3AQhLASWavgwNJ3J872G%2FnF6i7CRLDi8pHSpC%2B7H575QnGpQYYFGFd5g2MB7gG%2F3nvmBtL9XgRWhwA%2F1gOzne7F2rYGCzarBYXVTJtsGFT%2BmNLajGP57lPpYR4wwq4s4PzxSEBb1a6JxGjHjmZYPcbqi9cUZb%2BEj%2Fm30GpkIxzmlmkvTst0QHd7vVsEVavc%2Bj0LJLSYSQRJZ6vnbbgqBnEIfmZmJtAKPvrSUNtqUeh4DGlU%2Byj6K62a%2FL4LR403Ru%2FvMjO4y6YpIXFUXmxzmDcqDbQVoMTRUvthugrz%2F76%2BWcDBi7%2Fa1OUZgdb1EwvbGD1gY6pgHb24bKCLUadoDTBQ2HFgxYPqMYWpTUJU0TPYLUtsyCWFQmRU7vShdLuOqruoTSpEI7dRZhHZrdPOrVIhSNSWXWu%2FNZQiaoIQ9lEOpBLRulkpaBOliyiPMn5GXJPUaeXpSlsolappwj2qrT1ijqB%2ByPpugrEWEEK4luqk5PkV%2FrIbd4NLA17ETWlUqAhEBjVdh0Xhvu%2B0H4%2F5PI0Rgdj5APiVZQNhmW&X-Amz-Signature=05eb5def4bd6609d406f5ea38bc6e0bceafd4bd2522e0c90fa090794a4c0a43b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RW2W56AP%2F20261003%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261003T130237Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAI0XMHCdhAS84IvZHj2%2BPiV%2FLoOKsQ6gYvLGZB6%2BcFdAiA0OvRsWV5oynQFy0TFfeaVeWUbW9inYo0zqX853PPwICqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2FHED9AWwk7Ee%2BXZKKtwD8buuboIpH4c00RgLI3vz6zjU4mZrVpbtSwJZzVJpfvFivEcuWXcsy6T36S76kemyxZcM8zZW0Jiw%2BubAAkucVaWoV9XMfRkATo5neTGETCUGUWFvskjYwbatMjha17iIK8efwTKPzj08%2BYBVPLvfHL1QXS8m%2FovCaPJpumdtWCB%2BI0bCN7JPvjx3PRoU48uldhxSwSatCjLAnpXieTOzMOsub5rMVbQRKpPdG%2B7M8GkSeNaqupXp6mPvYCNvxsK4nWjDpQl3wUvfestMr7FUMn32%2BMCyzRmtNk1D82Vx%2Fcrq1k1zucQoLlKOns2QlIz3AQhLASWavgwNJ3J872G%2FnF6i7CRLDi8pHSpC%2B7H575QnGpQYYFGFd5g2MB7gG%2F3nvmBtL9XgRWhwA%2F1gOzne7F2rYGCzarBYXVTJtsGFT%2BmNLajGP57lPpYR4wwq4s4PzxSEBb1a6JxGjHjmZYPcbqi9cUZb%2BEj%2Fm30GpkIxzmlmkvTst0QHd7vVsEVavc%2Bj0LJLSYSQRJZ6vnbbgqBnEIfmZmJtAKPvrSUNtqUeh4DGlU%2Byj6K62a%2FL4LR403Ru%2FvMjO4y6YpIXFUXmxzmDcqDbQVoMTRUvthugrz%2F76%2BWcDBi7%2Fa1OUZgdb1EwvbGD1gY6pgHb24bKCLUadoDTBQ2HFgxYPqMYWpTUJU0TPYLUtsyCWFQmRU7vShdLuOqruoTSpEI7dRZhHZrdPOrVIhSNSWXWu%2FNZQiaoIQ9lEOpBLRulkpaBOliyiPMn5GXJPUaeXpSlsolappwj2qrT1ijqB%2ByPpugrEWEEK4luqk5PkV%2FrIbd4NLA17ETWlUqAhEBjVdh0Xhvu%2B0H4%2F5PI0Rgdj5APiVZQNhmW&X-Amz-Signature=ea38da73901775ca4391244fd0d72fb81642f961e2aed22ca97788f8d11d743a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYQR7EZC%2F20261003%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261003T130238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEWnIddcdr%2Fveq5KvIOBedxpu61yJ3GhABDiFK6Z3IG%2BAiEAl5zec2%2FwwQWb0gMQI%2B%2Ff82lsSxudFE8I540gzCAvfJwqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGpHITvTSMCTGCiNPyrcA0d6DR328cJM%2FP8J0PIJFr1J4GkP3%2FdM%2BWDZUQ3iD5tUUkfHfnKG3XQuU905eNfPkCzzsJ9WD9qTnZHLonYouZR2YuwLJMX91oY1FQtzB7AhSVFqqveb26jAjww4W5peLS%2B6xpI9%2FmKTfBL4aWufgbrq2qCk4S%2FrGCkKNyQuwdXB%2BptJ9ZkZBAR2Lh0%2FMOW9ZKyirKxeJaX5gIzDKfZpn3ztiAsOG9ObU7iknQw3c2wsJ1Xgg%2Fn9M5USv8Y6e1uZfwHA6YF3BhllJ68TqHOuKQOSMD4CofuGZJqk4lCv0mSWF%2BKJvJxy8%2BYtsz6CumZE9tE5eanpo3tkG%2BO66QUXhqniS82ZK%2FZxDuChYzDvWjIhsS7PBofoGovdMjFHK1Mg6dAWg005%2BjuVn1tc%2BNT%2FrwyXwrF2%2BKaOIbUZw8wfj04LipsfqVWbSXt3yHtTpRbHuQjXWHFo0l3X66BZmtZJK699KRx9F3xwblUA49Vu14kZpjJL34pAHIMrPP5cyXQJqFFk3FWfOFMP2%2FJst4jpP2DKU%2F7huzkJEQo%2FSyw0PFGw6tVEQImoCzw9M6D2UU8l%2BmpSSgo%2FIaxw5Aec0CHTnSmOZk0ifewQX%2FNIRDVH5Mw4rSLGy3MBMoQ1IDF%2BMNmzg9YGOqUBwBc5U9EBwYfhu%2FHoU470bumimu0chZUtG2J8j1duLYTEq4ukzzQuQHXs%2BhnHd0uoENZUoqXeWP6xZGZXANeXenYW%2FyE%2Fn6s1wzPidMhibW0K3j7X19odhDJlN%2Bq86HsLhtrCFu%2BSH6ze9G51rodYAhxguvwCcBGLFjOnZutP%2BJR0mXd8FYTt44sbtzde9o3cEbOXBpN2OvEo%2BCoHVb81bxm8%2Bsp3&X-Amz-Signature=802f57aa93a36cfc7c922462ab71a2054450ab0c5530561f80af15ad73df256f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYQR7EZC%2F20261003%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261003T130238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEWnIddcdr%2Fveq5KvIOBedxpu61yJ3GhABDiFK6Z3IG%2BAiEAl5zec2%2FwwQWb0gMQI%2B%2Ff82lsSxudFE8I540gzCAvfJwqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGpHITvTSMCTGCiNPyrcA0d6DR328cJM%2FP8J0PIJFr1J4GkP3%2FdM%2BWDZUQ3iD5tUUkfHfnKG3XQuU905eNfPkCzzsJ9WD9qTnZHLonYouZR2YuwLJMX91oY1FQtzB7AhSVFqqveb26jAjww4W5peLS%2B6xpI9%2FmKTfBL4aWufgbrq2qCk4S%2FrGCkKNyQuwdXB%2BptJ9ZkZBAR2Lh0%2FMOW9ZKyirKxeJaX5gIzDKfZpn3ztiAsOG9ObU7iknQw3c2wsJ1Xgg%2Fn9M5USv8Y6e1uZfwHA6YF3BhllJ68TqHOuKQOSMD4CofuGZJqk4lCv0mSWF%2BKJvJxy8%2BYtsz6CumZE9tE5eanpo3tkG%2BO66QUXhqniS82ZK%2FZxDuChYzDvWjIhsS7PBofoGovdMjFHK1Mg6dAWg005%2BjuVn1tc%2BNT%2FrwyXwrF2%2BKaOIbUZw8wfj04LipsfqVWbSXt3yHtTpRbHuQjXWHFo0l3X66BZmtZJK699KRx9F3xwblUA49Vu14kZpjJL34pAHIMrPP5cyXQJqFFk3FWfOFMP2%2FJst4jpP2DKU%2F7huzkJEQo%2FSyw0PFGw6tVEQImoCzw9M6D2UU8l%2BmpSSgo%2FIaxw5Aec0CHTnSmOZk0ifewQX%2FNIRDVH5Mw4rSLGy3MBMoQ1IDF%2BMNmzg9YGOqUBwBc5U9EBwYfhu%2FHoU470bumimu0chZUtG2J8j1duLYTEq4ukzzQuQHXs%2BhnHd0uoENZUoqXeWP6xZGZXANeXenYW%2FyE%2Fn6s1wzPidMhibW0K3j7X19odhDJlN%2Bq86HsLhtrCFu%2BSH6ze9G51rodYAhxguvwCcBGLFjOnZutP%2BJR0mXd8FYTt44sbtzde9o3cEbOXBpN2OvEo%2BCoHVb81bxm8%2Bsp3&X-Amz-Signature=56f4486bd9ac8947353b8d06570243aa8e669f21280b41e9cb5e4bf68f3581c5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYQR7EZC%2F20261003%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261003T130238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEWnIddcdr%2Fveq5KvIOBedxpu61yJ3GhABDiFK6Z3IG%2BAiEAl5zec2%2FwwQWb0gMQI%2B%2Ff82lsSxudFE8I540gzCAvfJwqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGpHITvTSMCTGCiNPyrcA0d6DR328cJM%2FP8J0PIJFr1J4GkP3%2FdM%2BWDZUQ3iD5tUUkfHfnKG3XQuU905eNfPkCzzsJ9WD9qTnZHLonYouZR2YuwLJMX91oY1FQtzB7AhSVFqqveb26jAjww4W5peLS%2B6xpI9%2FmKTfBL4aWufgbrq2qCk4S%2FrGCkKNyQuwdXB%2BptJ9ZkZBAR2Lh0%2FMOW9ZKyirKxeJaX5gIzDKfZpn3ztiAsOG9ObU7iknQw3c2wsJ1Xgg%2Fn9M5USv8Y6e1uZfwHA6YF3BhllJ68TqHOuKQOSMD4CofuGZJqk4lCv0mSWF%2BKJvJxy8%2BYtsz6CumZE9tE5eanpo3tkG%2BO66QUXhqniS82ZK%2FZxDuChYzDvWjIhsS7PBofoGovdMjFHK1Mg6dAWg005%2BjuVn1tc%2BNT%2FrwyXwrF2%2BKaOIbUZw8wfj04LipsfqVWbSXt3yHtTpRbHuQjXWHFo0l3X66BZmtZJK699KRx9F3xwblUA49Vu14kZpjJL34pAHIMrPP5cyXQJqFFk3FWfOFMP2%2FJst4jpP2DKU%2F7huzkJEQo%2FSyw0PFGw6tVEQImoCzw9M6D2UU8l%2BmpSSgo%2FIaxw5Aec0CHTnSmOZk0ifewQX%2FNIRDVH5Mw4rSLGy3MBMoQ1IDF%2BMNmzg9YGOqUBwBc5U9EBwYfhu%2FHoU470bumimu0chZUtG2J8j1duLYTEq4ukzzQuQHXs%2BhnHd0uoENZUoqXeWP6xZGZXANeXenYW%2FyE%2Fn6s1wzPidMhibW0K3j7X19odhDJlN%2Bq86HsLhtrCFu%2BSH6ze9G51rodYAhxguvwCcBGLFjOnZutP%2BJR0mXd8FYTt44sbtzde9o3cEbOXBpN2OvEo%2BCoHVb81bxm8%2Bsp3&X-Amz-Signature=3d5c444f867f02bb37915ee0966cc02fd1db031f08cc37d73ec504a60522a7f4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYQR7EZC%2F20261003%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261003T130238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEWnIddcdr%2Fveq5KvIOBedxpu61yJ3GhABDiFK6Z3IG%2BAiEAl5zec2%2FwwQWb0gMQI%2B%2Ff82lsSxudFE8I540gzCAvfJwqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGpHITvTSMCTGCiNPyrcA0d6DR328cJM%2FP8J0PIJFr1J4GkP3%2FdM%2BWDZUQ3iD5tUUkfHfnKG3XQuU905eNfPkCzzsJ9WD9qTnZHLonYouZR2YuwLJMX91oY1FQtzB7AhSVFqqveb26jAjww4W5peLS%2B6xpI9%2FmKTfBL4aWufgbrq2qCk4S%2FrGCkKNyQuwdXB%2BptJ9ZkZBAR2Lh0%2FMOW9ZKyirKxeJaX5gIzDKfZpn3ztiAsOG9ObU7iknQw3c2wsJ1Xgg%2Fn9M5USv8Y6e1uZfwHA6YF3BhllJ68TqHOuKQOSMD4CofuGZJqk4lCv0mSWF%2BKJvJxy8%2BYtsz6CumZE9tE5eanpo3tkG%2BO66QUXhqniS82ZK%2FZxDuChYzDvWjIhsS7PBofoGovdMjFHK1Mg6dAWg005%2BjuVn1tc%2BNT%2FrwyXwrF2%2BKaOIbUZw8wfj04LipsfqVWbSXt3yHtTpRbHuQjXWHFo0l3X66BZmtZJK699KRx9F3xwblUA49Vu14kZpjJL34pAHIMrPP5cyXQJqFFk3FWfOFMP2%2FJst4jpP2DKU%2F7huzkJEQo%2FSyw0PFGw6tVEQImoCzw9M6D2UU8l%2BmpSSgo%2FIaxw5Aec0CHTnSmOZk0ifewQX%2FNIRDVH5Mw4rSLGy3MBMoQ1IDF%2BMNmzg9YGOqUBwBc5U9EBwYfhu%2FHoU470bumimu0chZUtG2J8j1duLYTEq4ukzzQuQHXs%2BhnHd0uoENZUoqXeWP6xZGZXANeXenYW%2FyE%2Fn6s1wzPidMhibW0K3j7X19odhDJlN%2Bq86HsLhtrCFu%2BSH6ze9G51rodYAhxguvwCcBGLFjOnZutP%2BJR0mXd8FYTt44sbtzde9o3cEbOXBpN2OvEo%2BCoHVb81bxm8%2Bsp3&X-Amz-Signature=33f8398cb1ab744fa8348c1af7023f57289421bdadcbde107000f4c270ca4877&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46652X4HCVB%2F20261003%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261003T130238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCOtdgFfiQyMBUMDF53%2BVzlz4cQ%2FKFy2sbT8DuvFvFRYQIhANwEOXJUdzHbtV4FxNY7gatQNtyuGLYakBSZ9riuouv6KogECKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwyR4FBOrjRsuG905Yq3AN3jklliaI1iqX3D7jIlSUmnzE5F4PPtzYILIHkcva6Jmf%2FmXHs16frYDSykKwIxpJVerunsRXjqrdeNNDmY5CR25KJDVb%2FhBLi5RHFlmrg53gzxsw9dgg6tSJn7z4c4025i1%2F7hrM0GVBAjNu%2FdOsAswx%2F1lk8CKXsG81t0qHGKZueqtpCBlgCmh1xSJPm6TJem4MDWbQ6Z38n2I62iOgCCBOlfQCy%2Fak0aeAJRRBTFKumw3OgMW8ni0495%2BHhfuyH3vCp6Ccmo6sU1dEskxAAfaqF01JyyrfPAKz4WcwiKv1O4WkX9MgdxdqzfWYOe2GXZps5yMbI7XofUuRqVj6yXp9iuOEjR%2B9FlPcZplRo5vXY3yV9dLrq%2FtpZMC%2FWave3SgEKePoQRAbnJIhKHIw%2BFI85Q8D4xCY7SP1jD9AxGa3Cl8a6ZVEhhLnIP9kU%2B7lK68dFg1RuPGxbL%2Bme97Sh1LiC4fU5bzttaxAc93DwdctCilT8xWXcAQsvf2WtCwPpFfVUxa0WEmlAF0vnMXOIx0Bd4QloaKuwCOHf5qFTrO0MDZFq3FDbUq3KPb0xydDvMVvAQPnuYr6Z059olhxMT0oVRd4vK6zJXal%2BNZ%2BP%2FoGhr9GHW3U8Mt93dTDrsYPWBjqkAQM2GlF1PA9egpB2ECfBrVUN8sLLA7FcDMO1n4NzfEKR6%2B0J87xr97B7D0VwZRGAYzhy1lIKeNrpPDxbAfve%2BC55QOX7XYzY946d060ZD%2Fep5t%2BzH8Da%2BC03SIhCjvkvDHhlaoQKfh%2FsGr9mJBZSIqFYlYBqNTRtwqjc2bcIUkYF6KU1qW0eYBDcaixRATJV%2BN0rbNVSO%2B4c7AgNyB4Thl9FYsmj&X-Amz-Signature=e8ae1938dda2bf73a165aa74562612db2cdb3f8e0c2ef90d92feff9a70cbd0cb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665MA3AHCH%2F20261003%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261003T130238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEZYQJtpGu%2Fhj1HKElQ4G1BlAii1P9p%2BnX0%2FEMaEoOQXAiBChCWerVk3a3qmyQZC4oXPkVfJAgnAKTAoOcpOWVkTgSqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMwlndoILnmgjRr3S5KtwD%2BuQY2mGwXqdYDvQSl5Qbf6LYQ8rlzcEUpzBdY%2FwCpDp3mliiRlpfX%2FY7tg3nuL%2FhjDjpzhh%2FYsqX590hM35jWrWHg%2BPf43W4Q49mQdhUdzEadAO5FpNfhmPdJcOVz4Q%2BWfAATh%2BBUOyvPPDzktR3hZOb4IwwNr5qOr5cA30lna5NBm0lerUlSKYPR1niBqsN9yW%2FHCCPLypQMBI7xXO0N1tzUmHC8GBVBZfYsSbAvTVkaTsxoq8ya1qI%2BSAXTcu8ndPvQq0QvI%2FSIVkhHlXy1MtZHCVhK8dooifASYfmeMizXyRTFw9p1i1rHnw1Q86MzuKYF4Vt4vrMvPWVerPH2sw%2Bzr1GUwx2I4YWRH2mGXZyHNp%2BXDTYjeMMhSQvVDk0eHcNGpL%2Fzzhyhxxwt7nRD0UE9lZufXB2o%2Bp8BgqBY9qDMlhKWjb0HVvg3d3Uvam4SelcT6iATlYczBYV%2Fd57cdkk0T58UG%2FUQcy14NqSo3Gzh8gAd1fNYKllGAhDw1pToyDWTX4U6In0ge6Y0U3vH3Ktd3%2Bhx%2B86V%2BGw2TRTBg1fJzmel7KYSTmHvWO4m90TVWoVzcU4C1Ovs%2BI2MAFZhufqP2F4cD81OvK5OL1c0PMR9Yd1LIcJKUKQFwEwl7SD1gY6pgFUBHf2%2B5t5%2BYcc5eIlsa94Yeeat4nx%2BUWhhur2hLhujSMHljxBAMbhoCJTNF%2Fe2UmJChnCUnEA%2FS3uMhyh4dZ4vyvALpqygzvw%2FRCb1nKcYQZLb%2BbNVPJiy7WXia5GiIUVKK89nL172C%2FSpR%2F7yHobLjhcQEl%2FFOEMXLXNfMswN8rMsAiLh1bCSelURnYS8NBS0IdKX2kh45LKurY3bkK7SLfiRats&X-Amz-Signature=9de8ee9929dbb7e51a35cf478251ec78a80c013570b5b1b91816f78a711d03c2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665MA3AHCH%2F20261003%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261003T130238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEZYQJtpGu%2Fhj1HKElQ4G1BlAii1P9p%2BnX0%2FEMaEoOQXAiBChCWerVk3a3qmyQZC4oXPkVfJAgnAKTAoOcpOWVkTgSqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMwlndoILnmgjRr3S5KtwD%2BuQY2mGwXqdYDvQSl5Qbf6LYQ8rlzcEUpzBdY%2FwCpDp3mliiRlpfX%2FY7tg3nuL%2FhjDjpzhh%2FYsqX590hM35jWrWHg%2BPf43W4Q49mQdhUdzEadAO5FpNfhmPdJcOVz4Q%2BWfAATh%2BBUOyvPPDzktR3hZOb4IwwNr5qOr5cA30lna5NBm0lerUlSKYPR1niBqsN9yW%2FHCCPLypQMBI7xXO0N1tzUmHC8GBVBZfYsSbAvTVkaTsxoq8ya1qI%2BSAXTcu8ndPvQq0QvI%2FSIVkhHlXy1MtZHCVhK8dooifASYfmeMizXyRTFw9p1i1rHnw1Q86MzuKYF4Vt4vrMvPWVerPH2sw%2Bzr1GUwx2I4YWRH2mGXZyHNp%2BXDTYjeMMhSQvVDk0eHcNGpL%2Fzzhyhxxwt7nRD0UE9lZufXB2o%2Bp8BgqBY9qDMlhKWjb0HVvg3d3Uvam4SelcT6iATlYczBYV%2Fd57cdkk0T58UG%2FUQcy14NqSo3Gzh8gAd1fNYKllGAhDw1pToyDWTX4U6In0ge6Y0U3vH3Ktd3%2Bhx%2B86V%2BGw2TRTBg1fJzmel7KYSTmHvWO4m90TVWoVzcU4C1Ovs%2BI2MAFZhufqP2F4cD81OvK5OL1c0PMR9Yd1LIcJKUKQFwEwl7SD1gY6pgFUBHf2%2B5t5%2BYcc5eIlsa94Yeeat4nx%2BUWhhur2hLhujSMHljxBAMbhoCJTNF%2Fe2UmJChnCUnEA%2FS3uMhyh4dZ4vyvALpqygzvw%2FRCb1nKcYQZLb%2BbNVPJiy7WXia5GiIUVKK89nL172C%2FSpR%2F7yHobLjhcQEl%2FFOEMXLXNfMswN8rMsAiLh1bCSelURnYS8NBS0IdKX2kh45LKurY3bkK7SLfiRats&X-Amz-Signature=53057ec986ba86b19816ec93440ab5a1d6af3c21dbefa35bac75f16d70837a92&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
