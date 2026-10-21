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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y5G63URU%2F20261021%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261021T132651Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDnHI5g55KxUbIK9EbH8G%2F1WHYZz4iSwwqSrg%2FqCx6B0wIhANahDqb2avcUaboxpTit7XUd%2B%2BUhlzaxcSl11QG9BawPKv8DCF0QABoMNjM3NDIzMTgzODA1Igw0FvguMZS7HUpJfN0q3ANpAyN4LXIA4VVPzFjhQwv%2B9d3szyFehCTL0ktt6CHhXJ3pw3dhltoaFVUzTbYXKll%2FT2T4ODBk86IywF48VgXDdEBQZ%2FZHEfXTmpYp90eGGAO%2BgbiWa9lS4NUWumi609jfu%2B61Gm1Mo8HsfCONrgrrryq1EaGDavL73fx9qAacuo3sdDba0Ql3s5LbES9JAtU5HHD5bZh6k9m7qwf%2BLeXPuJ2z%2BiaON%2BHpyLAvXtmu2WbzfhGbgkSGyRgMGJ8hLK1BfGOaXI5j495ixnh7vtIxum3vA936ZoNaahhcFT9T%2BH75siAzRi6kbHGh%2FxJnTQ%2FWJ4TjDx9ex0Nj2Yrkkx8kSFlJ3MbMcWZkyK7Rh64ik0nmyF91z4rM6S8sGYLiwl5UW03HV0p2pZM65GNzvfIU%2B1wfF%2FsO0j8jlH8mA%2Fb7%2BoA6FRYuNCWkPBf4fa9JsCydqgemMomoJ3qTLw3BvH7b6HkQYC%2FCwxVmyRgW9mOcTATufEy%2BGFuC3B%2B%2BgECoIYfrRWgvoBnc%2BpIyr4%2BhKSw8RoMWQnV18bia5oPDwjOBOBe72N290Bn8rJ8cZriGHinxHHJEwWk8D%2FgXr3%2BJsKf3W9lcUQ3RLZ3RgFHB3l8XJNgw1ckkk5Q7f%2FvqJDDy0OLWBjqkAXBy6c4aPokvrJ74PoT59R%2F7BIWMnV483Bus%2FbBqKA9SWn1lhPdjL7Bd7TQSA5A9fMPk1d%2FjBIc7Zde1meG5VHOjymfPoqSzcbZf4TU0guRSdtzMu7EDBHUWpssv4lHo4eoQJlD1liLe%2BM9xAAbpKPMdS1ti9UM8P20VJGylSsEgeYPAw3deI20IdXIrtwPjx%2FrraWXevkeItg1a92L6z36YXqPt&X-Amz-Signature=23ace34138a38332fa7f494f4d72f4d96f3b865080409f777a3ca0040044c005&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y5G63URU%2F20261021%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261021T132651Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDnHI5g55KxUbIK9EbH8G%2F1WHYZz4iSwwqSrg%2FqCx6B0wIhANahDqb2avcUaboxpTit7XUd%2B%2BUhlzaxcSl11QG9BawPKv8DCF0QABoMNjM3NDIzMTgzODA1Igw0FvguMZS7HUpJfN0q3ANpAyN4LXIA4VVPzFjhQwv%2B9d3szyFehCTL0ktt6CHhXJ3pw3dhltoaFVUzTbYXKll%2FT2T4ODBk86IywF48VgXDdEBQZ%2FZHEfXTmpYp90eGGAO%2BgbiWa9lS4NUWumi609jfu%2B61Gm1Mo8HsfCONrgrrryq1EaGDavL73fx9qAacuo3sdDba0Ql3s5LbES9JAtU5HHD5bZh6k9m7qwf%2BLeXPuJ2z%2BiaON%2BHpyLAvXtmu2WbzfhGbgkSGyRgMGJ8hLK1BfGOaXI5j495ixnh7vtIxum3vA936ZoNaahhcFT9T%2BH75siAzRi6kbHGh%2FxJnTQ%2FWJ4TjDx9ex0Nj2Yrkkx8kSFlJ3MbMcWZkyK7Rh64ik0nmyF91z4rM6S8sGYLiwl5UW03HV0p2pZM65GNzvfIU%2B1wfF%2FsO0j8jlH8mA%2Fb7%2BoA6FRYuNCWkPBf4fa9JsCydqgemMomoJ3qTLw3BvH7b6HkQYC%2FCwxVmyRgW9mOcTATufEy%2BGFuC3B%2B%2BgECoIYfrRWgvoBnc%2BpIyr4%2BhKSw8RoMWQnV18bia5oPDwjOBOBe72N290Bn8rJ8cZriGHinxHHJEwWk8D%2FgXr3%2BJsKf3W9lcUQ3RLZ3RgFHB3l8XJNgw1ckkk5Q7f%2FvqJDDy0OLWBjqkAXBy6c4aPokvrJ74PoT59R%2F7BIWMnV483Bus%2FbBqKA9SWn1lhPdjL7Bd7TQSA5A9fMPk1d%2FjBIc7Zde1meG5VHOjymfPoqSzcbZf4TU0guRSdtzMu7EDBHUWpssv4lHo4eoQJlD1liLe%2BM9xAAbpKPMdS1ti9UM8P20VJGylSsEgeYPAw3deI20IdXIrtwPjx%2FrraWXevkeItg1a92L6z36YXqPt&X-Amz-Signature=5a824b3bb8ee086ba8be40745f9520ac83a33547aeb76891e3801a7ac7062aa3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y5G63URU%2F20261021%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261021T132651Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDnHI5g55KxUbIK9EbH8G%2F1WHYZz4iSwwqSrg%2FqCx6B0wIhANahDqb2avcUaboxpTit7XUd%2B%2BUhlzaxcSl11QG9BawPKv8DCF0QABoMNjM3NDIzMTgzODA1Igw0FvguMZS7HUpJfN0q3ANpAyN4LXIA4VVPzFjhQwv%2B9d3szyFehCTL0ktt6CHhXJ3pw3dhltoaFVUzTbYXKll%2FT2T4ODBk86IywF48VgXDdEBQZ%2FZHEfXTmpYp90eGGAO%2BgbiWa9lS4NUWumi609jfu%2B61Gm1Mo8HsfCONrgrrryq1EaGDavL73fx9qAacuo3sdDba0Ql3s5LbES9JAtU5HHD5bZh6k9m7qwf%2BLeXPuJ2z%2BiaON%2BHpyLAvXtmu2WbzfhGbgkSGyRgMGJ8hLK1BfGOaXI5j495ixnh7vtIxum3vA936ZoNaahhcFT9T%2BH75siAzRi6kbHGh%2FxJnTQ%2FWJ4TjDx9ex0Nj2Yrkkx8kSFlJ3MbMcWZkyK7Rh64ik0nmyF91z4rM6S8sGYLiwl5UW03HV0p2pZM65GNzvfIU%2B1wfF%2FsO0j8jlH8mA%2Fb7%2BoA6FRYuNCWkPBf4fa9JsCydqgemMomoJ3qTLw3BvH7b6HkQYC%2FCwxVmyRgW9mOcTATufEy%2BGFuC3B%2B%2BgECoIYfrRWgvoBnc%2BpIyr4%2BhKSw8RoMWQnV18bia5oPDwjOBOBe72N290Bn8rJ8cZriGHinxHHJEwWk8D%2FgXr3%2BJsKf3W9lcUQ3RLZ3RgFHB3l8XJNgw1ckkk5Q7f%2FvqJDDy0OLWBjqkAXBy6c4aPokvrJ74PoT59R%2F7BIWMnV483Bus%2FbBqKA9SWn1lhPdjL7Bd7TQSA5A9fMPk1d%2FjBIc7Zde1meG5VHOjymfPoqSzcbZf4TU0guRSdtzMu7EDBHUWpssv4lHo4eoQJlD1liLe%2BM9xAAbpKPMdS1ti9UM8P20VJGylSsEgeYPAw3deI20IdXIrtwPjx%2FrraWXevkeItg1a92L6z36YXqPt&X-Amz-Signature=c4442e410fd0e94b205a86a4102ff40db6ec2b08b96d90657195b08e56d45700&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633D43A7U%2F20261021%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261021T132652Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4A9PcSEtsOT04fdIaMPaV3so6HlQLXuBYMCBM1uyWewIhAKof4XJkKcCx%2BeC7iZLLuJvsydDrxcZD6qmazjSRgZ5wKv8DCFwQABoMNjM3NDIzMTgzODA1IgyHNPLn%2B%2BJEG7sifGkq3AMpKcBb8XyEAXB7ByO%2FTVQgf%2FoXbDTpluJP%2BT3YfkXkvu54r%2BH6yd%2BCDtm75vQoIeoikXaH4WAP3FKdVvJXhu3ETaHD13OCzAdtnYQV2AWROIjvFIlHzvxOhOx6Cw%2F%2B9AVY5uWp%2B1L2NLZqyY1yqAGaFQD7g4SJF3VZ1dlK%2FG99DhsMt9DIt0%2F9SRHWA4AEwHxS6uM%2FrM49iATESZzPdUTVda%2FQSOHPuQt0ubo4xkqGZxFu%2Bml3UMpV2KBhdY%2FlEa6S9fxpA7iXdDRx9POJYbxbmkpy9BDqaQSCWTWmptPKoZVY2shUb4sXfKeq2dpMkJjvPHKnwoQSYLcdu83T4wxT60fhbaW1NJVXUR4jYm5O0W%2FZ0ViYmx5bpfgpEL3pGgnfD8X77F49fjXk8Pe8tgJ8Mz2NihNoM61zynT%2BNeWum8olXQ8NpYO0dZQDUpF5KGiYRhPcbjedug31sSZDxVtBafEDabmpifjhPFI9kDa2iyssIAaqQzVYAfEAaoS9HbotVwQjJOFa8d%2FVgapMFRcXcpFbRvweIlbkPH5vr2%2FNSxOWlP4LGPE9CZ4%2BT9OfeAI4xVgL6CTRnHK0MdtpLRQRe9uqqksnO3y0qH6p%2FJVXgqgx7BkwAJbjnCnUWDD10OLWBjqkAYkPC6AKUZ4CzPN1XAxsT7mADbMDsWWDEP8L3mAbwISFVAF79P%2BOGPhYuqxdrPxaeCR794LUXncWNs%2FiVJMQ7%2BkSngj58j6WBenL31fEqqkQTYMCqOS22CTdA%2BLgYJkvDPUBVrIil9lvi6EdXoRRMRLhEiXUHJFNByXl%2Fy%2BpLjRsBln8cnx0PaiFUham5eObJjparXep9qVbEH1Y%2FAlzYZhX%2FdIQ&X-Amz-Signature=b596bdf0026e8d8898fca77a001462d5b87ddf7769bd4e5d65235ed4809b6616&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633D43A7U%2F20261021%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261021T132652Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4A9PcSEtsOT04fdIaMPaV3so6HlQLXuBYMCBM1uyWewIhAKof4XJkKcCx%2BeC7iZLLuJvsydDrxcZD6qmazjSRgZ5wKv8DCFwQABoMNjM3NDIzMTgzODA1IgyHNPLn%2B%2BJEG7sifGkq3AMpKcBb8XyEAXB7ByO%2FTVQgf%2FoXbDTpluJP%2BT3YfkXkvu54r%2BH6yd%2BCDtm75vQoIeoikXaH4WAP3FKdVvJXhu3ETaHD13OCzAdtnYQV2AWROIjvFIlHzvxOhOx6Cw%2F%2B9AVY5uWp%2B1L2NLZqyY1yqAGaFQD7g4SJF3VZ1dlK%2FG99DhsMt9DIt0%2F9SRHWA4AEwHxS6uM%2FrM49iATESZzPdUTVda%2FQSOHPuQt0ubo4xkqGZxFu%2Bml3UMpV2KBhdY%2FlEa6S9fxpA7iXdDRx9POJYbxbmkpy9BDqaQSCWTWmptPKoZVY2shUb4sXfKeq2dpMkJjvPHKnwoQSYLcdu83T4wxT60fhbaW1NJVXUR4jYm5O0W%2FZ0ViYmx5bpfgpEL3pGgnfD8X77F49fjXk8Pe8tgJ8Mz2NihNoM61zynT%2BNeWum8olXQ8NpYO0dZQDUpF5KGiYRhPcbjedug31sSZDxVtBafEDabmpifjhPFI9kDa2iyssIAaqQzVYAfEAaoS9HbotVwQjJOFa8d%2FVgapMFRcXcpFbRvweIlbkPH5vr2%2FNSxOWlP4LGPE9CZ4%2BT9OfeAI4xVgL6CTRnHK0MdtpLRQRe9uqqksnO3y0qH6p%2FJVXgqgx7BkwAJbjnCnUWDD10OLWBjqkAYkPC6AKUZ4CzPN1XAxsT7mADbMDsWWDEP8L3mAbwISFVAF79P%2BOGPhYuqxdrPxaeCR794LUXncWNs%2FiVJMQ7%2BkSngj58j6WBenL31fEqqkQTYMCqOS22CTdA%2BLgYJkvDPUBVrIil9lvi6EdXoRRMRLhEiXUHJFNByXl%2Fy%2BpLjRsBln8cnx0PaiFUham5eObJjparXep9qVbEH1Y%2FAlzYZhX%2FdIQ&X-Amz-Signature=acc514d6a93ff5d2bae26ebe9659f8b1f58b603ce4bd1ff6a6d94075d6bb271c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633D43A7U%2F20261021%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261021T132652Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4A9PcSEtsOT04fdIaMPaV3so6HlQLXuBYMCBM1uyWewIhAKof4XJkKcCx%2BeC7iZLLuJvsydDrxcZD6qmazjSRgZ5wKv8DCFwQABoMNjM3NDIzMTgzODA1IgyHNPLn%2B%2BJEG7sifGkq3AMpKcBb8XyEAXB7ByO%2FTVQgf%2FoXbDTpluJP%2BT3YfkXkvu54r%2BH6yd%2BCDtm75vQoIeoikXaH4WAP3FKdVvJXhu3ETaHD13OCzAdtnYQV2AWROIjvFIlHzvxOhOx6Cw%2F%2B9AVY5uWp%2B1L2NLZqyY1yqAGaFQD7g4SJF3VZ1dlK%2FG99DhsMt9DIt0%2F9SRHWA4AEwHxS6uM%2FrM49iATESZzPdUTVda%2FQSOHPuQt0ubo4xkqGZxFu%2Bml3UMpV2KBhdY%2FlEa6S9fxpA7iXdDRx9POJYbxbmkpy9BDqaQSCWTWmptPKoZVY2shUb4sXfKeq2dpMkJjvPHKnwoQSYLcdu83T4wxT60fhbaW1NJVXUR4jYm5O0W%2FZ0ViYmx5bpfgpEL3pGgnfD8X77F49fjXk8Pe8tgJ8Mz2NihNoM61zynT%2BNeWum8olXQ8NpYO0dZQDUpF5KGiYRhPcbjedug31sSZDxVtBafEDabmpifjhPFI9kDa2iyssIAaqQzVYAfEAaoS9HbotVwQjJOFa8d%2FVgapMFRcXcpFbRvweIlbkPH5vr2%2FNSxOWlP4LGPE9CZ4%2BT9OfeAI4xVgL6CTRnHK0MdtpLRQRe9uqqksnO3y0qH6p%2FJVXgqgx7BkwAJbjnCnUWDD10OLWBjqkAYkPC6AKUZ4CzPN1XAxsT7mADbMDsWWDEP8L3mAbwISFVAF79P%2BOGPhYuqxdrPxaeCR794LUXncWNs%2FiVJMQ7%2BkSngj58j6WBenL31fEqqkQTYMCqOS22CTdA%2BLgYJkvDPUBVrIil9lvi6EdXoRRMRLhEiXUHJFNByXl%2Fy%2BpLjRsBln8cnx0PaiFUham5eObJjparXep9qVbEH1Y%2FAlzYZhX%2FdIQ&X-Amz-Signature=6296da6de15f2567cae9a8d5a704f4982041b49e9351de4b67b098b2a9dff240&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633D43A7U%2F20261021%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261021T132652Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4A9PcSEtsOT04fdIaMPaV3so6HlQLXuBYMCBM1uyWewIhAKof4XJkKcCx%2BeC7iZLLuJvsydDrxcZD6qmazjSRgZ5wKv8DCFwQABoMNjM3NDIzMTgzODA1IgyHNPLn%2B%2BJEG7sifGkq3AMpKcBb8XyEAXB7ByO%2FTVQgf%2FoXbDTpluJP%2BT3YfkXkvu54r%2BH6yd%2BCDtm75vQoIeoikXaH4WAP3FKdVvJXhu3ETaHD13OCzAdtnYQV2AWROIjvFIlHzvxOhOx6Cw%2F%2B9AVY5uWp%2B1L2NLZqyY1yqAGaFQD7g4SJF3VZ1dlK%2FG99DhsMt9DIt0%2F9SRHWA4AEwHxS6uM%2FrM49iATESZzPdUTVda%2FQSOHPuQt0ubo4xkqGZxFu%2Bml3UMpV2KBhdY%2FlEa6S9fxpA7iXdDRx9POJYbxbmkpy9BDqaQSCWTWmptPKoZVY2shUb4sXfKeq2dpMkJjvPHKnwoQSYLcdu83T4wxT60fhbaW1NJVXUR4jYm5O0W%2FZ0ViYmx5bpfgpEL3pGgnfD8X77F49fjXk8Pe8tgJ8Mz2NihNoM61zynT%2BNeWum8olXQ8NpYO0dZQDUpF5KGiYRhPcbjedug31sSZDxVtBafEDabmpifjhPFI9kDa2iyssIAaqQzVYAfEAaoS9HbotVwQjJOFa8d%2FVgapMFRcXcpFbRvweIlbkPH5vr2%2FNSxOWlP4LGPE9CZ4%2BT9OfeAI4xVgL6CTRnHK0MdtpLRQRe9uqqksnO3y0qH6p%2FJVXgqgx7BkwAJbjnCnUWDD10OLWBjqkAYkPC6AKUZ4CzPN1XAxsT7mADbMDsWWDEP8L3mAbwISFVAF79P%2BOGPhYuqxdrPxaeCR794LUXncWNs%2FiVJMQ7%2BkSngj58j6WBenL31fEqqkQTYMCqOS22CTdA%2BLgYJkvDPUBVrIil9lvi6EdXoRRMRLhEiXUHJFNByXl%2Fy%2BpLjRsBln8cnx0PaiFUham5eObJjparXep9qVbEH1Y%2FAlzYZhX%2FdIQ&X-Amz-Signature=f78ed9ca221a9a3df301d465a12cbdc3a59af06444071fc21ebbf4cd7e23ad34&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VCSDTBOE%2F20261021%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261021T132652Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD%2BNS61qtvPbAUpi9nE%2ByYQ38tSwHIyHL2e58LmN%2FiYDwIgCV50apLWk%2FToMEC%2BLZ9WZhUBKzmih6759fAS%2FQk%2FNHMq%2FwMIXRAAGgw2Mzc0MjMxODM4MDUiDNUMyBM67teUArk6CircA%2BlBSyzEjsUhizX8gBtFUtLa1xMb3lwWiABoVn99K3OIeeAQb43IOYN1tvA1eM6ec4XK58KHyFzNiEoev7AVyaJ7FhHgbZD3nDgUiHPwzynsJe%2BWXy38NZ6ZvMTmWY%2FAdJ%2BF94faqOMBcUKNXJKYdMwX1DRsIjHdRblfyHTYXIm%2BqXWQ9IzQgdo7fqjZg0WCo0lzeRrQD1MKC%2BEz%2BpqJnLU7V41zEs4ENLR%2FdiIYNH%2B9TxlAu5tVHUIs%2B0tCBUUHU3w4yNnqnpP4E5oKD2RKk0TI5mUBNZFGUCLZdkGgTJtdNib6ptCg8SlYb0Wi3Uw3zyS23ytEyJjMFdhnJYZUjvVw38bNpQONXc3g1jRkdef3ofcejEJtu09zIsY2aTUDPAzJ5F6BKTT3L31zoIzpF8kR%2FFSjZfV%2BMieoIxuunqQ%2Fle2r0JiGDUywJdyjXrE3KdoUmm9uz%2BAf0DOevJhB3EquqyQpZiKsPJQ6TqROELwcsUAXtvdIUcPq5nONzjug2GiOkBXCPpyDu0UGqAoq98UQr7ccGbyyqw3F5vqBp3NUk5WDqXjdLZlVruJPSgjPqqjdFQwqXFWiG%2BA0nDegB55QjehqZ6SLRALVWIpCzbaLVwvg4TVPWwepLZJsMPnP4tYGOqUBJhNoqi%2BvrzCBCxBLd8K6WKnS2upGU%2FxsDvoLgBO7mk4bFd4D03KkoowvXO9Wt%2B3j7crZ2s2aKn4Mqj1j24yAzicK475CAzXFpQwj4nMrbgD8Wh7rE8tQkbf2AmiQy1cGsSaxDd7JQ4oYK2ucei2xKGjUKBz7rXpebkOrpcZBa2UMWbsqSEPYqfZXQaugCHRn5ht%2FSL5gzZ%2BGjznfGWTWJh8I2PAw&X-Amz-Signature=2dfb13bc6d95f84ace4947fa2ba08d5ec0e20fa9e0c5c1e098cebd7c6e4ff13d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666RD3TUUX%2F20261021%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261021T132652Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC2vJWHQdOIy85dSJrTzeEMvERZi2%2F33phunZ6iZVGKOAIhAO3jstmI1gNsZHA%2Fbt1fiZpfU6rRAmkX2HLD88ISDH9DKv8DCF0QABoMNjM3NDIzMTgzODA1IgxqfSa64CqbOhG49rIq3AM22RwRw80ACx8b%2BirS4%2FtHqX%2FiBt3Iex9L4of1qWme%2BrGrei%2FBY%2B3jv3t6%2F36mJ311Onjwkr6rqy2TEaRcdnWwtqPE1k3bDw%2F0kfxgUifd8CttMOMi12JjSDi%2Be9CsXgYWO9%2Fi%2FnmgA65cx%2BChzzjBzu2JLhu8aXFEkjzZJHuDqQt3rgkWOMHERV7Omt%2BD69RYvt8ReVoZduABmzWWAYH2CVsGPE%2BhKUuwPbh26jmRBhwp74TnM3My6xFb48PMnzPDfQJdyihLusvE76jEspnA%2BcxJ1YWYgq6aXApZXWqk1okT40xB0hkiQMjyA9ddoorRWgnA7wdNjxKRxFqMrtaL7EirhSMYVrWcRF3mRvYwODADv1bQaWt3vgBxJnd0%2FrgJ5UUaLqSaZStufteH0330qMM8Vdj408wU571bNEF44ei%2BGD%2BGUPX1Vigobzc4qpqEGE4LvE4tKNGgHrT2zfN1oiLbZ1IAX3inVtR%2BqoEkaqzG3dT2ByS8vBhGDQvDfyDV%2FcQjozYSYErLvjQSB%2BozgkR3jds7dRt6i4vOnnaxn88kSyHhTyTPVwBgL7hMuOox%2BN7GtxlYpPW0rdvFvccm4raakLihYLhCfIvRuJYF9Wt6ORxVV4kii7JRqDCX0OLWBjqkAfkgGvVlZN1uH7Rpb8xVCd0kUS0It2hbk681%2BTQ%2BUrOU9kyi23IBybmULvWuO%2BvPDyYSP0vLfulI4TBLOqGxqKVgcey%2BNQ8cwljkfQq%2FcmCUQM5Qe66TEMXnzwB%2F%2FHrW4xSJmNIXzyzHTUTBJlt995r%2BMd0chO%2Bk8ed5WNkjcbvPZM9MLVa56B4p7tggFj803E6sAOZvWoDBXlxkjfsdlRp87R8e&X-Amz-Signature=c0dc52ac248c8b776125570a7166e110ff480278315b7fe1154051b8f8d187e8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666RD3TUUX%2F20261021%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261021T132652Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC2vJWHQdOIy85dSJrTzeEMvERZi2%2F33phunZ6iZVGKOAIhAO3jstmI1gNsZHA%2Fbt1fiZpfU6rRAmkX2HLD88ISDH9DKv8DCF0QABoMNjM3NDIzMTgzODA1IgxqfSa64CqbOhG49rIq3AM22RwRw80ACx8b%2BirS4%2FtHqX%2FiBt3Iex9L4of1qWme%2BrGrei%2FBY%2B3jv3t6%2F36mJ311Onjwkr6rqy2TEaRcdnWwtqPE1k3bDw%2F0kfxgUifd8CttMOMi12JjSDi%2Be9CsXgYWO9%2Fi%2FnmgA65cx%2BChzzjBzu2JLhu8aXFEkjzZJHuDqQt3rgkWOMHERV7Omt%2BD69RYvt8ReVoZduABmzWWAYH2CVsGPE%2BhKUuwPbh26jmRBhwp74TnM3My6xFb48PMnzPDfQJdyihLusvE76jEspnA%2BcxJ1YWYgq6aXApZXWqk1okT40xB0hkiQMjyA9ddoorRWgnA7wdNjxKRxFqMrtaL7EirhSMYVrWcRF3mRvYwODADv1bQaWt3vgBxJnd0%2FrgJ5UUaLqSaZStufteH0330qMM8Vdj408wU571bNEF44ei%2BGD%2BGUPX1Vigobzc4qpqEGE4LvE4tKNGgHrT2zfN1oiLbZ1IAX3inVtR%2BqoEkaqzG3dT2ByS8vBhGDQvDfyDV%2FcQjozYSYErLvjQSB%2BozgkR3jds7dRt6i4vOnnaxn88kSyHhTyTPVwBgL7hMuOox%2BN7GtxlYpPW0rdvFvccm4raakLihYLhCfIvRuJYF9Wt6ORxVV4kii7JRqDCX0OLWBjqkAfkgGvVlZN1uH7Rpb8xVCd0kUS0It2hbk681%2BTQ%2BUrOU9kyi23IBybmULvWuO%2BvPDyYSP0vLfulI4TBLOqGxqKVgcey%2BNQ8cwljkfQq%2FcmCUQM5Qe66TEMXnzwB%2F%2FHrW4xSJmNIXzyzHTUTBJlt995r%2BMd0chO%2Bk8ed5WNkjcbvPZM9MLVa56B4p7tggFj803E6sAOZvWoDBXlxkjfsdlRp87R8e&X-Amz-Signature=fada87ed482e5347b8570e2bf8aaf4dde3ff182d3f378a2a178d7b43095ccc45&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
