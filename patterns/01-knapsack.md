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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TDI4DHST%2F20260507%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260507T102327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCID01FK8Hk%2FHQxumda2t3yYvHaV4ptGsVLu54tE6bxtEgAiEAguGzDhMHvi9MIppeGUu2rlrg%2B%2FyQ7OsRXOwqKPt0oq4qiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLsIxTTmLk4wHSrgySrcA%2BV72181246XgqEhrZjJAJQ7nGVzan162KpcipkIGv56kF5X65wt8%2FPKueLwWVx%2BB%2BPSlpKYmUHCj3nXeX2hfXVGSh4BM5nR8pIX4O6oZ3JQK3AysWn3aTVknXyWkoZqcRoy%2BxOTezrwE6YES4VPyiZFE93JPgpCT0yyYdbud5Gj6uATkEV4Gj9gkgq9pC2ehUoHBhDsmYLT5K530kUiEr5xKYR0Rm7wOwtuUZY1DAGu56L3Ci9shNvULvckM9ZwYoTV7eSToTg92Q8sB5obibi6eI%2BU0LOWrXXcJoxb6OiVRvLXrdE1Vd2FkU%2F2RCNpBbC0SgykgpqceIvjaoKRAcPAxNwplCQnpMEldXeEaEwXa%2B5ZtoN2pXYsnKcSWmksDQNf8gr3kudqvxX4hXaaKs3C8s%2FYUEh1FFtQeLgDq13V3Sa%2BZq6ZftUl4F2JW2bILPO4nx176q44RTRbUA%2FN4pbBJhiwSM29zqNSNsgvNCJNxifz92eR3U%2BAUzps2cwJZsa%2FMMBfFQWJCCCLAIdYnAGFn78QdXDKcZ7ZNmfbh3wjsjXPVZJEs7%2Ft6HJbHA1XM26xB%2BSG4g5OzEZaeIn6hGnm8lUwO6A4j2zOLcino2T2YnkFXmWuck55TnkGMLbJ8c8GOqUBDtV%2BkL10NAuY1y%2BEHaPmcdB%2BoUpIogiR3lUWrPLde4Zi8upaA9p3R%2FlsSXIAD4iQu5R7tR%2BxD6IDXoUOZ5wk0Yh9okWzqaAS8E346wARr53%2BTBht9CfWBoN5jvY%2BVTxRnFeeSekS81IjRYiLtdwePl1QfPEu6IcN87xmymdAP2VcRhGMAkwLWrqlwskJS846qqT1JmgdLdhnc18o%2BjtUQTm4PBsQ&X-Amz-Signature=1323acdf1b81ee63a3832a333e9900c6ab5afcc8c8fb2c0fb409b4a1b5338daa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TDI4DHST%2F20260507%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260507T102327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCID01FK8Hk%2FHQxumda2t3yYvHaV4ptGsVLu54tE6bxtEgAiEAguGzDhMHvi9MIppeGUu2rlrg%2B%2FyQ7OsRXOwqKPt0oq4qiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLsIxTTmLk4wHSrgySrcA%2BV72181246XgqEhrZjJAJQ7nGVzan162KpcipkIGv56kF5X65wt8%2FPKueLwWVx%2BB%2BPSlpKYmUHCj3nXeX2hfXVGSh4BM5nR8pIX4O6oZ3JQK3AysWn3aTVknXyWkoZqcRoy%2BxOTezrwE6YES4VPyiZFE93JPgpCT0yyYdbud5Gj6uATkEV4Gj9gkgq9pC2ehUoHBhDsmYLT5K530kUiEr5xKYR0Rm7wOwtuUZY1DAGu56L3Ci9shNvULvckM9ZwYoTV7eSToTg92Q8sB5obibi6eI%2BU0LOWrXXcJoxb6OiVRvLXrdE1Vd2FkU%2F2RCNpBbC0SgykgpqceIvjaoKRAcPAxNwplCQnpMEldXeEaEwXa%2B5ZtoN2pXYsnKcSWmksDQNf8gr3kudqvxX4hXaaKs3C8s%2FYUEh1FFtQeLgDq13V3Sa%2BZq6ZftUl4F2JW2bILPO4nx176q44RTRbUA%2FN4pbBJhiwSM29zqNSNsgvNCJNxifz92eR3U%2BAUzps2cwJZsa%2FMMBfFQWJCCCLAIdYnAGFn78QdXDKcZ7ZNmfbh3wjsjXPVZJEs7%2Ft6HJbHA1XM26xB%2BSG4g5OzEZaeIn6hGnm8lUwO6A4j2zOLcino2T2YnkFXmWuck55TnkGMLbJ8c8GOqUBDtV%2BkL10NAuY1y%2BEHaPmcdB%2BoUpIogiR3lUWrPLde4Zi8upaA9p3R%2FlsSXIAD4iQu5R7tR%2BxD6IDXoUOZ5wk0Yh9okWzqaAS8E346wARr53%2BTBht9CfWBoN5jvY%2BVTxRnFeeSekS81IjRYiLtdwePl1QfPEu6IcN87xmymdAP2VcRhGMAkwLWrqlwskJS846qqT1JmgdLdhnc18o%2BjtUQTm4PBsQ&X-Amz-Signature=c4e8e9e301f9a01491e69d3e66e584bbfd76ea9f7dedadcb8bed6de278a66bb6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TDI4DHST%2F20260507%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260507T102327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCID01FK8Hk%2FHQxumda2t3yYvHaV4ptGsVLu54tE6bxtEgAiEAguGzDhMHvi9MIppeGUu2rlrg%2B%2FyQ7OsRXOwqKPt0oq4qiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLsIxTTmLk4wHSrgySrcA%2BV72181246XgqEhrZjJAJQ7nGVzan162KpcipkIGv56kF5X65wt8%2FPKueLwWVx%2BB%2BPSlpKYmUHCj3nXeX2hfXVGSh4BM5nR8pIX4O6oZ3JQK3AysWn3aTVknXyWkoZqcRoy%2BxOTezrwE6YES4VPyiZFE93JPgpCT0yyYdbud5Gj6uATkEV4Gj9gkgq9pC2ehUoHBhDsmYLT5K530kUiEr5xKYR0Rm7wOwtuUZY1DAGu56L3Ci9shNvULvckM9ZwYoTV7eSToTg92Q8sB5obibi6eI%2BU0LOWrXXcJoxb6OiVRvLXrdE1Vd2FkU%2F2RCNpBbC0SgykgpqceIvjaoKRAcPAxNwplCQnpMEldXeEaEwXa%2B5ZtoN2pXYsnKcSWmksDQNf8gr3kudqvxX4hXaaKs3C8s%2FYUEh1FFtQeLgDq13V3Sa%2BZq6ZftUl4F2JW2bILPO4nx176q44RTRbUA%2FN4pbBJhiwSM29zqNSNsgvNCJNxifz92eR3U%2BAUzps2cwJZsa%2FMMBfFQWJCCCLAIdYnAGFn78QdXDKcZ7ZNmfbh3wjsjXPVZJEs7%2Ft6HJbHA1XM26xB%2BSG4g5OzEZaeIn6hGnm8lUwO6A4j2zOLcino2T2YnkFXmWuck55TnkGMLbJ8c8GOqUBDtV%2BkL10NAuY1y%2BEHaPmcdB%2BoUpIogiR3lUWrPLde4Zi8upaA9p3R%2FlsSXIAD4iQu5R7tR%2BxD6IDXoUOZ5wk0Yh9okWzqaAS8E346wARr53%2BTBht9CfWBoN5jvY%2BVTxRnFeeSekS81IjRYiLtdwePl1QfPEu6IcN87xmymdAP2VcRhGMAkwLWrqlwskJS846qqT1JmgdLdhnc18o%2BjtUQTm4PBsQ&X-Amz-Signature=d6e7df0e6bc16e2db1d1897bc1dc3e060436a24649cd8989dedcb7822c7f195b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QPMZLEW6%2F20260507%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260507T102327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIH607UZKQOcwQaCQpU%2Fjq2jY6t4BwK5U3C7lOBSJHNV5AiA3wrG8mzjbdeeVYeXMB6UUFFrVfxzMwa21kGo6v2rxsiqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMDA2gCyStKcoqv0qMKtwDaa4VLB3xPEWtSRKhPadQ4rIR7z6uzrSADg5ATruV74s5ETR6NDNe9WJtgIkkM1SUVeteT7a5unv4L57mBQdw9W4CUSgm6d6nufCvUvvb%2FWMgerWynL0geksN%2BhJnUonF0dh2iLEwIC3gXhXDbL4rrpNKphw2EKCvjtjxQF8yGXreIkPWZ8QS5J8MixOEWNFGrFiTz%2F%2FNcBLYJnU%2FVdqoCuOo78gwmvtcBpy%2F1AkzTVIVw%2BSAHeMcoZLBn5hbX6xV3KmkYHxDVeFK7W%2FOOwQj0y%2BHh8sRLBOp%2BZdDSmWl2x39sTMvCdRUP676joQGIjbFmKfH51hB6HJT0q8GD0hIy8LGLHJK%2B%2BM9z9ke2jN7dSCixvd%2FnsAhesNG60W1ZLrD05QcxwPgp%2FKxOK04m%2BcZ5iISLGjdmW7cKjNtD0IWEzl%2F38t%2BxTliHqGLpf6EsZYV2tdPhrO0fhsMSxWj8xTSGoY3H4B3aGo6j2xPL6whZK5noTV%2Be2B5DbsI881pmBZBChgKhlmPsFEmWncnemMn9NiaRZzWdOS5yPlvZFdyzybUdN73u9kczZq0ld37sqIZw1K0oMq7PxN6%2BSaCMJuxyKNqokjhjLupULAmD1yFe8NXZUXotHRv8GN7fLIw28jxzwY6pgG3F1P8tiDKDgD8D1qArcZoUE5eEUo5Wr3mFR%2FeelJTnlWTfMbW1K7OZI7KeVqMEQrw49iWUAmNIAxPF84vCsb3YZevvnDZUXYe37QWxzlUBskd%2BknLS3xVwdWLAHJMFs0bM53n6BZwx4nNgyE3ToCpljjGXuddLCb14HVCts%2FLgK2z7LinWopLWsat4THUtwgdsOY%2F1WSCta73bfRjlx209NNvGLo2&X-Amz-Signature=ad145092f2e76fed2025fe1f70293881ee3ddebcf0adafb2b625f0ad88dd7953&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QPMZLEW6%2F20260507%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260507T102327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIH607UZKQOcwQaCQpU%2Fjq2jY6t4BwK5U3C7lOBSJHNV5AiA3wrG8mzjbdeeVYeXMB6UUFFrVfxzMwa21kGo6v2rxsiqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMDA2gCyStKcoqv0qMKtwDaa4VLB3xPEWtSRKhPadQ4rIR7z6uzrSADg5ATruV74s5ETR6NDNe9WJtgIkkM1SUVeteT7a5unv4L57mBQdw9W4CUSgm6d6nufCvUvvb%2FWMgerWynL0geksN%2BhJnUonF0dh2iLEwIC3gXhXDbL4rrpNKphw2EKCvjtjxQF8yGXreIkPWZ8QS5J8MixOEWNFGrFiTz%2F%2FNcBLYJnU%2FVdqoCuOo78gwmvtcBpy%2F1AkzTVIVw%2BSAHeMcoZLBn5hbX6xV3KmkYHxDVeFK7W%2FOOwQj0y%2BHh8sRLBOp%2BZdDSmWl2x39sTMvCdRUP676joQGIjbFmKfH51hB6HJT0q8GD0hIy8LGLHJK%2B%2BM9z9ke2jN7dSCixvd%2FnsAhesNG60W1ZLrD05QcxwPgp%2FKxOK04m%2BcZ5iISLGjdmW7cKjNtD0IWEzl%2F38t%2BxTliHqGLpf6EsZYV2tdPhrO0fhsMSxWj8xTSGoY3H4B3aGo6j2xPL6whZK5noTV%2Be2B5DbsI881pmBZBChgKhlmPsFEmWncnemMn9NiaRZzWdOS5yPlvZFdyzybUdN73u9kczZq0ld37sqIZw1K0oMq7PxN6%2BSaCMJuxyKNqokjhjLupULAmD1yFe8NXZUXotHRv8GN7fLIw28jxzwY6pgG3F1P8tiDKDgD8D1qArcZoUE5eEUo5Wr3mFR%2FeelJTnlWTfMbW1K7OZI7KeVqMEQrw49iWUAmNIAxPF84vCsb3YZevvnDZUXYe37QWxzlUBskd%2BknLS3xVwdWLAHJMFs0bM53n6BZwx4nNgyE3ToCpljjGXuddLCb14HVCts%2FLgK2z7LinWopLWsat4THUtwgdsOY%2F1WSCta73bfRjlx209NNvGLo2&X-Amz-Signature=e82ee2fa550631680444a0ec3b3991badb0739002283b166db81d6686405111c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QPMZLEW6%2F20260507%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260507T102327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIH607UZKQOcwQaCQpU%2Fjq2jY6t4BwK5U3C7lOBSJHNV5AiA3wrG8mzjbdeeVYeXMB6UUFFrVfxzMwa21kGo6v2rxsiqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMDA2gCyStKcoqv0qMKtwDaa4VLB3xPEWtSRKhPadQ4rIR7z6uzrSADg5ATruV74s5ETR6NDNe9WJtgIkkM1SUVeteT7a5unv4L57mBQdw9W4CUSgm6d6nufCvUvvb%2FWMgerWynL0geksN%2BhJnUonF0dh2iLEwIC3gXhXDbL4rrpNKphw2EKCvjtjxQF8yGXreIkPWZ8QS5J8MixOEWNFGrFiTz%2F%2FNcBLYJnU%2FVdqoCuOo78gwmvtcBpy%2F1AkzTVIVw%2BSAHeMcoZLBn5hbX6xV3KmkYHxDVeFK7W%2FOOwQj0y%2BHh8sRLBOp%2BZdDSmWl2x39sTMvCdRUP676joQGIjbFmKfH51hB6HJT0q8GD0hIy8LGLHJK%2B%2BM9z9ke2jN7dSCixvd%2FnsAhesNG60W1ZLrD05QcxwPgp%2FKxOK04m%2BcZ5iISLGjdmW7cKjNtD0IWEzl%2F38t%2BxTliHqGLpf6EsZYV2tdPhrO0fhsMSxWj8xTSGoY3H4B3aGo6j2xPL6whZK5noTV%2Be2B5DbsI881pmBZBChgKhlmPsFEmWncnemMn9NiaRZzWdOS5yPlvZFdyzybUdN73u9kczZq0ld37sqIZw1K0oMq7PxN6%2BSaCMJuxyKNqokjhjLupULAmD1yFe8NXZUXotHRv8GN7fLIw28jxzwY6pgG3F1P8tiDKDgD8D1qArcZoUE5eEUo5Wr3mFR%2FeelJTnlWTfMbW1K7OZI7KeVqMEQrw49iWUAmNIAxPF84vCsb3YZevvnDZUXYe37QWxzlUBskd%2BknLS3xVwdWLAHJMFs0bM53n6BZwx4nNgyE3ToCpljjGXuddLCb14HVCts%2FLgK2z7LinWopLWsat4THUtwgdsOY%2F1WSCta73bfRjlx209NNvGLo2&X-Amz-Signature=7d86060db64b146509a8e6e5a12d64928c8e70c1576cd8b86197b7b6a8c1e334&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QPMZLEW6%2F20260507%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260507T102327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIH607UZKQOcwQaCQpU%2Fjq2jY6t4BwK5U3C7lOBSJHNV5AiA3wrG8mzjbdeeVYeXMB6UUFFrVfxzMwa21kGo6v2rxsiqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMDA2gCyStKcoqv0qMKtwDaa4VLB3xPEWtSRKhPadQ4rIR7z6uzrSADg5ATruV74s5ETR6NDNe9WJtgIkkM1SUVeteT7a5unv4L57mBQdw9W4CUSgm6d6nufCvUvvb%2FWMgerWynL0geksN%2BhJnUonF0dh2iLEwIC3gXhXDbL4rrpNKphw2EKCvjtjxQF8yGXreIkPWZ8QS5J8MixOEWNFGrFiTz%2F%2FNcBLYJnU%2FVdqoCuOo78gwmvtcBpy%2F1AkzTVIVw%2BSAHeMcoZLBn5hbX6xV3KmkYHxDVeFK7W%2FOOwQj0y%2BHh8sRLBOp%2BZdDSmWl2x39sTMvCdRUP676joQGIjbFmKfH51hB6HJT0q8GD0hIy8LGLHJK%2B%2BM9z9ke2jN7dSCixvd%2FnsAhesNG60W1ZLrD05QcxwPgp%2FKxOK04m%2BcZ5iISLGjdmW7cKjNtD0IWEzl%2F38t%2BxTliHqGLpf6EsZYV2tdPhrO0fhsMSxWj8xTSGoY3H4B3aGo6j2xPL6whZK5noTV%2Be2B5DbsI881pmBZBChgKhlmPsFEmWncnemMn9NiaRZzWdOS5yPlvZFdyzybUdN73u9kczZq0ld37sqIZw1K0oMq7PxN6%2BSaCMJuxyKNqokjhjLupULAmD1yFe8NXZUXotHRv8GN7fLIw28jxzwY6pgG3F1P8tiDKDgD8D1qArcZoUE5eEUo5Wr3mFR%2FeelJTnlWTfMbW1K7OZI7KeVqMEQrw49iWUAmNIAxPF84vCsb3YZevvnDZUXYe37QWxzlUBskd%2BknLS3xVwdWLAHJMFs0bM53n6BZwx4nNgyE3ToCpljjGXuddLCb14HVCts%2FLgK2z7LinWopLWsat4THUtwgdsOY%2F1WSCta73bfRjlx209NNvGLo2&X-Amz-Signature=4deaf4dbe3cb98d57a60ffed539739551aa4381436fbcd0d8cf1be55f393faa7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466436XF5PX%2F20260507%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260507T102329Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIC4BTZItAoGp7sEBSTMdHZ6BtbVor25zoZjeClV1H3GBAiEA%2BuPEYVsASvFDaljsGc9lKma9HxlZLJwSVS7vA%2BhA%2BTAqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKGT3BN4dhecXr4%2FYCrcAwB5rV4C8nNUgbuor%2Bh6p9eLcjB7mCZNsdsChxViwGgNeRJyPpej32cc44CRXXD9SpNoj%2Bsd5XITQmvq2YAQgmAPmJtZeidfO%2Fm5c4IWeGpu4Q%2FM68OnXKMNlu3v1jqXN4tqgBfOUnEKoC5H7JjDgRE76LfJ8YyHSQzj36wIRE71kjc4HfPwinC19vxj6QXYgDmLfARyRa5D6lyHyPV5s%2BSED4Tps%2FPWffPrmtgCGiJ%2B4VhjkUvQwLsd9AeLjj68jnFrw1Glb%2BWi24Jen2L4pVv0oCAYQ5cSVduWTGx9bBXYiQDCTzW2QYP1DNGRZNbJYLmnjXFrplhOoByRzcvm89zdWKyd%2FHCmeQsSnPf8kSfPCyuH9Lua73aOGfGkAQxbEZBbvhatgp%2BdsHQW3kaXoMW40Zl%2BlRU2pq1lmTtfu0w1YPl4yGpSjAYqXUuYIY8Ydx%2Fu8iSJb2LD8U%2FjQ8tb6FVL7%2FohUxuTRQ%2FWxymlchSWDP4YWhBW60Xjbj9FXUBepK0ic4yRuzXIAme5XjAkY3YSTXZ6BY%2Fl1ou%2BrYMMGV5cNHc5EXWOzt8uwc0lLpo3E021ksC6JGZwEcORcNPwJM72Rj%2FjmV0xIq7llWYX63hOOCOAj5BZK8BbTrOMMPDI8c8GOqUBc0UphnvLO0SeNzx%2BD15c%2FjLrCryyrixmwywlaijaueuO4wG05fDPA%2B2rynbr0CYvfcrJAb5V8Wlv8z3hywEakSgB1YbeNoIR13upRjF9f270pSLLeMohjq01gKSmz3Vy3DCfilFuFkiNcAN%2FXtVao9Jq%2F3wbP5GXTi%2B39uvyP5BvoA1mE2GNWZT1%2FuNdfUg7e3NuqqOHZ3SODOUWJDWS5sLIWbk8&X-Amz-Signature=97c50162544a1f7dda9f48e520b3d497c6641b3876c28dff5aaefb4545c8f9e9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SS5OSGW3%2F20260507%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260507T102329Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFMM15eepQPecYzQU4ySwqkv8YLMj0aKl6NpVPAsOynrAiEAztmDbRZmniobXhiRGtBBRH%2BGHrL60nIdnGH932fL5pUqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDM746dNtP51LoX4gmyrcA%2FTFXq%2FTlCyedllzWrtGxs0qUxyhE%2FYvUMZG1p3GNctrS8yrjaUudufXbLTQx27OIehlG7rWPAyVwfKsMYSPYG8FuzBAcZ%2BEDlxj8PiOFCqJGhKvROfAntORfpFQ387JRMy5G8qzQK9Ucogd%2Fcwe%2FvtdieiFnVBp6ZZK1ocd02po4KquNldKdAq4gUNu8%2BViNrHtF4BGz44JT7ckJMKW7pShGTZFckhmeCL%2F%2BQ3s4rjGBXVhcG5m2UqdloIWYgcu%2B1BbTExvEcBzjhrsxOkvDEdioTTxXAQtRyAMkG3RoP6XZ6YYqpXBj76m%2Fyt8aclJXeMoje3Phdv3W3Ff%2FwpLpjFpJQvwJxHGnSlqS7vrxYMYELIqVy3oxVzju9TlwcXnJVL2FMYVx2dWNbG%2F26gId8qXwZ0Re8f7FazZn%2BDCRqJEN2i%2FnVpzLIOuX0BRb8jlhcEfh02BCGDGQlHeweZM2Rvlo1d2%2F8KUudL4baNIdEUdyd6v0UP4Za4Vi%2FY%2FtjrROW8W%2BvUZdI1Rc4aWYnN8KaZG8mG3XDyvAYJfZQGgKPd%2BC0nNlHcXlWJJmYDtXGjP5BGpBE1r7auV4q1uEZd%2FcJ7XpBHNMcwL0dcFC1waQTMhqvxODyGWjaOQBXa%2BMITK8c8GOqUBBohiLDxf6a2ZX%2B0%2FE46OM5Pjhq3vifz2nWSoLa4zlfd9kVaYIR18wZgjxtUpVEyu6U%2FISexI9rIMGH0pnF%2ByEHLFfi1k40na292cTOrXllQcSlNjwkWbFgzhFObXDH0%2FDNNO%2BkhKqB88od%2FDk7MNgghv8SQ4Su%2FIhu9WE319KdVE28S6cDYWsPO%2FEsygie2XIvjEsqKrbhHckzr4Na6rY7mjQVOm&X-Amz-Signature=0cd37ea1dfa663109a1a37b96a1432dc642d503c7f235f9429986a1455784b68&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SS5OSGW3%2F20260507%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260507T102329Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFMM15eepQPecYzQU4ySwqkv8YLMj0aKl6NpVPAsOynrAiEAztmDbRZmniobXhiRGtBBRH%2BGHrL60nIdnGH932fL5pUqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDM746dNtP51LoX4gmyrcA%2FTFXq%2FTlCyedllzWrtGxs0qUxyhE%2FYvUMZG1p3GNctrS8yrjaUudufXbLTQx27OIehlG7rWPAyVwfKsMYSPYG8FuzBAcZ%2BEDlxj8PiOFCqJGhKvROfAntORfpFQ387JRMy5G8qzQK9Ucogd%2Fcwe%2FvtdieiFnVBp6ZZK1ocd02po4KquNldKdAq4gUNu8%2BViNrHtF4BGz44JT7ckJMKW7pShGTZFckhmeCL%2F%2BQ3s4rjGBXVhcG5m2UqdloIWYgcu%2B1BbTExvEcBzjhrsxOkvDEdioTTxXAQtRyAMkG3RoP6XZ6YYqpXBj76m%2Fyt8aclJXeMoje3Phdv3W3Ff%2FwpLpjFpJQvwJxHGnSlqS7vrxYMYELIqVy3oxVzju9TlwcXnJVL2FMYVx2dWNbG%2F26gId8qXwZ0Re8f7FazZn%2BDCRqJEN2i%2FnVpzLIOuX0BRb8jlhcEfh02BCGDGQlHeweZM2Rvlo1d2%2F8KUudL4baNIdEUdyd6v0UP4Za4Vi%2FY%2FtjrROW8W%2BvUZdI1Rc4aWYnN8KaZG8mG3XDyvAYJfZQGgKPd%2BC0nNlHcXlWJJmYDtXGjP5BGpBE1r7auV4q1uEZd%2FcJ7XpBHNMcwL0dcFC1waQTMhqvxODyGWjaOQBXa%2BMITK8c8GOqUBBohiLDxf6a2ZX%2B0%2FE46OM5Pjhq3vifz2nWSoLa4zlfd9kVaYIR18wZgjxtUpVEyu6U%2FISexI9rIMGH0pnF%2ByEHLFfi1k40na292cTOrXllQcSlNjwkWbFgzhFObXDH0%2FDNNO%2BkhKqB88od%2FDk7MNgghv8SQ4Su%2FIhu9WE319KdVE28S6cDYWsPO%2FEsygie2XIvjEsqKrbhHckzr4Na6rY7mjQVOm&X-Amz-Signature=9e597215df4e44775b7fd858f36b23e9cf9397b2c85546d0b86f4be20fd54521&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
