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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RFMP63G5%2F20260707%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260707T105355Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJFMEMCIHYHe111W%2F6n5UrOMZ09ysgWHl066Okt9l66jUoObAKoAh8y5cGD8iM9h4MBggyfCHezvfAeuAhXiKo0I6EMVJFxKv8DCGoQABoMNjM3NDIzMTgzODA1IgxwzSo3OvoOMAS6lfEq3AN0EPvqI153HQPCgnd1NOy%2FozxI1KvjIFB6Wba0JtsMz7EHdDYD%2FTJ9Iffc%2Bozxn%2F6dK2MKsijAX26cB7psRx%2BJHO%2F9%2FK2Xz2S%2B0nvdL1UaS2Py8wk%2FXGzoXnkp5p%2BQ9OINVxK1EXGZuYQNhInM5ms8f3OaQjJHegSQWi7wAuFjjqKM0ZIeMAAgm6DrFgC0%2BsLfnTc2CjPIIW3NBzMmK8mCnF%2B%2FqU6MBO0EHgLsYkj%2Fmh6mtJYFONBi0m50IxeVPuWGwjj7omH4Ado%2B7ho16SCKTL4l2hS1Yd5cATQ3hHNpEyioo%2FeDcG1AbxUj9WQr5CWeZQ7IXGLA4HbR5wY8%2B0SVIwFSlF0IZiQGHJDpm%2F3v2Ewd5G8zcNOGQl9UvK%2FccXotLOzm6A%2BV4nvi7wHZEdOZnKbS7FSwEdvK1b5czfC8PlVmtfkW%2FZ6VA%2B9flSzGqJ8NQ5EC3FtQSb6IkZsUU9lrh3u%2FztXvihOHm%2B%2Bzzu5f2b9qwJkDWuhmz1inh4%2B1EiNb4emKUY9JC9TljkX32G7Vf2OtAi4EiFbFb7tynGBrwFm4K8vGdlTS7frldranZ5twgU8E3Za41Md6mvVh3OzBeb43RHukWQS%2FGuuItCRaqD8Mq2hKvMz6onczAjCriLPSBjqnAXBaSEcIm8xAZ60vHLtkb5mTKO%2BcZ%2FPzoCP4e4bhWOJ8rl8cDV6I4eKk9pdlI%2Ff2pbxOUdHLs31gvnc4PXO3zHR7D6NEeoUntkoZCktFmzpnJf94E5u6tVfSArRjcmwIs5m5oarClVWQ5Z391X7k4CPRkIgQh2U%2FmxrfJytwIEkl7TfbKBV9F1zzFTW3fDD3XJThNz3OTtss4VPnNLKYpL2h287S%2FZfQ&X-Amz-Signature=26e160b3f42024f13748a836477c6c15e8ec54f4df3f09a60dc8672cea80251c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RFMP63G5%2F20260707%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260707T105355Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJFMEMCIHYHe111W%2F6n5UrOMZ09ysgWHl066Okt9l66jUoObAKoAh8y5cGD8iM9h4MBggyfCHezvfAeuAhXiKo0I6EMVJFxKv8DCGoQABoMNjM3NDIzMTgzODA1IgxwzSo3OvoOMAS6lfEq3AN0EPvqI153HQPCgnd1NOy%2FozxI1KvjIFB6Wba0JtsMz7EHdDYD%2FTJ9Iffc%2Bozxn%2F6dK2MKsijAX26cB7psRx%2BJHO%2F9%2FK2Xz2S%2B0nvdL1UaS2Py8wk%2FXGzoXnkp5p%2BQ9OINVxK1EXGZuYQNhInM5ms8f3OaQjJHegSQWi7wAuFjjqKM0ZIeMAAgm6DrFgC0%2BsLfnTc2CjPIIW3NBzMmK8mCnF%2B%2FqU6MBO0EHgLsYkj%2Fmh6mtJYFONBi0m50IxeVPuWGwjj7omH4Ado%2B7ho16SCKTL4l2hS1Yd5cATQ3hHNpEyioo%2FeDcG1AbxUj9WQr5CWeZQ7IXGLA4HbR5wY8%2B0SVIwFSlF0IZiQGHJDpm%2F3v2Ewd5G8zcNOGQl9UvK%2FccXotLOzm6A%2BV4nvi7wHZEdOZnKbS7FSwEdvK1b5czfC8PlVmtfkW%2FZ6VA%2B9flSzGqJ8NQ5EC3FtQSb6IkZsUU9lrh3u%2FztXvihOHm%2B%2Bzzu5f2b9qwJkDWuhmz1inh4%2B1EiNb4emKUY9JC9TljkX32G7Vf2OtAi4EiFbFb7tynGBrwFm4K8vGdlTS7frldranZ5twgU8E3Za41Md6mvVh3OzBeb43RHukWQS%2FGuuItCRaqD8Mq2hKvMz6onczAjCriLPSBjqnAXBaSEcIm8xAZ60vHLtkb5mTKO%2BcZ%2FPzoCP4e4bhWOJ8rl8cDV6I4eKk9pdlI%2Ff2pbxOUdHLs31gvnc4PXO3zHR7D6NEeoUntkoZCktFmzpnJf94E5u6tVfSArRjcmwIs5m5oarClVWQ5Z391X7k4CPRkIgQh2U%2FmxrfJytwIEkl7TfbKBV9F1zzFTW3fDD3XJThNz3OTtss4VPnNLKYpL2h287S%2FZfQ&X-Amz-Signature=0d646cb074a01e20c3841c7f92d81e3d39a88c41cce7c15827d998c524cc9892&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RFMP63G5%2F20260707%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260707T105355Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJFMEMCIHYHe111W%2F6n5UrOMZ09ysgWHl066Okt9l66jUoObAKoAh8y5cGD8iM9h4MBggyfCHezvfAeuAhXiKo0I6EMVJFxKv8DCGoQABoMNjM3NDIzMTgzODA1IgxwzSo3OvoOMAS6lfEq3AN0EPvqI153HQPCgnd1NOy%2FozxI1KvjIFB6Wba0JtsMz7EHdDYD%2FTJ9Iffc%2Bozxn%2F6dK2MKsijAX26cB7psRx%2BJHO%2F9%2FK2Xz2S%2B0nvdL1UaS2Py8wk%2FXGzoXnkp5p%2BQ9OINVxK1EXGZuYQNhInM5ms8f3OaQjJHegSQWi7wAuFjjqKM0ZIeMAAgm6DrFgC0%2BsLfnTc2CjPIIW3NBzMmK8mCnF%2B%2FqU6MBO0EHgLsYkj%2Fmh6mtJYFONBi0m50IxeVPuWGwjj7omH4Ado%2B7ho16SCKTL4l2hS1Yd5cATQ3hHNpEyioo%2FeDcG1AbxUj9WQr5CWeZQ7IXGLA4HbR5wY8%2B0SVIwFSlF0IZiQGHJDpm%2F3v2Ewd5G8zcNOGQl9UvK%2FccXotLOzm6A%2BV4nvi7wHZEdOZnKbS7FSwEdvK1b5czfC8PlVmtfkW%2FZ6VA%2B9flSzGqJ8NQ5EC3FtQSb6IkZsUU9lrh3u%2FztXvihOHm%2B%2Bzzu5f2b9qwJkDWuhmz1inh4%2B1EiNb4emKUY9JC9TljkX32G7Vf2OtAi4EiFbFb7tynGBrwFm4K8vGdlTS7frldranZ5twgU8E3Za41Md6mvVh3OzBeb43RHukWQS%2FGuuItCRaqD8Mq2hKvMz6onczAjCriLPSBjqnAXBaSEcIm8xAZ60vHLtkb5mTKO%2BcZ%2FPzoCP4e4bhWOJ8rl8cDV6I4eKk9pdlI%2Ff2pbxOUdHLs31gvnc4PXO3zHR7D6NEeoUntkoZCktFmzpnJf94E5u6tVfSArRjcmwIs5m5oarClVWQ5Z391X7k4CPRkIgQh2U%2FmxrfJytwIEkl7TfbKBV9F1zzFTW3fDD3XJThNz3OTtss4VPnNLKYpL2h287S%2FZfQ&X-Amz-Signature=58041501d467af6630933c47e2c579e3f2e10c4fbd5a314b23a430f52dd75897&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46676IMQURP%2F20260707%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260707T105355Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDZ4gjdMacC3ltvQFB9NNdcLnAwARc%2FRrgHk%2FgZRIGYaQIhAOY6ivF23tz5zOzn%2FTkqCWK3r1TcSZPPMep988XdYzhPKv8DCGoQABoMNjM3NDIzMTgzODA1IgzyMCOElVWjdHEb5Dkq3APFC7IJZ1mpMe20MRXByzNCw%2BnrjLU%2Ff9A8cYoLwfwlJz0525OzmbSJT3AaM%2FNLb0kwO%2F0Q%2FSrHFgnT%2FNcCjkKnFwjMZWqAF6QsF0o6OafvRgIOms%2Bb7IYpY8mtAb5teqT905l1ClS46ZuEpSHHwdjviAa0JauMPlcxBYcu87ef3ii0eiV0auej03SNPXoq7L6Jo3d89Js4bx6ESYFMaLUodJ6ewYrDjCKcr8OH%2FdnbwNr5fbZuoolpepBnMM3YvWhAMCum3%2FTHZPvGi3ZhB2lirKEGQuVhMe4bpTQp4uYN16JpO%2Fr%2FcOAgRZi2dkaClwBhmV0SGyqze249d%2BZMl1%2FcZKz9Nhv3emwYbhxeu0TwDrYe%2BXRQVqDTmechfswyWWyd66EYTvgds%2BzJPByqiWKn7OY1hx0VB5yod3TGlV01bilabOwaagzLZdFmeNiClD%2FGM0%2FM27dMPCyp71AMVrqIbL2uanokNOliv5Xl0r4dT8BZrBmpBPoUlo0fCv7Cgnt%2FxXIhLJ8w0XJ67LZPxdUiY5BcUlL09inUXySHEOk%2FiM9NkGG3zFUSnhd2rl6SPm7g%2BT6bmG7ubM1YH6j3Q2h2yZEjAr0UT%2BBEXSyG1EQTCPe1pnhfrcH7mf6h5jDbh7PSBjqkATL6h0siom%2Bw68lHykYzpDfhHSH7%2Bft8d%2B%2B5UEAe6pbpCG8bZu85gfzv3wMXEzQXWXugANGiB%2F2%2FzOHn%2BQV5AHO5CofS1sVys0QrImKzrTSw%2Bd8kEz%2Fz5KvjA37CkL2pwU0E5fCezjknJ20DPzKu19DRQ6GA0XyWSLkUz1hfiEQ2x4ziBIYDt1ZadY0XsWBGGXznbjEXnPWVl1OBaWABm%2FYEO0Fb&X-Amz-Signature=a260ef490e8318e1c64f791af3c113e45e2250ac191db30d0820500d80fb8904&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46676IMQURP%2F20260707%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260707T105355Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDZ4gjdMacC3ltvQFB9NNdcLnAwARc%2FRrgHk%2FgZRIGYaQIhAOY6ivF23tz5zOzn%2FTkqCWK3r1TcSZPPMep988XdYzhPKv8DCGoQABoMNjM3NDIzMTgzODA1IgzyMCOElVWjdHEb5Dkq3APFC7IJZ1mpMe20MRXByzNCw%2BnrjLU%2Ff9A8cYoLwfwlJz0525OzmbSJT3AaM%2FNLb0kwO%2F0Q%2FSrHFgnT%2FNcCjkKnFwjMZWqAF6QsF0o6OafvRgIOms%2Bb7IYpY8mtAb5teqT905l1ClS46ZuEpSHHwdjviAa0JauMPlcxBYcu87ef3ii0eiV0auej03SNPXoq7L6Jo3d89Js4bx6ESYFMaLUodJ6ewYrDjCKcr8OH%2FdnbwNr5fbZuoolpepBnMM3YvWhAMCum3%2FTHZPvGi3ZhB2lirKEGQuVhMe4bpTQp4uYN16JpO%2Fr%2FcOAgRZi2dkaClwBhmV0SGyqze249d%2BZMl1%2FcZKz9Nhv3emwYbhxeu0TwDrYe%2BXRQVqDTmechfswyWWyd66EYTvgds%2BzJPByqiWKn7OY1hx0VB5yod3TGlV01bilabOwaagzLZdFmeNiClD%2FGM0%2FM27dMPCyp71AMVrqIbL2uanokNOliv5Xl0r4dT8BZrBmpBPoUlo0fCv7Cgnt%2FxXIhLJ8w0XJ67LZPxdUiY5BcUlL09inUXySHEOk%2FiM9NkGG3zFUSnhd2rl6SPm7g%2BT6bmG7ubM1YH6j3Q2h2yZEjAr0UT%2BBEXSyG1EQTCPe1pnhfrcH7mf6h5jDbh7PSBjqkATL6h0siom%2Bw68lHykYzpDfhHSH7%2Bft8d%2B%2B5UEAe6pbpCG8bZu85gfzv3wMXEzQXWXugANGiB%2F2%2FzOHn%2BQV5AHO5CofS1sVys0QrImKzrTSw%2Bd8kEz%2Fz5KvjA37CkL2pwU0E5fCezjknJ20DPzKu19DRQ6GA0XyWSLkUz1hfiEQ2x4ziBIYDt1ZadY0XsWBGGXznbjEXnPWVl1OBaWABm%2FYEO0Fb&X-Amz-Signature=c45f83a0d1c72c710311b661d6375ae293a4c6756b62bf3fe5f2433b5919ca25&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46676IMQURP%2F20260707%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260707T105355Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDZ4gjdMacC3ltvQFB9NNdcLnAwARc%2FRrgHk%2FgZRIGYaQIhAOY6ivF23tz5zOzn%2FTkqCWK3r1TcSZPPMep988XdYzhPKv8DCGoQABoMNjM3NDIzMTgzODA1IgzyMCOElVWjdHEb5Dkq3APFC7IJZ1mpMe20MRXByzNCw%2BnrjLU%2Ff9A8cYoLwfwlJz0525OzmbSJT3AaM%2FNLb0kwO%2F0Q%2FSrHFgnT%2FNcCjkKnFwjMZWqAF6QsF0o6OafvRgIOms%2Bb7IYpY8mtAb5teqT905l1ClS46ZuEpSHHwdjviAa0JauMPlcxBYcu87ef3ii0eiV0auej03SNPXoq7L6Jo3d89Js4bx6ESYFMaLUodJ6ewYrDjCKcr8OH%2FdnbwNr5fbZuoolpepBnMM3YvWhAMCum3%2FTHZPvGi3ZhB2lirKEGQuVhMe4bpTQp4uYN16JpO%2Fr%2FcOAgRZi2dkaClwBhmV0SGyqze249d%2BZMl1%2FcZKz9Nhv3emwYbhxeu0TwDrYe%2BXRQVqDTmechfswyWWyd66EYTvgds%2BzJPByqiWKn7OY1hx0VB5yod3TGlV01bilabOwaagzLZdFmeNiClD%2FGM0%2FM27dMPCyp71AMVrqIbL2uanokNOliv5Xl0r4dT8BZrBmpBPoUlo0fCv7Cgnt%2FxXIhLJ8w0XJ67LZPxdUiY5BcUlL09inUXySHEOk%2FiM9NkGG3zFUSnhd2rl6SPm7g%2BT6bmG7ubM1YH6j3Q2h2yZEjAr0UT%2BBEXSyG1EQTCPe1pnhfrcH7mf6h5jDbh7PSBjqkATL6h0siom%2Bw68lHykYzpDfhHSH7%2Bft8d%2B%2B5UEAe6pbpCG8bZu85gfzv3wMXEzQXWXugANGiB%2F2%2FzOHn%2BQV5AHO5CofS1sVys0QrImKzrTSw%2Bd8kEz%2Fz5KvjA37CkL2pwU0E5fCezjknJ20DPzKu19DRQ6GA0XyWSLkUz1hfiEQ2x4ziBIYDt1ZadY0XsWBGGXznbjEXnPWVl1OBaWABm%2FYEO0Fb&X-Amz-Signature=876e7147e2906590927f7931cb63a9798270a2875c984511ba0b5030705f0eb9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46676IMQURP%2F20260707%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260707T105355Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDZ4gjdMacC3ltvQFB9NNdcLnAwARc%2FRrgHk%2FgZRIGYaQIhAOY6ivF23tz5zOzn%2FTkqCWK3r1TcSZPPMep988XdYzhPKv8DCGoQABoMNjM3NDIzMTgzODA1IgzyMCOElVWjdHEb5Dkq3APFC7IJZ1mpMe20MRXByzNCw%2BnrjLU%2Ff9A8cYoLwfwlJz0525OzmbSJT3AaM%2FNLb0kwO%2F0Q%2FSrHFgnT%2FNcCjkKnFwjMZWqAF6QsF0o6OafvRgIOms%2Bb7IYpY8mtAb5teqT905l1ClS46ZuEpSHHwdjviAa0JauMPlcxBYcu87ef3ii0eiV0auej03SNPXoq7L6Jo3d89Js4bx6ESYFMaLUodJ6ewYrDjCKcr8OH%2FdnbwNr5fbZuoolpepBnMM3YvWhAMCum3%2FTHZPvGi3ZhB2lirKEGQuVhMe4bpTQp4uYN16JpO%2Fr%2FcOAgRZi2dkaClwBhmV0SGyqze249d%2BZMl1%2FcZKz9Nhv3emwYbhxeu0TwDrYe%2BXRQVqDTmechfswyWWyd66EYTvgds%2BzJPByqiWKn7OY1hx0VB5yod3TGlV01bilabOwaagzLZdFmeNiClD%2FGM0%2FM27dMPCyp71AMVrqIbL2uanokNOliv5Xl0r4dT8BZrBmpBPoUlo0fCv7Cgnt%2FxXIhLJ8w0XJ67LZPxdUiY5BcUlL09inUXySHEOk%2FiM9NkGG3zFUSnhd2rl6SPm7g%2BT6bmG7ubM1YH6j3Q2h2yZEjAr0UT%2BBEXSyG1EQTCPe1pnhfrcH7mf6h5jDbh7PSBjqkATL6h0siom%2Bw68lHykYzpDfhHSH7%2Bft8d%2B%2B5UEAe6pbpCG8bZu85gfzv3wMXEzQXWXugANGiB%2F2%2FzOHn%2BQV5AHO5CofS1sVys0QrImKzrTSw%2Bd8kEz%2Fz5KvjA37CkL2pwU0E5fCezjknJ20DPzKu19DRQ6GA0XyWSLkUz1hfiEQ2x4ziBIYDt1ZadY0XsWBGGXznbjEXnPWVl1OBaWABm%2FYEO0Fb&X-Amz-Signature=80cc51613cf345da9e200f899dbe9c0d1ab94187d99f14c04642221132f40024&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QBMU5F4J%2F20260707%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260707T105355Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDRFAuqfPgm2lVqlpZ7bzfKwmk8o3OwP3hb7lX9TLfiigIgfioHK4VMMHDJTYb9ixNNLtKIHZSpCW7Zstnh14Vhuokq%2FwMIahAAGgw2Mzc0MjMxODM4MDUiDAXqPgLO1OIR0ZtNpircAzFqRyBjzYcGSfKJklqPIke25A%2FGnWEDCBMr7kvoW4YsPzRvnfd8uhWWTLcxI2w5BSLYXLy63S2RJ9R3qYoxpsWDF5pf7Brbyxbh9sTG6NFhf0r5K9zOUU%2BNY7C1u%2FV7qfC11d6xqV%2BuRbnuJhotuR2MUP5u4%2BjT1KXzpivpQeurtAot6IE1qm2xwQuM7C0S7UC5m4BeyAPXO1nzQtmmZTkC570Bo1oyCiSiT9cX%2BM4LOqCQCOssEO3lFT8rJDvnEjFEyTu4H%2FB6YPq1Co%2FMZ2J%2BF2aQzbjyJUT7dSSh3ChlCmA3U23sGiitidaMGBNsFldbPh%2Bh00HnNi8xiBT2Wx1XnIRtTGvXg8rJ55S2%2FkLLpmDtzQKX2nQTSD2akB4WvW08PjkaGzM9JuMmzSXOPa9bAkd1ZjSPBN4kWy4yj0x9tT85M%2FA%2F2ba7XXSall%2FBMVDWuEWsCXso%2Fm%2B08sFeqwuw6EdUEbWRo1dqXUpsihEDs8K4xsm1aw%2B20aWQjLE3MDxIWmIpNwKXIcHTp0utpP04yozotODvb1DTtPUFgvQmf89IeOAgdoxdptM%2F7%2B7rcLnjrXwmujonaLnDc%2Fth7v26mziSoVgOCcNKSJgLNvufjrotJtEUlw%2BBRqUqMLmIs9IGOqUBbD0MiZcnUCoYLxpvahxXz1fXL%2FU14vurrwJMvCpM8Qh6y1CTry3VdKUcI2CGsajoEJvRn%2BOSVEC2bZgahyDMvIO1hNS2R5qe7YOvY7dS%2BqmiTwrDdz0otvdT93Ox828dyzv3Sjjp%2B11VcNVpxZl9w6GUbIM18NqcBGZwejMZ8XEPEL7iO%2FZ4wNwH7RAUWnF%2BP7AeHkTjwKGHEI3SBRKFIPJeJ3cP&X-Amz-Signature=f5a8210799b862ece3494da3bb380f211e0f4249adc890420eb197e4d918100d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W22G7NAL%2F20260707%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260707T105356Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDvAAf3XUGV1IorwBf66ZmCU5ucwtlGiw11GnAgR10NcgIhALLPf6Q1KfU1uOuo1eLePobgo1zvqd4mXloYRwR42VMFKv8DCGoQABoMNjM3NDIzMTgzODA1IgzOWq%2Fffe2cF10cMIQq3AOoJfggmwbejphIuq%2BZ1wZJ90Vyh%2FI6aZK9HJ%2BwwyUFETAK8Xsm1qmSF%2FTEp9XnuVqRaODxGz0lMuA0kR5e6XMGIiAPOLPY6suCIk9ki6z9oT%2BQic84R%2BGX55P8nev8cdKg%2FCR4yAilsTDJjIRGpYRfqvkYLpj9A3R787OcasMXvf6IxIjzLBn1eAOXn3rh%2BgPtv%2BvpqnLoWqcPW%2FuJuc%2BI919K7SWeU3wDkvxvg3E1AcoAyqQB9ZmPMAxbpBvYB51ZCBPvMln%2BjpOZIuVMxNGOKbRXGTpJ4R8dP8GVjldaolX4N65MfUr8XT6jHdftUJxlYgUupTH3sGkDTIbi2Bs3OqxCuA%2BW6agIINzV18GyATV5iWWKZ7wG4caAmRduSqVLZObr9FWO4Lvfj%2Fl4GgNlN4aj6BykCGU6Rq85jQngs5S3sWHn7tnCD6o3zZJM6vPk0bhdG7PVnaR%2BYjqv0qOxXaC6cy3DRaMa0MBwMXEch4oAqdDRJhSi8r0o5R%2FMxw9WnaXiE0cSDEO5hqRaQZjO5c7JsQADSfZvOqN2e23E88c5xfCJxjgoIYuA%2Fdg3%2B5O5%2FiIMmUlGAJnKQZTPUUNsXMk9HfWZlXSwIN3VtY1t7LX4iDG9tsGqjNgidjD2irPSBjqkASq73qk8ZpTbtrNWWggUd4FksTc5PPeOgMlUuvb0CRDbrww4cLs8G4sSflLd9J%2FC3JrBoXtvBXXRCO1tnTR%2FSfJNdcuB8F%2BD6IjeyKj85f8CE%2FvHnifHmK6DqfdvMpo3i5WmkjR3Gogalzvb4PI7Kha7wRrXQv2PkoB%2B04EuMCusfCBaZ8IkxS5y1gnUlMws3FZztVNoUw%2FWOVrsreAfuQDC9WmK&X-Amz-Signature=861715d4c6b9e816054fef89e0065e74ee4b9a953aaa3c375cd77c9fcecce5b4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W22G7NAL%2F20260707%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260707T105356Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDvAAf3XUGV1IorwBf66ZmCU5ucwtlGiw11GnAgR10NcgIhALLPf6Q1KfU1uOuo1eLePobgo1zvqd4mXloYRwR42VMFKv8DCGoQABoMNjM3NDIzMTgzODA1IgzOWq%2Fffe2cF10cMIQq3AOoJfggmwbejphIuq%2BZ1wZJ90Vyh%2FI6aZK9HJ%2BwwyUFETAK8Xsm1qmSF%2FTEp9XnuVqRaODxGz0lMuA0kR5e6XMGIiAPOLPY6suCIk9ki6z9oT%2BQic84R%2BGX55P8nev8cdKg%2FCR4yAilsTDJjIRGpYRfqvkYLpj9A3R787OcasMXvf6IxIjzLBn1eAOXn3rh%2BgPtv%2BvpqnLoWqcPW%2FuJuc%2BI919K7SWeU3wDkvxvg3E1AcoAyqQB9ZmPMAxbpBvYB51ZCBPvMln%2BjpOZIuVMxNGOKbRXGTpJ4R8dP8GVjldaolX4N65MfUr8XT6jHdftUJxlYgUupTH3sGkDTIbi2Bs3OqxCuA%2BW6agIINzV18GyATV5iWWKZ7wG4caAmRduSqVLZObr9FWO4Lvfj%2Fl4GgNlN4aj6BykCGU6Rq85jQngs5S3sWHn7tnCD6o3zZJM6vPk0bhdG7PVnaR%2BYjqv0qOxXaC6cy3DRaMa0MBwMXEch4oAqdDRJhSi8r0o5R%2FMxw9WnaXiE0cSDEO5hqRaQZjO5c7JsQADSfZvOqN2e23E88c5xfCJxjgoIYuA%2Fdg3%2B5O5%2FiIMmUlGAJnKQZTPUUNsXMk9HfWZlXSwIN3VtY1t7LX4iDG9tsGqjNgidjD2irPSBjqkASq73qk8ZpTbtrNWWggUd4FksTc5PPeOgMlUuvb0CRDbrww4cLs8G4sSflLd9J%2FC3JrBoXtvBXXRCO1tnTR%2FSfJNdcuB8F%2BD6IjeyKj85f8CE%2FvHnifHmK6DqfdvMpo3i5WmkjR3Gogalzvb4PI7Kha7wRrXQv2PkoB%2B04EuMCusfCBaZ8IkxS5y1gnUlMws3FZztVNoUw%2FWOVrsreAfuQDC9WmK&X-Amz-Signature=be97fef6cccce35e0ab8310585386f42eead2011e3ad5b8f076f5e9bc1342f67&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
