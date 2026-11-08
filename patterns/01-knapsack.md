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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666CTETKXM%2F20261108%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261108T144622Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJHMEUCIQDcrtfVxAekT9W4Mp2jji%2B3f7iqIA8AdvA7vjjYywdfaAIgLYhlrkw27HuG2%2BkK9eJF6stBHOs82ZKOSomIgA8JSMIq%2FwMIDxAAGgw2Mzc0MjMxODM4MDUiDK0yLrLRWNQpa7MH0SrcAxJOLTep5UKyDU27PbUJykX9Ekeu%2BSb5WlxdP3szY26U356TE1ldjfofpUNNY4OX3%2FHGUQN%2FYTI2dsOuULDIg1R8W7o%2By1KSkcZN5QQGYvUJClCWrlnksH6E1uLDe2%2Bf2hoUXqESvSWYSY7zAmklgfeBFwMhhOREuhwR20i41bZklhCwajSy4qIWV%2F%2FCd9FBU2L%2FJJ0k5%2BlTBPMHxgSNusSSAquZnybQuoB2BdWBObXCsaEejaAvhhZZ55m7FprSkUpbDS%2Bje%2BxRDXgOnif8XnamKzUKZ2iRAbEDaoKerZOOW9BFNAVlqa8%2BtPY0F%2FFFkfIxXOQaP8WdYExCTG9XAkZXqtbmK9zJ1yt6J7TZWmpoMdLchrT5S0QWdIQ7UyOkg3kIrspzptGQMO0IX%2FbVee0SULtO%2FLiHIn0KnRB1auFpM6K9VJeAdttXErEZNTYYtgmU81Wt%2BsSc0G0%2BLCTN6gsJwYeSOWOFmaLBd%2Bn2yecPjNP96kQuSQrfb%2Fmsv8V93trB6Nuq5cIRJhHDmShRNZohCm0zZlYIqlZByXf20G6JMP2z6m7AsHo%2FFBXf9PoNMMIgtETWPEpJrXGAua31chL1ry0JmngJ2YcqccPMqTlcXYuv44q6j7ZfEayMMMr7wdcGOqUB%2F2avbKXthf3v3NTtdNJfmK5mYoNF8aGbWyq0Vrp1UNHt9sw%2Be8cwRjAAmIX8CD%2Fr3qWJbfKLDqzt1OgbGlM4PmP02KhCb%2BrYaHhnoRpJk6U6g6B2%2B7Gx1GAXoJTkd79CO6G5eaTkul4agIkYnVTglmAUZUgDJgqakDqP85KRFYbW6rSX2eRzpOEEwUlmAwpad8%2Fk10fOm7DrwXOI4WzX873bkqyS&X-Amz-Signature=c0b1390c14ed23dde40cc7c6eafd6863af6d99379e5a64e8cc93da4cc6d59789&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666CTETKXM%2F20261108%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261108T144622Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJHMEUCIQDcrtfVxAekT9W4Mp2jji%2B3f7iqIA8AdvA7vjjYywdfaAIgLYhlrkw27HuG2%2BkK9eJF6stBHOs82ZKOSomIgA8JSMIq%2FwMIDxAAGgw2Mzc0MjMxODM4MDUiDK0yLrLRWNQpa7MH0SrcAxJOLTep5UKyDU27PbUJykX9Ekeu%2BSb5WlxdP3szY26U356TE1ldjfofpUNNY4OX3%2FHGUQN%2FYTI2dsOuULDIg1R8W7o%2By1KSkcZN5QQGYvUJClCWrlnksH6E1uLDe2%2Bf2hoUXqESvSWYSY7zAmklgfeBFwMhhOREuhwR20i41bZklhCwajSy4qIWV%2F%2FCd9FBU2L%2FJJ0k5%2BlTBPMHxgSNusSSAquZnybQuoB2BdWBObXCsaEejaAvhhZZ55m7FprSkUpbDS%2Bje%2BxRDXgOnif8XnamKzUKZ2iRAbEDaoKerZOOW9BFNAVlqa8%2BtPY0F%2FFFkfIxXOQaP8WdYExCTG9XAkZXqtbmK9zJ1yt6J7TZWmpoMdLchrT5S0QWdIQ7UyOkg3kIrspzptGQMO0IX%2FbVee0SULtO%2FLiHIn0KnRB1auFpM6K9VJeAdttXErEZNTYYtgmU81Wt%2BsSc0G0%2BLCTN6gsJwYeSOWOFmaLBd%2Bn2yecPjNP96kQuSQrfb%2Fmsv8V93trB6Nuq5cIRJhHDmShRNZohCm0zZlYIqlZByXf20G6JMP2z6m7AsHo%2FFBXf9PoNMMIgtETWPEpJrXGAua31chL1ry0JmngJ2YcqccPMqTlcXYuv44q6j7ZfEayMMMr7wdcGOqUB%2F2avbKXthf3v3NTtdNJfmK5mYoNF8aGbWyq0Vrp1UNHt9sw%2Be8cwRjAAmIX8CD%2Fr3qWJbfKLDqzt1OgbGlM4PmP02KhCb%2BrYaHhnoRpJk6U6g6B2%2B7Gx1GAXoJTkd79CO6G5eaTkul4agIkYnVTglmAUZUgDJgqakDqP85KRFYbW6rSX2eRzpOEEwUlmAwpad8%2Fk10fOm7DrwXOI4WzX873bkqyS&X-Amz-Signature=2347075d7bc0d3f599444a1f0c9500da5a8050917e0aa1c7d516b603ce0d44c1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666CTETKXM%2F20261108%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261108T144622Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEYaCXVzLXdlc3QtMiJHMEUCIQDcrtfVxAekT9W4Mp2jji%2B3f7iqIA8AdvA7vjjYywdfaAIgLYhlrkw27HuG2%2BkK9eJF6stBHOs82ZKOSomIgA8JSMIq%2FwMIDxAAGgw2Mzc0MjMxODM4MDUiDK0yLrLRWNQpa7MH0SrcAxJOLTep5UKyDU27PbUJykX9Ekeu%2BSb5WlxdP3szY26U356TE1ldjfofpUNNY4OX3%2FHGUQN%2FYTI2dsOuULDIg1R8W7o%2By1KSkcZN5QQGYvUJClCWrlnksH6E1uLDe2%2Bf2hoUXqESvSWYSY7zAmklgfeBFwMhhOREuhwR20i41bZklhCwajSy4qIWV%2F%2FCd9FBU2L%2FJJ0k5%2BlTBPMHxgSNusSSAquZnybQuoB2BdWBObXCsaEejaAvhhZZ55m7FprSkUpbDS%2Bje%2BxRDXgOnif8XnamKzUKZ2iRAbEDaoKerZOOW9BFNAVlqa8%2BtPY0F%2FFFkfIxXOQaP8WdYExCTG9XAkZXqtbmK9zJ1yt6J7TZWmpoMdLchrT5S0QWdIQ7UyOkg3kIrspzptGQMO0IX%2FbVee0SULtO%2FLiHIn0KnRB1auFpM6K9VJeAdttXErEZNTYYtgmU81Wt%2BsSc0G0%2BLCTN6gsJwYeSOWOFmaLBd%2Bn2yecPjNP96kQuSQrfb%2Fmsv8V93trB6Nuq5cIRJhHDmShRNZohCm0zZlYIqlZByXf20G6JMP2z6m7AsHo%2FFBXf9PoNMMIgtETWPEpJrXGAua31chL1ry0JmngJ2YcqccPMqTlcXYuv44q6j7ZfEayMMMr7wdcGOqUB%2F2avbKXthf3v3NTtdNJfmK5mYoNF8aGbWyq0Vrp1UNHt9sw%2Be8cwRjAAmIX8CD%2Fr3qWJbfKLDqzt1OgbGlM4PmP02KhCb%2BrYaHhnoRpJk6U6g6B2%2B7Gx1GAXoJTkd79CO6G5eaTkul4agIkYnVTglmAUZUgDJgqakDqP85KRFYbW6rSX2eRzpOEEwUlmAwpad8%2Fk10fOm7DrwXOI4WzX873bkqyS&X-Amz-Signature=c8ad573e3f375a0d7736623a15b5cb413e814a0a58b29b935a4575108616e22d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZMENTYZH%2F20261108%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261108T144622Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEMaCXVzLXdlc3QtMiJGMEQCIFKH554sXsR01WeKPKcKW16D2PuH5qTG7OdZd2HqdCalAiAd22VvmQ6JbLZEkV15UNzZxuSE1t1obdGzC0WBqHp2hCr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIM3FR5cF4uqs3Gqm5EKtwDNAo2xOcVAyn1dQba4RKc%2Bp%2FCq71hnmX7xyypBB%2F7Pi45Qr8EHHcRfgjidTJAozfm60I1AUOToZh%2Bq4heo3kPVJF9JTNYF4Y2T%2B1XrI8ElY1XVl2SCZs7PwL22yDrmobQpicl9sVlo1Bxo6PlIIC5V0X6AeHJoITjif8vm6S8k%2FNVqZn4s4rHP1OZ20GTC7%2Fzfg1U%2BX7I%2F9w9kRqN6UbDzAtOgnSWyfHY6rzaI0TdK8geniU78WfQLggUrWZFRfAuamYtBnZOF5SeNWhrTyyDkPMNSw6nodUVcE8RgTHpIF6%2FL6%2BsztlqLq0Bl7go2Kh9nA7tmGu6YDxiO3sXIdHsNi64c2UjkSM%2F8dCUZ2DEJ2pj6Bq6o0gcoCO6p0o%2BkFkkSNH%2F%2BtmfGl8ZwCr6oDrguSpdi2563wYM0Nu5RZIF9JtZ%2FnC71i3A9uc4jt%2BpfM%2F8UvKQAYsc7GvaERHZeqUtkEEdb2UR8sxIXuvhQKiSS79LiL%2B1SGzXyCPZfeiPKD6IYct7PGCnMkBhxrS99q1BlFQ9kIhDrXzYgTJ7ZqAQ4wY1Mm0zFS6StkgWWqfvg4UI9RLYgDiXkIoiAu0PAEmc4T4YvFBAd0i%2FHdTemdX0yr2Y0hKPVEFLcM2iSm0wm6HB1wY6pgHplloMPTWII1S8OT0W%2BZUYQY99x4wYDa3m4hplchMxOQVFwWqQtLLEaFJB2r5ZxGGAjwIaDAouhLO43MVhsc4jgBxYTyxsYcfxXmGdJIsKseTz2ylYdpj4ijtwUwO%2FjkK7T1VzltXWMpOCdO4tGXENAG2IxIA%2FjU5twSjKx9Isu5AtwWSvenB0r6iXkojuTymzOqY9xq%2Bbuyh%2FStxkjpfvSYbhDJyh&X-Amz-Signature=bc9b57c6884b1d49e02051b7cddf57e0195bca4297c0029cfd02c5178f502eca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZMENTYZH%2F20261108%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261108T144622Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEMaCXVzLXdlc3QtMiJGMEQCIFKH554sXsR01WeKPKcKW16D2PuH5qTG7OdZd2HqdCalAiAd22VvmQ6JbLZEkV15UNzZxuSE1t1obdGzC0WBqHp2hCr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIM3FR5cF4uqs3Gqm5EKtwDNAo2xOcVAyn1dQba4RKc%2Bp%2FCq71hnmX7xyypBB%2F7Pi45Qr8EHHcRfgjidTJAozfm60I1AUOToZh%2Bq4heo3kPVJF9JTNYF4Y2T%2B1XrI8ElY1XVl2SCZs7PwL22yDrmobQpicl9sVlo1Bxo6PlIIC5V0X6AeHJoITjif8vm6S8k%2FNVqZn4s4rHP1OZ20GTC7%2Fzfg1U%2BX7I%2F9w9kRqN6UbDzAtOgnSWyfHY6rzaI0TdK8geniU78WfQLggUrWZFRfAuamYtBnZOF5SeNWhrTyyDkPMNSw6nodUVcE8RgTHpIF6%2FL6%2BsztlqLq0Bl7go2Kh9nA7tmGu6YDxiO3sXIdHsNi64c2UjkSM%2F8dCUZ2DEJ2pj6Bq6o0gcoCO6p0o%2BkFkkSNH%2F%2BtmfGl8ZwCr6oDrguSpdi2563wYM0Nu5RZIF9JtZ%2FnC71i3A9uc4jt%2BpfM%2F8UvKQAYsc7GvaERHZeqUtkEEdb2UR8sxIXuvhQKiSS79LiL%2B1SGzXyCPZfeiPKD6IYct7PGCnMkBhxrS99q1BlFQ9kIhDrXzYgTJ7ZqAQ4wY1Mm0zFS6StkgWWqfvg4UI9RLYgDiXkIoiAu0PAEmc4T4YvFBAd0i%2FHdTemdX0yr2Y0hKPVEFLcM2iSm0wm6HB1wY6pgHplloMPTWII1S8OT0W%2BZUYQY99x4wYDa3m4hplchMxOQVFwWqQtLLEaFJB2r5ZxGGAjwIaDAouhLO43MVhsc4jgBxYTyxsYcfxXmGdJIsKseTz2ylYdpj4ijtwUwO%2FjkK7T1VzltXWMpOCdO4tGXENAG2IxIA%2FjU5twSjKx9Isu5AtwWSvenB0r6iXkojuTymzOqY9xq%2Bbuyh%2FStxkjpfvSYbhDJyh&X-Amz-Signature=d36cc1b41eea78fffd8962a845f7b39c68ea6efb7da3d3fbf51f415ce4848196&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZMENTYZH%2F20261108%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261108T144622Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEMaCXVzLXdlc3QtMiJGMEQCIFKH554sXsR01WeKPKcKW16D2PuH5qTG7OdZd2HqdCalAiAd22VvmQ6JbLZEkV15UNzZxuSE1t1obdGzC0WBqHp2hCr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIM3FR5cF4uqs3Gqm5EKtwDNAo2xOcVAyn1dQba4RKc%2Bp%2FCq71hnmX7xyypBB%2F7Pi45Qr8EHHcRfgjidTJAozfm60I1AUOToZh%2Bq4heo3kPVJF9JTNYF4Y2T%2B1XrI8ElY1XVl2SCZs7PwL22yDrmobQpicl9sVlo1Bxo6PlIIC5V0X6AeHJoITjif8vm6S8k%2FNVqZn4s4rHP1OZ20GTC7%2Fzfg1U%2BX7I%2F9w9kRqN6UbDzAtOgnSWyfHY6rzaI0TdK8geniU78WfQLggUrWZFRfAuamYtBnZOF5SeNWhrTyyDkPMNSw6nodUVcE8RgTHpIF6%2FL6%2BsztlqLq0Bl7go2Kh9nA7tmGu6YDxiO3sXIdHsNi64c2UjkSM%2F8dCUZ2DEJ2pj6Bq6o0gcoCO6p0o%2BkFkkSNH%2F%2BtmfGl8ZwCr6oDrguSpdi2563wYM0Nu5RZIF9JtZ%2FnC71i3A9uc4jt%2BpfM%2F8UvKQAYsc7GvaERHZeqUtkEEdb2UR8sxIXuvhQKiSS79LiL%2B1SGzXyCPZfeiPKD6IYct7PGCnMkBhxrS99q1BlFQ9kIhDrXzYgTJ7ZqAQ4wY1Mm0zFS6StkgWWqfvg4UI9RLYgDiXkIoiAu0PAEmc4T4YvFBAd0i%2FHdTemdX0yr2Y0hKPVEFLcM2iSm0wm6HB1wY6pgHplloMPTWII1S8OT0W%2BZUYQY99x4wYDa3m4hplchMxOQVFwWqQtLLEaFJB2r5ZxGGAjwIaDAouhLO43MVhsc4jgBxYTyxsYcfxXmGdJIsKseTz2ylYdpj4ijtwUwO%2FjkK7T1VzltXWMpOCdO4tGXENAG2IxIA%2FjU5twSjKx9Isu5AtwWSvenB0r6iXkojuTymzOqY9xq%2Bbuyh%2FStxkjpfvSYbhDJyh&X-Amz-Signature=bb1074f889bc70b2decc1d3b642ef86990912c63b7adb4c84a0c441a7260ffbc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZMENTYZH%2F20261108%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261108T144622Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEMaCXVzLXdlc3QtMiJGMEQCIFKH554sXsR01WeKPKcKW16D2PuH5qTG7OdZd2HqdCalAiAd22VvmQ6JbLZEkV15UNzZxuSE1t1obdGzC0WBqHp2hCr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIM3FR5cF4uqs3Gqm5EKtwDNAo2xOcVAyn1dQba4RKc%2Bp%2FCq71hnmX7xyypBB%2F7Pi45Qr8EHHcRfgjidTJAozfm60I1AUOToZh%2Bq4heo3kPVJF9JTNYF4Y2T%2B1XrI8ElY1XVl2SCZs7PwL22yDrmobQpicl9sVlo1Bxo6PlIIC5V0X6AeHJoITjif8vm6S8k%2FNVqZn4s4rHP1OZ20GTC7%2Fzfg1U%2BX7I%2F9w9kRqN6UbDzAtOgnSWyfHY6rzaI0TdK8geniU78WfQLggUrWZFRfAuamYtBnZOF5SeNWhrTyyDkPMNSw6nodUVcE8RgTHpIF6%2FL6%2BsztlqLq0Bl7go2Kh9nA7tmGu6YDxiO3sXIdHsNi64c2UjkSM%2F8dCUZ2DEJ2pj6Bq6o0gcoCO6p0o%2BkFkkSNH%2F%2BtmfGl8ZwCr6oDrguSpdi2563wYM0Nu5RZIF9JtZ%2FnC71i3A9uc4jt%2BpfM%2F8UvKQAYsc7GvaERHZeqUtkEEdb2UR8sxIXuvhQKiSS79LiL%2B1SGzXyCPZfeiPKD6IYct7PGCnMkBhxrS99q1BlFQ9kIhDrXzYgTJ7ZqAQ4wY1Mm0zFS6StkgWWqfvg4UI9RLYgDiXkIoiAu0PAEmc4T4YvFBAd0i%2FHdTemdX0yr2Y0hKPVEFLcM2iSm0wm6HB1wY6pgHplloMPTWII1S8OT0W%2BZUYQY99x4wYDa3m4hplchMxOQVFwWqQtLLEaFJB2r5ZxGGAjwIaDAouhLO43MVhsc4jgBxYTyxsYcfxXmGdJIsKseTz2ylYdpj4ijtwUwO%2FjkK7T1VzltXWMpOCdO4tGXENAG2IxIA%2FjU5twSjKx9Isu5AtwWSvenB0r6iXkojuTymzOqY9xq%2Bbuyh%2FStxkjpfvSYbhDJyh&X-Amz-Signature=f405f1353c2832f4c033d35cf8cd2a155957f084502c75debdcf58c1ac4b28a0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665HTJXSCX%2F20261108%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261108T144622Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEMaCXVzLXdlc3QtMiJGMEQCIFb4GYusjpbxIvg%2B4dPPYy%2FsEuJxLwNKVMc2v9I4aJr5AiA5wh3PX3TI05%2BIPE0CL1J4S6trfzkJCddPHe4M%2B5VKBSr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIM0OeIgLuX8DL7Bk9sKtwD9pUc%2FBzTtVEdhIGEdyLjpFod0zWIiu5KCA0O9SjWBZvjtzo%2FAMwwZRwLlDdyBm5%2F7gKuzQugZYMeA%2Bj0nw73kjW31iZbfXBILBmxbs%2BTd8%2FYq61mjTAfBSk4p5E2qcCW1S2NC23y0LoDXqhLaUvAxtQ5AL3FxKLvQE3DJFCPgPL3I3CB%2FQ4jxEWUHe4VtDRmYro0S7NpBEB4M2aHLXCr1WVDaU26FwFK4%2FLsxZOBuiT4ABIKcWTu7oNJZRHdQxe09kJCezaCZQZDtRQGlZ8VKmvDLYQw1bOa4%2B640Su%2B1mNtmlAoA1aDPuiaM93oohNPwLnIlq%2B7Toaw3puZQDz7k0nJNO23dwnfdQMqUcQSyQLDuQ0rkkzxYZ%2FHZzSZNWaYqzMxYEWqcO91J7StYC4pvEbAP3bIBXWA4dW54Ipm12eCBGBhJF%2BhAQ48ajRhArsndPrf6uSpoKSpoiojeTHHteA0fn6XACzw1EA%2Bt%2BqBw5VriafSdZStCJiI9lB2r7Qt6bIDCwdDrKwtgJhg%2BTHTbCglaoQr7a4mWHt3syLgMs1MEAWC%2FL8MLZcQowD6GmOfbSJWzl8%2Fl0Ki04DuCOasu0LMaGRVYVLjYOy09jXg4QfJet%2FXsLkaBDFZjp0wqqPB1wY6pgFfGyHTzexgKnIhQG55GlllM3aVvE1XhnT1IR0SKTMirk2znQb7qXqSJNMPVDZxrLyaw9YtAASmsoeEFaCS1P0yUav65to%2B3rOwjgc9AiFQKs86zfX1IuSEriJdapK7eKwFdMzCNrdg6h9%2BQARICxgykVTfXuowFkqo9rKJESaBWl6eKWSJ1yGGSWVpuIHu9E5iBKCXYm24oj%2Fh7B7qfuQt%2FqLWPVUb&X-Amz-Signature=1627017cc36b03df0027c074263a3a9d1d944a9a18d50b8a85b85b62f4cccace&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VZPIUYR6%2F20261108%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261108T144622Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEMaCXVzLXdlc3QtMiJGMEQCIDk0IPWgOJ3Ei0MPQOrzng7BZes2ZFe0nI07CUtaZaT%2FAiB%2F7QtIyZ6Jr9Z%2B%2FfTqDbh3p%2FxRMCrK%2BCkPYmCMx9QYvyr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIMIwj%2B%2B4P41O1WxV8RKtwDsC%2BIsKvbRwKvP2WogVhE3wRmKSrmMJGURzAR5aIKSPYl4f7biiy%2FZDaEUrnCqvAOOq7N2LgVIcUVwKnIQPAtnxYMz2Ft42eh8n3BKAuSwF1QBY7p9Qlmv%2Fzx0zQlcasi2FN6e7GMFKjYKVuPBZsTM23YOSMeYkrk%2Fn3ihB0JKzgSdk3XrMrk%2FCkfb8doBZA%2BQ%2BX%2B9GgwpPKKNJaTyCgFnquYH4a%2FCzXPD8SNF5xdZG4CxNN0peJ%2Bc%2B6NRuyXxfnnA0TmcF6TZFaLZl3pPhWf5PNb7R3esiRQKFP95vV7UkdhZ93%2B4Zel3rgc%2Bbh0qLb9tUClupmqYr7dSqPpY6irAcoSRuT8M%2B6ZrBuxpMLV5Zvk8TOVDJBwzDghkCX0pR%2FK0OXrvwvWv6WEyKE5Iw64%2Bpah3GDCFn1mkd%2FwLuuCEysPSMAHzXrdftx%2Bo6JFbmvaEZgApsVVAPrMcQjLZUURPA9xrz%2FtQExeMyJmUZFT1AvVpKlax5XUElvXY802Mwm7IDAKIoLmPvBxVRlmu8arFi9zzZJ7LT4iLGqsAIM4Nht8knx6ZHSQzs83w9DC%2BOW3vPmmqG8%2FqG30MuRKBXdZ9qAK981%2Ba0dQdUvkr0GxMflItOeBEfiCRSUKUWIwoaHB1wY6pgF6WGxF%2FZDPWcCfwUvPIGYt%2FtLMMJOlb4CTJMQoYqD6xq%2ByQmXBnq4PgEgMIuN2b4IYWmr63Imox4He4b8pwSCjANNSGS5YWraCMO7royLdxBjD2WZ9JBVaEHVI8vMx9eoY0r7gFhtffA94YhWD1UALLpqDdP7EwSASYkB75RLvwNVVoqZHFVbA6G9ilMiaJBQ9lURJULrT5NrFnsoAYVO7mKOQ7aX7&X-Amz-Signature=3d1fb4023f8bf6a5ef0beb9db879794252fc275a8cf2303de9bfead841a9ef33&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VZPIUYR6%2F20261108%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261108T144622Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEMaCXVzLXdlc3QtMiJGMEQCIDk0IPWgOJ3Ei0MPQOrzng7BZes2ZFe0nI07CUtaZaT%2FAiB%2F7QtIyZ6Jr9Z%2B%2FfTqDbh3p%2FxRMCrK%2BCkPYmCMx9QYvyr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIMIwj%2B%2B4P41O1WxV8RKtwDsC%2BIsKvbRwKvP2WogVhE3wRmKSrmMJGURzAR5aIKSPYl4f7biiy%2FZDaEUrnCqvAOOq7N2LgVIcUVwKnIQPAtnxYMz2Ft42eh8n3BKAuSwF1QBY7p9Qlmv%2Fzx0zQlcasi2FN6e7GMFKjYKVuPBZsTM23YOSMeYkrk%2Fn3ihB0JKzgSdk3XrMrk%2FCkfb8doBZA%2BQ%2BX%2B9GgwpPKKNJaTyCgFnquYH4a%2FCzXPD8SNF5xdZG4CxNN0peJ%2Bc%2B6NRuyXxfnnA0TmcF6TZFaLZl3pPhWf5PNb7R3esiRQKFP95vV7UkdhZ93%2B4Zel3rgc%2Bbh0qLb9tUClupmqYr7dSqPpY6irAcoSRuT8M%2B6ZrBuxpMLV5Zvk8TOVDJBwzDghkCX0pR%2FK0OXrvwvWv6WEyKE5Iw64%2Bpah3GDCFn1mkd%2FwLuuCEysPSMAHzXrdftx%2Bo6JFbmvaEZgApsVVAPrMcQjLZUURPA9xrz%2FtQExeMyJmUZFT1AvVpKlax5XUElvXY802Mwm7IDAKIoLmPvBxVRlmu8arFi9zzZJ7LT4iLGqsAIM4Nht8knx6ZHSQzs83w9DC%2BOW3vPmmqG8%2FqG30MuRKBXdZ9qAK981%2Ba0dQdUvkr0GxMflItOeBEfiCRSUKUWIwoaHB1wY6pgF6WGxF%2FZDPWcCfwUvPIGYt%2FtLMMJOlb4CTJMQoYqD6xq%2ByQmXBnq4PgEgMIuN2b4IYWmr63Imox4He4b8pwSCjANNSGS5YWraCMO7royLdxBjD2WZ9JBVaEHVI8vMx9eoY0r7gFhtffA94YhWD1UALLpqDdP7EwSASYkB75RLvwNVVoqZHFVbA6G9ilMiaJBQ9lURJULrT5NrFnsoAYVO7mKOQ7aX7&X-Amz-Signature=2b97f1986280ba6ed62059bde5defe4d81ecb57c51cf8c0484f63e67d3f5ddfa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
