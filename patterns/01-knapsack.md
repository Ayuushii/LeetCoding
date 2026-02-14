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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663PXGPNZM%2F20260214%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260214T083216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJGMEQCIBBK84vB0uEzVcKJ972MY8uV52cm4GcMybpb6EIACdFrAiBMNgCU2x2uuRNPD0Z1%2Fjb7WramMtNnTHgmqn%2FrIFTWByr%2FAwgBEAAaDDYzNzQyMzE4MzgwNSIMPpPNXnsm5wZ%2B3VyNKtwDR7uduVdq1KvgALqINnx3fYUDT6sy7gBWIkyweGwAkRJKhZW7X8RSx9%2BnTwu6eQtFAm13cXzcFdz%2F9pqE3av0q33A101AJpnnF1EAXrl9ONg8QMfZOPPzG08Ap6nA1nGIif3qXfUp7XhfBBNp%2FJv2pIRU4aloRdSNk6BrynaLHkq7txvnALIcUsWum%2BgEHXqpFjcfUE3B9URHKjF72ltfWU6ngF4uu9N6FYHrupzDCsqly7mdXvqTTUf5%2FjUER3Ev92enQWPXPTJN3yqlN8tiQ57IDkytwQR%2FSwbQKTpMjltBqwZGWUIGgIZ5wNYX9axTGQ8g7Ez817gwDWesp%2FzCFCos%2BM8APeZZacXOtUMTkuHhDU8gYmYL5uSsmD7NrqHPLr3IKT%2FA99cB56cT8vsKawyfrRyPrkWEEWSo5MKo4daFwq%2FKOLhDWjzaY14LhmGGSHS6%2BtQ82s9we1M7rYSxffta3FcAItl234%2BfPEmM3ELthcy50V9sYGe9cX1Jh5ur7%2BpDbmZSt0ARISqccojVNxGYhlqf6mWzeASvN%2FrUBuQD2lfI2%2FQf88s%2BrFUIgR76Ns9UOGokBfPb38HMlQhTZPl16vn7sVj5BnNYpBMhO9Hx7jN9valbdkz09JgwyeTAzAY6pgHqI4rhyd%2FDjRX1DrOOgmOby2Sh6wunvgBCOKf4gsCdxq7OjDsqdqNLakPKcQrtXs33iCpy1N4IZ72OOGmEnAoOnkM9PH5fkeJb%2FTNJhTgRBkdxOm%2FGQfgqRO3PMCwoWWf8XwcwI9IGqic0UF1ZkdO6nO37rem45ugiYPPsKpfxNPU1HPI6aHbcMZAmwXhGep3sMrKr0fd0gtXRULGivKFCq5Fy6XHE&X-Amz-Signature=d81d50690d19dd2875a591cdc6bddcbea73a51f5620d652b8f2a05c01a2ca4c2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663PXGPNZM%2F20260214%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260214T083216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJGMEQCIBBK84vB0uEzVcKJ972MY8uV52cm4GcMybpb6EIACdFrAiBMNgCU2x2uuRNPD0Z1%2Fjb7WramMtNnTHgmqn%2FrIFTWByr%2FAwgBEAAaDDYzNzQyMzE4MzgwNSIMPpPNXnsm5wZ%2B3VyNKtwDR7uduVdq1KvgALqINnx3fYUDT6sy7gBWIkyweGwAkRJKhZW7X8RSx9%2BnTwu6eQtFAm13cXzcFdz%2F9pqE3av0q33A101AJpnnF1EAXrl9ONg8QMfZOPPzG08Ap6nA1nGIif3qXfUp7XhfBBNp%2FJv2pIRU4aloRdSNk6BrynaLHkq7txvnALIcUsWum%2BgEHXqpFjcfUE3B9URHKjF72ltfWU6ngF4uu9N6FYHrupzDCsqly7mdXvqTTUf5%2FjUER3Ev92enQWPXPTJN3yqlN8tiQ57IDkytwQR%2FSwbQKTpMjltBqwZGWUIGgIZ5wNYX9axTGQ8g7Ez817gwDWesp%2FzCFCos%2BM8APeZZacXOtUMTkuHhDU8gYmYL5uSsmD7NrqHPLr3IKT%2FA99cB56cT8vsKawyfrRyPrkWEEWSo5MKo4daFwq%2FKOLhDWjzaY14LhmGGSHS6%2BtQ82s9we1M7rYSxffta3FcAItl234%2BfPEmM3ELthcy50V9sYGe9cX1Jh5ur7%2BpDbmZSt0ARISqccojVNxGYhlqf6mWzeASvN%2FrUBuQD2lfI2%2FQf88s%2BrFUIgR76Ns9UOGokBfPb38HMlQhTZPl16vn7sVj5BnNYpBMhO9Hx7jN9valbdkz09JgwyeTAzAY6pgHqI4rhyd%2FDjRX1DrOOgmOby2Sh6wunvgBCOKf4gsCdxq7OjDsqdqNLakPKcQrtXs33iCpy1N4IZ72OOGmEnAoOnkM9PH5fkeJb%2FTNJhTgRBkdxOm%2FGQfgqRO3PMCwoWWf8XwcwI9IGqic0UF1ZkdO6nO37rem45ugiYPPsKpfxNPU1HPI6aHbcMZAmwXhGep3sMrKr0fd0gtXRULGivKFCq5Fy6XHE&X-Amz-Signature=d12d0d7858526cd57f15deeb91faf559913117ffb33ef48c7bd289cf5dfed1ec&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663PXGPNZM%2F20260214%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260214T083216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJGMEQCIBBK84vB0uEzVcKJ972MY8uV52cm4GcMybpb6EIACdFrAiBMNgCU2x2uuRNPD0Z1%2Fjb7WramMtNnTHgmqn%2FrIFTWByr%2FAwgBEAAaDDYzNzQyMzE4MzgwNSIMPpPNXnsm5wZ%2B3VyNKtwDR7uduVdq1KvgALqINnx3fYUDT6sy7gBWIkyweGwAkRJKhZW7X8RSx9%2BnTwu6eQtFAm13cXzcFdz%2F9pqE3av0q33A101AJpnnF1EAXrl9ONg8QMfZOPPzG08Ap6nA1nGIif3qXfUp7XhfBBNp%2FJv2pIRU4aloRdSNk6BrynaLHkq7txvnALIcUsWum%2BgEHXqpFjcfUE3B9URHKjF72ltfWU6ngF4uu9N6FYHrupzDCsqly7mdXvqTTUf5%2FjUER3Ev92enQWPXPTJN3yqlN8tiQ57IDkytwQR%2FSwbQKTpMjltBqwZGWUIGgIZ5wNYX9axTGQ8g7Ez817gwDWesp%2FzCFCos%2BM8APeZZacXOtUMTkuHhDU8gYmYL5uSsmD7NrqHPLr3IKT%2FA99cB56cT8vsKawyfrRyPrkWEEWSo5MKo4daFwq%2FKOLhDWjzaY14LhmGGSHS6%2BtQ82s9we1M7rYSxffta3FcAItl234%2BfPEmM3ELthcy50V9sYGe9cX1Jh5ur7%2BpDbmZSt0ARISqccojVNxGYhlqf6mWzeASvN%2FrUBuQD2lfI2%2FQf88s%2BrFUIgR76Ns9UOGokBfPb38HMlQhTZPl16vn7sVj5BnNYpBMhO9Hx7jN9valbdkz09JgwyeTAzAY6pgHqI4rhyd%2FDjRX1DrOOgmOby2Sh6wunvgBCOKf4gsCdxq7OjDsqdqNLakPKcQrtXs33iCpy1N4IZ72OOGmEnAoOnkM9PH5fkeJb%2FTNJhTgRBkdxOm%2FGQfgqRO3PMCwoWWf8XwcwI9IGqic0UF1ZkdO6nO37rem45ugiYPPsKpfxNPU1HPI6aHbcMZAmwXhGep3sMrKr0fd0gtXRULGivKFCq5Fy6XHE&X-Amz-Signature=e3ce49a3bc8a520b76b6db2bd4b975ae30d566e467508f47ba6d00e9df80d245&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U6SIUAV3%2F20260214%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260214T083216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJHMEUCIAWEusHIGUDb8rFzINzkT6dixZV%2BS2viW%2FOyBy%2FRxWlgAiEArqFaRKMc4y5vrjTZtNOPPfSVeoILsUCwvQy0XAazblEq%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDI9B5WpR2d2H8Q74kSrcA2frVa7By2btDIBr2ehqxsCVlwbJoyOrbJpcMpuvzljvYAmuqmevF%2BDbmLBf0131J7vEmdr5pSZaCmGMSUhYkmCKins%2BeQd75%2FSnKZ1ONf%2FeI9EMFiM8ngKRr2dh9si9mso7YBbiyNCa5MrP%2BcCb5X7gm8SZsubSWpZRShNhEVjeii5HLJB%2BGfhVhyp695g2jiG%2BBLzSTbXBeDRRL%2Fc%2B7XhT58pCu3pwp1T4HbPLP%2Bm9rJ8Ik9S5BE83KU36dx5AEKGfM6AFF8KKPnAAJdHk7V6qIEN4Y6b1x1paiEhMWm9Q3QSQjL9an1lBxO7TGrYqarGVwCl1Ai5Tqhh4GpBDHzRg%2BmbKCiUVt7mMymirTpf5TOA1s5mLcMsCmkPMHX%2FnfUKdt4k2zI2%2FIdkQKfgOUxqMYVFDaYtisZLJaYEdhKboYdKVpfmUG%2Bo0aMuhrtNFHutXL7afhwmpikKEx9kZ0KM%2BdFsDgg6TX5nDMUEx%2Bzi5C94XOawejRqyJ7eEeJPYEZ9K2qwD9LYVjVGHkEvL1LeaI1EirfIYlULAAx6MyEPxfpKSzf2PatwhQNU1U0bSzqjSNSN8%2B%2BtI%2FVZFjHsvp8f%2BvHZO6VcVOI0ONSeadFC%2FUsuCbrXIddok9VENMIDlwMwGOqUBohjhFMZxMa3k7zhRS1ZEOaixeF%2BjoLIpNaZD0mI9%2BxjOzIgv1V9hIsqdQGBwCn%2B2%2B1y6iK%2F6lwxrjUElBOhsme98c22SS20kUEuRVu6RRKry%2FTvu9ifLzBsjx3FibhuFQll8YwJHx6UR4MJGnWDgU03jOwczWO0w%2BQh19ggfeM3%2FIkJN1UHrvEpIAi2S3TpKanXFP9UGiVa%2B6V0hVOfa9DrRLt5X&X-Amz-Signature=1b1f96a0dce1d7bd67b27e7ffe00f58391aed86277f3ad7254ea937ff9c472d8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U6SIUAV3%2F20260214%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260214T083216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJHMEUCIAWEusHIGUDb8rFzINzkT6dixZV%2BS2viW%2FOyBy%2FRxWlgAiEArqFaRKMc4y5vrjTZtNOPPfSVeoILsUCwvQy0XAazblEq%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDI9B5WpR2d2H8Q74kSrcA2frVa7By2btDIBr2ehqxsCVlwbJoyOrbJpcMpuvzljvYAmuqmevF%2BDbmLBf0131J7vEmdr5pSZaCmGMSUhYkmCKins%2BeQd75%2FSnKZ1ONf%2FeI9EMFiM8ngKRr2dh9si9mso7YBbiyNCa5MrP%2BcCb5X7gm8SZsubSWpZRShNhEVjeii5HLJB%2BGfhVhyp695g2jiG%2BBLzSTbXBeDRRL%2Fc%2B7XhT58pCu3pwp1T4HbPLP%2Bm9rJ8Ik9S5BE83KU36dx5AEKGfM6AFF8KKPnAAJdHk7V6qIEN4Y6b1x1paiEhMWm9Q3QSQjL9an1lBxO7TGrYqarGVwCl1Ai5Tqhh4GpBDHzRg%2BmbKCiUVt7mMymirTpf5TOA1s5mLcMsCmkPMHX%2FnfUKdt4k2zI2%2FIdkQKfgOUxqMYVFDaYtisZLJaYEdhKboYdKVpfmUG%2Bo0aMuhrtNFHutXL7afhwmpikKEx9kZ0KM%2BdFsDgg6TX5nDMUEx%2Bzi5C94XOawejRqyJ7eEeJPYEZ9K2qwD9LYVjVGHkEvL1LeaI1EirfIYlULAAx6MyEPxfpKSzf2PatwhQNU1U0bSzqjSNSN8%2B%2BtI%2FVZFjHsvp8f%2BvHZO6VcVOI0ONSeadFC%2FUsuCbrXIddok9VENMIDlwMwGOqUBohjhFMZxMa3k7zhRS1ZEOaixeF%2BjoLIpNaZD0mI9%2BxjOzIgv1V9hIsqdQGBwCn%2B2%2B1y6iK%2F6lwxrjUElBOhsme98c22SS20kUEuRVu6RRKry%2FTvu9ifLzBsjx3FibhuFQll8YwJHx6UR4MJGnWDgU03jOwczWO0w%2BQh19ggfeM3%2FIkJN1UHrvEpIAi2S3TpKanXFP9UGiVa%2B6V0hVOfa9DrRLt5X&X-Amz-Signature=3ecbc0fdc8baa84b28d14d33b2a9e8f61ef32aa9ac387c09ff7e6e1da118faca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U6SIUAV3%2F20260214%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260214T083216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJHMEUCIAWEusHIGUDb8rFzINzkT6dixZV%2BS2viW%2FOyBy%2FRxWlgAiEArqFaRKMc4y5vrjTZtNOPPfSVeoILsUCwvQy0XAazblEq%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDI9B5WpR2d2H8Q74kSrcA2frVa7By2btDIBr2ehqxsCVlwbJoyOrbJpcMpuvzljvYAmuqmevF%2BDbmLBf0131J7vEmdr5pSZaCmGMSUhYkmCKins%2BeQd75%2FSnKZ1ONf%2FeI9EMFiM8ngKRr2dh9si9mso7YBbiyNCa5MrP%2BcCb5X7gm8SZsubSWpZRShNhEVjeii5HLJB%2BGfhVhyp695g2jiG%2BBLzSTbXBeDRRL%2Fc%2B7XhT58pCu3pwp1T4HbPLP%2Bm9rJ8Ik9S5BE83KU36dx5AEKGfM6AFF8KKPnAAJdHk7V6qIEN4Y6b1x1paiEhMWm9Q3QSQjL9an1lBxO7TGrYqarGVwCl1Ai5Tqhh4GpBDHzRg%2BmbKCiUVt7mMymirTpf5TOA1s5mLcMsCmkPMHX%2FnfUKdt4k2zI2%2FIdkQKfgOUxqMYVFDaYtisZLJaYEdhKboYdKVpfmUG%2Bo0aMuhrtNFHutXL7afhwmpikKEx9kZ0KM%2BdFsDgg6TX5nDMUEx%2Bzi5C94XOawejRqyJ7eEeJPYEZ9K2qwD9LYVjVGHkEvL1LeaI1EirfIYlULAAx6MyEPxfpKSzf2PatwhQNU1U0bSzqjSNSN8%2B%2BtI%2FVZFjHsvp8f%2BvHZO6VcVOI0ONSeadFC%2FUsuCbrXIddok9VENMIDlwMwGOqUBohjhFMZxMa3k7zhRS1ZEOaixeF%2BjoLIpNaZD0mI9%2BxjOzIgv1V9hIsqdQGBwCn%2B2%2B1y6iK%2F6lwxrjUElBOhsme98c22SS20kUEuRVu6RRKry%2FTvu9ifLzBsjx3FibhuFQll8YwJHx6UR4MJGnWDgU03jOwczWO0w%2BQh19ggfeM3%2FIkJN1UHrvEpIAi2S3TpKanXFP9UGiVa%2B6V0hVOfa9DrRLt5X&X-Amz-Signature=a7752aec73bac70aaae4bec0c8c9e3af13c22f39d4f6d9111906aad180f9804c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U6SIUAV3%2F20260214%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260214T083216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJHMEUCIAWEusHIGUDb8rFzINzkT6dixZV%2BS2viW%2FOyBy%2FRxWlgAiEArqFaRKMc4y5vrjTZtNOPPfSVeoILsUCwvQy0XAazblEq%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDI9B5WpR2d2H8Q74kSrcA2frVa7By2btDIBr2ehqxsCVlwbJoyOrbJpcMpuvzljvYAmuqmevF%2BDbmLBf0131J7vEmdr5pSZaCmGMSUhYkmCKins%2BeQd75%2FSnKZ1ONf%2FeI9EMFiM8ngKRr2dh9si9mso7YBbiyNCa5MrP%2BcCb5X7gm8SZsubSWpZRShNhEVjeii5HLJB%2BGfhVhyp695g2jiG%2BBLzSTbXBeDRRL%2Fc%2B7XhT58pCu3pwp1T4HbPLP%2Bm9rJ8Ik9S5BE83KU36dx5AEKGfM6AFF8KKPnAAJdHk7V6qIEN4Y6b1x1paiEhMWm9Q3QSQjL9an1lBxO7TGrYqarGVwCl1Ai5Tqhh4GpBDHzRg%2BmbKCiUVt7mMymirTpf5TOA1s5mLcMsCmkPMHX%2FnfUKdt4k2zI2%2FIdkQKfgOUxqMYVFDaYtisZLJaYEdhKboYdKVpfmUG%2Bo0aMuhrtNFHutXL7afhwmpikKEx9kZ0KM%2BdFsDgg6TX5nDMUEx%2Bzi5C94XOawejRqyJ7eEeJPYEZ9K2qwD9LYVjVGHkEvL1LeaI1EirfIYlULAAx6MyEPxfpKSzf2PatwhQNU1U0bSzqjSNSN8%2B%2BtI%2FVZFjHsvp8f%2BvHZO6VcVOI0ONSeadFC%2FUsuCbrXIddok9VENMIDlwMwGOqUBohjhFMZxMa3k7zhRS1ZEOaixeF%2BjoLIpNaZD0mI9%2BxjOzIgv1V9hIsqdQGBwCn%2B2%2B1y6iK%2F6lwxrjUElBOhsme98c22SS20kUEuRVu6RRKry%2FTvu9ifLzBsjx3FibhuFQll8YwJHx6UR4MJGnWDgU03jOwczWO0w%2BQh19ggfeM3%2FIkJN1UHrvEpIAi2S3TpKanXFP9UGiVa%2B6V0hVOfa9DrRLt5X&X-Amz-Signature=e9cd564df6e05b537fdb27d39498e3ba2c455dc0db257f6f4e45ba47fad9ef9d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665T7BSPTD%2F20260214%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260214T083220Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJHMEUCIQDNvHnAe7EvCEwR2bmKVnKfFky6aXkRXqhp0eyA6suSnwIgOCDOGvkktv0TLWuTkfTHJhEFFYURQapgwIyDpelEByAq%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDKgtmomDlTpAqaS2bSrcA5j3EctihHbit8Zdm1wedBjSvkEuZ6XZRadE1crBgk9w1qNrWW40f9bfaKQByAnwPcUHSuTaKGAFTo3O5XPYVNM5Tf9R6R0uBDvAn910lSjKbVzTYnXtqu1XkgdkDFh%2FQpbjv1Iz9wmMQQGabA8CpAAebLMUwnrxNPrGpYh%2Fd1Y2Lkt%2FPbQxecHFQI%2Bup8UyVGA0epBZ5rLOfC3f7IjLXkxWnejJYU7hT6R3Smrdr%2Fpdd12GP5px0qfNVwPyJnX7ngnIRhX0GwH9NXPfsSKnkBCxzZCcUTTTdb6f9XGp%2BuFiatpiVcDYGX4mR%2FZGS7UcbG0XYDe9wj2AY4Z7BtWyDiUIH%2Fx4KR0jpV3KWFlxzW3hP%2FJFHPX%2F%2BKYMvpdjKSQvWirUj6xON8TOoQdwpgoUn0zpiB%2B%2FjyoTD2BI70Ya%2B8rmVpG2mYkO1JsS5OInGCW1sD0RRq0Z4rFNHlZe%2BY8k9o8X0my92gL4aTW9sWGhmvFL4PcwvlEYMXb4bp%2FtGGUCIKKWURyjrsfvFzlPkYvGFklS49pN641BELN6GGP3WBHBq1phiIsoes7JVL%2BRykv5g5LgDY5%2FKyZ8A%2F5mWEXPp7y3cgDQ1tCgjm6yDPAHcW%2FJA9cQTx7kufbMEPTPMNvkwMwGOqUBAwg2lRa7rMnklbNdJ6YtBipM%2BQ2UHYAmmtr%2FcyMzy9UU2pElRk1hxbpxP9JUsnOSnbNoJsg12lAAHUILa95W7HD5bFkrPSPMe60HZYwOMlPLCY95RvqA5OM6%2B7agq59K8cvQTvHZ7HD%2FwODwYqYLBpqtBrumBu6Q22XYYXtCDKY8OCO7suQJasxqGO2nIig8%2FArx8xrWx7ZXCpzNmvL01uxYA2ig&X-Amz-Signature=c31f9def81d80b75ba972823a8136ac07ae36557c2c163bfe9ff11055b45321c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YK5TG7IW%2F20260214%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260214T083221Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJHMEUCIQDxTTm6raGtD1ntPklXWa2JDQO2QAcFBTpJOwHj8tOIVwIgB%2BQqlwnxrUFhpwLnntTctfbBuY8jwa1bR2uuFIS9is4q%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDEMFFifG4uNXYxtwiSrcA5r0FCO%2B56EO1%2BTwCgapOaNR1Gn41BktrNi3Gll9492%2Fhu2e7SS7BfywuH32aI2juMgHVAQWLOuUCAvjhuow4Do9XajtKR80QYyBDFegFIO7pjEk%2FXmnS%2FzH0v%2F5fk37NK%2BD4d7csPe3Z4C4ym2bBz1JwKY5qf3J14BIn%2BEpqdn0QUVxVk27CMo46PM8ISUPB%2BITj5A%2Fq5E5jk1uGvSQASx0NmzKpCIRJh7uNxYFO8wNr9bLKMShCUwrpL8A9p3MFfI2%2BfA8XbIJBDFhx9W%2BUj%2Fs7mNvNgZP0i08AC%2BAnS7CIySyYjaDLschWORjdj5OaBSkSwC%2BNTK8J6XxotRqFCnD67c5T6mi92jnHuXvfsc1DJ8LidkLk0yZP9%2BBx7K5e9yjf1pDWwWoUWsYx1FSsx5ZRUDh96xCCe8FWycV9ZSi44kXoh8XmfhFJ9Wn0im%2BbTzIKjB3RycralKni%2FoPXzQZP9I5SvhbgsSCwUMn8TLTCb%2B0Ou2VkuUi%2BSYXHKeNowr7GeSmR9IUU8E0RTggd6h3f8C8E2NpMkwc89rotOmecwT89Olusd55CLJ5Vk0emfJkKtAFYL1A%2BmRoTlv8GCBqTrZ0BzoqH56qNVTyPhE9g%2FhDmGxJLH%2Bn%2FcbiMJLlwMwGOqUB5WzJaOI%2FHBVZyvpBS4TDh2XvLLns1fEAxAJlcVegmFaSRu7TY3kQK%2FmCw%2FIY90%2FWa0JHASBlxj0N%2BZ4Q7Hkp5aOy74pOyhFnYXRCqmYF2nmY0EH98Q6WSTZTmrLtX%2BWSe34xPJbgbdoGfEXtUsNTip9EAtw3%2Ftldy6FqZQNB616c6f3B2QLb4wEPButYCekNQTaJcE1oqx9NvE%2FW9ZJvXYBNKWYu&X-Amz-Signature=60549c93ca76336fa0e39edb8c1fde5b2ade0a1230eebcb5075bfd04da54723b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YK5TG7IW%2F20260214%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260214T083221Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJHMEUCIQDxTTm6raGtD1ntPklXWa2JDQO2QAcFBTpJOwHj8tOIVwIgB%2BQqlwnxrUFhpwLnntTctfbBuY8jwa1bR2uuFIS9is4q%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDEMFFifG4uNXYxtwiSrcA5r0FCO%2B56EO1%2BTwCgapOaNR1Gn41BktrNi3Gll9492%2Fhu2e7SS7BfywuH32aI2juMgHVAQWLOuUCAvjhuow4Do9XajtKR80QYyBDFegFIO7pjEk%2FXmnS%2FzH0v%2F5fk37NK%2BD4d7csPe3Z4C4ym2bBz1JwKY5qf3J14BIn%2BEpqdn0QUVxVk27CMo46PM8ISUPB%2BITj5A%2Fq5E5jk1uGvSQASx0NmzKpCIRJh7uNxYFO8wNr9bLKMShCUwrpL8A9p3MFfI2%2BfA8XbIJBDFhx9W%2BUj%2Fs7mNvNgZP0i08AC%2BAnS7CIySyYjaDLschWORjdj5OaBSkSwC%2BNTK8J6XxotRqFCnD67c5T6mi92jnHuXvfsc1DJ8LidkLk0yZP9%2BBx7K5e9yjf1pDWwWoUWsYx1FSsx5ZRUDh96xCCe8FWycV9ZSi44kXoh8XmfhFJ9Wn0im%2BbTzIKjB3RycralKni%2FoPXzQZP9I5SvhbgsSCwUMn8TLTCb%2B0Ou2VkuUi%2BSYXHKeNowr7GeSmR9IUU8E0RTggd6h3f8C8E2NpMkwc89rotOmecwT89Olusd55CLJ5Vk0emfJkKtAFYL1A%2BmRoTlv8GCBqTrZ0BzoqH56qNVTyPhE9g%2FhDmGxJLH%2Bn%2FcbiMJLlwMwGOqUB5WzJaOI%2FHBVZyvpBS4TDh2XvLLns1fEAxAJlcVegmFaSRu7TY3kQK%2FmCw%2FIY90%2FWa0JHASBlxj0N%2BZ4Q7Hkp5aOy74pOyhFnYXRCqmYF2nmY0EH98Q6WSTZTmrLtX%2BWSe34xPJbgbdoGfEXtUsNTip9EAtw3%2Ftldy6FqZQNB616c6f3B2QLb4wEPButYCekNQTaJcE1oqx9NvE%2FW9ZJvXYBNKWYu&X-Amz-Signature=214de7b9a5360f66d327c7c940f5f531a58304caf6dfd1fbe84f21c353330ab1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
