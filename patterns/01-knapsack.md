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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YXOO4PNL%2F20260407%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260407T090202Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJIMEYCIQDz%2F4mXeZtVo%2FQNDkuUKNDha7wguF64zENhmue9KLElsgIhAMe5TUeZjcPJQmVSD5vvkqJse1%2Flkb8hb3lnFrE5J08wKogECOH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxTDTHfdEXXgVFl6Uoq3AO1Y1zjYu2ZJ1lDuUe5qL0FGkIHjuRxxjA7Z%2B31RMd3G8fuoNvtTi0BhAiE7DYHb9TwISv%2FGDoS4H6CFeNSgnnLpbEvGUia%2B4zKX%2BfrVjXpszNhf0VkMTFTO16gl0SHaqMPt4dHwz%2Bq%2FYR3%2FmTV4HX%2B9GYvBCIBZ%2BYn35VeK9HWkk9AL1MbpdBOorPPOQqTazhk%2F5QsilafXXHaUqRhU0IOsjxUl20%2B22TWfx1zxzuw7GfiaHbds6uMU6eXEfqeA8oxBSjlXa%2FFOUJO2APlUSOFhjOMVExMhXwfC4NJEoJc5%2BstKgggmp9Evf%2BpT7IjaI7ta4L4AXZsNA5reaR11O6lXfE2lpcbQI%2FLdynIOXFv8RNU6zlqFGHyjriPcbgJa8pKT%2BZSnxPgyVbIv3ZM%2BMN0P7E6wLRnGYBW2IpbX%2F0hefh0PYzHTKWHiiVj2VgzOYY05q4fgBvlVqcg8FDoA8H%2BZl1ymRqf0efBZY0ZfHEJ7U6ODTq1DBMep3u%2FbDyPpB53kJmuKy%2B4FFvDAseL%2BOVtjy21aUoEGpXKI1WEI4fdd7wa2EdOEorWm1Q%2FLxmWz3A6nJ41t3CdKzgtsqeJFyawbfw9aUolvp0%2FZPqbwErLb8WK4zjklninMj3R8DCc8dLOBjqkAYbzBFvhgOek08nMxlcy8oig%2Bgd7s17hbNTAme30c4KSjoVCOxndc9fEywFzPhlvzkjfVaPVa0d5h4MGtLIXtKmqBSdm8gRY0U2D2orcMlOdJtwoOUnpIdGEpOV%2FhXpflCj%2BcUOR0OwisRVzWLq4KtznC6w1KyJL94axZmJjlLsmTHEsN9WZ%2FrNSx3tB3iQf42X5b2iKYyGK0hPSirj0g%2BnEy%2Byg&X-Amz-Signature=523bcba40c60b04c28004e3251f292e3686aaa252804e1b00bc37d43a66eb2f8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YXOO4PNL%2F20260407%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260407T090202Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJIMEYCIQDz%2F4mXeZtVo%2FQNDkuUKNDha7wguF64zENhmue9KLElsgIhAMe5TUeZjcPJQmVSD5vvkqJse1%2Flkb8hb3lnFrE5J08wKogECOH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxTDTHfdEXXgVFl6Uoq3AO1Y1zjYu2ZJ1lDuUe5qL0FGkIHjuRxxjA7Z%2B31RMd3G8fuoNvtTi0BhAiE7DYHb9TwISv%2FGDoS4H6CFeNSgnnLpbEvGUia%2B4zKX%2BfrVjXpszNhf0VkMTFTO16gl0SHaqMPt4dHwz%2Bq%2FYR3%2FmTV4HX%2B9GYvBCIBZ%2BYn35VeK9HWkk9AL1MbpdBOorPPOQqTazhk%2F5QsilafXXHaUqRhU0IOsjxUl20%2B22TWfx1zxzuw7GfiaHbds6uMU6eXEfqeA8oxBSjlXa%2FFOUJO2APlUSOFhjOMVExMhXwfC4NJEoJc5%2BstKgggmp9Evf%2BpT7IjaI7ta4L4AXZsNA5reaR11O6lXfE2lpcbQI%2FLdynIOXFv8RNU6zlqFGHyjriPcbgJa8pKT%2BZSnxPgyVbIv3ZM%2BMN0P7E6wLRnGYBW2IpbX%2F0hefh0PYzHTKWHiiVj2VgzOYY05q4fgBvlVqcg8FDoA8H%2BZl1ymRqf0efBZY0ZfHEJ7U6ODTq1DBMep3u%2FbDyPpB53kJmuKy%2B4FFvDAseL%2BOVtjy21aUoEGpXKI1WEI4fdd7wa2EdOEorWm1Q%2FLxmWz3A6nJ41t3CdKzgtsqeJFyawbfw9aUolvp0%2FZPqbwErLb8WK4zjklninMj3R8DCc8dLOBjqkAYbzBFvhgOek08nMxlcy8oig%2Bgd7s17hbNTAme30c4KSjoVCOxndc9fEywFzPhlvzkjfVaPVa0d5h4MGtLIXtKmqBSdm8gRY0U2D2orcMlOdJtwoOUnpIdGEpOV%2FhXpflCj%2BcUOR0OwisRVzWLq4KtznC6w1KyJL94axZmJjlLsmTHEsN9WZ%2FrNSx3tB3iQf42X5b2iKYyGK0hPSirj0g%2BnEy%2Byg&X-Amz-Signature=668834cc2f9b1e2bbf3915a8c99ec5cd21f064ccb7b06e0e4266de2e38c78d36&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YXOO4PNL%2F20260407%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260407T090202Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJIMEYCIQDz%2F4mXeZtVo%2FQNDkuUKNDha7wguF64zENhmue9KLElsgIhAMe5TUeZjcPJQmVSD5vvkqJse1%2Flkb8hb3lnFrE5J08wKogECOH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxTDTHfdEXXgVFl6Uoq3AO1Y1zjYu2ZJ1lDuUe5qL0FGkIHjuRxxjA7Z%2B31RMd3G8fuoNvtTi0BhAiE7DYHb9TwISv%2FGDoS4H6CFeNSgnnLpbEvGUia%2B4zKX%2BfrVjXpszNhf0VkMTFTO16gl0SHaqMPt4dHwz%2Bq%2FYR3%2FmTV4HX%2B9GYvBCIBZ%2BYn35VeK9HWkk9AL1MbpdBOorPPOQqTazhk%2F5QsilafXXHaUqRhU0IOsjxUl20%2B22TWfx1zxzuw7GfiaHbds6uMU6eXEfqeA8oxBSjlXa%2FFOUJO2APlUSOFhjOMVExMhXwfC4NJEoJc5%2BstKgggmp9Evf%2BpT7IjaI7ta4L4AXZsNA5reaR11O6lXfE2lpcbQI%2FLdynIOXFv8RNU6zlqFGHyjriPcbgJa8pKT%2BZSnxPgyVbIv3ZM%2BMN0P7E6wLRnGYBW2IpbX%2F0hefh0PYzHTKWHiiVj2VgzOYY05q4fgBvlVqcg8FDoA8H%2BZl1ymRqf0efBZY0ZfHEJ7U6ODTq1DBMep3u%2FbDyPpB53kJmuKy%2B4FFvDAseL%2BOVtjy21aUoEGpXKI1WEI4fdd7wa2EdOEorWm1Q%2FLxmWz3A6nJ41t3CdKzgtsqeJFyawbfw9aUolvp0%2FZPqbwErLb8WK4zjklninMj3R8DCc8dLOBjqkAYbzBFvhgOek08nMxlcy8oig%2Bgd7s17hbNTAme30c4KSjoVCOxndc9fEywFzPhlvzkjfVaPVa0d5h4MGtLIXtKmqBSdm8gRY0U2D2orcMlOdJtwoOUnpIdGEpOV%2FhXpflCj%2BcUOR0OwisRVzWLq4KtznC6w1KyJL94axZmJjlLsmTHEsN9WZ%2FrNSx3tB3iQf42X5b2iKYyGK0hPSirj0g%2BnEy%2Byg&X-Amz-Signature=5406859961f3915e9b9c10b8570d372581acb7b6d0e1b020ed24d38e070385ef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BJAN6HX%2F20260407%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260407T090203Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIQDVu0MMwipwh6RgjRgweQfQVeogrMvUW1Zf4e3HpgEhggIgQFg5v1Y2DA%2FTrlhSPxPzjFG1PGT5zjJ4%2B1hhBdupjvEqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJtxuMJvpmlhTDPLBircA6kgjIWEFi3TDvEr6hFSK5ZbIqAe44jK8JDff8zfaaR87Toz9Qx2C7ic9JZqNYTN3Hrbry28ca6KED0Rwe0j3iuFfUaIm6jOR07DFrhi26O0SOLOaEBXF7i0k1F3KoS901Vw3V3%2BTANL2oiKPand7alcF4BbqoY9%2FCfgFHcSMGoniVN6uSWDxP3h6LF%2BwT%2B4plrM%2B%2BkhWk11DfKZ%2BD%2BTPVzu06swR5zpPp%2FuI1jfx7qv8JxBEAWD%2F2KCDkyR58Q4v%2FkzK%2F%2BCH%2Ffc8g0QIw4s0DtVbe171BIWXrkQHG9AiJ6Kl4sBSKr1wCun306Ct6eCkTJ%2BVyiMmpzYxxvJvVcGPZamwGt%2F28AmY%2FyT5GvaQjFdcbkviACPf3Pe%2BpznrGbNxMv3SGrk%2B1zF7%2F%2BL3OdYYOd16S8nwBWxAQ7LedsiyuAU8KwCQx%2B7V8ZHRKnlQANg0yW%2BKuQK1eohUN%2BsyphHV8X9XaPg3IY3vxZrN6eZyZ2S4oGzN1bSe2Cl4NDUjXUyb744R%2BVD7qausKfuT4MvO2FRUJd%2Bda4CErN0WWf9RtAZc7e7AMCVTaz7C3vLndCwX01zjXHp%2Bxdi8bZ%2FTbT35b2BUCUBGGJ9IzqSA8%2BUNrHtOu%2FiA4CjukWu639xMNPw0s4GOqUBJzX76Yqlwlsjh19fJEXHTOJHD0msKSPHpiuWu87Gt13FGDnSKu8y5hX5kLHphagbTpv74ja1mKbFpIiJuXRQ0rFxOvoAguMzyEduTnT1%2BSBQQJJ3j0IW9TpWy3BVYLT%2BtH%2FU4%2FPTwiWUBMM6aDaEL%2BvoHH4o75uw1CSevP2t%2FzydUtDvdGmh9ZNT2GDEEgaUOt8Vi5IaYEtnBLpxRxX1Mj3JmH2m&X-Amz-Signature=be1673a71f2ee94fe6a71375b34102f95f3667bcbe08730265b78a13e88a0365&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BJAN6HX%2F20260407%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260407T090203Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIQDVu0MMwipwh6RgjRgweQfQVeogrMvUW1Zf4e3HpgEhggIgQFg5v1Y2DA%2FTrlhSPxPzjFG1PGT5zjJ4%2B1hhBdupjvEqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJtxuMJvpmlhTDPLBircA6kgjIWEFi3TDvEr6hFSK5ZbIqAe44jK8JDff8zfaaR87Toz9Qx2C7ic9JZqNYTN3Hrbry28ca6KED0Rwe0j3iuFfUaIm6jOR07DFrhi26O0SOLOaEBXF7i0k1F3KoS901Vw3V3%2BTANL2oiKPand7alcF4BbqoY9%2FCfgFHcSMGoniVN6uSWDxP3h6LF%2BwT%2B4plrM%2B%2BkhWk11DfKZ%2BD%2BTPVzu06swR5zpPp%2FuI1jfx7qv8JxBEAWD%2F2KCDkyR58Q4v%2FkzK%2F%2BCH%2Ffc8g0QIw4s0DtVbe171BIWXrkQHG9AiJ6Kl4sBSKr1wCun306Ct6eCkTJ%2BVyiMmpzYxxvJvVcGPZamwGt%2F28AmY%2FyT5GvaQjFdcbkviACPf3Pe%2BpznrGbNxMv3SGrk%2B1zF7%2F%2BL3OdYYOd16S8nwBWxAQ7LedsiyuAU8KwCQx%2B7V8ZHRKnlQANg0yW%2BKuQK1eohUN%2BsyphHV8X9XaPg3IY3vxZrN6eZyZ2S4oGzN1bSe2Cl4NDUjXUyb744R%2BVD7qausKfuT4MvO2FRUJd%2Bda4CErN0WWf9RtAZc7e7AMCVTaz7C3vLndCwX01zjXHp%2Bxdi8bZ%2FTbT35b2BUCUBGGJ9IzqSA8%2BUNrHtOu%2FiA4CjukWu639xMNPw0s4GOqUBJzX76Yqlwlsjh19fJEXHTOJHD0msKSPHpiuWu87Gt13FGDnSKu8y5hX5kLHphagbTpv74ja1mKbFpIiJuXRQ0rFxOvoAguMzyEduTnT1%2BSBQQJJ3j0IW9TpWy3BVYLT%2BtH%2FU4%2FPTwiWUBMM6aDaEL%2BvoHH4o75uw1CSevP2t%2FzydUtDvdGmh9ZNT2GDEEgaUOt8Vi5IaYEtnBLpxRxX1Mj3JmH2m&X-Amz-Signature=05205415c01afd95a8ce55273624ce5675499fc3a64bd195a7fa5459f736fd54&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BJAN6HX%2F20260407%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260407T090203Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIQDVu0MMwipwh6RgjRgweQfQVeogrMvUW1Zf4e3HpgEhggIgQFg5v1Y2DA%2FTrlhSPxPzjFG1PGT5zjJ4%2B1hhBdupjvEqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJtxuMJvpmlhTDPLBircA6kgjIWEFi3TDvEr6hFSK5ZbIqAe44jK8JDff8zfaaR87Toz9Qx2C7ic9JZqNYTN3Hrbry28ca6KED0Rwe0j3iuFfUaIm6jOR07DFrhi26O0SOLOaEBXF7i0k1F3KoS901Vw3V3%2BTANL2oiKPand7alcF4BbqoY9%2FCfgFHcSMGoniVN6uSWDxP3h6LF%2BwT%2B4plrM%2B%2BkhWk11DfKZ%2BD%2BTPVzu06swR5zpPp%2FuI1jfx7qv8JxBEAWD%2F2KCDkyR58Q4v%2FkzK%2F%2BCH%2Ffc8g0QIw4s0DtVbe171BIWXrkQHG9AiJ6Kl4sBSKr1wCun306Ct6eCkTJ%2BVyiMmpzYxxvJvVcGPZamwGt%2F28AmY%2FyT5GvaQjFdcbkviACPf3Pe%2BpznrGbNxMv3SGrk%2B1zF7%2F%2BL3OdYYOd16S8nwBWxAQ7LedsiyuAU8KwCQx%2B7V8ZHRKnlQANg0yW%2BKuQK1eohUN%2BsyphHV8X9XaPg3IY3vxZrN6eZyZ2S4oGzN1bSe2Cl4NDUjXUyb744R%2BVD7qausKfuT4MvO2FRUJd%2Bda4CErN0WWf9RtAZc7e7AMCVTaz7C3vLndCwX01zjXHp%2Bxdi8bZ%2FTbT35b2BUCUBGGJ9IzqSA8%2BUNrHtOu%2FiA4CjukWu639xMNPw0s4GOqUBJzX76Yqlwlsjh19fJEXHTOJHD0msKSPHpiuWu87Gt13FGDnSKu8y5hX5kLHphagbTpv74ja1mKbFpIiJuXRQ0rFxOvoAguMzyEduTnT1%2BSBQQJJ3j0IW9TpWy3BVYLT%2BtH%2FU4%2FPTwiWUBMM6aDaEL%2BvoHH4o75uw1CSevP2t%2FzydUtDvdGmh9ZNT2GDEEgaUOt8Vi5IaYEtnBLpxRxX1Mj3JmH2m&X-Amz-Signature=4fbe49023c63120de3f3892ab2b9df712332fbdf05229fef5dd20bf615acd9eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BJAN6HX%2F20260407%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260407T090203Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIQDVu0MMwipwh6RgjRgweQfQVeogrMvUW1Zf4e3HpgEhggIgQFg5v1Y2DA%2FTrlhSPxPzjFG1PGT5zjJ4%2B1hhBdupjvEqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJtxuMJvpmlhTDPLBircA6kgjIWEFi3TDvEr6hFSK5ZbIqAe44jK8JDff8zfaaR87Toz9Qx2C7ic9JZqNYTN3Hrbry28ca6KED0Rwe0j3iuFfUaIm6jOR07DFrhi26O0SOLOaEBXF7i0k1F3KoS901Vw3V3%2BTANL2oiKPand7alcF4BbqoY9%2FCfgFHcSMGoniVN6uSWDxP3h6LF%2BwT%2B4plrM%2B%2BkhWk11DfKZ%2BD%2BTPVzu06swR5zpPp%2FuI1jfx7qv8JxBEAWD%2F2KCDkyR58Q4v%2FkzK%2F%2BCH%2Ffc8g0QIw4s0DtVbe171BIWXrkQHG9AiJ6Kl4sBSKr1wCun306Ct6eCkTJ%2BVyiMmpzYxxvJvVcGPZamwGt%2F28AmY%2FyT5GvaQjFdcbkviACPf3Pe%2BpznrGbNxMv3SGrk%2B1zF7%2F%2BL3OdYYOd16S8nwBWxAQ7LedsiyuAU8KwCQx%2B7V8ZHRKnlQANg0yW%2BKuQK1eohUN%2BsyphHV8X9XaPg3IY3vxZrN6eZyZ2S4oGzN1bSe2Cl4NDUjXUyb744R%2BVD7qausKfuT4MvO2FRUJd%2Bda4CErN0WWf9RtAZc7e7AMCVTaz7C3vLndCwX01zjXHp%2Bxdi8bZ%2FTbT35b2BUCUBGGJ9IzqSA8%2BUNrHtOu%2FiA4CjukWu639xMNPw0s4GOqUBJzX76Yqlwlsjh19fJEXHTOJHD0msKSPHpiuWu87Gt13FGDnSKu8y5hX5kLHphagbTpv74ja1mKbFpIiJuXRQ0rFxOvoAguMzyEduTnT1%2BSBQQJJ3j0IW9TpWy3BVYLT%2BtH%2FU4%2FPTwiWUBMM6aDaEL%2BvoHH4o75uw1CSevP2t%2FzydUtDvdGmh9ZNT2GDEEgaUOt8Vi5IaYEtnBLpxRxX1Mj3JmH2m&X-Amz-Signature=2f73314b9f7cd6e0a3c01cdfc3f5ab4332d419b59467a8e654a0c47a8118a163&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663KLESG2M%2F20260407%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260407T090206Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIAPFj5Jk4%2FeajRNnQePnt8CWGNuYifcUe6r%2BBDwdCV2CAiBJ4u6fLX07tqbElYZlK8cGtPpwmmKsxfmaOT3Cq9CVxyqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM5JNwJCULE3agXd5KKtwD7csdyhu4r%2Fn3kGiz9oqyHNOJMKOLTfNNj%2FwUzS4mkpuJKwxoy7s8wXLt3E9mhOb%2ByyFEpL6uDCeQkfuQuasmXGZoEmEM1xciSSCF8%2BAcmqmMi7D%2BgCto3%2FAt7FumXSCI%2F4CXqot%2FRXWMN46ilmdvCH1R2ppve2bilZ1765dMXz3pOmAccRHH04%2B1IYyqynZreqSQ9uy8Dcu7DOMb3J3PcSkzQYRu9DMcwB2zFO7QpMWLcA0krp%2FamkRVVUCi%2F6Wq6gjerGmaEoNZiLQq1GY%2B4wWQZTgwkXvkagcKP4MSrCRbEePXs6sbs1S%2FbfxnCFFxnwhz31YaeBawIomQrjTO2QuuT8rA1eBKskJhEQAqccv4ohIXiL9zYfpET1IOn71Lv%2FYVSyQXc8CetOu4jkTbOvRnya8flSmyhcQs5twRgI%2FZdhsnBbTH7ZMRG44nWx8%2FrcIkifZ%2B0mkb9XXTAmQYWOpk%2FeWVKyRECP9VxmNIw9R1pXqwp4kchSllPd3FYcOYcPygh46wLdJMw2DQabY%2Bt2nQvsUYtr%2BAgHSp6j9aBHi2XDHFQoTXZJfuc%2FHDxO3l7oVkzpCN5c0U3aRjU2nCmh3nAzB0GA1pu7H3TWvo%2BjR8W2EHbokAqkgxNoEw1%2B7SzgY6pgGRmoK65kqTdqpTvHekQ%2BEzRxyFBt%2FOFNEZfHVjretNnxUmx%2B5X4NIH5%2F%2BK8vhB6PqkDP4%2Bc6ArTqVlPGOxvLMW0lxAo8bnRSoHL2kU0i8qVYWLH%2FF%2FRwdXctjr3dBVmMpmZ3rmRRAcBHM50%2FDoxLeYOaqLujdVbJPujAlB2kbVibdkEulqHE2X8yJx66Xnba7MucFWQ5FZ6O%2FpNC58Pfmm%2BfGop5df&X-Amz-Signature=7766b2009ff2f22b54b7ab97d2e3d0fbf64b95618ee6b0dcdc9616de5efbf8d1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U6PEAUFV%2F20260407%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260407T090206Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIB8ajsGmS20c7bmlX6hXjMU7o6cZ3DHsnubVD8%2BKinfSAiACLJYAP7yngYwZ70H5qOtfxUdE7y45znXaci1pc6W7ByqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMfuKcWxNiM520ftpVKtwDC%2Fr4EqF9DvZc%2B%2BEwbewyOpElrzOriEU3ityh0YHEgPa9twko0iHNegcIZLx90ti5hbqa5WbjJEa4RvptTEVjxA%2FuZLf9iiOfCy3soR4SWTQvNFPzMiN%2B4ihaxuncpS7Zey3r2N5XqpgJ0ykuv4Z%2BXxRRc1vxru9BXJV2TeWE22oJcEE7MM71z5H8%2BygHfXW%2BrhEjbdxhyX3Rf3z7XL6EjEDxH966d1Zm%2BTxsjsoExHQ0HNJ%2BNFD3t8E6IdKEtHSY5ODKz4pTNtWAmost1mGN59AJQQQ%2BVhNjFpsHBnn7E7Pa%2BfaRkG1ZB8mcT8GvLEr37EwLOeRuiJkhATZgLlm4SYcJXkxjqdia1T%2FVD4AZ63tk3SSt%2FC4CnvnNPYoyQ7OzKGXZ0FyVPw8h80AokRWQKuZYYqiBdBdpDK1HH32uuGBRb1K7JNGMcYbagimTVQh1LzUTOIfpY7Swwq7ASDAjAb3696m631t6%2FAtavCCyKNteH6NS7DwJw1QCksBNrxWh70qfueTmB%2FDuxDTDvxMt7c%2B4ZTMNncPS%2FIXR4p8pu7KWFW%2BwjjOLVrZLJ%2Bat4Oq%2B3GR9OxcCYBYDKnR%2F4QaHOfz0FERyCUbbPueIkB3GCsbgauFaHsK0Kkyn5j4wv%2FLSzgY6pgHTbkMim2K0yTSYk2iFNBIiIuqvz86AxbIGnEZMFZbTmGIa9PlKESK4sGrwOeX1UPPId6MzTbQFwa7w9eF5sKnFqxZttbaje6gYgfDZNgtAcC158cWxNmUHR8t0Ofq59EdlHhH7fTWGjjSFS745BAAEJO0SBqI4Ck5tx1cch%2Fcvcsk6YXtqbFKCaMSMgv7loeTDCZVJU2dXrMF1sZD%2FpjMBeXLb38gw&X-Amz-Signature=0d6855a8d9fca7d6ab7f543174cd07a8908bef0342394cedb56c9e5834e34c76&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U6PEAUFV%2F20260407%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260407T090206Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIB8ajsGmS20c7bmlX6hXjMU7o6cZ3DHsnubVD8%2BKinfSAiACLJYAP7yngYwZ70H5qOtfxUdE7y45znXaci1pc6W7ByqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMfuKcWxNiM520ftpVKtwDC%2Fr4EqF9DvZc%2B%2BEwbewyOpElrzOriEU3ityh0YHEgPa9twko0iHNegcIZLx90ti5hbqa5WbjJEa4RvptTEVjxA%2FuZLf9iiOfCy3soR4SWTQvNFPzMiN%2B4ihaxuncpS7Zey3r2N5XqpgJ0ykuv4Z%2BXxRRc1vxru9BXJV2TeWE22oJcEE7MM71z5H8%2BygHfXW%2BrhEjbdxhyX3Rf3z7XL6EjEDxH966d1Zm%2BTxsjsoExHQ0HNJ%2BNFD3t8E6IdKEtHSY5ODKz4pTNtWAmost1mGN59AJQQQ%2BVhNjFpsHBnn7E7Pa%2BfaRkG1ZB8mcT8GvLEr37EwLOeRuiJkhATZgLlm4SYcJXkxjqdia1T%2FVD4AZ63tk3SSt%2FC4CnvnNPYoyQ7OzKGXZ0FyVPw8h80AokRWQKuZYYqiBdBdpDK1HH32uuGBRb1K7JNGMcYbagimTVQh1LzUTOIfpY7Swwq7ASDAjAb3696m631t6%2FAtavCCyKNteH6NS7DwJw1QCksBNrxWh70qfueTmB%2FDuxDTDvxMt7c%2B4ZTMNncPS%2FIXR4p8pu7KWFW%2BwjjOLVrZLJ%2Bat4Oq%2B3GR9OxcCYBYDKnR%2F4QaHOfz0FERyCUbbPueIkB3GCsbgauFaHsK0Kkyn5j4wv%2FLSzgY6pgHTbkMim2K0yTSYk2iFNBIiIuqvz86AxbIGnEZMFZbTmGIa9PlKESK4sGrwOeX1UPPId6MzTbQFwa7w9eF5sKnFqxZttbaje6gYgfDZNgtAcC158cWxNmUHR8t0Ofq59EdlHhH7fTWGjjSFS745BAAEJO0SBqI4Ck5tx1cch%2Fcvcsk6YXtqbFKCaMSMgv7loeTDCZVJU2dXrMF1sZD%2FpjMBeXLb38gw&X-Amz-Signature=f33415902459a5ad32dae1f106fc2aa370c23d42dbf4be4699d2a075658234fc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
