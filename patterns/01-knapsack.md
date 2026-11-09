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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TWPQV7UE%2F20261109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261109T182014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF8aCXVzLXdlc3QtMiJIMEYCIQCkBUMquH0OpUAZiQ2RCjurL1yGPhfMUxSPHUVUpYSaRgIhAM9unaocqDmokMOwzh%2BdEATuNiIBcFNS0eX%2FmQtFApWqKv8DCCgQABoMNjM3NDIzMTgzODA1Igz6acCc914otH9J2DIq3APp3W86mfb%2FxHJI5MtFEuho5Y%2Bp4wiK%2FM8vCTDIxcbSQWbzXHMJOlhDSfy04ScM2%2Bl16%2Bwvbjh5imcjiMu5%2BE9ALhSw6oKs08rT2MMrmiMzdT8qnD3%2BZzOzgpVx6nDzpMvayxgTV5OeyF8GAwHuuBmAViT%2BQlaehyvNKH81cNLtvmoJjtYwUEIJy2H6VJtnwfDS5DciRJ52iSykml8gkD9KPuGAWsuaR%2BVvg7NpjiByR7Xc%2Fe47w0U8ucsaATrFRno%2FjSFcVOh7T3cfVB6EDuyQEOfODjI1eg0PqPIGE1VIZIwWFI%2B8rzwDZKjUfPl4CFhXMUkyxIpU6KY33eNhwq%2FYxU%2BrkaC%2B8%2F6IfeoFPdfno888%2BbnM0t5rhogMCIDzJTVHxE0EFbP8KBq46xwslLWseuLxaRF8wlVSLvG5T7ke5uhM%2Be0EUDSl4uNwBV%2BM2UFbPbP76mJf4BiI4ZuBlUgVY6F6oVI6k4exoDS5t%2FjNfYd5uNmU%2B9J7LJmqB4EKMLR51qG2ANLa28Jujw0DGLB%2Bj75e6jUbkng%2FAh5MoSCKkd6l%2BILXG5B2GxvapaYOnf4W3kjr8UZnt0qrqJ%2BHJXMjUuJ5GGdV13R4qhvA5GD2xab1NkpnUr8fyESWjjCNx8fXBjqkAV2CLKhnzJb8OcoNNVGs2JVLaU6YEOS42czhzy9rRJEw7J3EpclWaIkZNIgx2wfSkiv0h%2FaqhsCCd%2F%2B%2BCTiTC96DiXJDIsJdLzIiIbQlMWBBUfuBM3Hy%2BbpqEjNcwdwpgxlPByb76rMupVQSoVv09jpwm0luIJJT6SiRIWps8LeTIdU%2Bj74N5eXKABiPiZSkNy4JPUi1MZYsqw5Y2UYS3CwQTt0A&X-Amz-Signature=99a21b22d778bc6a560565b01df616936a2f34ba497c0defb7fc852f0c4056c0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TWPQV7UE%2F20261109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261109T182014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF8aCXVzLXdlc3QtMiJIMEYCIQCkBUMquH0OpUAZiQ2RCjurL1yGPhfMUxSPHUVUpYSaRgIhAM9unaocqDmokMOwzh%2BdEATuNiIBcFNS0eX%2FmQtFApWqKv8DCCgQABoMNjM3NDIzMTgzODA1Igz6acCc914otH9J2DIq3APp3W86mfb%2FxHJI5MtFEuho5Y%2Bp4wiK%2FM8vCTDIxcbSQWbzXHMJOlhDSfy04ScM2%2Bl16%2Bwvbjh5imcjiMu5%2BE9ALhSw6oKs08rT2MMrmiMzdT8qnD3%2BZzOzgpVx6nDzpMvayxgTV5OeyF8GAwHuuBmAViT%2BQlaehyvNKH81cNLtvmoJjtYwUEIJy2H6VJtnwfDS5DciRJ52iSykml8gkD9KPuGAWsuaR%2BVvg7NpjiByR7Xc%2Fe47w0U8ucsaATrFRno%2FjSFcVOh7T3cfVB6EDuyQEOfODjI1eg0PqPIGE1VIZIwWFI%2B8rzwDZKjUfPl4CFhXMUkyxIpU6KY33eNhwq%2FYxU%2BrkaC%2B8%2F6IfeoFPdfno888%2BbnM0t5rhogMCIDzJTVHxE0EFbP8KBq46xwslLWseuLxaRF8wlVSLvG5T7ke5uhM%2Be0EUDSl4uNwBV%2BM2UFbPbP76mJf4BiI4ZuBlUgVY6F6oVI6k4exoDS5t%2FjNfYd5uNmU%2B9J7LJmqB4EKMLR51qG2ANLa28Jujw0DGLB%2Bj75e6jUbkng%2FAh5MoSCKkd6l%2BILXG5B2GxvapaYOnf4W3kjr8UZnt0qrqJ%2BHJXMjUuJ5GGdV13R4qhvA5GD2xab1NkpnUr8fyESWjjCNx8fXBjqkAV2CLKhnzJb8OcoNNVGs2JVLaU6YEOS42czhzy9rRJEw7J3EpclWaIkZNIgx2wfSkiv0h%2FaqhsCCd%2F%2B%2BCTiTC96DiXJDIsJdLzIiIbQlMWBBUfuBM3Hy%2BbpqEjNcwdwpgxlPByb76rMupVQSoVv09jpwm0luIJJT6SiRIWps8LeTIdU%2Bj74N5eXKABiPiZSkNy4JPUi1MZYsqw5Y2UYS3CwQTt0A&X-Amz-Signature=963644f6d96ed857ce563a547d0fd6791c14a1e4e03b098ea45f22ef37d80c08&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TWPQV7UE%2F20261109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261109T182014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF8aCXVzLXdlc3QtMiJIMEYCIQCkBUMquH0OpUAZiQ2RCjurL1yGPhfMUxSPHUVUpYSaRgIhAM9unaocqDmokMOwzh%2BdEATuNiIBcFNS0eX%2FmQtFApWqKv8DCCgQABoMNjM3NDIzMTgzODA1Igz6acCc914otH9J2DIq3APp3W86mfb%2FxHJI5MtFEuho5Y%2Bp4wiK%2FM8vCTDIxcbSQWbzXHMJOlhDSfy04ScM2%2Bl16%2Bwvbjh5imcjiMu5%2BE9ALhSw6oKs08rT2MMrmiMzdT8qnD3%2BZzOzgpVx6nDzpMvayxgTV5OeyF8GAwHuuBmAViT%2BQlaehyvNKH81cNLtvmoJjtYwUEIJy2H6VJtnwfDS5DciRJ52iSykml8gkD9KPuGAWsuaR%2BVvg7NpjiByR7Xc%2Fe47w0U8ucsaATrFRno%2FjSFcVOh7T3cfVB6EDuyQEOfODjI1eg0PqPIGE1VIZIwWFI%2B8rzwDZKjUfPl4CFhXMUkyxIpU6KY33eNhwq%2FYxU%2BrkaC%2B8%2F6IfeoFPdfno888%2BbnM0t5rhogMCIDzJTVHxE0EFbP8KBq46xwslLWseuLxaRF8wlVSLvG5T7ke5uhM%2Be0EUDSl4uNwBV%2BM2UFbPbP76mJf4BiI4ZuBlUgVY6F6oVI6k4exoDS5t%2FjNfYd5uNmU%2B9J7LJmqB4EKMLR51qG2ANLa28Jujw0DGLB%2Bj75e6jUbkng%2FAh5MoSCKkd6l%2BILXG5B2GxvapaYOnf4W3kjr8UZnt0qrqJ%2BHJXMjUuJ5GGdV13R4qhvA5GD2xab1NkpnUr8fyESWjjCNx8fXBjqkAV2CLKhnzJb8OcoNNVGs2JVLaU6YEOS42czhzy9rRJEw7J3EpclWaIkZNIgx2wfSkiv0h%2FaqhsCCd%2F%2B%2BCTiTC96DiXJDIsJdLzIiIbQlMWBBUfuBM3Hy%2BbpqEjNcwdwpgxlPByb76rMupVQSoVv09jpwm0luIJJT6SiRIWps8LeTIdU%2Bj74N5eXKABiPiZSkNy4JPUi1MZYsqw5Y2UYS3CwQTt0A&X-Amz-Signature=0e00d04e44699bb2a481ce64161033cfce8b8838173d06b69f36d849e7ea61b5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZHAZB54%2F20261109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261109T182014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF8aCXVzLXdlc3QtMiJHMEUCICXg8t%2Bxk%2FwYpfXG8a%2B4%2F7Sj90J8WTPe88C%2FORLl7C8iAiEArmJUWE6t82fVnCqwrdxqJeyFNF%2BwTT4oWr2%2FSY5OkaIq%2FwMIKBAAGgw2Mzc0MjMxODM4MDUiDGBBHcI9mVPyil9%2FECrcA8IQDlwmqE800Z%2FxLL%2F8zHLKJQHs0ckzJ3dLXpza3xIt%2FD6PYn5vvtlSOJwK1eB7cGZtggqicEa1Hz7AvJ3%2Fn0VU4j9WTO9NAVo3NQNDE7jZj3NpG3joyRf%2BdCdQhPl7nOfLE2RQ%2BXrFSJdswY51AeXqYo0PU4LY8dd6w9ZEhaLm2o0R3IBr1sfbmJLmX96%2BF0JRR2%2FLFF42jNqQtE%2FQHSk4CK2GiWAi5cofWVJ7uRbIfTgngtINtG1iSUs2Sm5ql1diRYLzbI1FjzLHzthCj1mTdczEWyOHdnCfwc4%2BfKa0FzTosVvQyiUEfTrM88EQ3XrwG460Z18VFCiCDE4f8asLffhEWUz5%2BeoN2j7xRDiNiPfQfbCFdP4kMkjN4UntZkS7aQQobAuwTXHfbSswRwirKy5PxrNDt4BJxQ54t8NWgDQv9Tx26S1b6IJZMGdGeMubIB8sdWrazXsS3VByPS3H2t94mwV2678dERdKPQ8dM%2F0AyxdgTTrwNPKbdLzcTOnlT3C9TkbacTQe034WZpgdXfWFxBmkrfCFqOA3iG0jFJaTW2LveMZFrrJiiDU%2BV7cN5yuDRFEDWbiH4fy%2Bxey5JqcxBYpKBLcny4sOk9dGTuKUeMpMpqza%2FeSwMLLHx9cGOqUBiQD7E02XoO54US0FfQsXZdh%2B6cKkWg2il0M66nILZ4Iuifv6fmA1wuQi3ZKzxuh4j50oqDbApo1tLD37KxQKqEhrSwaNkd1Mnovl5wAwBCZlEqfajCEWfUXLsvt5CPK2lgbeN7Drl3L%2BeWZdGgqebtFZkLZfeEQoeZUQNyxfLR6CL1TI%2Babm97TtBGvJYBFNsfk%2FZX736xxvV1FObpKd%2BhPJBgxU&X-Amz-Signature=2a9ad198aac9761c6830d1d60f1f0231089fda8b71dbe86e2194d0ba77ac9776&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZHAZB54%2F20261109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261109T182014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF8aCXVzLXdlc3QtMiJHMEUCICXg8t%2Bxk%2FwYpfXG8a%2B4%2F7Sj90J8WTPe88C%2FORLl7C8iAiEArmJUWE6t82fVnCqwrdxqJeyFNF%2BwTT4oWr2%2FSY5OkaIq%2FwMIKBAAGgw2Mzc0MjMxODM4MDUiDGBBHcI9mVPyil9%2FECrcA8IQDlwmqE800Z%2FxLL%2F8zHLKJQHs0ckzJ3dLXpza3xIt%2FD6PYn5vvtlSOJwK1eB7cGZtggqicEa1Hz7AvJ3%2Fn0VU4j9WTO9NAVo3NQNDE7jZj3NpG3joyRf%2BdCdQhPl7nOfLE2RQ%2BXrFSJdswY51AeXqYo0PU4LY8dd6w9ZEhaLm2o0R3IBr1sfbmJLmX96%2BF0JRR2%2FLFF42jNqQtE%2FQHSk4CK2GiWAi5cofWVJ7uRbIfTgngtINtG1iSUs2Sm5ql1diRYLzbI1FjzLHzthCj1mTdczEWyOHdnCfwc4%2BfKa0FzTosVvQyiUEfTrM88EQ3XrwG460Z18VFCiCDE4f8asLffhEWUz5%2BeoN2j7xRDiNiPfQfbCFdP4kMkjN4UntZkS7aQQobAuwTXHfbSswRwirKy5PxrNDt4BJxQ54t8NWgDQv9Tx26S1b6IJZMGdGeMubIB8sdWrazXsS3VByPS3H2t94mwV2678dERdKPQ8dM%2F0AyxdgTTrwNPKbdLzcTOnlT3C9TkbacTQe034WZpgdXfWFxBmkrfCFqOA3iG0jFJaTW2LveMZFrrJiiDU%2BV7cN5yuDRFEDWbiH4fy%2Bxey5JqcxBYpKBLcny4sOk9dGTuKUeMpMpqza%2FeSwMLLHx9cGOqUBiQD7E02XoO54US0FfQsXZdh%2B6cKkWg2il0M66nILZ4Iuifv6fmA1wuQi3ZKzxuh4j50oqDbApo1tLD37KxQKqEhrSwaNkd1Mnovl5wAwBCZlEqfajCEWfUXLsvt5CPK2lgbeN7Drl3L%2BeWZdGgqebtFZkLZfeEQoeZUQNyxfLR6CL1TI%2Babm97TtBGvJYBFNsfk%2FZX736xxvV1FObpKd%2BhPJBgxU&X-Amz-Signature=5bade2b2f04e688be78a0c79f6950076357073f79850b727e23b25392a4e3d3d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZHAZB54%2F20261109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261109T182014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF8aCXVzLXdlc3QtMiJHMEUCICXg8t%2Bxk%2FwYpfXG8a%2B4%2F7Sj90J8WTPe88C%2FORLl7C8iAiEArmJUWE6t82fVnCqwrdxqJeyFNF%2BwTT4oWr2%2FSY5OkaIq%2FwMIKBAAGgw2Mzc0MjMxODM4MDUiDGBBHcI9mVPyil9%2FECrcA8IQDlwmqE800Z%2FxLL%2F8zHLKJQHs0ckzJ3dLXpza3xIt%2FD6PYn5vvtlSOJwK1eB7cGZtggqicEa1Hz7AvJ3%2Fn0VU4j9WTO9NAVo3NQNDE7jZj3NpG3joyRf%2BdCdQhPl7nOfLE2RQ%2BXrFSJdswY51AeXqYo0PU4LY8dd6w9ZEhaLm2o0R3IBr1sfbmJLmX96%2BF0JRR2%2FLFF42jNqQtE%2FQHSk4CK2GiWAi5cofWVJ7uRbIfTgngtINtG1iSUs2Sm5ql1diRYLzbI1FjzLHzthCj1mTdczEWyOHdnCfwc4%2BfKa0FzTosVvQyiUEfTrM88EQ3XrwG460Z18VFCiCDE4f8asLffhEWUz5%2BeoN2j7xRDiNiPfQfbCFdP4kMkjN4UntZkS7aQQobAuwTXHfbSswRwirKy5PxrNDt4BJxQ54t8NWgDQv9Tx26S1b6IJZMGdGeMubIB8sdWrazXsS3VByPS3H2t94mwV2678dERdKPQ8dM%2F0AyxdgTTrwNPKbdLzcTOnlT3C9TkbacTQe034WZpgdXfWFxBmkrfCFqOA3iG0jFJaTW2LveMZFrrJiiDU%2BV7cN5yuDRFEDWbiH4fy%2Bxey5JqcxBYpKBLcny4sOk9dGTuKUeMpMpqza%2FeSwMLLHx9cGOqUBiQD7E02XoO54US0FfQsXZdh%2B6cKkWg2il0M66nILZ4Iuifv6fmA1wuQi3ZKzxuh4j50oqDbApo1tLD37KxQKqEhrSwaNkd1Mnovl5wAwBCZlEqfajCEWfUXLsvt5CPK2lgbeN7Drl3L%2BeWZdGgqebtFZkLZfeEQoeZUQNyxfLR6CL1TI%2Babm97TtBGvJYBFNsfk%2FZX736xxvV1FObpKd%2BhPJBgxU&X-Amz-Signature=da267a8ba3ea461334a785e446916b034fa40f33455ec752deb92292385a7f34&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZHAZB54%2F20261109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261109T182014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF8aCXVzLXdlc3QtMiJHMEUCICXg8t%2Bxk%2FwYpfXG8a%2B4%2F7Sj90J8WTPe88C%2FORLl7C8iAiEArmJUWE6t82fVnCqwrdxqJeyFNF%2BwTT4oWr2%2FSY5OkaIq%2FwMIKBAAGgw2Mzc0MjMxODM4MDUiDGBBHcI9mVPyil9%2FECrcA8IQDlwmqE800Z%2FxLL%2F8zHLKJQHs0ckzJ3dLXpza3xIt%2FD6PYn5vvtlSOJwK1eB7cGZtggqicEa1Hz7AvJ3%2Fn0VU4j9WTO9NAVo3NQNDE7jZj3NpG3joyRf%2BdCdQhPl7nOfLE2RQ%2BXrFSJdswY51AeXqYo0PU4LY8dd6w9ZEhaLm2o0R3IBr1sfbmJLmX96%2BF0JRR2%2FLFF42jNqQtE%2FQHSk4CK2GiWAi5cofWVJ7uRbIfTgngtINtG1iSUs2Sm5ql1diRYLzbI1FjzLHzthCj1mTdczEWyOHdnCfwc4%2BfKa0FzTosVvQyiUEfTrM88EQ3XrwG460Z18VFCiCDE4f8asLffhEWUz5%2BeoN2j7xRDiNiPfQfbCFdP4kMkjN4UntZkS7aQQobAuwTXHfbSswRwirKy5PxrNDt4BJxQ54t8NWgDQv9Tx26S1b6IJZMGdGeMubIB8sdWrazXsS3VByPS3H2t94mwV2678dERdKPQ8dM%2F0AyxdgTTrwNPKbdLzcTOnlT3C9TkbacTQe034WZpgdXfWFxBmkrfCFqOA3iG0jFJaTW2LveMZFrrJiiDU%2BV7cN5yuDRFEDWbiH4fy%2Bxey5JqcxBYpKBLcny4sOk9dGTuKUeMpMpqza%2FeSwMLLHx9cGOqUBiQD7E02XoO54US0FfQsXZdh%2B6cKkWg2il0M66nILZ4Iuifv6fmA1wuQi3ZKzxuh4j50oqDbApo1tLD37KxQKqEhrSwaNkd1Mnovl5wAwBCZlEqfajCEWfUXLsvt5CPK2lgbeN7Drl3L%2BeWZdGgqebtFZkLZfeEQoeZUQNyxfLR6CL1TI%2Babm97TtBGvJYBFNsfk%2FZX736xxvV1FObpKd%2BhPJBgxU&X-Amz-Signature=a75c42590a7c8df93a69172b47f65162379fa027c2aa278a10b771ff343a0399&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466THNL6YQK%2F20261109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261109T182014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF8aCXVzLXdlc3QtMiJHMEUCIAtUzy05ybxGclxebYb9K8JyRnEfD98wdxkER5ovYf%2BPAiEAw6QWW2EUyRlzZYCAs4DypT7u1UHVlPGZyQNfzlxy2vUq%2FwMIKBAAGgw2Mzc0MjMxODM4MDUiDDhjEDRB5DD2Me0SzircA1mREjI9H4yqpFBVj2RsGnlzkBLTj4RH5tpFTMilWiPQYyiM1pGzDt2sYDhr7Qk1sWS%2BO%2FeUJ6oOfoVh%2BaGDQPS4Aiyo6NFk9qqegCcK8M7zJQl4qfZKOzup891luQOeOR5tRVbpSlfdVCFV%2BBOJaU0SK0p4IPNzyOX5Bu5qQA2KaLXoMCDNrONzNcyMUrMznIChOJsim%2FxywGdl2PIYwd8mV4VHLHGenDAo4NgguDj%2F%2BSPp59t186hIYrj8mX9Dkf3rz7GrN42XY66lH7PuexVztFiv2pcnOXQvq967whLySVfbsNHc4VR38uM36cW0gJmoG00eYqvQB%2FKr0zrMcYPYoMEkZKyO%2FO74CgMJ5jak95iD%2FisEV8xwyV766EbPoHFr18FyNGlItsMCwYCA66a6FyqigGJkBzdS5r7b41ovlC6oONcOU3ShtF8rdeJM2L1jS2VkpFbejcM3JcZU70f940GpmSLqUEup2wZGnL0fo6f0%2Fe9kP%2F%2BbUTN9PzFXoTxfJ0GKuD8Hhte99KjHaxXIfk%2FKQocf7j7sdbUuh9pvEzVwTos4uCMtmzkq1QDS9p%2F23bXuWsNZy7BzRB3RySEMB3cruI8NUkyHZT9n3drV7RGErXjflnHXGHocMOjGx9cGOqUBcbpa%2F8ADuRnoPouTcZxGWJz%2FviTG6Yim3kqQ2RJPJ3JvnXjcm9Eq5OD5v8UFFqAVzRZwxxF%2BLZBd26rXc14kDc4XLajpwgfSPDPFH04MKVuHtf7svvytWyoZ2ziWuzyjVnMd0hrCTdsgXYz3mp4C6tnRM4OqDkW8dnPN8cyRmDhVaHkzuvYtoF1H40ATSg65fZ1zzYbxlOXHAlRrcU02IBAdNeXj&X-Amz-Signature=651871d719b30b5df86fdc85db8bf3164024e7927532f7cdd17df45ab8ea3011&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663LJO6HCD%2F20261109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261109T182014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF8aCXVzLXdlc3QtMiJHMEUCIByqXacDQPgUoe%2Bw7LZK0SAgqivPu61ax3FGJGD6Tum6AiEAoR1fIyeYXIpG5UnD2JhnZWCscmGY77Ot7JDIF0IGGowq%2FwMIKBAAGgw2Mzc0MjMxODM4MDUiDIFW6rDTxoGd1TVpeSrcAxqqaSqNrTasDHN%2FtZ%2BvBZDlF00zBQrJ62%2BHsVveWiWoz%2BNJLV6FASFBaKdDGs9R6a3ZUTkUpgwnx%2BAeGYUVGYGj985p3DWUSW0jNEJfFTm1nHNn694KmP5gNvjmYKiuWFYmUR1vD1rcNcrwp7ZL9HmPHnU8RLTlV4NktXY3tjRiqcAwp4FCp4NXqKzR7uEY9wALqPwfOl0RnKT%2FxQYqFTMdoRdnNXD3CU0k1Jn%2BACEZ4rP14fCfsDsIZ%2FD31mBjooTCHylDR9jM7pvMqovIH0OcJgnolrG%2Bt7G%2F5%2F%2FCQ4HjIiE6LPFHsjkiKopzMJbtn1BdN5Wt3OfkUa9KiFK1rUFQ0w67otIIegexSxCW%2Fz4cBKspMlFr%2FRZ1Be3h62n1xmAi5BSHlDXe80smQ2vwySVuRXuebimn9aC93JD3gloA0j13SZMmg9rlkxpuq%2FNrbgyWrnpwEnyG5yU%2BK4DP6W5RA4UV5uXg%2FLUJJtFv6FP4K6%2FZttVw38nmVklmeTzHe40uay1FI7UWB3NdkFOKiWMNk%2FKTuy8tcFGNdHI9wq8wBHq7rp64JN0zqRAyFVTTGyIvn24HOuephfTa2wN9HPaqSs61srNAW%2BuTuA6kbqgNqy5hXvupdFF06JTwMOjGx9cGOqUB0C7HBsysKazAoMvsTli%2Bn9IBGCBZK2QklXdcOUeGAGAvzE7lm2udkteRKcDcb06tZMltTf3OyUYPUE%2FRLn2pkNoiMlKnJkSjyJSzn4vkpk%2B6f3HBHs4XIpLPlqP9%2FiIHhcORkc1RyjwaK%2F5tW%2FyVSDwnKozX2QvN0dhZyVuW9bDp1kbduGD7oYG9tileSsQaOtphVzzNloW2A5cGpB5N%2BFD06mAT&X-Amz-Signature=a1467313f1ddf56f60c79bd1c418ec458b9a21fad46704ecc849152b081e4726&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663LJO6HCD%2F20261109%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261109T182014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF8aCXVzLXdlc3QtMiJHMEUCIByqXacDQPgUoe%2Bw7LZK0SAgqivPu61ax3FGJGD6Tum6AiEAoR1fIyeYXIpG5UnD2JhnZWCscmGY77Ot7JDIF0IGGowq%2FwMIKBAAGgw2Mzc0MjMxODM4MDUiDIFW6rDTxoGd1TVpeSrcAxqqaSqNrTasDHN%2FtZ%2BvBZDlF00zBQrJ62%2BHsVveWiWoz%2BNJLV6FASFBaKdDGs9R6a3ZUTkUpgwnx%2BAeGYUVGYGj985p3DWUSW0jNEJfFTm1nHNn694KmP5gNvjmYKiuWFYmUR1vD1rcNcrwp7ZL9HmPHnU8RLTlV4NktXY3tjRiqcAwp4FCp4NXqKzR7uEY9wALqPwfOl0RnKT%2FxQYqFTMdoRdnNXD3CU0k1Jn%2BACEZ4rP14fCfsDsIZ%2FD31mBjooTCHylDR9jM7pvMqovIH0OcJgnolrG%2Bt7G%2F5%2F%2FCQ4HjIiE6LPFHsjkiKopzMJbtn1BdN5Wt3OfkUa9KiFK1rUFQ0w67otIIegexSxCW%2Fz4cBKspMlFr%2FRZ1Be3h62n1xmAi5BSHlDXe80smQ2vwySVuRXuebimn9aC93JD3gloA0j13SZMmg9rlkxpuq%2FNrbgyWrnpwEnyG5yU%2BK4DP6W5RA4UV5uXg%2FLUJJtFv6FP4K6%2FZttVw38nmVklmeTzHe40uay1FI7UWB3NdkFOKiWMNk%2FKTuy8tcFGNdHI9wq8wBHq7rp64JN0zqRAyFVTTGyIvn24HOuephfTa2wN9HPaqSs61srNAW%2BuTuA6kbqgNqy5hXvupdFF06JTwMOjGx9cGOqUB0C7HBsysKazAoMvsTli%2Bn9IBGCBZK2QklXdcOUeGAGAvzE7lm2udkteRKcDcb06tZMltTf3OyUYPUE%2FRLn2pkNoiMlKnJkSjyJSzn4vkpk%2B6f3HBHs4XIpLPlqP9%2FiIHhcORkc1RyjwaK%2F5tW%2FyVSDwnKozX2QvN0dhZyVuW9bDp1kbduGD7oYG9tileSsQaOtphVzzNloW2A5cGpB5N%2BFD06mAT&X-Amz-Signature=acca8c5358ef8b5a9de2d94442dd1b0949e7767138d611cd2d92972e3e76b8ea&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
