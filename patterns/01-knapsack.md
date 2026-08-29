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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z74FPUCO%2F20260829%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260829T133744Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDIp%2FMnUwVZzcL0UJCn8qx8S4%2Byu5Tq0e1ockgwu3QoJwIgAQkCr4NSV2k5555JRP2OR2W4atigf8KmQ1lyRHGYgQwq%2FwMIZhAAGgw2Mzc0MjMxODM4MDUiDJ1hyXltFyVDW%2FUqmyrcA46bzQwu2q0ylluP7E4v1U4pQoLjGiOJskTTToIx0X3B0rHUKLgbG8yTHDZErKcHWPqL%2BslhXLkHL0avZbTCh04H60ZrSJaZb7J3I3QpicvBRTmvIwEIViPBrTMQR7ERb5vMIyNDGfuMe0Gjbjf0xVgDpZAPIL60zMByejarbW2mGdFouHgLM6ZbBE8jSioDDt9%2BmuqV%2B1c%2BfZZzgxH8vbL%2BJvUdVV6WP6LNYezxpr567cM8an5GNLfdWAdqhTntfXMYKlrfe8WJ4YJH9xNRRkV%2FmJ2GjIf3Y7JnS4NYk4kU6yE%2B3NJ8O27w5q5X4CrzP7eYTpItYpq2L7SBTDvnQugPADeQ5EJ3VblvZCT5PlUTwin6gHgz2XVtvumiauzVo5REuGbI%2B5mP7glVQ61ucZT1MCDqyKucGju5oKDuu2u8vpcHvkbzg20Pzf0%2F5V2YV9VmYJHo%2BuO37iMqGybzcCvtdZ3pGLkUzSLNNZQREbRhSt6avTCcVTIN%2B5Cc9fZSjsSg0sS9wOddYFoVA4kyAfK9xjbwImKC5x2IdAJ5BXpI%2BSCj4H39fIt7%2FVgniwkocu1dQ2K5PSWeX0n4FRVmiem8hYsgSdTRJvIpmUeQCiBdb4Hc6OxdmjHxmcjzMNK3y9QGOqUBlcGSGfWLNHr%2Bti8TiiRKQZbLPGJSdRGbTOG1RhdH%2BhM68RZyQBcwpfEa0KBdm1GIINoTHeVzxQaGc2JjFzTg43iVR6m92h0hqPSq9%2BaR0kOJLIJ177RTsDafFKOPgJtn8NK4QWfc7kIWNlcS921WX6LpeMuCIgW%2FWKnWxClrSeYKcKCe45eC6Wyb8Kd95O747IB7PVaVPq48Q9KOKhdbCl7N2GNB&X-Amz-Signature=00b9774ce0939c47598df9bb9d46a0b592acd66e4ce83d8bafeed2baebddb3ee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z74FPUCO%2F20260829%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260829T133744Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDIp%2FMnUwVZzcL0UJCn8qx8S4%2Byu5Tq0e1ockgwu3QoJwIgAQkCr4NSV2k5555JRP2OR2W4atigf8KmQ1lyRHGYgQwq%2FwMIZhAAGgw2Mzc0MjMxODM4MDUiDJ1hyXltFyVDW%2FUqmyrcA46bzQwu2q0ylluP7E4v1U4pQoLjGiOJskTTToIx0X3B0rHUKLgbG8yTHDZErKcHWPqL%2BslhXLkHL0avZbTCh04H60ZrSJaZb7J3I3QpicvBRTmvIwEIViPBrTMQR7ERb5vMIyNDGfuMe0Gjbjf0xVgDpZAPIL60zMByejarbW2mGdFouHgLM6ZbBE8jSioDDt9%2BmuqV%2B1c%2BfZZzgxH8vbL%2BJvUdVV6WP6LNYezxpr567cM8an5GNLfdWAdqhTntfXMYKlrfe8WJ4YJH9xNRRkV%2FmJ2GjIf3Y7JnS4NYk4kU6yE%2B3NJ8O27w5q5X4CrzP7eYTpItYpq2L7SBTDvnQugPADeQ5EJ3VblvZCT5PlUTwin6gHgz2XVtvumiauzVo5REuGbI%2B5mP7glVQ61ucZT1MCDqyKucGju5oKDuu2u8vpcHvkbzg20Pzf0%2F5V2YV9VmYJHo%2BuO37iMqGybzcCvtdZ3pGLkUzSLNNZQREbRhSt6avTCcVTIN%2B5Cc9fZSjsSg0sS9wOddYFoVA4kyAfK9xjbwImKC5x2IdAJ5BXpI%2BSCj4H39fIt7%2FVgniwkocu1dQ2K5PSWeX0n4FRVmiem8hYsgSdTRJvIpmUeQCiBdb4Hc6OxdmjHxmcjzMNK3y9QGOqUBlcGSGfWLNHr%2Bti8TiiRKQZbLPGJSdRGbTOG1RhdH%2BhM68RZyQBcwpfEa0KBdm1GIINoTHeVzxQaGc2JjFzTg43iVR6m92h0hqPSq9%2BaR0kOJLIJ177RTsDafFKOPgJtn8NK4QWfc7kIWNlcS921WX6LpeMuCIgW%2FWKnWxClrSeYKcKCe45eC6Wyb8Kd95O747IB7PVaVPq48Q9KOKhdbCl7N2GNB&X-Amz-Signature=689a99a8912de0fd71571883ee9454f6677b29056237c18501aa66275d016323&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z74FPUCO%2F20260829%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260829T133744Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDIp%2FMnUwVZzcL0UJCn8qx8S4%2Byu5Tq0e1ockgwu3QoJwIgAQkCr4NSV2k5555JRP2OR2W4atigf8KmQ1lyRHGYgQwq%2FwMIZhAAGgw2Mzc0MjMxODM4MDUiDJ1hyXltFyVDW%2FUqmyrcA46bzQwu2q0ylluP7E4v1U4pQoLjGiOJskTTToIx0X3B0rHUKLgbG8yTHDZErKcHWPqL%2BslhXLkHL0avZbTCh04H60ZrSJaZb7J3I3QpicvBRTmvIwEIViPBrTMQR7ERb5vMIyNDGfuMe0Gjbjf0xVgDpZAPIL60zMByejarbW2mGdFouHgLM6ZbBE8jSioDDt9%2BmuqV%2B1c%2BfZZzgxH8vbL%2BJvUdVV6WP6LNYezxpr567cM8an5GNLfdWAdqhTntfXMYKlrfe8WJ4YJH9xNRRkV%2FmJ2GjIf3Y7JnS4NYk4kU6yE%2B3NJ8O27w5q5X4CrzP7eYTpItYpq2L7SBTDvnQugPADeQ5EJ3VblvZCT5PlUTwin6gHgz2XVtvumiauzVo5REuGbI%2B5mP7glVQ61ucZT1MCDqyKucGju5oKDuu2u8vpcHvkbzg20Pzf0%2F5V2YV9VmYJHo%2BuO37iMqGybzcCvtdZ3pGLkUzSLNNZQREbRhSt6avTCcVTIN%2B5Cc9fZSjsSg0sS9wOddYFoVA4kyAfK9xjbwImKC5x2IdAJ5BXpI%2BSCj4H39fIt7%2FVgniwkocu1dQ2K5PSWeX0n4FRVmiem8hYsgSdTRJvIpmUeQCiBdb4Hc6OxdmjHxmcjzMNK3y9QGOqUBlcGSGfWLNHr%2Bti8TiiRKQZbLPGJSdRGbTOG1RhdH%2BhM68RZyQBcwpfEa0KBdm1GIINoTHeVzxQaGc2JjFzTg43iVR6m92h0hqPSq9%2BaR0kOJLIJ177RTsDafFKOPgJtn8NK4QWfc7kIWNlcS921WX6LpeMuCIgW%2FWKnWxClrSeYKcKCe45eC6Wyb8Kd95O747IB7PVaVPq48Q9KOKhdbCl7N2GNB&X-Amz-Signature=1e5bf28ee705f788303c33dd36f679da552de4673d7e030b97ac7c9fcd03bc51&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUFRWYUY%2F20260829%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260829T133744Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDeTi%2FHkB84dnNm6Ll9%2BMD6RXLy58wBojbu6QJOnd9FoAIhAPkPF11NgkEQpfs7NDHHp9twS7fV36fooM88RefKYJgmKv8DCGYQABoMNjM3NDIzMTgzODA1Igy1bRWSjgqRjYj%2BC2Qq3AM6WaH2QlfY2nOgAdMVTS6XBLQrXKG010FM0hNXPtNLwpOkqgJgH7XVCy1AsojV1Ycdu%2F%2B9ZzfV840Qk8C37DnYSIG1E%2FQgfrugUacxI9eXxULQGQM2g%2B49T3JHZvQH4KzcYHjBlsIdSf7%2FdXYWl0KcoYJRWaAQmttP2SQ6DInWfZQylCvPGqUOoUGozxcOyQwMiVwhLgj3IXuAyA8%2Fyidx%2FLzeEMv4blWrV2tL8VzKWHs5m6kpBbZGFCFD8p%2Fp8hV0XCvId2dsrwecoxQFZCKvtilDRfgs%2BlL%2B7icBD4k8HkqvcvxRLliH1TZ7qlpUJOGMfR8LK3IbIkfrHAo35%2Fuu7DXyqaI6jYSYKVe8JIKoRs5ZcmAnMLdoNyQJCzklQfDgl6%2B26Dsy29y0PQP3qCW9wA9h%2Bo1nFPaIEDxLjCOeDM7RN%2FXUU5xNnsHtDbJb2WwxM8kdZj%2F0xTJ1xFTJGt7ifHp1MZ5rXVVW%2BbOdRfxIvcZghpBzT6dNxpJxVI7JwaE3z3jgTkiR8RRo6WWfx%2BUrbpIBn8v3qm7Jyzk27HLEYOqYt0apfY0Cfl8e%2FeaXusNVeBFuWR2UcnAJFUD%2FnoGz8sWCSv2%2BWkYbk%2BeTfUV5oKTzjov8fekuKUQGYjDJusvUBjqkAUkMVoUuvwzn7Pv4JRMMHYgPAp0M7BCPW2l2tEAqxsai%2FPUeRv0P3fdrTjmJVOmKoq5nNNgfKS99MorXjriTwi%2F4C3n5dEpMHIMLBNSjaWXpA0UYdogiDShPIo8HNRIjQw2sCTsR%2FvpxBK%2F%2B90LSIKt68gZFizLhSi1Imap5VrkoCWRXJI%2BLAvOu10BosusHp6HTJHkMj8ApIPxDB21A5CkX0jBc&X-Amz-Signature=9352ed4630253c4ec77905890eb9f122324181b1130186563784f1687754069e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUFRWYUY%2F20260829%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260829T133744Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDeTi%2FHkB84dnNm6Ll9%2BMD6RXLy58wBojbu6QJOnd9FoAIhAPkPF11NgkEQpfs7NDHHp9twS7fV36fooM88RefKYJgmKv8DCGYQABoMNjM3NDIzMTgzODA1Igy1bRWSjgqRjYj%2BC2Qq3AM6WaH2QlfY2nOgAdMVTS6XBLQrXKG010FM0hNXPtNLwpOkqgJgH7XVCy1AsojV1Ycdu%2F%2B9ZzfV840Qk8C37DnYSIG1E%2FQgfrugUacxI9eXxULQGQM2g%2B49T3JHZvQH4KzcYHjBlsIdSf7%2FdXYWl0KcoYJRWaAQmttP2SQ6DInWfZQylCvPGqUOoUGozxcOyQwMiVwhLgj3IXuAyA8%2Fyidx%2FLzeEMv4blWrV2tL8VzKWHs5m6kpBbZGFCFD8p%2Fp8hV0XCvId2dsrwecoxQFZCKvtilDRfgs%2BlL%2B7icBD4k8HkqvcvxRLliH1TZ7qlpUJOGMfR8LK3IbIkfrHAo35%2Fuu7DXyqaI6jYSYKVe8JIKoRs5ZcmAnMLdoNyQJCzklQfDgl6%2B26Dsy29y0PQP3qCW9wA9h%2Bo1nFPaIEDxLjCOeDM7RN%2FXUU5xNnsHtDbJb2WwxM8kdZj%2F0xTJ1xFTJGt7ifHp1MZ5rXVVW%2BbOdRfxIvcZghpBzT6dNxpJxVI7JwaE3z3jgTkiR8RRo6WWfx%2BUrbpIBn8v3qm7Jyzk27HLEYOqYt0apfY0Cfl8e%2FeaXusNVeBFuWR2UcnAJFUD%2FnoGz8sWCSv2%2BWkYbk%2BeTfUV5oKTzjov8fekuKUQGYjDJusvUBjqkAUkMVoUuvwzn7Pv4JRMMHYgPAp0M7BCPW2l2tEAqxsai%2FPUeRv0P3fdrTjmJVOmKoq5nNNgfKS99MorXjriTwi%2F4C3n5dEpMHIMLBNSjaWXpA0UYdogiDShPIo8HNRIjQw2sCTsR%2FvpxBK%2F%2B90LSIKt68gZFizLhSi1Imap5VrkoCWRXJI%2BLAvOu10BosusHp6HTJHkMj8ApIPxDB21A5CkX0jBc&X-Amz-Signature=80f8103b0547a4f87f00692a4733e31d8dc882c053e37172d71b2f4432889b97&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUFRWYUY%2F20260829%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260829T133744Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDeTi%2FHkB84dnNm6Ll9%2BMD6RXLy58wBojbu6QJOnd9FoAIhAPkPF11NgkEQpfs7NDHHp9twS7fV36fooM88RefKYJgmKv8DCGYQABoMNjM3NDIzMTgzODA1Igy1bRWSjgqRjYj%2BC2Qq3AM6WaH2QlfY2nOgAdMVTS6XBLQrXKG010FM0hNXPtNLwpOkqgJgH7XVCy1AsojV1Ycdu%2F%2B9ZzfV840Qk8C37DnYSIG1E%2FQgfrugUacxI9eXxULQGQM2g%2B49T3JHZvQH4KzcYHjBlsIdSf7%2FdXYWl0KcoYJRWaAQmttP2SQ6DInWfZQylCvPGqUOoUGozxcOyQwMiVwhLgj3IXuAyA8%2Fyidx%2FLzeEMv4blWrV2tL8VzKWHs5m6kpBbZGFCFD8p%2Fp8hV0XCvId2dsrwecoxQFZCKvtilDRfgs%2BlL%2B7icBD4k8HkqvcvxRLliH1TZ7qlpUJOGMfR8LK3IbIkfrHAo35%2Fuu7DXyqaI6jYSYKVe8JIKoRs5ZcmAnMLdoNyQJCzklQfDgl6%2B26Dsy29y0PQP3qCW9wA9h%2Bo1nFPaIEDxLjCOeDM7RN%2FXUU5xNnsHtDbJb2WwxM8kdZj%2F0xTJ1xFTJGt7ifHp1MZ5rXVVW%2BbOdRfxIvcZghpBzT6dNxpJxVI7JwaE3z3jgTkiR8RRo6WWfx%2BUrbpIBn8v3qm7Jyzk27HLEYOqYt0apfY0Cfl8e%2FeaXusNVeBFuWR2UcnAJFUD%2FnoGz8sWCSv2%2BWkYbk%2BeTfUV5oKTzjov8fekuKUQGYjDJusvUBjqkAUkMVoUuvwzn7Pv4JRMMHYgPAp0M7BCPW2l2tEAqxsai%2FPUeRv0P3fdrTjmJVOmKoq5nNNgfKS99MorXjriTwi%2F4C3n5dEpMHIMLBNSjaWXpA0UYdogiDShPIo8HNRIjQw2sCTsR%2FvpxBK%2F%2B90LSIKt68gZFizLhSi1Imap5VrkoCWRXJI%2BLAvOu10BosusHp6HTJHkMj8ApIPxDB21A5CkX0jBc&X-Amz-Signature=c275f1ea3f40518c9a0e1a225554d2d3b2ad82725e52d4a151f00696d251b8f3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUFRWYUY%2F20260829%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260829T133744Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDeTi%2FHkB84dnNm6Ll9%2BMD6RXLy58wBojbu6QJOnd9FoAIhAPkPF11NgkEQpfs7NDHHp9twS7fV36fooM88RefKYJgmKv8DCGYQABoMNjM3NDIzMTgzODA1Igy1bRWSjgqRjYj%2BC2Qq3AM6WaH2QlfY2nOgAdMVTS6XBLQrXKG010FM0hNXPtNLwpOkqgJgH7XVCy1AsojV1Ycdu%2F%2B9ZzfV840Qk8C37DnYSIG1E%2FQgfrugUacxI9eXxULQGQM2g%2B49T3JHZvQH4KzcYHjBlsIdSf7%2FdXYWl0KcoYJRWaAQmttP2SQ6DInWfZQylCvPGqUOoUGozxcOyQwMiVwhLgj3IXuAyA8%2Fyidx%2FLzeEMv4blWrV2tL8VzKWHs5m6kpBbZGFCFD8p%2Fp8hV0XCvId2dsrwecoxQFZCKvtilDRfgs%2BlL%2B7icBD4k8HkqvcvxRLliH1TZ7qlpUJOGMfR8LK3IbIkfrHAo35%2Fuu7DXyqaI6jYSYKVe8JIKoRs5ZcmAnMLdoNyQJCzklQfDgl6%2B26Dsy29y0PQP3qCW9wA9h%2Bo1nFPaIEDxLjCOeDM7RN%2FXUU5xNnsHtDbJb2WwxM8kdZj%2F0xTJ1xFTJGt7ifHp1MZ5rXVVW%2BbOdRfxIvcZghpBzT6dNxpJxVI7JwaE3z3jgTkiR8RRo6WWfx%2BUrbpIBn8v3qm7Jyzk27HLEYOqYt0apfY0Cfl8e%2FeaXusNVeBFuWR2UcnAJFUD%2FnoGz8sWCSv2%2BWkYbk%2BeTfUV5oKTzjov8fekuKUQGYjDJusvUBjqkAUkMVoUuvwzn7Pv4JRMMHYgPAp0M7BCPW2l2tEAqxsai%2FPUeRv0P3fdrTjmJVOmKoq5nNNgfKS99MorXjriTwi%2F4C3n5dEpMHIMLBNSjaWXpA0UYdogiDShPIo8HNRIjQw2sCTsR%2FvpxBK%2F%2B90LSIKt68gZFizLhSi1Imap5VrkoCWRXJI%2BLAvOu10BosusHp6HTJHkMj8ApIPxDB21A5CkX0jBc&X-Amz-Signature=f0ced5fe63669493c1baf0ccfa1c8be8a366e1d407f814be149004001b87c947&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TZJP6RAC%2F20260829%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260829T133744Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD1y95M1r2DSePdh%2FA5natMXlmeLxsxBTUh%2BXcR4ECQVwIgdRMlkJ0%2BiCCNOyHHWFX8D%2BN8cFrtQqtmD%2FYSlJGo8PAq%2FwMIZhAAGgw2Mzc0MjMxODM4MDUiDF0FwwBIPmZHRgvw9CrcA0KpH77uoy2YpEDmDGR%2BHhCU5s5kCVZExFqpSQflcxjSLlvpRgigqygBERA1tSp%2FTbm4Xe9rHTEjRBIf%2FzDPnhuzqToucpJo2zDeuwWeT8oZO2rIM9UP%2BTKxSDl8D5qxO1MoWDVDZBnxc6ITQZrSyT3DgCTh39u3eQxAVYlTKMapwrASdQ9RKQKBQyKe529IGMFqP8ISiFMBIMIQ%2BUWqMiyvJqTjVn9fORZx57hngGLHrAvZW%2F63fdCYshtcyA5z%2FbluoTlS%2BV06mf3rMtAXpDwm0uRDzTixyFr%2B8E0%2F5Qz30D4ePGMRv8VBCjY8%2BSmV%2B%2BxkvIUEhvu3SfXU9y3iGUoMxtqpSKzo41wdN1WajLpmbz%2B8oDHrkzSC1i7K5vCO37uFdKAnzTYqRQV2kVoaxi79Al8HE3YIBH7NlvcFH69d7ncht7ITn6VuZIcpoSyTeXOjIG9jXl2ezDkVJ4gF%2F141n5wuDzJ2fV2fkhDXdE2THHbwuskKK72A8eknAjRqMPOX5YF5DfLJ1fduHO76SVGhZ53kOXdToxQNKa6lNsCn%2FaZ7FS3p%2FFL8x84qOe4vADm4IHGqzaKm5KdqY3HnJlxv2vs6BRyBc2BdTY%2FrJ%2BOlBWaPaeh%2BMKb%2FIDiQMJ24y9QGOqUBARjh7HMfuIJPtuyZOvUSJ56JUymsZd7w073ZLEWFcDbtIsrtIc9k2Q%2Fs4Z2T633olsTDHRh%2BFGmzMhzK%2BlvqqOWPy5APOBd6AlaB2PfixveK2vMZamPQBCpt1AFqTyjmJRxfZtA4cuoyfyluFVMlWLG6nB%2BiCHS%2FCPkUCIjdaISW4cw%2Fos4PjD7haGno2AWFoIGZsH93t%2FKpMhVDIchyb%2FSX0Rfu&X-Amz-Signature=373573134153c849a8f6376d845554667739f255dfed67e541bb3eabf99acbc8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665VK4VXVO%2F20260829%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260829T133744Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGpeBYmZVyIiqvaEvUmYu0Va%2BCgrs38KozuOP8wli0QRAiB%2Ffwyqb21R0BJY7h2HuNHNUm0bvRTKK5EZg1K0VxnUXSr%2FAwhmEAAaDDYzNzQyMzE4MzgwNSIMgD6yVuWAYG9MllnNKtwDmCwWk8sC2l0LG2vXFRfGRCt1zdd0zsuL9i%2F4t8UrEiIcxOskTDRZe6907lIS7AUpM%2FPZ%2B11Xq8dPOKj%2BOsgNN%2FTtFk2Xx9sTeRM%2BA38xdHrRauf%2BL1Qw96JLeUqecISbDceBprk6nTYpxk8Iv%2FemS471zFbjQesOeXdWNGuQd9cV8rUipSzM8GLCQ799YHyIVG4sEBCpQrTBptoOVtSDV5TchYLpMSpxgQZiIqlfaCndM8iA5oErse1vnEZ%2BvPOf5WDjYOKXWHBjfRf81KGcGdrQrG%2Buj0FjweI3xbcFuyRzVN1HesQBciv5dqc%2B%2FjHQ23Ay%2BVddCDOrUAhxF2lr7vBE2%2BsIxIRsUyiMrpFQSCKaQ1CQ%2FrLylrdZLbr38z%2FUV5ViF%2BuQd0EvgkYoIlyVzMMedykyQmNRsIZUO2UJ4NDiKh%2FHrad8gF1V9oTNWoIVGG6kiXXvyNDUJ3WdyVmV1VmYP6Vyd5K3mGMGupd%2B9uL57rx49ocNgJIbl%2Fs0K2nrYcQSKV1Kd92Ifx2QccwoAKwidiBDw5pZwYf9PE8VE9KcPANCTGAK2o6L4%2BL%2FaSsfhsr8B07LlPW%2FJlTxjCY89rdl9qVBc0dREuBy1LK0F3F7MRkOefApIZJhSxkwj7vL1AY6pgGGW4NR4JkJlOswQ6wgcBye0xhywGyMaxylCXiMRYUxGaRnvs9LyErueHdM8nCRv%2FzA8us8eElJOtWSX3LIpC%2FFj0%2FvOAqmaD%2FRGjLaplC6Uvq6CfYGzxCqfFPPjdLnzl7v4hb0GEA9ku0icVIM38Lgfep56mFauFKCqqYkccNljDyDld0Yu910ZM2%2FYNUeTL96srgcc%2BYMm8LBdOj66Rt1lSdIVwrb&X-Amz-Signature=d8dbf6a0d69d3c84fce42faf475c20c43cf2300defea1a4d95682f573bebaec9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665VK4VXVO%2F20260829%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260829T133744Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGpeBYmZVyIiqvaEvUmYu0Va%2BCgrs38KozuOP8wli0QRAiB%2Ffwyqb21R0BJY7h2HuNHNUm0bvRTKK5EZg1K0VxnUXSr%2FAwhmEAAaDDYzNzQyMzE4MzgwNSIMgD6yVuWAYG9MllnNKtwDmCwWk8sC2l0LG2vXFRfGRCt1zdd0zsuL9i%2F4t8UrEiIcxOskTDRZe6907lIS7AUpM%2FPZ%2B11Xq8dPOKj%2BOsgNN%2FTtFk2Xx9sTeRM%2BA38xdHrRauf%2BL1Qw96JLeUqecISbDceBprk6nTYpxk8Iv%2FemS471zFbjQesOeXdWNGuQd9cV8rUipSzM8GLCQ799YHyIVG4sEBCpQrTBptoOVtSDV5TchYLpMSpxgQZiIqlfaCndM8iA5oErse1vnEZ%2BvPOf5WDjYOKXWHBjfRf81KGcGdrQrG%2Buj0FjweI3xbcFuyRzVN1HesQBciv5dqc%2B%2FjHQ23Ay%2BVddCDOrUAhxF2lr7vBE2%2BsIxIRsUyiMrpFQSCKaQ1CQ%2FrLylrdZLbr38z%2FUV5ViF%2BuQd0EvgkYoIlyVzMMedykyQmNRsIZUO2UJ4NDiKh%2FHrad8gF1V9oTNWoIVGG6kiXXvyNDUJ3WdyVmV1VmYP6Vyd5K3mGMGupd%2B9uL57rx49ocNgJIbl%2Fs0K2nrYcQSKV1Kd92Ifx2QccwoAKwidiBDw5pZwYf9PE8VE9KcPANCTGAK2o6L4%2BL%2FaSsfhsr8B07LlPW%2FJlTxjCY89rdl9qVBc0dREuBy1LK0F3F7MRkOefApIZJhSxkwj7vL1AY6pgGGW4NR4JkJlOswQ6wgcBye0xhywGyMaxylCXiMRYUxGaRnvs9LyErueHdM8nCRv%2FzA8us8eElJOtWSX3LIpC%2FFj0%2FvOAqmaD%2FRGjLaplC6Uvq6CfYGzxCqfFPPjdLnzl7v4hb0GEA9ku0icVIM38Lgfep56mFauFKCqqYkccNljDyDld0Yu910ZM2%2FYNUeTL96srgcc%2BYMm8LBdOj66Rt1lSdIVwrb&X-Amz-Signature=1cb442c860722d5282f37e3fde8f99a954882d23d456c39f128aac86f4dad037&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
