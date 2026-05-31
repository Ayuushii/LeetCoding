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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46634DYDVR3%2F20260531%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260531T101457Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJIMEYCIQCMSPEPqojadXC8WIR9wThyokzhCURSmGM2VElk7O3hlgIhAKOm2ON6It8ZnCbmus0k3A4EbdwObKH%2BiEowW0tt0aUEKogECPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx41DSZJbb6jNzdhNsq3AMWkqVOQK%2FJYLQ90Zak4XT%2B79Rax%2F1Z8N8i2bQ6Ur6wVjT1v1eDwZrajQzrruBRlvb%2B9Kkz3fukZPzpaxHV4%2FJSPULTpcEJhbLyOgG9xNsse9EOLepOxsgiMl4TowqAt91aSxrl1crT6RyOIQolb9vghbFCY7Ffip%2Fkg3mwRtWOTwLQg%2B6XLsg%2F9jBM5Y6fAxj%2B9VD%2FohNyN9JtSHARX%2BclLZwrILsGFJgUq8VVsQh4D40uE2RVrngvx26Ka9JXqsLyRr89UxxpDZnwhNvoA9fbDUxJ9svW0Vk16EzEtYM8vqWFcJM6ncqfZLu40az6HzOWt%2FFwY%2F0UbWiAFKLANXLFZwuV19ezNsmGeN%2FIIA%2FqNnt784KN2hs90%2B5QOIryum5uXzqKbm7Ez1n%2FgdlyUrJba6oW8E8vOf2ftQWlYUdtO42NjKZcuDrpnh3ic77vqoEC7MTuyxUUpA8fuup3rT%2F4r8sPumr%2FPcepv3mTw1QGd7AInY3MUtm99n%2FM9cn%2F2fpwTqAc3w2mVvi4IJ918JELi6821MFK3iGPkXQiPRDYhwqG4LXuDUfNf4zY1rqW%2FwUmMjYb1HbiHYx6sECOxFtg1GrJau6U4vDHpX8f3b4lcGZ9OXBWImPjoEVlMzCEjPDQBjqkAcuMmh6ivrUjwImmgDNZamcg%2BG7rMyGtUwYd4xgMNHj1dd%2FuSuXNQgYLDU5ggtUmhY0SYkFhHuqpyxH7lKDKKnkOiYMrnQ31x9PESmRhUsCNS8Pv5FyEDzF9qFlmhNDN6jJviU1S25%2BfRFa02jB7M1yFt7Bb5x%2BivYZvWXktUBOsrGTdVPKh9vwi6Q2T14n3FiqolTz3OsAZ01oHt749n74vVlgL&X-Amz-Signature=34a8866a4f846c60a2989c5c47412900fa45b8d67283483cf8b4737701334e7a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46634DYDVR3%2F20260531%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260531T101457Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJIMEYCIQCMSPEPqojadXC8WIR9wThyokzhCURSmGM2VElk7O3hlgIhAKOm2ON6It8ZnCbmus0k3A4EbdwObKH%2BiEowW0tt0aUEKogECPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx41DSZJbb6jNzdhNsq3AMWkqVOQK%2FJYLQ90Zak4XT%2B79Rax%2F1Z8N8i2bQ6Ur6wVjT1v1eDwZrajQzrruBRlvb%2B9Kkz3fukZPzpaxHV4%2FJSPULTpcEJhbLyOgG9xNsse9EOLepOxsgiMl4TowqAt91aSxrl1crT6RyOIQolb9vghbFCY7Ffip%2Fkg3mwRtWOTwLQg%2B6XLsg%2F9jBM5Y6fAxj%2B9VD%2FohNyN9JtSHARX%2BclLZwrILsGFJgUq8VVsQh4D40uE2RVrngvx26Ka9JXqsLyRr89UxxpDZnwhNvoA9fbDUxJ9svW0Vk16EzEtYM8vqWFcJM6ncqfZLu40az6HzOWt%2FFwY%2F0UbWiAFKLANXLFZwuV19ezNsmGeN%2FIIA%2FqNnt784KN2hs90%2B5QOIryum5uXzqKbm7Ez1n%2FgdlyUrJba6oW8E8vOf2ftQWlYUdtO42NjKZcuDrpnh3ic77vqoEC7MTuyxUUpA8fuup3rT%2F4r8sPumr%2FPcepv3mTw1QGd7AInY3MUtm99n%2FM9cn%2F2fpwTqAc3w2mVvi4IJ918JELi6821MFK3iGPkXQiPRDYhwqG4LXuDUfNf4zY1rqW%2FwUmMjYb1HbiHYx6sECOxFtg1GrJau6U4vDHpX8f3b4lcGZ9OXBWImPjoEVlMzCEjPDQBjqkAcuMmh6ivrUjwImmgDNZamcg%2BG7rMyGtUwYd4xgMNHj1dd%2FuSuXNQgYLDU5ggtUmhY0SYkFhHuqpyxH7lKDKKnkOiYMrnQ31x9PESmRhUsCNS8Pv5FyEDzF9qFlmhNDN6jJviU1S25%2BfRFa02jB7M1yFt7Bb5x%2BivYZvWXktUBOsrGTdVPKh9vwi6Q2T14n3FiqolTz3OsAZ01oHt749n74vVlgL&X-Amz-Signature=1770d1114e7dff0d05d093b3f82dc46c0b341cb2e532d48b30e0d619a3a8d9e1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46634DYDVR3%2F20260531%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260531T101457Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJIMEYCIQCMSPEPqojadXC8WIR9wThyokzhCURSmGM2VElk7O3hlgIhAKOm2ON6It8ZnCbmus0k3A4EbdwObKH%2BiEowW0tt0aUEKogECPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx41DSZJbb6jNzdhNsq3AMWkqVOQK%2FJYLQ90Zak4XT%2B79Rax%2F1Z8N8i2bQ6Ur6wVjT1v1eDwZrajQzrruBRlvb%2B9Kkz3fukZPzpaxHV4%2FJSPULTpcEJhbLyOgG9xNsse9EOLepOxsgiMl4TowqAt91aSxrl1crT6RyOIQolb9vghbFCY7Ffip%2Fkg3mwRtWOTwLQg%2B6XLsg%2F9jBM5Y6fAxj%2B9VD%2FohNyN9JtSHARX%2BclLZwrILsGFJgUq8VVsQh4D40uE2RVrngvx26Ka9JXqsLyRr89UxxpDZnwhNvoA9fbDUxJ9svW0Vk16EzEtYM8vqWFcJM6ncqfZLu40az6HzOWt%2FFwY%2F0UbWiAFKLANXLFZwuV19ezNsmGeN%2FIIA%2FqNnt784KN2hs90%2B5QOIryum5uXzqKbm7Ez1n%2FgdlyUrJba6oW8E8vOf2ftQWlYUdtO42NjKZcuDrpnh3ic77vqoEC7MTuyxUUpA8fuup3rT%2F4r8sPumr%2FPcepv3mTw1QGd7AInY3MUtm99n%2FM9cn%2F2fpwTqAc3w2mVvi4IJ918JELi6821MFK3iGPkXQiPRDYhwqG4LXuDUfNf4zY1rqW%2FwUmMjYb1HbiHYx6sECOxFtg1GrJau6U4vDHpX8f3b4lcGZ9OXBWImPjoEVlMzCEjPDQBjqkAcuMmh6ivrUjwImmgDNZamcg%2BG7rMyGtUwYd4xgMNHj1dd%2FuSuXNQgYLDU5ggtUmhY0SYkFhHuqpyxH7lKDKKnkOiYMrnQ31x9PESmRhUsCNS8Pv5FyEDzF9qFlmhNDN6jJviU1S25%2BfRFa02jB7M1yFt7Bb5x%2BivYZvWXktUBOsrGTdVPKh9vwi6Q2T14n3FiqolTz3OsAZ01oHt749n74vVlgL&X-Amz-Signature=f1b817c6c02bd0892b84ae979e964c8ca7b6c2577b48e4753e2f51d46b94bab2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665M2PNV7G%2F20260531%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260531T101458Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJHMEUCIQCeuidCdGETRMi3sfC60FWgCmqxzjB3XOxAO8HOBdEWtQIgC1NrPU6qwhh5DKyYUJoAT3rQmlyz3nAasZOyPRNTJV0qiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDI58YiKXnClhdvpM2SrcA1UuYjLI9vn3cMols50zYeXTR%2BzMdUj%2BJu8ZjpZmpVAIANwftDY3LQKQr%2FNedpeMLkmtTqGZttGQsZpuCRu%2Bk1FioctNVEiKHeZw%2BbgmRjNtZAcztMMkTRRmPq2WQ43NhKcZmUOh43E1%2BW2yVgRpiCZ0LtqAgFpF0JPVmSf6T1jsDpcKzRcCkTmbEhHnPBXybKtzKY%2BKFLKgk3Qp46lCsgan%2F7gS0Y730OwBV2IANz0TdWr%2BWuZ%2FpP0IWiBlD1deKPtBCbzP5Pj7S0mNH3dM1L8CScr2o8rtNScpi2Xg89UAVXdwq1YDqled6v7g6Aqvcge%2BKbBV8CgOC%2F2%2BCLgtoIYi596wnvRf8VmOiEcbKRIkx5RkZSKH7x6tmYSAK4aaSgFMTybufjTcpumuuXnqCWKlik18fv1QKL5nQdI8oaBjHlSqw%2F4YaREzEbORr37M0Z2tCoK4SbwMZS3T1fGZLepcfIVux4jkiBMKnJu6CDZRsmVv6IAbA%2FwdK8fVJvRuMCN7iUr8T1YpoJSTU%2Fr8cQR3Y1jl9qsyvVXDe4tZ6gT5RMcOir9bQYf3sIm175cIZ6S0zQc%2B1y%2BuGVdC4X0m4QblYW1koiK9EZ%2BAXntyKmfpSl2xE%2Btkp9Z1AfjEML6M8NAGOqUBNG9%2F46M7qj4iiiuTBPws384WoUTZl8jQoZ80ezcIyQyrO5ezdwJ6pPxpmC4FgyUY0et7Au9kDUJgeulcy7VGKT75IE8GXz0lfFcGzuhuSu9R1jd6SlrYsSgzaI5UlN%2F0IIIy8iVkRAXmIo36FEoukHEDxGlIfIUu%2BXs2S28Y9gw1%2BBeSPcdgc75HAkxEOzfXroTNehSppKBLd9cpRlAM1npbM4rb&X-Amz-Signature=43de40c7ca2bbad37b0b1106119c3c3af6d473ce8154f23eafda40275d3636b4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665M2PNV7G%2F20260531%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260531T101458Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJHMEUCIQCeuidCdGETRMi3sfC60FWgCmqxzjB3XOxAO8HOBdEWtQIgC1NrPU6qwhh5DKyYUJoAT3rQmlyz3nAasZOyPRNTJV0qiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDI58YiKXnClhdvpM2SrcA1UuYjLI9vn3cMols50zYeXTR%2BzMdUj%2BJu8ZjpZmpVAIANwftDY3LQKQr%2FNedpeMLkmtTqGZttGQsZpuCRu%2Bk1FioctNVEiKHeZw%2BbgmRjNtZAcztMMkTRRmPq2WQ43NhKcZmUOh43E1%2BW2yVgRpiCZ0LtqAgFpF0JPVmSf6T1jsDpcKzRcCkTmbEhHnPBXybKtzKY%2BKFLKgk3Qp46lCsgan%2F7gS0Y730OwBV2IANz0TdWr%2BWuZ%2FpP0IWiBlD1deKPtBCbzP5Pj7S0mNH3dM1L8CScr2o8rtNScpi2Xg89UAVXdwq1YDqled6v7g6Aqvcge%2BKbBV8CgOC%2F2%2BCLgtoIYi596wnvRf8VmOiEcbKRIkx5RkZSKH7x6tmYSAK4aaSgFMTybufjTcpumuuXnqCWKlik18fv1QKL5nQdI8oaBjHlSqw%2F4YaREzEbORr37M0Z2tCoK4SbwMZS3T1fGZLepcfIVux4jkiBMKnJu6CDZRsmVv6IAbA%2FwdK8fVJvRuMCN7iUr8T1YpoJSTU%2Fr8cQR3Y1jl9qsyvVXDe4tZ6gT5RMcOir9bQYf3sIm175cIZ6S0zQc%2B1y%2BuGVdC4X0m4QblYW1koiK9EZ%2BAXntyKmfpSl2xE%2Btkp9Z1AfjEML6M8NAGOqUBNG9%2F46M7qj4iiiuTBPws384WoUTZl8jQoZ80ezcIyQyrO5ezdwJ6pPxpmC4FgyUY0et7Au9kDUJgeulcy7VGKT75IE8GXz0lfFcGzuhuSu9R1jd6SlrYsSgzaI5UlN%2F0IIIy8iVkRAXmIo36FEoukHEDxGlIfIUu%2BXs2S28Y9gw1%2BBeSPcdgc75HAkxEOzfXroTNehSppKBLd9cpRlAM1npbM4rb&X-Amz-Signature=218a1682c0ef3602ccae4ae47f74f3a37a263662268872f47742858cf5c14752&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665M2PNV7G%2F20260531%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260531T101458Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJHMEUCIQCeuidCdGETRMi3sfC60FWgCmqxzjB3XOxAO8HOBdEWtQIgC1NrPU6qwhh5DKyYUJoAT3rQmlyz3nAasZOyPRNTJV0qiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDI58YiKXnClhdvpM2SrcA1UuYjLI9vn3cMols50zYeXTR%2BzMdUj%2BJu8ZjpZmpVAIANwftDY3LQKQr%2FNedpeMLkmtTqGZttGQsZpuCRu%2Bk1FioctNVEiKHeZw%2BbgmRjNtZAcztMMkTRRmPq2WQ43NhKcZmUOh43E1%2BW2yVgRpiCZ0LtqAgFpF0JPVmSf6T1jsDpcKzRcCkTmbEhHnPBXybKtzKY%2BKFLKgk3Qp46lCsgan%2F7gS0Y730OwBV2IANz0TdWr%2BWuZ%2FpP0IWiBlD1deKPtBCbzP5Pj7S0mNH3dM1L8CScr2o8rtNScpi2Xg89UAVXdwq1YDqled6v7g6Aqvcge%2BKbBV8CgOC%2F2%2BCLgtoIYi596wnvRf8VmOiEcbKRIkx5RkZSKH7x6tmYSAK4aaSgFMTybufjTcpumuuXnqCWKlik18fv1QKL5nQdI8oaBjHlSqw%2F4YaREzEbORr37M0Z2tCoK4SbwMZS3T1fGZLepcfIVux4jkiBMKnJu6CDZRsmVv6IAbA%2FwdK8fVJvRuMCN7iUr8T1YpoJSTU%2Fr8cQR3Y1jl9qsyvVXDe4tZ6gT5RMcOir9bQYf3sIm175cIZ6S0zQc%2B1y%2BuGVdC4X0m4QblYW1koiK9EZ%2BAXntyKmfpSl2xE%2Btkp9Z1AfjEML6M8NAGOqUBNG9%2F46M7qj4iiiuTBPws384WoUTZl8jQoZ80ezcIyQyrO5ezdwJ6pPxpmC4FgyUY0et7Au9kDUJgeulcy7VGKT75IE8GXz0lfFcGzuhuSu9R1jd6SlrYsSgzaI5UlN%2F0IIIy8iVkRAXmIo36FEoukHEDxGlIfIUu%2BXs2S28Y9gw1%2BBeSPcdgc75HAkxEOzfXroTNehSppKBLd9cpRlAM1npbM4rb&X-Amz-Signature=6b6744dfe9d5a4778da3570c7864a53ce560d58c87e91ab4a5e61bb72901e77a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665M2PNV7G%2F20260531%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260531T101458Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJHMEUCIQCeuidCdGETRMi3sfC60FWgCmqxzjB3XOxAO8HOBdEWtQIgC1NrPU6qwhh5DKyYUJoAT3rQmlyz3nAasZOyPRNTJV0qiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDI58YiKXnClhdvpM2SrcA1UuYjLI9vn3cMols50zYeXTR%2BzMdUj%2BJu8ZjpZmpVAIANwftDY3LQKQr%2FNedpeMLkmtTqGZttGQsZpuCRu%2Bk1FioctNVEiKHeZw%2BbgmRjNtZAcztMMkTRRmPq2WQ43NhKcZmUOh43E1%2BW2yVgRpiCZ0LtqAgFpF0JPVmSf6T1jsDpcKzRcCkTmbEhHnPBXybKtzKY%2BKFLKgk3Qp46lCsgan%2F7gS0Y730OwBV2IANz0TdWr%2BWuZ%2FpP0IWiBlD1deKPtBCbzP5Pj7S0mNH3dM1L8CScr2o8rtNScpi2Xg89UAVXdwq1YDqled6v7g6Aqvcge%2BKbBV8CgOC%2F2%2BCLgtoIYi596wnvRf8VmOiEcbKRIkx5RkZSKH7x6tmYSAK4aaSgFMTybufjTcpumuuXnqCWKlik18fv1QKL5nQdI8oaBjHlSqw%2F4YaREzEbORr37M0Z2tCoK4SbwMZS3T1fGZLepcfIVux4jkiBMKnJu6CDZRsmVv6IAbA%2FwdK8fVJvRuMCN7iUr8T1YpoJSTU%2Fr8cQR3Y1jl9qsyvVXDe4tZ6gT5RMcOir9bQYf3sIm175cIZ6S0zQc%2B1y%2BuGVdC4X0m4QblYW1koiK9EZ%2BAXntyKmfpSl2xE%2Btkp9Z1AfjEML6M8NAGOqUBNG9%2F46M7qj4iiiuTBPws384WoUTZl8jQoZ80ezcIyQyrO5ezdwJ6pPxpmC4FgyUY0et7Au9kDUJgeulcy7VGKT75IE8GXz0lfFcGzuhuSu9R1jd6SlrYsSgzaI5UlN%2F0IIIy8iVkRAXmIo36FEoukHEDxGlIfIUu%2BXs2S28Y9gw1%2BBeSPcdgc75HAkxEOzfXroTNehSppKBLd9cpRlAM1npbM4rb&X-Amz-Signature=c2be8b6b3f1b1e25984a8342e1f0fc975ecebb95a319bc5cee0d7c725ec0f0fd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XJ4RAYN4%2F20260531%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260531T101459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIEMyFRiajLgq3VWWFE2xj7zQC5bWHkEr%2F1KlCazCrO38AiAaRgCRhsDqxIRLQqzSun4O8FPmeETv1fp6AXrgopNxciqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM5cbXf9E9BCGcfKB6KtwDujtkvAvS0OJJgK3CsL27nM4rLAxhTIjK7mCXIMA93O3ddyTMHL0DXcto%2BDpEpEUwHdT1pZ%2FhtqeJt3kS2n6Qp2sKoOM%2FY1KF5HKBd4iIpm8S%2BNsq1Z0pU7wDM6xWz5ZX5%2F05E%2BdZK1%2FbCJ0JXOUyHwhJPSC4IWgrH585z4S2rtD8rlRHb90EO46%2F1ErJiqSOLKCf%2FaCbAliP7wMRRXdb54aBGe%2FEpCiLdo9jVSezXsNdr6VWH4Ye%2F78cpGcO2fDxS54OxWGmPF2dNF4QBs%2B6wwUmvZDPA8qdaJN01eCEtSVbwe0ri%2BbU2Q7tBNwzQvFxITXf4fs8hCOCyRqcEDtaYmn8GAGAnAspDtysSAbKNGxYJypesXK7bO8ESFuYJjRCarK22px5z1aQVtC2kvrlVHDnhRtEmuGMSFzTGrEuDXRcRf%2F8CEvyfTA3H2xubEGnaOlzeeAI2Y39F%2BICqcXSYEwPqilGCD9hykh2gvILF7voUXvGSHRnq%2BofuYzwCCbxjMqv4u4xFvXukCy7CYYw2L%2By6Db9PUmGEWRYQR9yiQoh2peqw1KpnWrZ0ddIUIriF9ab83LVuhldXhemIxjXEvR5yLrK%2Bz%2FgHtKqkRqSjtn724c1SEx9Ze5NHnMwr47w0AY6pgGAsed6lm8LhGwkZdSd8fW%2FNgtk9ChTovli6L09R5nxl483ujJO5LLB3w9X49SKvsIrZ0hpN5CpX2oXcajIx3Oc5P5WJnI6b97Lc39jN8GXsdptzr2emxwpFfO%2BDTTJDtYAiCPoi7l7E0PPQIDSbSWvFRQuf42Xm%2FVoPL%2BEhqHJfIgcxZzyQtlBZ457L4lw8Z9%2FXem7U8aNNaU7vEyIuZCyz0lRPkt8&X-Amz-Signature=a7bd2eb2cc9ef889d6335166712047c649242897bac146fc30b0f0d5aca771b3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WULA6G7X%2F20260531%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260531T101459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJHMEUCIDzRIdATRp1XiV%2Bo7A%2FFLHFdUSdNym8xXe1J7tiWdjqOAiEA5I10PXpF6wGD7u52D06%2Fnj1%2BaRR7rA7W6DyXfNhYmZ4qiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMxLLbyB2Qm7mDcXaSrcA62%2Fm5Km9vOQg39gi6zep7GjDKlPj9OSKzM1RaTNP%2B8SQS4o7OwIbjVUplp3H%2BP3ZpknLGjG%2FvtK%2BbwYbkoptULGw7Si5ALsQa4q9OY59IVFqamif6WlRwIxwGJHYg%2FJtU35kw%2FOc69BEF0CdRDmI3G5a3BIbZt%2B9dGuBRy9lInrbEWKnjmctGQtVhNrz29dl%2BzZm8JNZEeqALYLVitAIlzYSaA1zLJEL05In78WOQMh6FDUmEvx928SW4NxOiCpJSk7E6I0nSnVgncSsoH3o0yjuPVVm%2B%2BnxOPV5ZcgajwNaQYcSqyOCrdiMvrI5fPmjkT%2Bbk7ZgLpe8CpZpv%2FZpTST4XTJoSZxkvTZ1A%2B2aXqVw3yu7wXxUzjL6qR5H%2BvyM9a0PTz79BiTAZPyA2H0LP4QPKFSN8xWQTl%2Fu3k83pLarXuF4DJLtxrFwWXhSp3fOclc55ADXYkC%2BJtkML2CSVVKowGMFih%2B%2F%2BQW4Nzcg0ASjWOJJbGxaeuNQ6%2BJDJjs6vgaWk3ZwqME3MSnoh5zY8fB5vam00dBwUBqkgohI7wvoOch4aXOjouIrDIYhMEee1oP5Mjbhgwf5ZP7aZqweWsf%2BkAGJDG%2FpfuJ8FdhXeNDytSD726rewtU6aTeMIiM8NAGOqUBQGHbhpZlFpWnjsPOjLVV5yEmPEKeqmcjDhQLU2C0RQOLVAgkVITE6FLUaadKcXLGr2kSVebnwlW%2Fxyjl4b%2Fp4unai5LKSHkxEfTiO0G3zeFX1xz2e1%2BNAWyYyRoCuWhpl7hjvD3UtVm7EEZowvnRlM%2BEwvRsDlBzSEOUhFCi8JC57HuYsBCqbfr7Ef4tfosb53WPO8BMDtjvcKB4Wpim%2BEIGHQ9d&X-Amz-Signature=1cad018af1db950a5ad012af4409280de284f9f8d669350207e9760d04ce1e24&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WULA6G7X%2F20260531%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260531T101459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJHMEUCIDzRIdATRp1XiV%2Bo7A%2FFLHFdUSdNym8xXe1J7tiWdjqOAiEA5I10PXpF6wGD7u52D06%2Fnj1%2BaRR7rA7W6DyXfNhYmZ4qiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMxLLbyB2Qm7mDcXaSrcA62%2Fm5Km9vOQg39gi6zep7GjDKlPj9OSKzM1RaTNP%2B8SQS4o7OwIbjVUplp3H%2BP3ZpknLGjG%2FvtK%2BbwYbkoptULGw7Si5ALsQa4q9OY59IVFqamif6WlRwIxwGJHYg%2FJtU35kw%2FOc69BEF0CdRDmI3G5a3BIbZt%2B9dGuBRy9lInrbEWKnjmctGQtVhNrz29dl%2BzZm8JNZEeqALYLVitAIlzYSaA1zLJEL05In78WOQMh6FDUmEvx928SW4NxOiCpJSk7E6I0nSnVgncSsoH3o0yjuPVVm%2B%2BnxOPV5ZcgajwNaQYcSqyOCrdiMvrI5fPmjkT%2Bbk7ZgLpe8CpZpv%2FZpTST4XTJoSZxkvTZ1A%2B2aXqVw3yu7wXxUzjL6qR5H%2BvyM9a0PTz79BiTAZPyA2H0LP4QPKFSN8xWQTl%2Fu3k83pLarXuF4DJLtxrFwWXhSp3fOclc55ADXYkC%2BJtkML2CSVVKowGMFih%2B%2F%2BQW4Nzcg0ASjWOJJbGxaeuNQ6%2BJDJjs6vgaWk3ZwqME3MSnoh5zY8fB5vam00dBwUBqkgohI7wvoOch4aXOjouIrDIYhMEee1oP5Mjbhgwf5ZP7aZqweWsf%2BkAGJDG%2FpfuJ8FdhXeNDytSD726rewtU6aTeMIiM8NAGOqUBQGHbhpZlFpWnjsPOjLVV5yEmPEKeqmcjDhQLU2C0RQOLVAgkVITE6FLUaadKcXLGr2kSVebnwlW%2Fxyjl4b%2Fp4unai5LKSHkxEfTiO0G3zeFX1xz2e1%2BNAWyYyRoCuWhpl7hjvD3UtVm7EEZowvnRlM%2BEwvRsDlBzSEOUhFCi8JC57HuYsBCqbfr7Ef4tfosb53WPO8BMDtjvcKB4Wpim%2BEIGHQ9d&X-Amz-Signature=bb0995c4ada51a62dc78c45b92bd6347ca9c87abbcb00ac9f93bbaa4850399a4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
