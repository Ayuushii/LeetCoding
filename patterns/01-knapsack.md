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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TENP2ZVK%2F20261015%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261015T130419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAQaCXVzLXdlc3QtMiJHMEUCIEC%2FLtJr2m8ECsjNHSbvtYpx58%2FUhzzatANwxHHtxpiaAiEAlezNYFAkZ2yfAefNeDxxjGBPxuwurKmHnchspD1%2BDs8qiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDfQ06OrkpGcGUQVwircAyzpA1nnsbZ52CHM2Gx8AccscdmeI%2Fg71zo3Jb6v2S78Wy1Dbq9%2FBKAyGiBjEweifpzzeGUnlNg%2B76HaF54kwORdCUM6MY1psDXJLwkfUIom3iqDCuXmowRveH72%2F48SmWrTMCGOiprI%2FBoUxbbMNTboxoRjTRBu2gZ15T0gW71XVoTEIngYu6eEhOIN4H33G135QnjwPv9c8IU3btpx272%2BIxYxBHCQD0bwbWWAMUXMXBQdQVnYqS0LzpGH2W5PLnpORn6rGthjxe0C2RveoVqN69WSiwGABdNtet8gJGTmd3OKRu5bhNvP%2FerWyYRs3IH070bW5UDcSo0fKWYk%2FoPfXKKn2Z3jJN6SK3xRANqlTKDzSb9DU6b6PxiVZbbwCrSl%2FOG2c1RJ2bcPmc0jZAai%2F8Y5FkjZgL7Tj3HAMEh5yrBUOF1pi6gyNs9nsBnE2uNOHQUBDew4gSRm0dycQ0IJRqUDmuQRZlCSM%2BkRjyjG9Ud7fBMvrbYXx4K4YbnGaI5GRi9HXbZ5YYW8sbvTQtohKppKY%2FX%2Fk3QF0kFestdnb6AZFnC3xexUHvsJSJAxxW6ne%2BzpPENjCWlMph6%2Bit5aN7OrnkRl3d7ZGxRg1hXO%2FW9gWKpqdJ2ZuvLrMKvtwtYGOqUB8CZLtvwViYa0cRspSqXsV%2BBLmW1LACsC4w8UAdkXnn%2B1Tt9gHVtWfNe7rioXwPM2Voahsf5eGPwL2EAjz%2BCNtszyBBs4Jo%2BWJreyjt5igUVZeXqNzjLV9MbOUZKx8wowjXPEGW59m9%2FUa4iYJlWINebavOTB6E1GPi0aBHYAA15Q8G7ClMGcN5ZTGqdxzOEaZbIswgGpUOlDhLOQ7aO%2Btjji6cQg&X-Amz-Signature=2b6bfca0a41479fab5002ab702f81a371dc07ef92efbddd6cf3184afbdb40fe4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TENP2ZVK%2F20261015%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261015T130419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAQaCXVzLXdlc3QtMiJHMEUCIEC%2FLtJr2m8ECsjNHSbvtYpx58%2FUhzzatANwxHHtxpiaAiEAlezNYFAkZ2yfAefNeDxxjGBPxuwurKmHnchspD1%2BDs8qiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDfQ06OrkpGcGUQVwircAyzpA1nnsbZ52CHM2Gx8AccscdmeI%2Fg71zo3Jb6v2S78Wy1Dbq9%2FBKAyGiBjEweifpzzeGUnlNg%2B76HaF54kwORdCUM6MY1psDXJLwkfUIom3iqDCuXmowRveH72%2F48SmWrTMCGOiprI%2FBoUxbbMNTboxoRjTRBu2gZ15T0gW71XVoTEIngYu6eEhOIN4H33G135QnjwPv9c8IU3btpx272%2BIxYxBHCQD0bwbWWAMUXMXBQdQVnYqS0LzpGH2W5PLnpORn6rGthjxe0C2RveoVqN69WSiwGABdNtet8gJGTmd3OKRu5bhNvP%2FerWyYRs3IH070bW5UDcSo0fKWYk%2FoPfXKKn2Z3jJN6SK3xRANqlTKDzSb9DU6b6PxiVZbbwCrSl%2FOG2c1RJ2bcPmc0jZAai%2F8Y5FkjZgL7Tj3HAMEh5yrBUOF1pi6gyNs9nsBnE2uNOHQUBDew4gSRm0dycQ0IJRqUDmuQRZlCSM%2BkRjyjG9Ud7fBMvrbYXx4K4YbnGaI5GRi9HXbZ5YYW8sbvTQtohKppKY%2FX%2Fk3QF0kFestdnb6AZFnC3xexUHvsJSJAxxW6ne%2BzpPENjCWlMph6%2Bit5aN7OrnkRl3d7ZGxRg1hXO%2FW9gWKpqdJ2ZuvLrMKvtwtYGOqUB8CZLtvwViYa0cRspSqXsV%2BBLmW1LACsC4w8UAdkXnn%2B1Tt9gHVtWfNe7rioXwPM2Voahsf5eGPwL2EAjz%2BCNtszyBBs4Jo%2BWJreyjt5igUVZeXqNzjLV9MbOUZKx8wowjXPEGW59m9%2FUa4iYJlWINebavOTB6E1GPi0aBHYAA15Q8G7ClMGcN5ZTGqdxzOEaZbIswgGpUOlDhLOQ7aO%2Btjji6cQg&X-Amz-Signature=844ea67ffd98a05d5e09a74cdcb068a6babe5f1284f1fb3e8673aea0bbc6bf94&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TENP2ZVK%2F20261015%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261015T130419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAQaCXVzLXdlc3QtMiJHMEUCIEC%2FLtJr2m8ECsjNHSbvtYpx58%2FUhzzatANwxHHtxpiaAiEAlezNYFAkZ2yfAefNeDxxjGBPxuwurKmHnchspD1%2BDs8qiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDfQ06OrkpGcGUQVwircAyzpA1nnsbZ52CHM2Gx8AccscdmeI%2Fg71zo3Jb6v2S78Wy1Dbq9%2FBKAyGiBjEweifpzzeGUnlNg%2B76HaF54kwORdCUM6MY1psDXJLwkfUIom3iqDCuXmowRveH72%2F48SmWrTMCGOiprI%2FBoUxbbMNTboxoRjTRBu2gZ15T0gW71XVoTEIngYu6eEhOIN4H33G135QnjwPv9c8IU3btpx272%2BIxYxBHCQD0bwbWWAMUXMXBQdQVnYqS0LzpGH2W5PLnpORn6rGthjxe0C2RveoVqN69WSiwGABdNtet8gJGTmd3OKRu5bhNvP%2FerWyYRs3IH070bW5UDcSo0fKWYk%2FoPfXKKn2Z3jJN6SK3xRANqlTKDzSb9DU6b6PxiVZbbwCrSl%2FOG2c1RJ2bcPmc0jZAai%2F8Y5FkjZgL7Tj3HAMEh5yrBUOF1pi6gyNs9nsBnE2uNOHQUBDew4gSRm0dycQ0IJRqUDmuQRZlCSM%2BkRjyjG9Ud7fBMvrbYXx4K4YbnGaI5GRi9HXbZ5YYW8sbvTQtohKppKY%2FX%2Fk3QF0kFestdnb6AZFnC3xexUHvsJSJAxxW6ne%2BzpPENjCWlMph6%2Bit5aN7OrnkRl3d7ZGxRg1hXO%2FW9gWKpqdJ2ZuvLrMKvtwtYGOqUB8CZLtvwViYa0cRspSqXsV%2BBLmW1LACsC4w8UAdkXnn%2B1Tt9gHVtWfNe7rioXwPM2Voahsf5eGPwL2EAjz%2BCNtszyBBs4Jo%2BWJreyjt5igUVZeXqNzjLV9MbOUZKx8wowjXPEGW59m9%2FUa4iYJlWINebavOTB6E1GPi0aBHYAA15Q8G7ClMGcN5ZTGqdxzOEaZbIswgGpUOlDhLOQ7aO%2Btjji6cQg&X-Amz-Signature=bc07b2d74d00deada0838084f0e5aa0fdc0783e06c18b4a557062e489192b8ce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WKO34QJC%2F20261015%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261015T130419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAQaCXVzLXdlc3QtMiJHMEUCIQCV6d9daKn8IEinrVisL23wVPMZYiVW0dZLa1BJYeZfHQIgY0X3ebOwhOjiW9VHQE83hiQX1TlA4dRSTBHPQTytJpcqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFYFbJ7QG8zo2Ch5MSrcA61pOCg6W1vp9vFYkzAsYJ3wql957UBfdPfB9TiHcqXwE%2Bp2PrmrmqdzgU1zo7a0j5oQh%2FwY1Iy%2F4KRIWGe4VpqcGzzjSWg6sPgTYG2Xm7D7HTMv%2Bp%2FxV14TvgCKD%2F9FZV0HFl8mLoGpuebAwR97iG2que4nSRZsrr9qNp%2F2ks5lrQm%2BNzzYxYo1Vi%2Bqldf%2BqqhKPltEhTvO2uiSn0p72MmAmcsU%2FwmNVDLEfXSt5Rm9wlIQX7ZxXWo%2FpMRutwBJZb12q%2BoXmJNGPoRvV9o5tQLrYlaJzwI4gs%2FLM5gyAEpw1qqPQfN%2FyovbTSwZTBhywsmegh7rjBZEUhkG0%2FHJHiKFOdhliwMN%2FRYQSEghDxUrs3tAIbuJbmusK%2BYkcjHZRHDVF5hAgnJCR4h2CC0%2F%2Bx6wXpQSOp6G9%2BwwjBNZ4CrfpM3s9T3toFMmhGoTd6E6wIuVx5WVjttMNqCnpnClOI5uS7d%2B7oO%2ByVTSLbEIK68NVm4h0KdK2uGjJNAJE00HaJXbzdjnlJzHTjiyjTWZZ8GyiCMlVRlhU%2BOlo%2FmkSGYJaQGO9i%2BYupikBL9wJUHWnhMOfmOiuur3UTVEUSFQVn09i6GiG9wquC7ss8ZScSY%2B0aQUyzGmxunAOpGcMJDtwtYGOqUBsFn95duZvVZiyJ1TJQfRbzxKxq%2FfPV8cXKKUqt4ZAvwhs1SVwmB9zXmWM0BJhwi9y1mcqK1X%2B1c0Nb5f4UFmGKA9Y1eGXybdZ3%2F26wTdyG%2FHZGvyLR%2BL3%2F%2BPd5zpcpHFhknrdAxMdW%2Fj4vqzu6KNaH90c3FyTld9Z6tPApQAMSe4VlgixPww7n6W%2F3OceXRFSinjB73%2FDy%2FBS8B2mz4FehimViSz&X-Amz-Signature=210413b29ccba6909a0cfa5c4ee5dce251be8b4cc0f52623ee3cf4ca657a48b5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WKO34QJC%2F20261015%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261015T130419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAQaCXVzLXdlc3QtMiJHMEUCIQCV6d9daKn8IEinrVisL23wVPMZYiVW0dZLa1BJYeZfHQIgY0X3ebOwhOjiW9VHQE83hiQX1TlA4dRSTBHPQTytJpcqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFYFbJ7QG8zo2Ch5MSrcA61pOCg6W1vp9vFYkzAsYJ3wql957UBfdPfB9TiHcqXwE%2Bp2PrmrmqdzgU1zo7a0j5oQh%2FwY1Iy%2F4KRIWGe4VpqcGzzjSWg6sPgTYG2Xm7D7HTMv%2Bp%2FxV14TvgCKD%2F9FZV0HFl8mLoGpuebAwR97iG2que4nSRZsrr9qNp%2F2ks5lrQm%2BNzzYxYo1Vi%2Bqldf%2BqqhKPltEhTvO2uiSn0p72MmAmcsU%2FwmNVDLEfXSt5Rm9wlIQX7ZxXWo%2FpMRutwBJZb12q%2BoXmJNGPoRvV9o5tQLrYlaJzwI4gs%2FLM5gyAEpw1qqPQfN%2FyovbTSwZTBhywsmegh7rjBZEUhkG0%2FHJHiKFOdhliwMN%2FRYQSEghDxUrs3tAIbuJbmusK%2BYkcjHZRHDVF5hAgnJCR4h2CC0%2F%2Bx6wXpQSOp6G9%2BwwjBNZ4CrfpM3s9T3toFMmhGoTd6E6wIuVx5WVjttMNqCnpnClOI5uS7d%2B7oO%2ByVTSLbEIK68NVm4h0KdK2uGjJNAJE00HaJXbzdjnlJzHTjiyjTWZZ8GyiCMlVRlhU%2BOlo%2FmkSGYJaQGO9i%2BYupikBL9wJUHWnhMOfmOiuur3UTVEUSFQVn09i6GiG9wquC7ss8ZScSY%2B0aQUyzGmxunAOpGcMJDtwtYGOqUBsFn95duZvVZiyJ1TJQfRbzxKxq%2FfPV8cXKKUqt4ZAvwhs1SVwmB9zXmWM0BJhwi9y1mcqK1X%2B1c0Nb5f4UFmGKA9Y1eGXybdZ3%2F26wTdyG%2FHZGvyLR%2BL3%2F%2BPd5zpcpHFhknrdAxMdW%2Fj4vqzu6KNaH90c3FyTld9Z6tPApQAMSe4VlgixPww7n6W%2F3OceXRFSinjB73%2FDy%2FBS8B2mz4FehimViSz&X-Amz-Signature=5ae0e2f83264d8236673396b8fdf38ca5da65b971425fcf57392a06e02b45b00&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WKO34QJC%2F20261015%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261015T130419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAQaCXVzLXdlc3QtMiJHMEUCIQCV6d9daKn8IEinrVisL23wVPMZYiVW0dZLa1BJYeZfHQIgY0X3ebOwhOjiW9VHQE83hiQX1TlA4dRSTBHPQTytJpcqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFYFbJ7QG8zo2Ch5MSrcA61pOCg6W1vp9vFYkzAsYJ3wql957UBfdPfB9TiHcqXwE%2Bp2PrmrmqdzgU1zo7a0j5oQh%2FwY1Iy%2F4KRIWGe4VpqcGzzjSWg6sPgTYG2Xm7D7HTMv%2Bp%2FxV14TvgCKD%2F9FZV0HFl8mLoGpuebAwR97iG2que4nSRZsrr9qNp%2F2ks5lrQm%2BNzzYxYo1Vi%2Bqldf%2BqqhKPltEhTvO2uiSn0p72MmAmcsU%2FwmNVDLEfXSt5Rm9wlIQX7ZxXWo%2FpMRutwBJZb12q%2BoXmJNGPoRvV9o5tQLrYlaJzwI4gs%2FLM5gyAEpw1qqPQfN%2FyovbTSwZTBhywsmegh7rjBZEUhkG0%2FHJHiKFOdhliwMN%2FRYQSEghDxUrs3tAIbuJbmusK%2BYkcjHZRHDVF5hAgnJCR4h2CC0%2F%2Bx6wXpQSOp6G9%2BwwjBNZ4CrfpM3s9T3toFMmhGoTd6E6wIuVx5WVjttMNqCnpnClOI5uS7d%2B7oO%2ByVTSLbEIK68NVm4h0KdK2uGjJNAJE00HaJXbzdjnlJzHTjiyjTWZZ8GyiCMlVRlhU%2BOlo%2FmkSGYJaQGO9i%2BYupikBL9wJUHWnhMOfmOiuur3UTVEUSFQVn09i6GiG9wquC7ss8ZScSY%2B0aQUyzGmxunAOpGcMJDtwtYGOqUBsFn95duZvVZiyJ1TJQfRbzxKxq%2FfPV8cXKKUqt4ZAvwhs1SVwmB9zXmWM0BJhwi9y1mcqK1X%2B1c0Nb5f4UFmGKA9Y1eGXybdZ3%2F26wTdyG%2FHZGvyLR%2BL3%2F%2BPd5zpcpHFhknrdAxMdW%2Fj4vqzu6KNaH90c3FyTld9Z6tPApQAMSe4VlgixPww7n6W%2F3OceXRFSinjB73%2FDy%2FBS8B2mz4FehimViSz&X-Amz-Signature=5989d1d1dad862267b4e87cb9c88198713894c91aca4780a219b221f57b45b08&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WKO34QJC%2F20261015%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261015T130419Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAQaCXVzLXdlc3QtMiJHMEUCIQCV6d9daKn8IEinrVisL23wVPMZYiVW0dZLa1BJYeZfHQIgY0X3ebOwhOjiW9VHQE83hiQX1TlA4dRSTBHPQTytJpcqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFYFbJ7QG8zo2Ch5MSrcA61pOCg6W1vp9vFYkzAsYJ3wql957UBfdPfB9TiHcqXwE%2Bp2PrmrmqdzgU1zo7a0j5oQh%2FwY1Iy%2F4KRIWGe4VpqcGzzjSWg6sPgTYG2Xm7D7HTMv%2Bp%2FxV14TvgCKD%2F9FZV0HFl8mLoGpuebAwR97iG2que4nSRZsrr9qNp%2F2ks5lrQm%2BNzzYxYo1Vi%2Bqldf%2BqqhKPltEhTvO2uiSn0p72MmAmcsU%2FwmNVDLEfXSt5Rm9wlIQX7ZxXWo%2FpMRutwBJZb12q%2BoXmJNGPoRvV9o5tQLrYlaJzwI4gs%2FLM5gyAEpw1qqPQfN%2FyovbTSwZTBhywsmegh7rjBZEUhkG0%2FHJHiKFOdhliwMN%2FRYQSEghDxUrs3tAIbuJbmusK%2BYkcjHZRHDVF5hAgnJCR4h2CC0%2F%2Bx6wXpQSOp6G9%2BwwjBNZ4CrfpM3s9T3toFMmhGoTd6E6wIuVx5WVjttMNqCnpnClOI5uS7d%2B7oO%2ByVTSLbEIK68NVm4h0KdK2uGjJNAJE00HaJXbzdjnlJzHTjiyjTWZZ8GyiCMlVRlhU%2BOlo%2FmkSGYJaQGO9i%2BYupikBL9wJUHWnhMOfmOiuur3UTVEUSFQVn09i6GiG9wquC7ss8ZScSY%2B0aQUyzGmxunAOpGcMJDtwtYGOqUBsFn95duZvVZiyJ1TJQfRbzxKxq%2FfPV8cXKKUqt4ZAvwhs1SVwmB9zXmWM0BJhwi9y1mcqK1X%2B1c0Nb5f4UFmGKA9Y1eGXybdZ3%2F26wTdyG%2FHZGvyLR%2BL3%2F%2BPd5zpcpHFhknrdAxMdW%2Fj4vqzu6KNaH90c3FyTld9Z6tPApQAMSe4VlgixPww7n6W%2F3OceXRFSinjB73%2FDy%2FBS8B2mz4FehimViSz&X-Amz-Signature=41aa3933b520a215dbc70096acbab98fb163dadf1d0381034a3d18fadb736185&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666OHSN6AT%2F20261015%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261015T130420Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAQaCXVzLXdlc3QtMiJHMEUCIEdu1Kfn9aZsOAchQxVDqx6l0A%2Bx9b6ZuXRYDQC%2B7LLvAiEArZK9AEwbSv3fNGdt813mAS4ImlVegnPpsy095BErMPwqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPMw46WspHcFQWGXFCrcA7dbOxdVj%2Bj2T86LnjbrvBkiLtG9dCUc%2BazeWEIdpdzMz%2BKimu3zkdpblQv%2BUi3U27AyOhQ%2F40OZ1sVUXeGdXjjx9pOBxBpMiLCRQqEIoBBGJirEI7pI0%2F%2Bb0mlzv%2BZ45JHA7V1EaAQXpMuyCmKRUS5x3opfhJ2fHGLOp1k8QBa%2FIkXfJYaN1XI3o%2Buqk9HJyfWJyQx9RJmWIq42PfWfdRCE2xJT4R3kpcyVhKGGIene5zdAZEJK5a411gI1o6esRAlP0jAJQRJT9ZuI9nNjfUUv3Ec5VblJduEuZ6ZPELzD5sTUVlMkNPFYvE1DNTkuCPWs4qnGIozE8PzkwS3z0uBYF70mGgIvBSHjzuH04x9ORcubDHF%2Bxp87Oc2X54zVuEtc3y4RmIUrXzvink9K1PbUqK9fufj1K7zIPWJjPk9gg6m%2Fq%2BYKsY3T7NQ7h2hY5YJc2ELIRkeP1qqGE8%2FSudnXQbzWaiDC4YU0tWFrHG2qzpcw9004ER4s9cjWj0H6DUkr4CfgeJZ9VqRzK%2FPb6eQT0QYZxey9wnSKaMB9Zjyz5CILth70c%2BE4DpJV%2F7u7Borm9Pz0CSSRNue9vG1N8fk9WeQsJhUIPeB14yRqwe6896yRUBrU99MkoL9xMP7swtYGOqUBdyALbGFSeXIM8tinVlNO1g86M5iA8aToRnn2bg11g1IhBTknseWAh1dZd%2Bwwh76DHA1pNmklS8A7wTc9Hcji8%2FK%2FOjExYWNIxZnSV1O8X99bhukmk67WidrxW0GPzXDXHWape1ymslJFh5DOzJ3pZij6XgRgK15Is%2F3phLUEgstUtzgzcPRUzmlf2QwmR3kMykblYkqktam%2Bvs7nuxD22L8HCrPO&X-Amz-Signature=c0e0bcad473e4049a498601069769ccca61adbeb9874f8053daee5da86d8531e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WMXSSI4K%2F20261015%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261015T130420Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAQaCXVzLXdlc3QtMiJHMEUCIEwIkNfHTUNipbLNBEoKPlT9lNEX%2BJFwJFykTjcr3YOVAiEA2cA6gHXxJRHNsws0pDByZZNLeEMdHlfMrwMxvUn%2F6ggqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGWwqon3UTnc82kltircA2pHoMkqnGObIyu2mmXLJVaIWgHI8x%2Fsk8%2FAJt1GHBkJNokJAoc4XMR9ZajopBGleNWzpqNo9auKjfI%2F22LU1WGAp8sKxC5tVISzC67ao4ziidaW9uLnJKs3rd7%2F3wsIWbS%2FESXaJRSdDijIbo73x1eOT1P3%2FHwdAFiSoFOjcH1CBbpYkQ%2Btao6vx0ca3EtQmKynjMbRZT3eLE24l5OdE%2BOoLiwK7hiOL2LaF4X8RCbTAOwdV21LzQnWXufs48ZNOyT011JNQ3OIDeVVN95qwK%2BNQYow1m1ePyxfA57kd18FfRIX0rDe1knvM0CDnlDH8WhbARc9W2nbxkRpK491GYI%2BTbJ9Kzst0%2BPclMgp2O%2FnGEfEZU8l3HaZGQV%2BCJoK67TLmsrvEosh%2BQ%2BJBt%2Bj9QO44J8z3ZOQj1WHztba6483h%2Bf8h4hIowUwyqAoUJnbuHtc2%2FMBhzAK53rOTMHPo%2F4Tb0qPxg7mfrVAA6h2d%2BfwVsx91HcztHhMPVIQ0HxCSZHjacRpQ9mcggEut4P88WlBeAcAk80vecbkIFVQpXgEUvNAr%2FYIJB50jmeGC%2FgObQHXL5AdBFU60VyHXvS3NACLu%2F7OJmm%2BckV9DVuafXUPObufS7%2Fe2x6rjy5JMOntwtYGOqUBFp%2FtXOrRkekdePFEuHfIxKJ0hO4CPG%2BOjr6MaqQNoEMjA6aBBkEw4YtHXW7xhr0K37d8ureEQako9dHMz8j6xDev5NJpRLjDcjFGZV6AvdDpgW3kKoRHdxon2okIb%2BnkGHHYC67Tx8yzD%2F76GLW50v%2B2czrANhHyamqTuwDowQ7U2VeFqLi79qzO66YojdzDq2MPNmt2TiRnd3lg%2BP62iv0unRkZ&X-Amz-Signature=9592bfbbafc0283aa5caeacd51fc3bfc2e777c8f44cc365889eefdffc6d8711f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WMXSSI4K%2F20261015%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261015T130420Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAQaCXVzLXdlc3QtMiJHMEUCIEwIkNfHTUNipbLNBEoKPlT9lNEX%2BJFwJFykTjcr3YOVAiEA2cA6gHXxJRHNsws0pDByZZNLeEMdHlfMrwMxvUn%2F6ggqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGWwqon3UTnc82kltircA2pHoMkqnGObIyu2mmXLJVaIWgHI8x%2Fsk8%2FAJt1GHBkJNokJAoc4XMR9ZajopBGleNWzpqNo9auKjfI%2F22LU1WGAp8sKxC5tVISzC67ao4ziidaW9uLnJKs3rd7%2F3wsIWbS%2FESXaJRSdDijIbo73x1eOT1P3%2FHwdAFiSoFOjcH1CBbpYkQ%2Btao6vx0ca3EtQmKynjMbRZT3eLE24l5OdE%2BOoLiwK7hiOL2LaF4X8RCbTAOwdV21LzQnWXufs48ZNOyT011JNQ3OIDeVVN95qwK%2BNQYow1m1ePyxfA57kd18FfRIX0rDe1knvM0CDnlDH8WhbARc9W2nbxkRpK491GYI%2BTbJ9Kzst0%2BPclMgp2O%2FnGEfEZU8l3HaZGQV%2BCJoK67TLmsrvEosh%2BQ%2BJBt%2Bj9QO44J8z3ZOQj1WHztba6483h%2Bf8h4hIowUwyqAoUJnbuHtc2%2FMBhzAK53rOTMHPo%2F4Tb0qPxg7mfrVAA6h2d%2BfwVsx91HcztHhMPVIQ0HxCSZHjacRpQ9mcggEut4P88WlBeAcAk80vecbkIFVQpXgEUvNAr%2FYIJB50jmeGC%2FgObQHXL5AdBFU60VyHXvS3NACLu%2F7OJmm%2BckV9DVuafXUPObufS7%2Fe2x6rjy5JMOntwtYGOqUBFp%2FtXOrRkekdePFEuHfIxKJ0hO4CPG%2BOjr6MaqQNoEMjA6aBBkEw4YtHXW7xhr0K37d8ureEQako9dHMz8j6xDev5NJpRLjDcjFGZV6AvdDpgW3kKoRHdxon2okIb%2BnkGHHYC67Tx8yzD%2F76GLW50v%2B2czrANhHyamqTuwDowQ7U2VeFqLi79qzO66YojdzDq2MPNmt2TiRnd3lg%2BP62iv0unRkZ&X-Amz-Signature=10e0e7fe465c629e601957caf0dc804383c43e90476e59144c84487c112e4f52&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
