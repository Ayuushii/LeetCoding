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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S34U6URZ%2F20260530%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260530T095953Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJIMEYCIQC0dM1SFcAnLDlaQwLuiNplfY1cYSJ9V2ZWn706bmR1gwIhAOny5%2BuKkF0z50v%2B6ja2kXyOoUtNZK0kGZNptO5rTrktKogECNr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzXgHmCwF4RhvG5pJsq3ANr%2FNeNW4%2B%2FDLNTuo6SiRr8xWwjBXVGhPjqvGv5LzDTS23OgIlSlvHLOfnvRKpXTponeKyMYlRmq4%2F5%2BUlayepAs3rERhJwzpWiDkFnmSwNM6Fpps4fjU%2F0mZRst0lQdCb2wVHh6dOpFBTODW%2FM%2BuhI8O5T2Dw2U%2BSRtldmONC%2FvST2F%2BNVbrEqY%2BY0iqsQdRvoam4Vr5e%2BsHiUzaElri4FbZoEWuQtTslRkbxXabTBm4sSzMj41RcCqgUNEzK5Tv1c2NuYHXeI7TpNcvyPlfAsCXiOtkevHtIrTegpbkZNIk9BjW8t5Sadnrx032%2BwzzwyN0yY03hwjeeHhOkMZt83oVsEbqfIo0o2iErrRettk4mIhM9eYsIi1VzEWYZCqTxDe%2BYsM36YtolWyXR8d7OapVVuxA0pcXx6kVE7k2ayWXy9TJx60csAyN4%2B%2BYCle7RDslSGwBiPulJRtXQ66yAcxdfM0FCi1g%2BdSAYOGknubZ55PmkkhYYxDHKJTt7PAEKqp7RXTGZ6n5pjjk0ihxZa1JuUiovpjrqpXrWTNfGRoPfYd9l%2B55jI9b2XSahLzQ4naYPmspQ3Ze5UocyqNhNs4pcU%2FTASJgNIZ4gNJB9eITlmiYvQ8aF8g%2Fv9gTDO1erQBjqkAcQm5%2Fb795vN4hjePYo1x6wfj4ltwgL5G%2BA41T7L1bNi0NaoWFuJ9SIgI8ecUYY%2BszurnhffjzefW6Vv2jSIu0FOO8H10U%2BzGlvFQ9oi7oScYFkervoXieJC62%2FWyP3nSrdWuWLtxkh32gNpNyqOqOIlWmhvE6w0XZRqcl9Xkse6d89knU0QUdyXudzueVgMVWpWRI%2Bc1B1HVc%2BKItlRnPb4NyVj&X-Amz-Signature=67008ee7a9803f67e48b49f7c4f21ac7af8afb7e6e6c1bdeb95558f901e1a9af&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S34U6URZ%2F20260530%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260530T095953Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJIMEYCIQC0dM1SFcAnLDlaQwLuiNplfY1cYSJ9V2ZWn706bmR1gwIhAOny5%2BuKkF0z50v%2B6ja2kXyOoUtNZK0kGZNptO5rTrktKogECNr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzXgHmCwF4RhvG5pJsq3ANr%2FNeNW4%2B%2FDLNTuo6SiRr8xWwjBXVGhPjqvGv5LzDTS23OgIlSlvHLOfnvRKpXTponeKyMYlRmq4%2F5%2BUlayepAs3rERhJwzpWiDkFnmSwNM6Fpps4fjU%2F0mZRst0lQdCb2wVHh6dOpFBTODW%2FM%2BuhI8O5T2Dw2U%2BSRtldmONC%2FvST2F%2BNVbrEqY%2BY0iqsQdRvoam4Vr5e%2BsHiUzaElri4FbZoEWuQtTslRkbxXabTBm4sSzMj41RcCqgUNEzK5Tv1c2NuYHXeI7TpNcvyPlfAsCXiOtkevHtIrTegpbkZNIk9BjW8t5Sadnrx032%2BwzzwyN0yY03hwjeeHhOkMZt83oVsEbqfIo0o2iErrRettk4mIhM9eYsIi1VzEWYZCqTxDe%2BYsM36YtolWyXR8d7OapVVuxA0pcXx6kVE7k2ayWXy9TJx60csAyN4%2B%2BYCle7RDslSGwBiPulJRtXQ66yAcxdfM0FCi1g%2BdSAYOGknubZ55PmkkhYYxDHKJTt7PAEKqp7RXTGZ6n5pjjk0ihxZa1JuUiovpjrqpXrWTNfGRoPfYd9l%2B55jI9b2XSahLzQ4naYPmspQ3Ze5UocyqNhNs4pcU%2FTASJgNIZ4gNJB9eITlmiYvQ8aF8g%2Fv9gTDO1erQBjqkAcQm5%2Fb795vN4hjePYo1x6wfj4ltwgL5G%2BA41T7L1bNi0NaoWFuJ9SIgI8ecUYY%2BszurnhffjzefW6Vv2jSIu0FOO8H10U%2BzGlvFQ9oi7oScYFkervoXieJC62%2FWyP3nSrdWuWLtxkh32gNpNyqOqOIlWmhvE6w0XZRqcl9Xkse6d89knU0QUdyXudzueVgMVWpWRI%2Bc1B1HVc%2BKItlRnPb4NyVj&X-Amz-Signature=2dbd17a5314e2baee3c6acec7228c8c470e80b89654204996adeaeeaa27e6b19&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S34U6URZ%2F20260530%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260530T095953Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJIMEYCIQC0dM1SFcAnLDlaQwLuiNplfY1cYSJ9V2ZWn706bmR1gwIhAOny5%2BuKkF0z50v%2B6ja2kXyOoUtNZK0kGZNptO5rTrktKogECNr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzXgHmCwF4RhvG5pJsq3ANr%2FNeNW4%2B%2FDLNTuo6SiRr8xWwjBXVGhPjqvGv5LzDTS23OgIlSlvHLOfnvRKpXTponeKyMYlRmq4%2F5%2BUlayepAs3rERhJwzpWiDkFnmSwNM6Fpps4fjU%2F0mZRst0lQdCb2wVHh6dOpFBTODW%2FM%2BuhI8O5T2Dw2U%2BSRtldmONC%2FvST2F%2BNVbrEqY%2BY0iqsQdRvoam4Vr5e%2BsHiUzaElri4FbZoEWuQtTslRkbxXabTBm4sSzMj41RcCqgUNEzK5Tv1c2NuYHXeI7TpNcvyPlfAsCXiOtkevHtIrTegpbkZNIk9BjW8t5Sadnrx032%2BwzzwyN0yY03hwjeeHhOkMZt83oVsEbqfIo0o2iErrRettk4mIhM9eYsIi1VzEWYZCqTxDe%2BYsM36YtolWyXR8d7OapVVuxA0pcXx6kVE7k2ayWXy9TJx60csAyN4%2B%2BYCle7RDslSGwBiPulJRtXQ66yAcxdfM0FCi1g%2BdSAYOGknubZ55PmkkhYYxDHKJTt7PAEKqp7RXTGZ6n5pjjk0ihxZa1JuUiovpjrqpXrWTNfGRoPfYd9l%2B55jI9b2XSahLzQ4naYPmspQ3Ze5UocyqNhNs4pcU%2FTASJgNIZ4gNJB9eITlmiYvQ8aF8g%2Fv9gTDO1erQBjqkAcQm5%2Fb795vN4hjePYo1x6wfj4ltwgL5G%2BA41T7L1bNi0NaoWFuJ9SIgI8ecUYY%2BszurnhffjzefW6Vv2jSIu0FOO8H10U%2BzGlvFQ9oi7oScYFkervoXieJC62%2FWyP3nSrdWuWLtxkh32gNpNyqOqOIlWmhvE6w0XZRqcl9Xkse6d89knU0QUdyXudzueVgMVWpWRI%2Bc1B1HVc%2BKItlRnPb4NyVj&X-Amz-Signature=6a6f819c19a9a17962410b0bd248bf7565b38ad151eccc94296a549e0506d43c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666TVZLQUZ%2F20260530%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260530T095953Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCICu8Bet9SQN1XmA7kgXQzBitsLJjMkWEdDSLxuUAfpQZAiAHcdRUQTyvJO%2Bm%2BMeTfj2IJ%2BFduNvQDiNV5AXrHnE0LCqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMrUYjBuqjgdCRt%2B0YKtwD0M5c1YqcpDnskxg0WdJPb7EsV1%2BdjH7f%2FxsVMs0VpAEt4HhR3AAzPYBPkHr9l41jtOPVo4RVEfzEqs5FOvYQ%2FBynqEdlguOn8RKH5Si4Ik28De1RTaab1lNtGCOxPVqSEfgmuX1Al33OcpgZuxbUGRc7%2F9s1Bt3T2Nsl%2F%2BYlAWKt0WE6eLbwqqzEYeg90%2FIXMHVkuhZTpKwyH%2FwUaKc7WKBNEDbdQoPFbcoy8h4GCbTlnYCnX8Ac0hZ8DiNTxePDlDR7VVgqfEV1yqA%2FbF1z%2FHwq0NXnLLH1q%2FMS4dKLm4KecOxOSIPJ6WQK9dMH3CywGqJ85tL1wmRUhQEu7VIJSna46NdbpqfGWlNkUwXZc%2FyBCYIsFQsxi3JzVwkNFuw1L7toZiPJryvHZWwuJj7HOpAhZihwWZca%2FbQh3DuWOH0eDQGea%2BazgLqR%2FpZXlX%2FF1Y4s6hxnlGFqptMEFCZuiAUdqPNybTQDxVevOcftH4lWDrTfqZNSAh6TDmzRFJupWJ83HZ6%2FBQS0ifccwSLhA14U6Q6zFa8ivob732tCPitxbQ02ZKw4A8JD8%2BVryrzhrRjGG1l1Im5%2Bs0sHr0NO16alIy7%2BNTcLk%2BYjw5Z8idrxJ1g%2BTnWypjv96wkw49Lq0AY6pgHlCR5P5DOxnWxNPzNCEqas1ye28PnKHCHB9Hp2Yp99rrgk04%2F2KemIfX9z2ze6eSyRS%2F97YhBDq7OsSkYHWEUNZAtzk2lwXqrtFM1GUO2r9DZh%2BO%2FVwJYLytxuEorTLJy0rrvH4hMxHYEIwEZKqIMZxQ%2BBrKoBVGNfJhnx4IcDFqqQ69Eq58t7XZ3fXM%2BBQdd6dPchdY0W2Zs4Ue1wlKsryceYLOcx&X-Amz-Signature=0310c5c188a13199daa6b8321da3c6ce7a77d7a3b330795376f4a7cead1ff7b5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666TVZLQUZ%2F20260530%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260530T095953Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCICu8Bet9SQN1XmA7kgXQzBitsLJjMkWEdDSLxuUAfpQZAiAHcdRUQTyvJO%2Bm%2BMeTfj2IJ%2BFduNvQDiNV5AXrHnE0LCqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMrUYjBuqjgdCRt%2B0YKtwD0M5c1YqcpDnskxg0WdJPb7EsV1%2BdjH7f%2FxsVMs0VpAEt4HhR3AAzPYBPkHr9l41jtOPVo4RVEfzEqs5FOvYQ%2FBynqEdlguOn8RKH5Si4Ik28De1RTaab1lNtGCOxPVqSEfgmuX1Al33OcpgZuxbUGRc7%2F9s1Bt3T2Nsl%2F%2BYlAWKt0WE6eLbwqqzEYeg90%2FIXMHVkuhZTpKwyH%2FwUaKc7WKBNEDbdQoPFbcoy8h4GCbTlnYCnX8Ac0hZ8DiNTxePDlDR7VVgqfEV1yqA%2FbF1z%2FHwq0NXnLLH1q%2FMS4dKLm4KecOxOSIPJ6WQK9dMH3CywGqJ85tL1wmRUhQEu7VIJSna46NdbpqfGWlNkUwXZc%2FyBCYIsFQsxi3JzVwkNFuw1L7toZiPJryvHZWwuJj7HOpAhZihwWZca%2FbQh3DuWOH0eDQGea%2BazgLqR%2FpZXlX%2FF1Y4s6hxnlGFqptMEFCZuiAUdqPNybTQDxVevOcftH4lWDrTfqZNSAh6TDmzRFJupWJ83HZ6%2FBQS0ifccwSLhA14U6Q6zFa8ivob732tCPitxbQ02ZKw4A8JD8%2BVryrzhrRjGG1l1Im5%2Bs0sHr0NO16alIy7%2BNTcLk%2BYjw5Z8idrxJ1g%2BTnWypjv96wkw49Lq0AY6pgHlCR5P5DOxnWxNPzNCEqas1ye28PnKHCHB9Hp2Yp99rrgk04%2F2KemIfX9z2ze6eSyRS%2F97YhBDq7OsSkYHWEUNZAtzk2lwXqrtFM1GUO2r9DZh%2BO%2FVwJYLytxuEorTLJy0rrvH4hMxHYEIwEZKqIMZxQ%2BBrKoBVGNfJhnx4IcDFqqQ69Eq58t7XZ3fXM%2BBQdd6dPchdY0W2Zs4Ue1wlKsryceYLOcx&X-Amz-Signature=56924c4cd4d8a938ee1e78870a761921e8354bc40a27973e1b7a59ab1f66cddf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666TVZLQUZ%2F20260530%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260530T095953Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCICu8Bet9SQN1XmA7kgXQzBitsLJjMkWEdDSLxuUAfpQZAiAHcdRUQTyvJO%2Bm%2BMeTfj2IJ%2BFduNvQDiNV5AXrHnE0LCqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMrUYjBuqjgdCRt%2B0YKtwD0M5c1YqcpDnskxg0WdJPb7EsV1%2BdjH7f%2FxsVMs0VpAEt4HhR3AAzPYBPkHr9l41jtOPVo4RVEfzEqs5FOvYQ%2FBynqEdlguOn8RKH5Si4Ik28De1RTaab1lNtGCOxPVqSEfgmuX1Al33OcpgZuxbUGRc7%2F9s1Bt3T2Nsl%2F%2BYlAWKt0WE6eLbwqqzEYeg90%2FIXMHVkuhZTpKwyH%2FwUaKc7WKBNEDbdQoPFbcoy8h4GCbTlnYCnX8Ac0hZ8DiNTxePDlDR7VVgqfEV1yqA%2FbF1z%2FHwq0NXnLLH1q%2FMS4dKLm4KecOxOSIPJ6WQK9dMH3CywGqJ85tL1wmRUhQEu7VIJSna46NdbpqfGWlNkUwXZc%2FyBCYIsFQsxi3JzVwkNFuw1L7toZiPJryvHZWwuJj7HOpAhZihwWZca%2FbQh3DuWOH0eDQGea%2BazgLqR%2FpZXlX%2FF1Y4s6hxnlGFqptMEFCZuiAUdqPNybTQDxVevOcftH4lWDrTfqZNSAh6TDmzRFJupWJ83HZ6%2FBQS0ifccwSLhA14U6Q6zFa8ivob732tCPitxbQ02ZKw4A8JD8%2BVryrzhrRjGG1l1Im5%2Bs0sHr0NO16alIy7%2BNTcLk%2BYjw5Z8idrxJ1g%2BTnWypjv96wkw49Lq0AY6pgHlCR5P5DOxnWxNPzNCEqas1ye28PnKHCHB9Hp2Yp99rrgk04%2F2KemIfX9z2ze6eSyRS%2F97YhBDq7OsSkYHWEUNZAtzk2lwXqrtFM1GUO2r9DZh%2BO%2FVwJYLytxuEorTLJy0rrvH4hMxHYEIwEZKqIMZxQ%2BBrKoBVGNfJhnx4IcDFqqQ69Eq58t7XZ3fXM%2BBQdd6dPchdY0W2Zs4Ue1wlKsryceYLOcx&X-Amz-Signature=b39afedaa19b34ec98da0d511da38198bf50282c32043d57edf5d749f467bb82&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666TVZLQUZ%2F20260530%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260530T095954Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCICu8Bet9SQN1XmA7kgXQzBitsLJjMkWEdDSLxuUAfpQZAiAHcdRUQTyvJO%2Bm%2BMeTfj2IJ%2BFduNvQDiNV5AXrHnE0LCqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMrUYjBuqjgdCRt%2B0YKtwD0M5c1YqcpDnskxg0WdJPb7EsV1%2BdjH7f%2FxsVMs0VpAEt4HhR3AAzPYBPkHr9l41jtOPVo4RVEfzEqs5FOvYQ%2FBynqEdlguOn8RKH5Si4Ik28De1RTaab1lNtGCOxPVqSEfgmuX1Al33OcpgZuxbUGRc7%2F9s1Bt3T2Nsl%2F%2BYlAWKt0WE6eLbwqqzEYeg90%2FIXMHVkuhZTpKwyH%2FwUaKc7WKBNEDbdQoPFbcoy8h4GCbTlnYCnX8Ac0hZ8DiNTxePDlDR7VVgqfEV1yqA%2FbF1z%2FHwq0NXnLLH1q%2FMS4dKLm4KecOxOSIPJ6WQK9dMH3CywGqJ85tL1wmRUhQEu7VIJSna46NdbpqfGWlNkUwXZc%2FyBCYIsFQsxi3JzVwkNFuw1L7toZiPJryvHZWwuJj7HOpAhZihwWZca%2FbQh3DuWOH0eDQGea%2BazgLqR%2FpZXlX%2FF1Y4s6hxnlGFqptMEFCZuiAUdqPNybTQDxVevOcftH4lWDrTfqZNSAh6TDmzRFJupWJ83HZ6%2FBQS0ifccwSLhA14U6Q6zFa8ivob732tCPitxbQ02ZKw4A8JD8%2BVryrzhrRjGG1l1Im5%2Bs0sHr0NO16alIy7%2BNTcLk%2BYjw5Z8idrxJ1g%2BTnWypjv96wkw49Lq0AY6pgHlCR5P5DOxnWxNPzNCEqas1ye28PnKHCHB9Hp2Yp99rrgk04%2F2KemIfX9z2ze6eSyRS%2F97YhBDq7OsSkYHWEUNZAtzk2lwXqrtFM1GUO2r9DZh%2BO%2FVwJYLytxuEorTLJy0rrvH4hMxHYEIwEZKqIMZxQ%2BBrKoBVGNfJhnx4IcDFqqQ69Eq58t7XZ3fXM%2BBQdd6dPchdY0W2Zs4Ue1wlKsryceYLOcx&X-Amz-Signature=20733e258ce138990acdd0ce96075d9e514dfc7507ba2449c4cdb436a890c16f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VNV43WTP%2F20260530%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260530T095954Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCIAqAF9KhkMH4JqgETQtE%2B%2BLPwjcahd58hs09Yd7OrLS6AiAoMYvLcKHp301Hdp%2BkcSvzcoMn2DwbfoeS%2FjcWZrq5xSqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMoCZAwu5tQdQlv7aIKtwDXL1vWA2AxmzrKECHpHa493rJL%2Fz90fdsGbssd8%2FIrU9O9mXxjfNkZlA%2BExHHuZhZzEbSKWvqLh%2B%2FRTmInS99Gvh2SN0gjJJkb%2BtgBnTzHZkOkps97gOkhievp43%2FcANKjp%2BDBWI7YDfV%2B7OD%2FERgEUaRTQNdvyz1rsspCDt3zhXAnD0b6So1i714RjfQixd6TmII2KZF9VTsmIrm8gqiMFxy8LnSWo0QvOQt13zsV9nnZJxO1AIE5EaDs%2FODp6ymJax2pX%2F2jVGRZVYKYyJwjnCBW%2FCxAy5nTg%2B%2FNo%2B78iesw9WQSjxuZ6cR4ofIHAlVoEoPERzS7NSnuW8LnLk1CB7gXR%2B1sxeLO8GkrpL%2BOMUl7QJhs%2BhQecnGwq7MfXJpztBFvDm2HRwJ%2BuSgOLOOyVmobU1hAC17msSsH6sdUhxGiRNcQsHWjUmunQ9lCq6n6eHuhsf2aVKIYwEclILkLd01m0XGHR8g0QuVM24kxnAJBBNRM3cztAztFmFlMslM3j5nBqrKfmls9kPJ5N6MAcsjWs5iDaxnaEbxZb2L5JzAdUgv%2F1MFPZxZvNgFnmvy%2FlgIQIxZTdmCEm2SUvHfxSv2SSaJi%2FbHnoNILYkPL4%2FAiSqmJW1gAQMfg6Uw%2F9Lq0AY6pgGBiBjb5jSu40q33b6ZLbnq0KHl%2B1fML0vIrLBpNtcCtLOLkfjalHzlsvurN9DMiBbW5TErhGkBOBkqu7AwZPTlXn9%2F7MZD%2FocoOSOFZQ6EK%2F4kUPm5E6h%2FqNR28o1yHJqoXL6%2FhnK0fKC1%2Fap51b9q9ahbUJ841PLNM49ucRj424X7ulQNbL7UcXP4On9q8H7Q6%2Fa1BtgyQYs3zwBrpHuh0cfg75Kq&X-Amz-Signature=a7611b1635851be0c150bcf18d0241a2da8dd47f2e5eae058c4fe6a7f1bff3bd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RGEE3AEB%2F20260530%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260530T095954Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCIDQkwNWXz3OYBba8THvpIJThzOtW8eONoEQDpvpmbtxMAiEAh3ZXI2hLhK%2Bi6pG6ZD6WbJQT3Lu7otf7K1qPrsGCaqMqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKMjw2cIltOwMvQ5HSrcA4Pgte5i0Ex%2BTm8gOwqyYoOn9CHWbeZP4NDBK4wLRUw2qjIIm%2B4I4TChelpVeSdNvVdLYhfbokADKdv6CHSBmM6VThQ%2FBFJx3VugZferq8Yuhih%2BihkOxbkMdyT6MmfGKCMlJbNJBSQPJHBGnrDtAspl4r2OtMHH8sFZuADNvrYhgsztolz45nTeSmVYZ07IsIK9h4dFuHGe5r5OqEaaOtA2FkWrokG8OYn68G1p710qEarNP%2FIYTOaTTsSOx7TBj6FiOb%2Fyid8p9xTF9vKq2eEJ7bap2NlKF9wDWkSXKr6KyaG6nc1XDYy9SCKV5y5yDjJjibs5IS1n%2FnloV6gxKR0c1CfHoLYh5UY1uOlNM3T9VOULj4fZl9tSk0tDNn7WHyGF1QDEQLO1JhSKOn2v1WnZFBfgKJwbBu4hFKWiYRRroXnB5tEDmespugithcdFJIhpVohevaUpOFfmTJRvLFAtQyF3X4HODOj%2F6FgWFQtHBwPSjHq7%2BuugOm6eyGxg18vi6isca0vTMHML4RbV2LH5xZlgqcD9JPCqFLrqrVqLDqngTnz989VwDWX0mXDccN6jREmLJto8Jhh7FDoZcLF3EkOATmqWuwINFq43wiDBBOqoGuKeuvjz33EUMMfU6tAGOqUBpo8NjKYh7EK%2FkoxEZLpKtzDs1pPkttNIOJnubszP3oKWZvyRcaEv65XordHM3yswThTqu5qNeRT1SANgi6qSAOxO%2FMhGF6uA3aKGJKbfgVgyaUChzO%2F0verbRzzzcF7Io7rdknOalJZ8U9H1a4tSTheAR3TXHE7AJyklD%2FaVWMazVHimrdspkb%2BweE0ldo24dI2%2BVnfLSbG9M7hzkn7A%2FuKCk5N%2B&X-Amz-Signature=7908e85792471319eb1c722a72312554389117c6aab19af5a55d52201faa358c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RGEE3AEB%2F20260530%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260530T095954Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCIDQkwNWXz3OYBba8THvpIJThzOtW8eONoEQDpvpmbtxMAiEAh3ZXI2hLhK%2Bi6pG6ZD6WbJQT3Lu7otf7K1qPrsGCaqMqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKMjw2cIltOwMvQ5HSrcA4Pgte5i0Ex%2BTm8gOwqyYoOn9CHWbeZP4NDBK4wLRUw2qjIIm%2B4I4TChelpVeSdNvVdLYhfbokADKdv6CHSBmM6VThQ%2FBFJx3VugZferq8Yuhih%2BihkOxbkMdyT6MmfGKCMlJbNJBSQPJHBGnrDtAspl4r2OtMHH8sFZuADNvrYhgsztolz45nTeSmVYZ07IsIK9h4dFuHGe5r5OqEaaOtA2FkWrokG8OYn68G1p710qEarNP%2FIYTOaTTsSOx7TBj6FiOb%2Fyid8p9xTF9vKq2eEJ7bap2NlKF9wDWkSXKr6KyaG6nc1XDYy9SCKV5y5yDjJjibs5IS1n%2FnloV6gxKR0c1CfHoLYh5UY1uOlNM3T9VOULj4fZl9tSk0tDNn7WHyGF1QDEQLO1JhSKOn2v1WnZFBfgKJwbBu4hFKWiYRRroXnB5tEDmespugithcdFJIhpVohevaUpOFfmTJRvLFAtQyF3X4HODOj%2F6FgWFQtHBwPSjHq7%2BuugOm6eyGxg18vi6isca0vTMHML4RbV2LH5xZlgqcD9JPCqFLrqrVqLDqngTnz989VwDWX0mXDccN6jREmLJto8Jhh7FDoZcLF3EkOATmqWuwINFq43wiDBBOqoGuKeuvjz33EUMMfU6tAGOqUBpo8NjKYh7EK%2FkoxEZLpKtzDs1pPkttNIOJnubszP3oKWZvyRcaEv65XordHM3yswThTqu5qNeRT1SANgi6qSAOxO%2FMhGF6uA3aKGJKbfgVgyaUChzO%2F0verbRzzzcF7Io7rdknOalJZ8U9H1a4tSTheAR3TXHE7AJyklD%2FaVWMazVHimrdspkb%2BweE0ldo24dI2%2BVnfLSbG9M7hzkn7A%2FuKCk5N%2B&X-Amz-Signature=2dc4ce32452ff527b4d99cd117e2166e92e17b9987b7e1035c394e9205ff7be6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
