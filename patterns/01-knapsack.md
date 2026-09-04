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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z7GPPHEA%2F20260904%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260904T123048Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIHt56r4ahPCarb5hXRF4sEJljm2dvEJro0OGvRxWUIJ%2FAiEAyoImCNAVcsTVFR9YO2F03p%2BkMd7wY1ZlWxcOiPSnY0sqiAQI9P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLQPdhs0Iqfk1f9KYircA9qvVVZRJRqJUZXYMjJdwwNb0AbhZ%2FrxELpw%2FUjBEJ%2FLms6BsaEHkvcUJu1gKsmXge2y9mXr4l4TMDnQi1KtJoU3CD5SjS2ZiBZcQgY2QMz26A4X%2FYB4mHl2zlrMX8WJINaO3E19ZzfPdLaROWjFmweY0NKJQtyAN8u%2Fvr7F1DlRQR1xmt5J3vgI6buRRi1zIx5KcgvoIibvXtWyvijoyYxD50We8BOoZ9R5WbgeroT1Wub06dodMS%2BsiwKPzUw67XnJgeXf4rWuXe2A8ke3Fct3aF6Bkpuy5LAIup%2FQE72BIiOcTisXu%2FIGEnoGzsZm08cALZimELJeUwuIIQi6MeioNeneS8JMpR7lVVKSjNvUIUs8EEFUzCmuwTHrAF6kUL52yWXvB9L4JtjgQfwGSrV4zs8lhW5VDYTrlMxPDCMda4ssVVLSiFUCR8rHYVINvpHsTC9Lqgo1HPwOXxoYe1XwttUkql4z8mGvn2XDqEnmTlIJo%2BOPBrZ2KQbzOE1DGMziN9uBHN9svhJ2fr9CygcE8YldBnlG7w9TEWPjSQtuEHLxcIbtOwNSwyVN3d1s8rr99dsYJO5oWZCh6DmweP3GXJ8WXTfmx3K3dn82utK52oep6zdAESbYRY9rMJjC6tQGOqUBgvuJ0k4o22balJTWhiuaXv7xQVqAvy0%2BTLa86ZL8s6SW4S1UnA1hKCTFrKHv%2FhHcEb%2Bu3qTKB7dOhlnv%2BtJh7Y%2BxULWUc%2Fs3kF4THbtVccJoVQpocnVu%2BBWoghwnoJktP3VS65Ra9hOe3oyjqHdFyOJNrM5hFUa96bsZgHGJ7en43jraZEzuhZ96CsS6iSoDu71idmWW15NO4EnbWVFrqz54cxjc&X-Amz-Signature=f40a83eacb7258d116e0d8da5ce32a8ff06964bb630a6bcd130caddce17fa7a8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z7GPPHEA%2F20260904%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260904T123048Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIHt56r4ahPCarb5hXRF4sEJljm2dvEJro0OGvRxWUIJ%2FAiEAyoImCNAVcsTVFR9YO2F03p%2BkMd7wY1ZlWxcOiPSnY0sqiAQI9P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLQPdhs0Iqfk1f9KYircA9qvVVZRJRqJUZXYMjJdwwNb0AbhZ%2FrxELpw%2FUjBEJ%2FLms6BsaEHkvcUJu1gKsmXge2y9mXr4l4TMDnQi1KtJoU3CD5SjS2ZiBZcQgY2QMz26A4X%2FYB4mHl2zlrMX8WJINaO3E19ZzfPdLaROWjFmweY0NKJQtyAN8u%2Fvr7F1DlRQR1xmt5J3vgI6buRRi1zIx5KcgvoIibvXtWyvijoyYxD50We8BOoZ9R5WbgeroT1Wub06dodMS%2BsiwKPzUw67XnJgeXf4rWuXe2A8ke3Fct3aF6Bkpuy5LAIup%2FQE72BIiOcTisXu%2FIGEnoGzsZm08cALZimELJeUwuIIQi6MeioNeneS8JMpR7lVVKSjNvUIUs8EEFUzCmuwTHrAF6kUL52yWXvB9L4JtjgQfwGSrV4zs8lhW5VDYTrlMxPDCMda4ssVVLSiFUCR8rHYVINvpHsTC9Lqgo1HPwOXxoYe1XwttUkql4z8mGvn2XDqEnmTlIJo%2BOPBrZ2KQbzOE1DGMziN9uBHN9svhJ2fr9CygcE8YldBnlG7w9TEWPjSQtuEHLxcIbtOwNSwyVN3d1s8rr99dsYJO5oWZCh6DmweP3GXJ8WXTfmx3K3dn82utK52oep6zdAESbYRY9rMJjC6tQGOqUBgvuJ0k4o22balJTWhiuaXv7xQVqAvy0%2BTLa86ZL8s6SW4S1UnA1hKCTFrKHv%2FhHcEb%2Bu3qTKB7dOhlnv%2BtJh7Y%2BxULWUc%2Fs3kF4THbtVccJoVQpocnVu%2BBWoghwnoJktP3VS65Ra9hOe3oyjqHdFyOJNrM5hFUa96bsZgHGJ7en43jraZEzuhZ96CsS6iSoDu71idmWW15NO4EnbWVFrqz54cxjc&X-Amz-Signature=d1b93e2397dcd00e2dea7c679e3eaa009b9861929589a2b08c2efa87294c722f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z7GPPHEA%2F20260904%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260904T123048Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIHt56r4ahPCarb5hXRF4sEJljm2dvEJro0OGvRxWUIJ%2FAiEAyoImCNAVcsTVFR9YO2F03p%2BkMd7wY1ZlWxcOiPSnY0sqiAQI9P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLQPdhs0Iqfk1f9KYircA9qvVVZRJRqJUZXYMjJdwwNb0AbhZ%2FrxELpw%2FUjBEJ%2FLms6BsaEHkvcUJu1gKsmXge2y9mXr4l4TMDnQi1KtJoU3CD5SjS2ZiBZcQgY2QMz26A4X%2FYB4mHl2zlrMX8WJINaO3E19ZzfPdLaROWjFmweY0NKJQtyAN8u%2Fvr7F1DlRQR1xmt5J3vgI6buRRi1zIx5KcgvoIibvXtWyvijoyYxD50We8BOoZ9R5WbgeroT1Wub06dodMS%2BsiwKPzUw67XnJgeXf4rWuXe2A8ke3Fct3aF6Bkpuy5LAIup%2FQE72BIiOcTisXu%2FIGEnoGzsZm08cALZimELJeUwuIIQi6MeioNeneS8JMpR7lVVKSjNvUIUs8EEFUzCmuwTHrAF6kUL52yWXvB9L4JtjgQfwGSrV4zs8lhW5VDYTrlMxPDCMda4ssVVLSiFUCR8rHYVINvpHsTC9Lqgo1HPwOXxoYe1XwttUkql4z8mGvn2XDqEnmTlIJo%2BOPBrZ2KQbzOE1DGMziN9uBHN9svhJ2fr9CygcE8YldBnlG7w9TEWPjSQtuEHLxcIbtOwNSwyVN3d1s8rr99dsYJO5oWZCh6DmweP3GXJ8WXTfmx3K3dn82utK52oep6zdAESbYRY9rMJjC6tQGOqUBgvuJ0k4o22balJTWhiuaXv7xQVqAvy0%2BTLa86ZL8s6SW4S1UnA1hKCTFrKHv%2FhHcEb%2Bu3qTKB7dOhlnv%2BtJh7Y%2BxULWUc%2Fs3kF4THbtVccJoVQpocnVu%2BBWoghwnoJktP3VS65Ra9hOe3oyjqHdFyOJNrM5hFUa96bsZgHGJ7en43jraZEzuhZ96CsS6iSoDu71idmWW15NO4EnbWVFrqz54cxjc&X-Amz-Signature=19023af7ffa6237c7e1e208ea0ba0b3f2e29df342d3fd50a143af11127f3b2d0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46667KSX66B%2F20260904%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260904T123048Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIQDQ0Od0%2FzmRlLzX2kQVAVZ6mFeLpea7sOHARKfW3BqVRgIgc6Uy4%2FIdA%2FW5zOaIKuQa%2Beujxz14mBVUZoWFlnHGYMIqiAQI9P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPwxxoYsKp5hggr3qircA0DJ6BU0kcrQQWcrsViDyWy44enUYxx7bf%2FyZ1eiZ1%2BaH6U9UtjghjeRTiUyClKkJQlCCpZ11kQvBBbAKvX5LeE7PI%2FKleeQa65WMmci1GCxPkUYO9TYDWMepAGaQCJX7g4idk667pU4Lv5aghB3P%2Fcd0LPFyqE6B3GWdLQopmqfzEah%2BTZRN3aswkK4%2BtzGL%2ByKO%2FYY0Bc2zza2sFDWQHxbx54P0roC0gxdjYgLhOG%2BR2ElTuT%2FhncCGZ9fIWYrtepsfIroueIBCIhkxPjAwwZsdTasWXZtq%2F6ic8Vgd%2FvbjY3aRBDeOmbFvqY%2Bxvos5i4Ld3QfEnXrTE1bk3YqDiX6voXvK72ZUiT6Yo3soZ0FLkulpn3eAoHDRAGNRhiD1TL8ZCjVpNHNCA9WiCOu84Vqs7E%2FybVVvJW0RV8XDOQXa8ma4myrKlSvEQfRELWFx5atupqkVvSaQicIxGSc8WDkp%2Ba%2BzswMH4u%2FBkYd%2BJMT0w2fT8eP8qMmaZXfyT0tySnUibErTphITSKokmaT%2FelOw%2BvxU4QwB5EJg%2FZjWqKz4WKKlseTyYEyB%2Bctr5DqEX4DZnih87ShrH%2BK60JUmzz%2F4xXeVyqJNh8ZJXg2btso46GWUPP%2Fu0Y%2BJ0aWMITC6tQGOqUBngHKnOK7A0BiRgXh%2B%2B7MpARNWYTHS%2BiTS5ICBJkSKsLZiEfDb9g5o1OpbfSq5xHuoXwV7%2BjTsMNzSCpFKVL2pstQSB070cZgsNDYfTxmqeBOektu64iuYXDZml9ptiW%2BVCwJiV3YBTVjpxeakhL9g28OR9s3Hv9bBevr7ifeKcs7k860nnT1Aq8VJlBsvhhZYyWeq0aDLmLY5rdqtXARGXP6wrco&X-Amz-Signature=8eaaeed04a87fc99a4094b8d9fde11960fb5a81b651faca44cc694f3e76d4991&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46667KSX66B%2F20260904%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260904T123048Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIQDQ0Od0%2FzmRlLzX2kQVAVZ6mFeLpea7sOHARKfW3BqVRgIgc6Uy4%2FIdA%2FW5zOaIKuQa%2Beujxz14mBVUZoWFlnHGYMIqiAQI9P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPwxxoYsKp5hggr3qircA0DJ6BU0kcrQQWcrsViDyWy44enUYxx7bf%2FyZ1eiZ1%2BaH6U9UtjghjeRTiUyClKkJQlCCpZ11kQvBBbAKvX5LeE7PI%2FKleeQa65WMmci1GCxPkUYO9TYDWMepAGaQCJX7g4idk667pU4Lv5aghB3P%2Fcd0LPFyqE6B3GWdLQopmqfzEah%2BTZRN3aswkK4%2BtzGL%2ByKO%2FYY0Bc2zza2sFDWQHxbx54P0roC0gxdjYgLhOG%2BR2ElTuT%2FhncCGZ9fIWYrtepsfIroueIBCIhkxPjAwwZsdTasWXZtq%2F6ic8Vgd%2FvbjY3aRBDeOmbFvqY%2Bxvos5i4Ld3QfEnXrTE1bk3YqDiX6voXvK72ZUiT6Yo3soZ0FLkulpn3eAoHDRAGNRhiD1TL8ZCjVpNHNCA9WiCOu84Vqs7E%2FybVVvJW0RV8XDOQXa8ma4myrKlSvEQfRELWFx5atupqkVvSaQicIxGSc8WDkp%2Ba%2BzswMH4u%2FBkYd%2BJMT0w2fT8eP8qMmaZXfyT0tySnUibErTphITSKokmaT%2FelOw%2BvxU4QwB5EJg%2FZjWqKz4WKKlseTyYEyB%2Bctr5DqEX4DZnih87ShrH%2BK60JUmzz%2F4xXeVyqJNh8ZJXg2btso46GWUPP%2Fu0Y%2BJ0aWMITC6tQGOqUBngHKnOK7A0BiRgXh%2B%2B7MpARNWYTHS%2BiTS5ICBJkSKsLZiEfDb9g5o1OpbfSq5xHuoXwV7%2BjTsMNzSCpFKVL2pstQSB070cZgsNDYfTxmqeBOektu64iuYXDZml9ptiW%2BVCwJiV3YBTVjpxeakhL9g28OR9s3Hv9bBevr7ifeKcs7k860nnT1Aq8VJlBsvhhZYyWeq0aDLmLY5rdqtXARGXP6wrco&X-Amz-Signature=9a86d75890f51df05892b231fe373b7b6e85d4fca97ae24d8ef165a81a9f3a72&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46667KSX66B%2F20260904%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260904T123048Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIQDQ0Od0%2FzmRlLzX2kQVAVZ6mFeLpea7sOHARKfW3BqVRgIgc6Uy4%2FIdA%2FW5zOaIKuQa%2Beujxz14mBVUZoWFlnHGYMIqiAQI9P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPwxxoYsKp5hggr3qircA0DJ6BU0kcrQQWcrsViDyWy44enUYxx7bf%2FyZ1eiZ1%2BaH6U9UtjghjeRTiUyClKkJQlCCpZ11kQvBBbAKvX5LeE7PI%2FKleeQa65WMmci1GCxPkUYO9TYDWMepAGaQCJX7g4idk667pU4Lv5aghB3P%2Fcd0LPFyqE6B3GWdLQopmqfzEah%2BTZRN3aswkK4%2BtzGL%2ByKO%2FYY0Bc2zza2sFDWQHxbx54P0roC0gxdjYgLhOG%2BR2ElTuT%2FhncCGZ9fIWYrtepsfIroueIBCIhkxPjAwwZsdTasWXZtq%2F6ic8Vgd%2FvbjY3aRBDeOmbFvqY%2Bxvos5i4Ld3QfEnXrTE1bk3YqDiX6voXvK72ZUiT6Yo3soZ0FLkulpn3eAoHDRAGNRhiD1TL8ZCjVpNHNCA9WiCOu84Vqs7E%2FybVVvJW0RV8XDOQXa8ma4myrKlSvEQfRELWFx5atupqkVvSaQicIxGSc8WDkp%2Ba%2BzswMH4u%2FBkYd%2BJMT0w2fT8eP8qMmaZXfyT0tySnUibErTphITSKokmaT%2FelOw%2BvxU4QwB5EJg%2FZjWqKz4WKKlseTyYEyB%2Bctr5DqEX4DZnih87ShrH%2BK60JUmzz%2F4xXeVyqJNh8ZJXg2btso46GWUPP%2Fu0Y%2BJ0aWMITC6tQGOqUBngHKnOK7A0BiRgXh%2B%2B7MpARNWYTHS%2BiTS5ICBJkSKsLZiEfDb9g5o1OpbfSq5xHuoXwV7%2BjTsMNzSCpFKVL2pstQSB070cZgsNDYfTxmqeBOektu64iuYXDZml9ptiW%2BVCwJiV3YBTVjpxeakhL9g28OR9s3Hv9bBevr7ifeKcs7k860nnT1Aq8VJlBsvhhZYyWeq0aDLmLY5rdqtXARGXP6wrco&X-Amz-Signature=3fc5ddea2e661123658d71f12092394d78b3304587a45a2286c9b662b130a484&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46667KSX66B%2F20260904%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260904T123048Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIQDQ0Od0%2FzmRlLzX2kQVAVZ6mFeLpea7sOHARKfW3BqVRgIgc6Uy4%2FIdA%2FW5zOaIKuQa%2Beujxz14mBVUZoWFlnHGYMIqiAQI9P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPwxxoYsKp5hggr3qircA0DJ6BU0kcrQQWcrsViDyWy44enUYxx7bf%2FyZ1eiZ1%2BaH6U9UtjghjeRTiUyClKkJQlCCpZ11kQvBBbAKvX5LeE7PI%2FKleeQa65WMmci1GCxPkUYO9TYDWMepAGaQCJX7g4idk667pU4Lv5aghB3P%2Fcd0LPFyqE6B3GWdLQopmqfzEah%2BTZRN3aswkK4%2BtzGL%2ByKO%2FYY0Bc2zza2sFDWQHxbx54P0roC0gxdjYgLhOG%2BR2ElTuT%2FhncCGZ9fIWYrtepsfIroueIBCIhkxPjAwwZsdTasWXZtq%2F6ic8Vgd%2FvbjY3aRBDeOmbFvqY%2Bxvos5i4Ld3QfEnXrTE1bk3YqDiX6voXvK72ZUiT6Yo3soZ0FLkulpn3eAoHDRAGNRhiD1TL8ZCjVpNHNCA9WiCOu84Vqs7E%2FybVVvJW0RV8XDOQXa8ma4myrKlSvEQfRELWFx5atupqkVvSaQicIxGSc8WDkp%2Ba%2BzswMH4u%2FBkYd%2BJMT0w2fT8eP8qMmaZXfyT0tySnUibErTphITSKokmaT%2FelOw%2BvxU4QwB5EJg%2FZjWqKz4WKKlseTyYEyB%2Bctr5DqEX4DZnih87ShrH%2BK60JUmzz%2F4xXeVyqJNh8ZJXg2btso46GWUPP%2Fu0Y%2BJ0aWMITC6tQGOqUBngHKnOK7A0BiRgXh%2B%2B7MpARNWYTHS%2BiTS5ICBJkSKsLZiEfDb9g5o1OpbfSq5xHuoXwV7%2BjTsMNzSCpFKVL2pstQSB070cZgsNDYfTxmqeBOektu64iuYXDZml9ptiW%2BVCwJiV3YBTVjpxeakhL9g28OR9s3Hv9bBevr7ifeKcs7k860nnT1Aq8VJlBsvhhZYyWeq0aDLmLY5rdqtXARGXP6wrco&X-Amz-Signature=dec5c13a99ca372b85698293991beca5aebde00d203fcc90895cd2769c716815&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663OD2XRIF%2F20260904%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260904T123049Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIGvQbkoMNhkkrqIXfDgWueqrU9uW5HKG0FRRzsZ1ytVFAiEAslCLi8oGh1Si%2BzhjIIqaachDwnbkIE6aH32nf55Fa3IqiAQI9P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPUjhA%2B6O3Jw9WmVWSrcAxBDX6Yns4O1Ed6JMTwT%2FzN0UFDnehLlHzzOvohMAB7L0X96nh1zF3HQo4XlgvYyt46Q%2FuGSBNFsYX3%2BxQe32BESatrXsHlGZ6GFhlvSqlHJE7YmBddfGlA%2BkbNfja0qsnC2ntP7MF0B2tBXPzJxeJROg2KL98NnUJf5%2FUCdFsPI%2BLN9HNH0pPSO939PnaewLKtbbCy9f5iPzVcEb96Zcvek6%2FCm7q%2BPS4lDfROJsUAXwV8tzx4uxyyBlV6vEGpwtY4veEGerv6fOkHb7NP2bMJ7LLyUkf66r7vI0eKLkWzNv030G%2F0nfMaUi4vvAmHoiKnoTWSAPb1ggCjIam8ruJcoSVhM7BzbJ1qrpLuF9YbhUiBLRiiwqMkQRtZsDXR1XuUjiC7cK4%2FqBJrIoxOZCs8wa8DR8V3l6k8WPZR1l%2Fdhlw4FoA2tevd9nzq25iijcxdble7etWcQiAiXcRT9jRHomKX4GK75VPgsU%2BOGHCAREEOtJZyPF7EvBEi26wtGY%2F4MB%2B5mfG%2FUFtLVqgYKhQCiXSPL79fFgqMIxBcM5UC90Yf00Fj570ygjem1imaOhpJYB43GhuPB47NUAwCjkqQOz%2BoaX3EXr0jhYexzTQ4dbKdJo7SaWKi1O%2FkkMITC6tQGOqUB2SBgMX1hpvO437LYkOY528Xm%2FNh1vLjRsNRK2hSQWdgKNe3WfbnQO845NeJjCYQ5lrDKIid1iZyASstAAn%2BmGkeEgeycqZleGTmHbTqaBsW5bPDtVH1n43UG8DQoJEYLT%2FQKxwpyWdrd76gKjjX4AOAhcUYIBYcL%2BNLxwDze5yQBW96aw0E9GBnC3m4hVnMr6Jlz2TNBSF8BQe3ptmyTVIvfzc8k&X-Amz-Signature=9dc68a59c8c1b1f9f043ac4649063f7de4774c04c727532ca300d4bc108f5f4c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664RPYJAAA%2F20260904%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260904T123049Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJGMEQCIHGEF%2F9lkqJRDc8UMao7Lr0hh3lCGupxXVb0ywYF70HPAiA0QkIwE2wLj63wFKSBLivxtusJX31tvISq3Z0wDbD4ISqIBAj0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMeD07MAkL0m9Qih2UKtwD%2FQeuhIl%2Bjg1%2FmLCj%2F9fpH%2Fpy%2BXFo2yLu8nq%2B6WZVG6xa8eR0%2BvBOdTNQ%2FfIInJSC%2Bc%2FKZSlDMALAxdILMudfEIsmF%2Fqm0WMlm3IDsY6kRVoRG%2F50xxS%2Bokdr4Nzu7VtQo5LpOOMRUfUlJHlAhspYO8Wm0FCmuHuEF4A0tnkXx%2BkyZrdB0ngCl%2F7D597lqVIzWYrOMTQrg2ggh6yLpd0qOdgsy%2B1mIDI4szpAaY1Rli8ZPTL%2FQnrbtxwzWV2YLNhJB6ZLe%2BmfnRUsGqoaG3fnRmaY7NkO93Wp9LRv7XKKA534iXKWPQfBF9o4PKu%2F4a2ICf6BO0Qa8Bp23u8qxqD%2By%2FLbC1Qb9o%2BfwupsYZISvYgAZQVjYUhU4phT74tjiWcj3piLuDrAxRcuFl3ExepXM1U99H2E6dCxEPeZamML6xqgveLwDcdwEcbOPRsI4cWv7omk2qQXO70M0Rfh0yIOGNOab27czBa8Gn9SARCvlnfEWGKPfCup7muXrnwRyo1jpKnqRm84MNcm1UaxLR1S4zSRa6ckL2UzVnUWNAEfVPLITje6Tu4ji13RLWmPQit6H7IqFRTe%2FJTEcafDNYXYqzQH8xtiolKPHm0qXTac1eWJSucQ5bK%2Fc43hIF0w%2BcPq1AY6pgExU5gSIk6O%2Fmsu0gH%2FWRHkoBOamqJS2duv8tz%2BprfiAbthv3C1weKcHp4rftOYVVafldVlNuHkeADQurcVBREfsEk6rpsuI0RjS3gDGcW58RJClNMaSZ2MBqWVxirh84j5CZPX2RADPyAJQeDP3A9Q9BrIlA0Xlg3fuQYjI9XIhFD3T153CW1V8ZToDyKGhgq2Fsqf1Z2MPle3LUygXW7CcNXbOaRk&X-Amz-Signature=74c0961216ec4d5add754e39f49b6157a2bba306e26ed02c6a889218e6aa150b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664RPYJAAA%2F20260904%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260904T123049Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJGMEQCIHGEF%2F9lkqJRDc8UMao7Lr0hh3lCGupxXVb0ywYF70HPAiA0QkIwE2wLj63wFKSBLivxtusJX31tvISq3Z0wDbD4ISqIBAj0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMeD07MAkL0m9Qih2UKtwD%2FQeuhIl%2Bjg1%2FmLCj%2F9fpH%2Fpy%2BXFo2yLu8nq%2B6WZVG6xa8eR0%2BvBOdTNQ%2FfIInJSC%2Bc%2FKZSlDMALAxdILMudfEIsmF%2Fqm0WMlm3IDsY6kRVoRG%2F50xxS%2Bokdr4Nzu7VtQo5LpOOMRUfUlJHlAhspYO8Wm0FCmuHuEF4A0tnkXx%2BkyZrdB0ngCl%2F7D597lqVIzWYrOMTQrg2ggh6yLpd0qOdgsy%2B1mIDI4szpAaY1Rli8ZPTL%2FQnrbtxwzWV2YLNhJB6ZLe%2BmfnRUsGqoaG3fnRmaY7NkO93Wp9LRv7XKKA534iXKWPQfBF9o4PKu%2F4a2ICf6BO0Qa8Bp23u8qxqD%2By%2FLbC1Qb9o%2BfwupsYZISvYgAZQVjYUhU4phT74tjiWcj3piLuDrAxRcuFl3ExepXM1U99H2E6dCxEPeZamML6xqgveLwDcdwEcbOPRsI4cWv7omk2qQXO70M0Rfh0yIOGNOab27czBa8Gn9SARCvlnfEWGKPfCup7muXrnwRyo1jpKnqRm84MNcm1UaxLR1S4zSRa6ckL2UzVnUWNAEfVPLITje6Tu4ji13RLWmPQit6H7IqFRTe%2FJTEcafDNYXYqzQH8xtiolKPHm0qXTac1eWJSucQ5bK%2Fc43hIF0w%2BcPq1AY6pgExU5gSIk6O%2Fmsu0gH%2FWRHkoBOamqJS2duv8tz%2BprfiAbthv3C1weKcHp4rftOYVVafldVlNuHkeADQurcVBREfsEk6rpsuI0RjS3gDGcW58RJClNMaSZ2MBqWVxirh84j5CZPX2RADPyAJQeDP3A9Q9BrIlA0Xlg3fuQYjI9XIhFD3T153CW1V8ZToDyKGhgq2Fsqf1Z2MPle3LUygXW7CcNXbOaRk&X-Amz-Signature=317fa464b0aabd2a1298cefb41d883bee0902499434d8f3f2d4a75e2fd08cf5a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
