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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46675QWZ3HH%2F20260427%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260427T101348Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG5zpCp9skSg9Ku9G913drMgMJJagJz1stbAOllddPVZAiEA2S8oOdnbGo6Nae%2FYFT1s3aG%2BCe111CSFe55vNNe5x7AqiAQIw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMY4ZiVOSw7PYPWiMircAyKhH6spi6pmyjPsSn%2BsIcAg7qBeE3nwh4NwEefhEHLJRLqbIjOxTdk0b8r7bfrMP6KL4ViqTrg4E2Nvs6hf9h%2BSULpxyGpsf%2B%2BpVtjX1SFr4iVzC9TPm8Af3Ub7T8L20wbSR1ymRFpuq2Jm1u1r0wH6tf%2FBKcGNXUveBNo3Cc5q1mmSYL8epi87Tn6R6%2FKduBy1U%2FFhBJRLTGxGh7ZBYWT2sjVbuKYpKP4Ddx9OJTqxK2yLOlgSYmBKuqpPp8p6%2FoOS%2Fpo9Q8Q3kLGrObIMzt3OMrVHuwnSYMzuL9XzbjTFryUvM4hgzcncUb29WRaDrsPkoyZQf9ASZR6si0OqpR7uxjkOlpMC8VStLYcax9vhWSLrJ0Hn0ENZqI4cDrnmgujhuTV8T2wVBZLg54LiZ3CDl%2B5%2BYb7ttdYVObXjKR59T%2FZ16bdWnh%2FEN80J1w9WmvpA%2Fg9pIqfkcCFYw6E3NaVldQas1VPOV08cGvYFTnyjH4cZTqpr1nRZ4hQvY5suxPviqaCb4hyRf8j23vEKqDiWaVP1aKTZhiLUN6OacXmB304kC7tSAi6HIEeC4L1J0706fVpmVPKqai6pDhxlb4o6FEtOdL44qkjfSL0fws03xxz5ERji0K%2FBDF%2BJMKrevM8GOqUBr7iF2fGwkzYWeWTQULxg07B5f6slwAHa%2FgFt1UrO13voeOF7yMqWJykDhY3KtTnQXgmWI6YnPSMUUobSRl0VUZPhprGHTQQdBPnVgL3sABEXkNywivB0rNKkIDJhaN1fUryLKQB4jwY4b%2BJPZVhqSzq1QN5ZkNJYJnUkBfxH6kFl7uaaO1iWu2BIUZ2LtA25IhojooU6bDQwdPW75sWl94zV9GFb&X-Amz-Signature=885cb7963d536a1df5403899974fb2a0479d008150666d4caf0365b1793ad6a1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46675QWZ3HH%2F20260427%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260427T101348Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG5zpCp9skSg9Ku9G913drMgMJJagJz1stbAOllddPVZAiEA2S8oOdnbGo6Nae%2FYFT1s3aG%2BCe111CSFe55vNNe5x7AqiAQIw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMY4ZiVOSw7PYPWiMircAyKhH6spi6pmyjPsSn%2BsIcAg7qBeE3nwh4NwEefhEHLJRLqbIjOxTdk0b8r7bfrMP6KL4ViqTrg4E2Nvs6hf9h%2BSULpxyGpsf%2B%2BpVtjX1SFr4iVzC9TPm8Af3Ub7T8L20wbSR1ymRFpuq2Jm1u1r0wH6tf%2FBKcGNXUveBNo3Cc5q1mmSYL8epi87Tn6R6%2FKduBy1U%2FFhBJRLTGxGh7ZBYWT2sjVbuKYpKP4Ddx9OJTqxK2yLOlgSYmBKuqpPp8p6%2FoOS%2Fpo9Q8Q3kLGrObIMzt3OMrVHuwnSYMzuL9XzbjTFryUvM4hgzcncUb29WRaDrsPkoyZQf9ASZR6si0OqpR7uxjkOlpMC8VStLYcax9vhWSLrJ0Hn0ENZqI4cDrnmgujhuTV8T2wVBZLg54LiZ3CDl%2B5%2BYb7ttdYVObXjKR59T%2FZ16bdWnh%2FEN80J1w9WmvpA%2Fg9pIqfkcCFYw6E3NaVldQas1VPOV08cGvYFTnyjH4cZTqpr1nRZ4hQvY5suxPviqaCb4hyRf8j23vEKqDiWaVP1aKTZhiLUN6OacXmB304kC7tSAi6HIEeC4L1J0706fVpmVPKqai6pDhxlb4o6FEtOdL44qkjfSL0fws03xxz5ERji0K%2FBDF%2BJMKrevM8GOqUBr7iF2fGwkzYWeWTQULxg07B5f6slwAHa%2FgFt1UrO13voeOF7yMqWJykDhY3KtTnQXgmWI6YnPSMUUobSRl0VUZPhprGHTQQdBPnVgL3sABEXkNywivB0rNKkIDJhaN1fUryLKQB4jwY4b%2BJPZVhqSzq1QN5ZkNJYJnUkBfxH6kFl7uaaO1iWu2BIUZ2LtA25IhojooU6bDQwdPW75sWl94zV9GFb&X-Amz-Signature=2ddc05c900699b55445fb87362a10da993e0a786d809733793c5bad9f498469b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46675QWZ3HH%2F20260427%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260427T101348Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG5zpCp9skSg9Ku9G913drMgMJJagJz1stbAOllddPVZAiEA2S8oOdnbGo6Nae%2FYFT1s3aG%2BCe111CSFe55vNNe5x7AqiAQIw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMY4ZiVOSw7PYPWiMircAyKhH6spi6pmyjPsSn%2BsIcAg7qBeE3nwh4NwEefhEHLJRLqbIjOxTdk0b8r7bfrMP6KL4ViqTrg4E2Nvs6hf9h%2BSULpxyGpsf%2B%2BpVtjX1SFr4iVzC9TPm8Af3Ub7T8L20wbSR1ymRFpuq2Jm1u1r0wH6tf%2FBKcGNXUveBNo3Cc5q1mmSYL8epi87Tn6R6%2FKduBy1U%2FFhBJRLTGxGh7ZBYWT2sjVbuKYpKP4Ddx9OJTqxK2yLOlgSYmBKuqpPp8p6%2FoOS%2Fpo9Q8Q3kLGrObIMzt3OMrVHuwnSYMzuL9XzbjTFryUvM4hgzcncUb29WRaDrsPkoyZQf9ASZR6si0OqpR7uxjkOlpMC8VStLYcax9vhWSLrJ0Hn0ENZqI4cDrnmgujhuTV8T2wVBZLg54LiZ3CDl%2B5%2BYb7ttdYVObXjKR59T%2FZ16bdWnh%2FEN80J1w9WmvpA%2Fg9pIqfkcCFYw6E3NaVldQas1VPOV08cGvYFTnyjH4cZTqpr1nRZ4hQvY5suxPviqaCb4hyRf8j23vEKqDiWaVP1aKTZhiLUN6OacXmB304kC7tSAi6HIEeC4L1J0706fVpmVPKqai6pDhxlb4o6FEtOdL44qkjfSL0fws03xxz5ERji0K%2FBDF%2BJMKrevM8GOqUBr7iF2fGwkzYWeWTQULxg07B5f6slwAHa%2FgFt1UrO13voeOF7yMqWJykDhY3KtTnQXgmWI6YnPSMUUobSRl0VUZPhprGHTQQdBPnVgL3sABEXkNywivB0rNKkIDJhaN1fUryLKQB4jwY4b%2BJPZVhqSzq1QN5ZkNJYJnUkBfxH6kFl7uaaO1iWu2BIUZ2LtA25IhojooU6bDQwdPW75sWl94zV9GFb&X-Amz-Signature=99f7aaf77e27a2c2d33872b7416bdf0e5251c67a0dbcc3605f56b8afd506d7db&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QWS74T7O%2F20260427%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260427T101349Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHv3uw8evPL5RjFwTAuyZA7%2FHbitU1Q4HzbF2YVPs503AiEAmTnE%2BsSUIDaLOuppBj77eO4TMPGJqCTQ2cnKk%2Fs92yIqiAQIw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAhNVEJWtQ5wIKgGIyrcA4EdwpeZy7BqHPWHmUPbPp7rsgIajaDQv4hZu3swTsu36apbDHxiFqAetIq%2FsvK7Z6V7FFQ26hd%2FmpGvTFvWRhqZTTHw%2BHB8bFKjf1WSRMPe7OxcyE0D7PKS5IEizAWkUqPiu2ZldZjZFe%2Fg0G132cSIAovf3Aqm4mcMjT6swUw7bAs8D9cQPPw29B7VXnrx%2F6cIyRo4HI48lYAcrwry%2BDzUxjl77Xz2rpKecsvuTKIwc%2Bky%2F8dDaYQkziDyPS3H7DIyBi1QJ0ageTAHx%2B6nD53f2GHMysxKfcPtFvhC8YCQItvkdRCEzT58EvF%2FifIRvInnbSRQh0JTg0XSFZBH5MnrGonleJvMPsejVd3RYcGOydiQrPHRyb6O1EKGmLGrrQPZ9OFvwupEXRYd99qxQCTt32XSWguydxIwyy6l3dj1GWHX1tRR7H3%2Bu0qiMHQ2%2B1KvaxLkCnBE7eAe4MxQ0VY7cXloF73LlECFFPDXBRwyE8GOipt8%2BVnOeA7CCRhxG0oh5xGM0fQZZ%2BGmADRr3tuRwIJ2%2B8Pt1%2FJbAuvaMJJWZeK8QOA0BE0MaXe%2FPwBts%2BpKCqIciprRr%2FfOtuGIzOuQfWX5h0bAg2U5Ht7zAeXLZ2UQzH0wBt%2FM7aBRMJjgvM8GOqUBumY36qP%2FnyexW7OuPJn%2Bm8imCQ6X2X5gt7Loc5bp5VFCCaRxTEQe6iYi5VfMFOdSwKHAXCUMuMg9%2FX8MFcfkZDm0YHeVzA2Y8mKQ6ihqOIkcHL%2FaEwd1RCsYb42FOT4V%2Fr7bU1O%2FqoUGcJQwF75YXqz47bYtk4k%2BgvEcUNevjM71YdKkEpcRNotL9KhvYWNZx%2Fv7QJ9F6gaMUSg5TjuNr2M2kAXO&X-Amz-Signature=cb489da7911e41da6947012aad22615a776de6ce2600ff2667b26cbba818e3fa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QWS74T7O%2F20260427%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260427T101349Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHv3uw8evPL5RjFwTAuyZA7%2FHbitU1Q4HzbF2YVPs503AiEAmTnE%2BsSUIDaLOuppBj77eO4TMPGJqCTQ2cnKk%2Fs92yIqiAQIw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAhNVEJWtQ5wIKgGIyrcA4EdwpeZy7BqHPWHmUPbPp7rsgIajaDQv4hZu3swTsu36apbDHxiFqAetIq%2FsvK7Z6V7FFQ26hd%2FmpGvTFvWRhqZTTHw%2BHB8bFKjf1WSRMPe7OxcyE0D7PKS5IEizAWkUqPiu2ZldZjZFe%2Fg0G132cSIAovf3Aqm4mcMjT6swUw7bAs8D9cQPPw29B7VXnrx%2F6cIyRo4HI48lYAcrwry%2BDzUxjl77Xz2rpKecsvuTKIwc%2Bky%2F8dDaYQkziDyPS3H7DIyBi1QJ0ageTAHx%2B6nD53f2GHMysxKfcPtFvhC8YCQItvkdRCEzT58EvF%2FifIRvInnbSRQh0JTg0XSFZBH5MnrGonleJvMPsejVd3RYcGOydiQrPHRyb6O1EKGmLGrrQPZ9OFvwupEXRYd99qxQCTt32XSWguydxIwyy6l3dj1GWHX1tRR7H3%2Bu0qiMHQ2%2B1KvaxLkCnBE7eAe4MxQ0VY7cXloF73LlECFFPDXBRwyE8GOipt8%2BVnOeA7CCRhxG0oh5xGM0fQZZ%2BGmADRr3tuRwIJ2%2B8Pt1%2FJbAuvaMJJWZeK8QOA0BE0MaXe%2FPwBts%2BpKCqIciprRr%2FfOtuGIzOuQfWX5h0bAg2U5Ht7zAeXLZ2UQzH0wBt%2FM7aBRMJjgvM8GOqUBumY36qP%2FnyexW7OuPJn%2Bm8imCQ6X2X5gt7Loc5bp5VFCCaRxTEQe6iYi5VfMFOdSwKHAXCUMuMg9%2FX8MFcfkZDm0YHeVzA2Y8mKQ6ihqOIkcHL%2FaEwd1RCsYb42FOT4V%2Fr7bU1O%2FqoUGcJQwF75YXqz47bYtk4k%2BgvEcUNevjM71YdKkEpcRNotL9KhvYWNZx%2Fv7QJ9F6gaMUSg5TjuNr2M2kAXO&X-Amz-Signature=c1e6428955f6070c9668f358c2bc15f9eac422358c2bef16f38fd1f9c411d240&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QWS74T7O%2F20260427%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260427T101349Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHv3uw8evPL5RjFwTAuyZA7%2FHbitU1Q4HzbF2YVPs503AiEAmTnE%2BsSUIDaLOuppBj77eO4TMPGJqCTQ2cnKk%2Fs92yIqiAQIw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAhNVEJWtQ5wIKgGIyrcA4EdwpeZy7BqHPWHmUPbPp7rsgIajaDQv4hZu3swTsu36apbDHxiFqAetIq%2FsvK7Z6V7FFQ26hd%2FmpGvTFvWRhqZTTHw%2BHB8bFKjf1WSRMPe7OxcyE0D7PKS5IEizAWkUqPiu2ZldZjZFe%2Fg0G132cSIAovf3Aqm4mcMjT6swUw7bAs8D9cQPPw29B7VXnrx%2F6cIyRo4HI48lYAcrwry%2BDzUxjl77Xz2rpKecsvuTKIwc%2Bky%2F8dDaYQkziDyPS3H7DIyBi1QJ0ageTAHx%2B6nD53f2GHMysxKfcPtFvhC8YCQItvkdRCEzT58EvF%2FifIRvInnbSRQh0JTg0XSFZBH5MnrGonleJvMPsejVd3RYcGOydiQrPHRyb6O1EKGmLGrrQPZ9OFvwupEXRYd99qxQCTt32XSWguydxIwyy6l3dj1GWHX1tRR7H3%2Bu0qiMHQ2%2B1KvaxLkCnBE7eAe4MxQ0VY7cXloF73LlECFFPDXBRwyE8GOipt8%2BVnOeA7CCRhxG0oh5xGM0fQZZ%2BGmADRr3tuRwIJ2%2B8Pt1%2FJbAuvaMJJWZeK8QOA0BE0MaXe%2FPwBts%2BpKCqIciprRr%2FfOtuGIzOuQfWX5h0bAg2U5Ht7zAeXLZ2UQzH0wBt%2FM7aBRMJjgvM8GOqUBumY36qP%2FnyexW7OuPJn%2Bm8imCQ6X2X5gt7Loc5bp5VFCCaRxTEQe6iYi5VfMFOdSwKHAXCUMuMg9%2FX8MFcfkZDm0YHeVzA2Y8mKQ6ihqOIkcHL%2FaEwd1RCsYb42FOT4V%2Fr7bU1O%2FqoUGcJQwF75YXqz47bYtk4k%2BgvEcUNevjM71YdKkEpcRNotL9KhvYWNZx%2Fv7QJ9F6gaMUSg5TjuNr2M2kAXO&X-Amz-Signature=aa81e3fd49d0092352c0787d050bcbd2af57ea5e73aef6601d8172f20407c2d2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QWS74T7O%2F20260427%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260427T101349Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHv3uw8evPL5RjFwTAuyZA7%2FHbitU1Q4HzbF2YVPs503AiEAmTnE%2BsSUIDaLOuppBj77eO4TMPGJqCTQ2cnKk%2Fs92yIqiAQIw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAhNVEJWtQ5wIKgGIyrcA4EdwpeZy7BqHPWHmUPbPp7rsgIajaDQv4hZu3swTsu36apbDHxiFqAetIq%2FsvK7Z6V7FFQ26hd%2FmpGvTFvWRhqZTTHw%2BHB8bFKjf1WSRMPe7OxcyE0D7PKS5IEizAWkUqPiu2ZldZjZFe%2Fg0G132cSIAovf3Aqm4mcMjT6swUw7bAs8D9cQPPw29B7VXnrx%2F6cIyRo4HI48lYAcrwry%2BDzUxjl77Xz2rpKecsvuTKIwc%2Bky%2F8dDaYQkziDyPS3H7DIyBi1QJ0ageTAHx%2B6nD53f2GHMysxKfcPtFvhC8YCQItvkdRCEzT58EvF%2FifIRvInnbSRQh0JTg0XSFZBH5MnrGonleJvMPsejVd3RYcGOydiQrPHRyb6O1EKGmLGrrQPZ9OFvwupEXRYd99qxQCTt32XSWguydxIwyy6l3dj1GWHX1tRR7H3%2Bu0qiMHQ2%2B1KvaxLkCnBE7eAe4MxQ0VY7cXloF73LlECFFPDXBRwyE8GOipt8%2BVnOeA7CCRhxG0oh5xGM0fQZZ%2BGmADRr3tuRwIJ2%2B8Pt1%2FJbAuvaMJJWZeK8QOA0BE0MaXe%2FPwBts%2BpKCqIciprRr%2FfOtuGIzOuQfWX5h0bAg2U5Ht7zAeXLZ2UQzH0wBt%2FM7aBRMJjgvM8GOqUBumY36qP%2FnyexW7OuPJn%2Bm8imCQ6X2X5gt7Loc5bp5VFCCaRxTEQe6iYi5VfMFOdSwKHAXCUMuMg9%2FX8MFcfkZDm0YHeVzA2Y8mKQ6ihqOIkcHL%2FaEwd1RCsYb42FOT4V%2Fr7bU1O%2FqoUGcJQwF75YXqz47bYtk4k%2BgvEcUNevjM71YdKkEpcRNotL9KhvYWNZx%2Fv7QJ9F6gaMUSg5TjuNr2M2kAXO&X-Amz-Signature=ca6fe1636fd97f2a15480d4b8ab35dcc06e8f13c63db212bd311821ff44e93fb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q6HYCUEX%2F20260427%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260427T101349Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCsXU35AHMbvs5q2pVJMPLlxK9FB7F2LemRu%2FyrqhAQ%2FQIgcSr4R5LJZ1g1VcUS3NtugvB8%2BxjsoL2%2Fg1NZB1xT29AqiAQIw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPRdlR6FfVDAPtcWMSrcA37DZ5XULgeVEWpJ%2B0hnQn9moD6PsKBHhIoJ734%2FZ5frcYsYXRF7jRO%2BamAQjxOGmsNdRFyQjhO%2BfsvKTetT2enT7wBZYUq8jXQTN7xo5TkWMTG8U5VZO%2BjvRL9aWSvKbsfdoDhAsuylFDRsRw7fYZnjVDNpUJPmr%2BC%2B0nGa%2BI81%2FRmPPL1d2dlf2jrHBpSe9eQYtdX%2BnKPfigBwxysX0g%2BWTVhas1%2BAje3gX1zWbu5qNG%2BejcIbpez3yhvysjMIDOMtX%2BHB5woGaqt0iqUXhYjwKCE%2FGngw0aWATQhdE5btKgdSwQFro%2B75FHbz3pFa8leRvSBuyJYeWkcWJjmotOgshB2Sef3gd7oTX%2Fr%2BSEZZM01jmJb2pJH9jiwW4lLDByHhdtWEj0AxEbmf8yjUqloX3lyY%2BzKLZ8l7Zuvd7reWazkZKkF9hJN48dgQ7hsi3NyB7Me3MmAwgaLKjJqKAratcxVm9q55TADopYgDjoIqQu1XfrWgIqTqTFhKyIaWr9RdYVoIouPuhddb%2BMW5dMRVeuEVC7zErelOds5HZyCZnN8BRFoGjsIr2K8X8e8%2FoHx5OKJOmIfaOts9PD4R29DR70bz0wSo6gU8abSqm%2BCpEE3PX2PtMZyeHiy9MLXevM8GOqUBIGKZOgU3wCSHdIbKHWsrQ4NtRJQPw3D1%2BCMbtKJNZmzTP%2BCHuDrv6aKTxBWW%2FNNO3a%2FyrA7ojwHPfYilp7lyhUz09G%2B4dbJW5yfO2QM%2FtTDWD%2FpEpgW5hNP5uQW6IgwtdjHJ%2BfN6AWV68DI2Jlk0Gzldl7d%2BarztqgrRDon4hk0%2FIJONlmEHIUMsGcVGlRKWsfx%2BWDo7ByFlOSXP9%2FuTFoNlgt1S&X-Amz-Signature=f3e5f2aac4bff542e4d0d2960e1e06661c4819184debe7e924b2a80a6dcb3f35&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SW2MCWXW%2F20260427%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260427T101349Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCcGJbT3EyeCNmtv0Ky3WDuHRWUKll7MPkM%2F0WNv8PvhgIgDio3D%2BXEyllrLEcS83fx%2BRB%2FbwBakWLPzm%2Fd8waU1f8qiAQIw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFcACj%2BvmzRCTwJEyCrcAy1vQo7HGzog33jqfn7aicnllRnll%2BqTeem369cVqemZ6Ga5a%2Fp86rcJfV1CUlb9SVX583hViBydL0nS3AW4xXkBu5MOJB0M43SkZA3H17fGUcFDTTumgImhp9w82CGjg%2BEXVfaLso6utaNpBguC9sOLWkfFocbQmmY%2FdI4rgOfQdekYqkebW73JZdJRf7e9ryOkABlsR91i3RdWaY5OIkDkn1wVoHB6r7bXYQam0M%2FDZ8GrxKnIvPdeITxT22Mg9WMgn6vm3WsfzLnyRO8ZVd3Ala2QsxX1FaBvH2PyV%2BkxroXTFhAgxhy0iJ28MCVVA4bNjCSdpBT0zngnSltRg22e54HYdOd7NCYT7bmI5hDljNs3UTdxnlKi1GPvLaaKNmkiY1HjgIZFSaTk4pPih23IZ1q2BrJEGWxcEG%2FiaXPcyaIwojKh937PDJZhcp0FvhpRE%2FHacP4Lr0LfoFBZkuW4xzn3HQbkLPrULPRRSQzyxY985jqQSUNG4iT%2F3fiWywQtpGu%2FzjuIde9sX5lrCYMCxdChoICqs4cEFpNF0GcQfApcQ%2FjNvGGz16zlH0A6fBsFSvQcWogSBiDb1snEP0xkuv8IdlPJifi1rwaU%2F%2FnO97yJDwWkxHeIzmikMIHfvM8GOqUBEf2Qk4y92vIVtueKr%2FJ%2F%2BqzMV%2B6IvbioUYnKTBbDtGHI3W1LCs7fxxEgWui4bDXepSOSNgB7omD5kr8jbPp%2BtFrIqDa%2FtRAFBz5Pdx2ZxygLqbm7jHRU0yqvNs%2BmcdQelcsreS94Zg7yrcFac8KawAOTru%2BvLkfxWi%2BvbYg5X87neof96Dhrq%2FH7dP2HedbSzk1EZWf4nDJdTsOW1xnp6sxHkHvM&X-Amz-Signature=2c0fa70b9f8e72c7e8d64a4158c660172b5e7b81792250d3ad7da69107dea9c0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SW2MCWXW%2F20260427%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260427T101349Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCcGJbT3EyeCNmtv0Ky3WDuHRWUKll7MPkM%2F0WNv8PvhgIgDio3D%2BXEyllrLEcS83fx%2BRB%2FbwBakWLPzm%2Fd8waU1f8qiAQIw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFcACj%2BvmzRCTwJEyCrcAy1vQo7HGzog33jqfn7aicnllRnll%2BqTeem369cVqemZ6Ga5a%2Fp86rcJfV1CUlb9SVX583hViBydL0nS3AW4xXkBu5MOJB0M43SkZA3H17fGUcFDTTumgImhp9w82CGjg%2BEXVfaLso6utaNpBguC9sOLWkfFocbQmmY%2FdI4rgOfQdekYqkebW73JZdJRf7e9ryOkABlsR91i3RdWaY5OIkDkn1wVoHB6r7bXYQam0M%2FDZ8GrxKnIvPdeITxT22Mg9WMgn6vm3WsfzLnyRO8ZVd3Ala2QsxX1FaBvH2PyV%2BkxroXTFhAgxhy0iJ28MCVVA4bNjCSdpBT0zngnSltRg22e54HYdOd7NCYT7bmI5hDljNs3UTdxnlKi1GPvLaaKNmkiY1HjgIZFSaTk4pPih23IZ1q2BrJEGWxcEG%2FiaXPcyaIwojKh937PDJZhcp0FvhpRE%2FHacP4Lr0LfoFBZkuW4xzn3HQbkLPrULPRRSQzyxY985jqQSUNG4iT%2F3fiWywQtpGu%2FzjuIde9sX5lrCYMCxdChoICqs4cEFpNF0GcQfApcQ%2FjNvGGz16zlH0A6fBsFSvQcWogSBiDb1snEP0xkuv8IdlPJifi1rwaU%2F%2FnO97yJDwWkxHeIzmikMIHfvM8GOqUBEf2Qk4y92vIVtueKr%2FJ%2F%2BqzMV%2B6IvbioUYnKTBbDtGHI3W1LCs7fxxEgWui4bDXepSOSNgB7omD5kr8jbPp%2BtFrIqDa%2FtRAFBz5Pdx2ZxygLqbm7jHRU0yqvNs%2BmcdQelcsreS94Zg7yrcFac8KawAOTru%2BvLkfxWi%2BvbYg5X87neof96Dhrq%2FH7dP2HedbSzk1EZWf4nDJdTsOW1xnp6sxHkHvM&X-Amz-Signature=2776f73dfb39b2fdfd8c2fa077b16cdf4dcacbfdc0b025b457f444faff42a8fd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
