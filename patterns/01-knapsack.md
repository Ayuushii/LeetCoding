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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V4KDXXGU%2F20261024%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261024T122711Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAXOzWng0esf6Gr9VODsXhamWMTbnpPdSf2ZxBScUhtbAiEA6tC3A%2B%2FXjwcuaIJimmkmMHXnjSB3%2FF7y8q1Soc4PRa8qiAQIpP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJqmmXgcrCOOtD7QeCrcA9vzH6Y1y67or%2B3%2FpkA95RF%2BsJIY5Qq7hX148mTMpRXNE%2Bgr9uiBmdjKofnkJwyvTgYTYbe%2FwwbgN5yzxiL25p5RX2FkVAwPIpa9bXTT4wNOI7%2Fyv1P1Tvo823I8yDjxJzT4daMXao15Zyw0GkVSlXqz%2BI2Cy902ijgTczLK2STObyrqng7LthyhMJSrAKkLDpGWdjxQTbyPBp%2BSo1mvfvdnGXg0aCcnb1OvG7Cqu6ambqUfWGMMN3U7Fn6jRmLLLSOJANbMFg5KnNLLNM53k9%2Bj2vRZyTHnyJFC6%2BuoeIYp9nUe9sxTu1Qor6bCbPpIebfWB2PuIHTwe2YXosUmRRTRFCPYSgZAN4Zhe4gjG3mhL%2B52o7m1M%2B5k72zMfPkzmN3ZdX4xAUNJegveWldbdNynwwIuUl%2Fql0yjAi01BOYCG6YH1YfrZG6RuIlex8Od%2BPpqAa75OSNGXYMOK6gtxJNvB3EwofBr8Fp4kH5EU5svitjA5uG6os%2FKwChsw3y6EkNniRE1RMnCXEW6bzOZCSgU5hLwJUtOl%2F7BUmtp0M0cp1BkjOpq%2FpkwKYn9w7PI3tn1RPFGz0tcBe8R1F6BGl4tCoo1XgQBg76iO1wdY3qHX8me1prnqu3MFp3tMNyn8tYGOqUBuqAQ%2FwOQkgZP0RyCw%2FTjFgUVp0OnP3q%2B3pg3uEj3HN%2BOSu0cW9xZqh%2FkrKoVdTw2MM6Fg1CPN5uYYzkogFmAQjkshjdZBD3pyRbK47opJjykHGae2tC%2FEs41av5YPsDVqF6BBl1WraDsqqZGD6eUgrRmAdZh92reZo0SGNUeDeyOQyAoVeoyhXzgDMxo%2FULrahNC3zbZ2V41Y6MNOWywYlQeDEfh&X-Amz-Signature=201e928d357fcb407bc5541ac820eec498873fa5743bf2328a40fcd90afe47d7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V4KDXXGU%2F20261024%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261024T122711Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAXOzWng0esf6Gr9VODsXhamWMTbnpPdSf2ZxBScUhtbAiEA6tC3A%2B%2FXjwcuaIJimmkmMHXnjSB3%2FF7y8q1Soc4PRa8qiAQIpP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJqmmXgcrCOOtD7QeCrcA9vzH6Y1y67or%2B3%2FpkA95RF%2BsJIY5Qq7hX148mTMpRXNE%2Bgr9uiBmdjKofnkJwyvTgYTYbe%2FwwbgN5yzxiL25p5RX2FkVAwPIpa9bXTT4wNOI7%2Fyv1P1Tvo823I8yDjxJzT4daMXao15Zyw0GkVSlXqz%2BI2Cy902ijgTczLK2STObyrqng7LthyhMJSrAKkLDpGWdjxQTbyPBp%2BSo1mvfvdnGXg0aCcnb1OvG7Cqu6ambqUfWGMMN3U7Fn6jRmLLLSOJANbMFg5KnNLLNM53k9%2Bj2vRZyTHnyJFC6%2BuoeIYp9nUe9sxTu1Qor6bCbPpIebfWB2PuIHTwe2YXosUmRRTRFCPYSgZAN4Zhe4gjG3mhL%2B52o7m1M%2B5k72zMfPkzmN3ZdX4xAUNJegveWldbdNynwwIuUl%2Fql0yjAi01BOYCG6YH1YfrZG6RuIlex8Od%2BPpqAa75OSNGXYMOK6gtxJNvB3EwofBr8Fp4kH5EU5svitjA5uG6os%2FKwChsw3y6EkNniRE1RMnCXEW6bzOZCSgU5hLwJUtOl%2F7BUmtp0M0cp1BkjOpq%2FpkwKYn9w7PI3tn1RPFGz0tcBe8R1F6BGl4tCoo1XgQBg76iO1wdY3qHX8me1prnqu3MFp3tMNyn8tYGOqUBuqAQ%2FwOQkgZP0RyCw%2FTjFgUVp0OnP3q%2B3pg3uEj3HN%2BOSu0cW9xZqh%2FkrKoVdTw2MM6Fg1CPN5uYYzkogFmAQjkshjdZBD3pyRbK47opJjykHGae2tC%2FEs41av5YPsDVqF6BBl1WraDsqqZGD6eUgrRmAdZh92reZo0SGNUeDeyOQyAoVeoyhXzgDMxo%2FULrahNC3zbZ2V41Y6MNOWywYlQeDEfh&X-Amz-Signature=219eec7987c3fda33860fe57b72ce458800df536b41de26e4b6011a31b8f6c0c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V4KDXXGU%2F20261024%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261024T122711Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAXOzWng0esf6Gr9VODsXhamWMTbnpPdSf2ZxBScUhtbAiEA6tC3A%2B%2FXjwcuaIJimmkmMHXnjSB3%2FF7y8q1Soc4PRa8qiAQIpP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJqmmXgcrCOOtD7QeCrcA9vzH6Y1y67or%2B3%2FpkA95RF%2BsJIY5Qq7hX148mTMpRXNE%2Bgr9uiBmdjKofnkJwyvTgYTYbe%2FwwbgN5yzxiL25p5RX2FkVAwPIpa9bXTT4wNOI7%2Fyv1P1Tvo823I8yDjxJzT4daMXao15Zyw0GkVSlXqz%2BI2Cy902ijgTczLK2STObyrqng7LthyhMJSrAKkLDpGWdjxQTbyPBp%2BSo1mvfvdnGXg0aCcnb1OvG7Cqu6ambqUfWGMMN3U7Fn6jRmLLLSOJANbMFg5KnNLLNM53k9%2Bj2vRZyTHnyJFC6%2BuoeIYp9nUe9sxTu1Qor6bCbPpIebfWB2PuIHTwe2YXosUmRRTRFCPYSgZAN4Zhe4gjG3mhL%2B52o7m1M%2B5k72zMfPkzmN3ZdX4xAUNJegveWldbdNynwwIuUl%2Fql0yjAi01BOYCG6YH1YfrZG6RuIlex8Od%2BPpqAa75OSNGXYMOK6gtxJNvB3EwofBr8Fp4kH5EU5svitjA5uG6os%2FKwChsw3y6EkNniRE1RMnCXEW6bzOZCSgU5hLwJUtOl%2F7BUmtp0M0cp1BkjOpq%2FpkwKYn9w7PI3tn1RPFGz0tcBe8R1F6BGl4tCoo1XgQBg76iO1wdY3qHX8me1prnqu3MFp3tMNyn8tYGOqUBuqAQ%2FwOQkgZP0RyCw%2FTjFgUVp0OnP3q%2B3pg3uEj3HN%2BOSu0cW9xZqh%2FkrKoVdTw2MM6Fg1CPN5uYYzkogFmAQjkshjdZBD3pyRbK47opJjykHGae2tC%2FEs41av5YPsDVqF6BBl1WraDsqqZGD6eUgrRmAdZh92reZo0SGNUeDeyOQyAoVeoyhXzgDMxo%2FULrahNC3zbZ2V41Y6MNOWywYlQeDEfh&X-Amz-Signature=2e6b207a0a7d6615db242cd080efaf3946feac95f43f49bb80aaa7d0f2ec5cc1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QMXA4XU3%2F20261024%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261024T122711Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICffUy%2FFBsxc%2F9lxdX4gt7pQsnIdeymVpFXOuLfx5GuLAiA3bTXsgPhk7KOR9TrFiaYGsh%2BoNz5rIR7sKrUFAeeEqyqIBAik%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM08T%2BMFtn4aUns1A7KtwDoOnNm92MSDp%2FW%2BQ1qvSfbr4Wy1LFzgpGwZIR1zvxtUyIybsiWcTK4iVP%2BIYAEvFZeLRWo5mLwzcytJ9gyh04FNdmpcNNsHBQVqiD%2FPZfvwZd7LIhn1aXJLEnjEwOylgoYdsBvdjtcPtDJ4NuSNh7pqtupQKSZr39e2BF0XtVg6lGLn7xd%2B4SZrJulUSd9kFD13YaW4IhPALcH1YfeX1GAW6FDARymOWT5EccTBfGd3tTlkOzvfF9hgVsE%2FsXK1elPhzJ57qvviuYzw6jsZapDDfDjkT9hFShVTRLm7%2BoJUc1AASp2W4zKtFT23i3zgbGiGhmlYOAvynb7DaRlCCOI5h0RJ2baRbhwpRvY1dSVPhpbpprxv5L28Ux4l4zbdNAQUdzi%2B1hjilCjwwJj3MP0y7HUXx9%2B2HQRIsL4yPI%2FP9WDbs%2BYXNaJcwL6NW4J64RCVmo2qA%2B0b%2FO0DP%2BL6N%2BH5xToGDJK%2BsrtK1HsKBFAu8rCDnWZ66JhfQgDt56INVnl0L7hnU191P%2BzjMhvJFHetK0VNNvtI8VQemMWJa6hLGPAPisHWXfiktm335FAU6TJK1x5yRUw8OkG0IUia0lc3qe%2FUiXcqlqzpD9R4lKhJwy0ynhPjpZMfEaPswwuKjy1gY6pgFhGTPxShBPLE0ndFy56z%2B0KhIoKo%2FAKONYEPlZP7j1sHycleME1NlZPoWs2az5S0Vb5DlCgIU9TKZEPN7qErdrKsxs%2BGSn7CjEoAbqAxUMBJwCP2HkuMHbJRPdHdQrir7fc4htgWJ4RyP21fIPRQInXH3WY5SrelWJN62%2Fyq%2BXtUi%2FDS8rLOp%2BJTkSdxjixJVBx5zSEHSU%2B2P1OkHmRrpVe6lEFyuw&X-Amz-Signature=b25aacdf11e28e13d33adc1f0b97a94609dc81f677b6f1a5ff25f3067c02ec02&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QMXA4XU3%2F20261024%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261024T122711Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICffUy%2FFBsxc%2F9lxdX4gt7pQsnIdeymVpFXOuLfx5GuLAiA3bTXsgPhk7KOR9TrFiaYGsh%2BoNz5rIR7sKrUFAeeEqyqIBAik%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM08T%2BMFtn4aUns1A7KtwDoOnNm92MSDp%2FW%2BQ1qvSfbr4Wy1LFzgpGwZIR1zvxtUyIybsiWcTK4iVP%2BIYAEvFZeLRWo5mLwzcytJ9gyh04FNdmpcNNsHBQVqiD%2FPZfvwZd7LIhn1aXJLEnjEwOylgoYdsBvdjtcPtDJ4NuSNh7pqtupQKSZr39e2BF0XtVg6lGLn7xd%2B4SZrJulUSd9kFD13YaW4IhPALcH1YfeX1GAW6FDARymOWT5EccTBfGd3tTlkOzvfF9hgVsE%2FsXK1elPhzJ57qvviuYzw6jsZapDDfDjkT9hFShVTRLm7%2BoJUc1AASp2W4zKtFT23i3zgbGiGhmlYOAvynb7DaRlCCOI5h0RJ2baRbhwpRvY1dSVPhpbpprxv5L28Ux4l4zbdNAQUdzi%2B1hjilCjwwJj3MP0y7HUXx9%2B2HQRIsL4yPI%2FP9WDbs%2BYXNaJcwL6NW4J64RCVmo2qA%2B0b%2FO0DP%2BL6N%2BH5xToGDJK%2BsrtK1HsKBFAu8rCDnWZ66JhfQgDt56INVnl0L7hnU191P%2BzjMhvJFHetK0VNNvtI8VQemMWJa6hLGPAPisHWXfiktm335FAU6TJK1x5yRUw8OkG0IUia0lc3qe%2FUiXcqlqzpD9R4lKhJwy0ynhPjpZMfEaPswwuKjy1gY6pgFhGTPxShBPLE0ndFy56z%2B0KhIoKo%2FAKONYEPlZP7j1sHycleME1NlZPoWs2az5S0Vb5DlCgIU9TKZEPN7qErdrKsxs%2BGSn7CjEoAbqAxUMBJwCP2HkuMHbJRPdHdQrir7fc4htgWJ4RyP21fIPRQInXH3WY5SrelWJN62%2Fyq%2BXtUi%2FDS8rLOp%2BJTkSdxjixJVBx5zSEHSU%2B2P1OkHmRrpVe6lEFyuw&X-Amz-Signature=30d5c0da3ee18e787fee2ad1cf007756bddb66b157b193a90bab91e9e28ff77d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QMXA4XU3%2F20261024%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261024T122711Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICffUy%2FFBsxc%2F9lxdX4gt7pQsnIdeymVpFXOuLfx5GuLAiA3bTXsgPhk7KOR9TrFiaYGsh%2BoNz5rIR7sKrUFAeeEqyqIBAik%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM08T%2BMFtn4aUns1A7KtwDoOnNm92MSDp%2FW%2BQ1qvSfbr4Wy1LFzgpGwZIR1zvxtUyIybsiWcTK4iVP%2BIYAEvFZeLRWo5mLwzcytJ9gyh04FNdmpcNNsHBQVqiD%2FPZfvwZd7LIhn1aXJLEnjEwOylgoYdsBvdjtcPtDJ4NuSNh7pqtupQKSZr39e2BF0XtVg6lGLn7xd%2B4SZrJulUSd9kFD13YaW4IhPALcH1YfeX1GAW6FDARymOWT5EccTBfGd3tTlkOzvfF9hgVsE%2FsXK1elPhzJ57qvviuYzw6jsZapDDfDjkT9hFShVTRLm7%2BoJUc1AASp2W4zKtFT23i3zgbGiGhmlYOAvynb7DaRlCCOI5h0RJ2baRbhwpRvY1dSVPhpbpprxv5L28Ux4l4zbdNAQUdzi%2B1hjilCjwwJj3MP0y7HUXx9%2B2HQRIsL4yPI%2FP9WDbs%2BYXNaJcwL6NW4J64RCVmo2qA%2B0b%2FO0DP%2BL6N%2BH5xToGDJK%2BsrtK1HsKBFAu8rCDnWZ66JhfQgDt56INVnl0L7hnU191P%2BzjMhvJFHetK0VNNvtI8VQemMWJa6hLGPAPisHWXfiktm335FAU6TJK1x5yRUw8OkG0IUia0lc3qe%2FUiXcqlqzpD9R4lKhJwy0ynhPjpZMfEaPswwuKjy1gY6pgFhGTPxShBPLE0ndFy56z%2B0KhIoKo%2FAKONYEPlZP7j1sHycleME1NlZPoWs2az5S0Vb5DlCgIU9TKZEPN7qErdrKsxs%2BGSn7CjEoAbqAxUMBJwCP2HkuMHbJRPdHdQrir7fc4htgWJ4RyP21fIPRQInXH3WY5SrelWJN62%2Fyq%2BXtUi%2FDS8rLOp%2BJTkSdxjixJVBx5zSEHSU%2B2P1OkHmRrpVe6lEFyuw&X-Amz-Signature=9769742c120ad57335cd7ae0fe66ebe6ddc8e0fc11d3732090431c1537778be0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QMXA4XU3%2F20261024%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261024T122711Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICffUy%2FFBsxc%2F9lxdX4gt7pQsnIdeymVpFXOuLfx5GuLAiA3bTXsgPhk7KOR9TrFiaYGsh%2BoNz5rIR7sKrUFAeeEqyqIBAik%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM08T%2BMFtn4aUns1A7KtwDoOnNm92MSDp%2FW%2BQ1qvSfbr4Wy1LFzgpGwZIR1zvxtUyIybsiWcTK4iVP%2BIYAEvFZeLRWo5mLwzcytJ9gyh04FNdmpcNNsHBQVqiD%2FPZfvwZd7LIhn1aXJLEnjEwOylgoYdsBvdjtcPtDJ4NuSNh7pqtupQKSZr39e2BF0XtVg6lGLn7xd%2B4SZrJulUSd9kFD13YaW4IhPALcH1YfeX1GAW6FDARymOWT5EccTBfGd3tTlkOzvfF9hgVsE%2FsXK1elPhzJ57qvviuYzw6jsZapDDfDjkT9hFShVTRLm7%2BoJUc1AASp2W4zKtFT23i3zgbGiGhmlYOAvynb7DaRlCCOI5h0RJ2baRbhwpRvY1dSVPhpbpprxv5L28Ux4l4zbdNAQUdzi%2B1hjilCjwwJj3MP0y7HUXx9%2B2HQRIsL4yPI%2FP9WDbs%2BYXNaJcwL6NW4J64RCVmo2qA%2B0b%2FO0DP%2BL6N%2BH5xToGDJK%2BsrtK1HsKBFAu8rCDnWZ66JhfQgDt56INVnl0L7hnU191P%2BzjMhvJFHetK0VNNvtI8VQemMWJa6hLGPAPisHWXfiktm335FAU6TJK1x5yRUw8OkG0IUia0lc3qe%2FUiXcqlqzpD9R4lKhJwy0ynhPjpZMfEaPswwuKjy1gY6pgFhGTPxShBPLE0ndFy56z%2B0KhIoKo%2FAKONYEPlZP7j1sHycleME1NlZPoWs2az5S0Vb5DlCgIU9TKZEPN7qErdrKsxs%2BGSn7CjEoAbqAxUMBJwCP2HkuMHbJRPdHdQrir7fc4htgWJ4RyP21fIPRQInXH3WY5SrelWJN62%2Fyq%2BXtUi%2FDS8rLOp%2BJTkSdxjixJVBx5zSEHSU%2B2P1OkHmRrpVe6lEFyuw&X-Amz-Signature=5c7e046994beff844331dbbb642030faed97d287bde5b01a0a00194887cf1ac0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XV4FACBI%2F20261024%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261024T122711Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDeaXeDigI0QwrJ82gEhrqrbYWd8%2ByKgJBRYF7ViFoiUQIgBJ%2FHXpaew9cydibuoNj8AlvzbwB5h93Ji3WAG%2FtiG4EqiAQIo%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIsSjaAjNNEUzvG6FircAwZP7PiKiMKaLOT%2BpajLoH%2F2IcMoswidd1wXnQ4K%2Fwzu5q9nwFDcnp3D1lO4TuomV%2BBh%2Fr2qGw7rcvwdaWAljfVVd%2FkdzKjUdBfzfXizl4WtAKsBe52gI2HaSpkbBUaCQvOy%2FCg7Pc9H0fYZqz0ieJLPeUPteAiu2kHkSzNEGLxeawzDxVWd6%2BBDBthtKaRRV1KpBMfSR3n5iaQVBJz9tTau%2BFu3qLI%2BmmXwLOAtz81vIg35GIF%2F%2BBiZa1j5BjH6MOUrticKklIi2gFSyTUB5UkCdfqSCfdpvNimi01YQrkyC4VLDW7JUS7dVLdbp7cmSuNE6nm2RXsO21rCyAq3hc1mq9Gy6Jxe3MWM2SVXGUx5LexaeBd%2Brc5tMabFfQlQm7vThV0lM%2BZzuf5u7MOt4J8pE%2BGZp%2FOgoiL%2F23ya%2FwT5KfQX9PkMH8Rs5hiktJXXywHXnuOIWDS3cpl9gamjV7pgB8x7YOrU7xqMRgs144ZwmpMnLtw7s8zX7wc3%2BXpbOpxh8tbxI%2FHXtLAIYJofGjtJiymngNqQnBuPbMxv1lkAv0EZ5cIYUDYApWznYgq6aM5kZ%2BHDN%2FBqJ9gggaxTn9c4yk5rCV0SxFafhb9X%2FI7A9JqgBkntjNvIpCvQMISm8tYGOqUBts498MWydOUgy8%2BcuiB5tTGR%2B%2B1khauhDHUtYbECIV8oa%2F%2BRsmxRTDh7Oj6UqdL0fNmp0SPHRU3g4%2F4iKuDTM%2Fk75zQ70i8oSuaqXYToVroqwx9kCIEQpZGpa6I2dVpI1sZJ7vjfiUmB5EcM8pNvSMw61azueXSOBgDZxUcb%2BKar%2FdPifqvZCR%2BIUwV4JwxlVYA%2FaFZO1JvmdAo5vHhpUrpt6Nj0&X-Amz-Signature=cc023345b021ca750cb44e0757d7d55b3bc98e4942dea32451d7daaac40a1cbf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XVG4FPGB%2F20261024%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261024T122712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC1D5Zca7F1GrZwzE%2BFzab7DSEnI4ttrf%2B%2FlZHI3uBGlwIhAPBdxrpSR3jLV6nRqK%2BM8FhKM7znVDQs%2FRJG8cDkBXFfKogECKT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwV4jnD%2Fd%2FiZJcpw%2BQq3AOPha1CB6C%2B2CST1TizhoP8%2FshNggkiRWtwJE1gbhYE%2Bel90TL28Pe7RuBT6QbTHhdcnk7OZ%2FUBTuyD0m0KZuCn%2BPPeFnQX30zRKrDDLo63sjpSmezsYbECHsvVMYaRQTM5C9gnUAeneqyFsXFED%2BXFS4DmxZRWA3%2BXMSLEFjaMYkjRlcjTxUiuTWLMYlGKRYx79tR59bX8uC8CHadr8ut7F6FVL4YvCp5xlt29QvQ5MdPwSvHyXgNZAtCWXSJ%2FKIozdkPlSB%2Bk7AP8TDse0rXZsiqB3AGBooGAOCCjftILOcZkX1tuqfAfkM%2BXvXrRSyGIjjNnGVUwRfM4bnglB7bF39YbQ9XJugzXaicghyVymjCb%2FuMLvQ0IvwT7IBFV0ZYOj9ojerX4JDB5eygSWNjyZMHW2ERqFA5RLQiUxvLeVUJ307rioWRYPHc0jW0BD2INRe3iIhRZPNT3KMRqI3b74VU39A4%2FpXDx4bcLsDtwhQ9Kfn8IzkBay06FDZk27pVHJt0eepTvsFkVwpMVAWeT%2BTpZZukABZsqiqRV1P4FcN59nO4oAE2qWt9fhn%2FPyCpJTsQVa21cgstjpQW17v5vgdrvWozcvZnRb3TjZw3zQtJiUAnuX0Hj2CWxUDDmpvLWBjqkAanxpvie%2BxuxTgMb%2Fp8EJ2XYH1dEHjQvQ7CShUlBibwU8e1s7%2FV2dJlM%2F9LNYst1PPGJFTcO5PzdVxBOTHAvwc9CAONXxkrA4qGbzMkH0P89a8y930RViXYA8REINqGAEADqjFVpoYs9wd46j5uK4q31EZJWlQpYYuAXsjPrl4hnr2Eoldo2ZPkIq6hL2lUgDZUnydOIjtPEFZPiGxfwiEayThU2&X-Amz-Signature=c4d8a56bd89c14f9df0491f90f0f64f93ce7622e8be8af71a530afafee2ae259&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XVG4FPGB%2F20261024%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261024T122712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC1D5Zca7F1GrZwzE%2BFzab7DSEnI4ttrf%2B%2FlZHI3uBGlwIhAPBdxrpSR3jLV6nRqK%2BM8FhKM7znVDQs%2FRJG8cDkBXFfKogECKT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwV4jnD%2Fd%2FiZJcpw%2BQq3AOPha1CB6C%2B2CST1TizhoP8%2FshNggkiRWtwJE1gbhYE%2Bel90TL28Pe7RuBT6QbTHhdcnk7OZ%2FUBTuyD0m0KZuCn%2BPPeFnQX30zRKrDDLo63sjpSmezsYbECHsvVMYaRQTM5C9gnUAeneqyFsXFED%2BXFS4DmxZRWA3%2BXMSLEFjaMYkjRlcjTxUiuTWLMYlGKRYx79tR59bX8uC8CHadr8ut7F6FVL4YvCp5xlt29QvQ5MdPwSvHyXgNZAtCWXSJ%2FKIozdkPlSB%2Bk7AP8TDse0rXZsiqB3AGBooGAOCCjftILOcZkX1tuqfAfkM%2BXvXrRSyGIjjNnGVUwRfM4bnglB7bF39YbQ9XJugzXaicghyVymjCb%2FuMLvQ0IvwT7IBFV0ZYOj9ojerX4JDB5eygSWNjyZMHW2ERqFA5RLQiUxvLeVUJ307rioWRYPHc0jW0BD2INRe3iIhRZPNT3KMRqI3b74VU39A4%2FpXDx4bcLsDtwhQ9Kfn8IzkBay06FDZk27pVHJt0eepTvsFkVwpMVAWeT%2BTpZZukABZsqiqRV1P4FcN59nO4oAE2qWt9fhn%2FPyCpJTsQVa21cgstjpQW17v5vgdrvWozcvZnRb3TjZw3zQtJiUAnuX0Hj2CWxUDDmpvLWBjqkAanxpvie%2BxuxTgMb%2Fp8EJ2XYH1dEHjQvQ7CShUlBibwU8e1s7%2FV2dJlM%2F9LNYst1PPGJFTcO5PzdVxBOTHAvwc9CAONXxkrA4qGbzMkH0P89a8y930RViXYA8REINqGAEADqjFVpoYs9wd46j5uK4q31EZJWlQpYYuAXsjPrl4hnr2Eoldo2ZPkIq6hL2lUgDZUnydOIjtPEFZPiGxfwiEayThU2&X-Amz-Signature=49816fbfe20bb25fe4fef868db4a3d1337e14319e875927ab829859cf4536c6c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
