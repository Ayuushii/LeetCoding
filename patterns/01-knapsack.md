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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TCSEDRC3%2F20260611%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260611T120839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJHMEUCIEF4IY8peRypbFFdqZ4V%2Fx4Zera0iQ7FCqvmPG6MWbFUAiEAsrEVxKvjSwa5cYpWqXx8YeI1eplwvk1g2ICG3u1fcZcqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAH6vuAIqCO50ONEvCrcA8Od7mmXOudsIrqKthFUsnOLD3%2FJiu9jr420xlN%2BFiKyKG0frNCUIktM%2F5bwwfqV%2B9E2oN1dEz35YorGQAZijpxx4HTSmTIqPAqgWWsvnsLGpJAESKvYMzsJCr4cNc%2BCm56C77yfQzkk7%2F0KtqZ65NSI%2BKeYW1AivHojuzR4nAAvMQW8KpnGB9zEYvz3ct4cE3464W3V72KObzZcQ96TtUrvXl%2Fpuod3ygZEn04DDMbL7lVXTTfJExVmUhwAFtB3xj%2BrCHbOYJl4B94PY1KedZ3gwaIHcd5DbNxVSmVpAO7i4moCNBQ6djFNMojx0wc5TYNa6euqqPDO%2FAmQr%2F6s48AzlUlcs%2FrHmTBTgY9%2F7kGCnXUTZN8rku6s6EtOTMlEm%2BcsBxOUilcfbphu%2FAilrOgJcsfuiel5V5Pp1t7nxV8ANK%2BnXj7Qa4mMvYZQYuBuzWAxED3TzwnNr9Junpzwx2OzxorPn63819HyfI7K5BJbMbWr2LaoJIK%2BWVbFP%2FzA5xsn%2BWC%2BWYt4uAN7buJdq3uuST68d%2BBPtwRUefhSgSabtSKVBeK7zcPNjh6jet3kEzA%2BeoJjG9jU36UpR%2BeRtuNsvJZ2Bs1oTEWxezfCJjcwDZjtjjS456%2BFqRl9MMOvqtEGOqUBB9UlMEdxgDjtqPiAIMcsv6KduaPBcQ2WOWRFZP3BlrbVdAp8X1QWXJh8vyrFVkNdZpEaqCWs0mmPOVJ8LMbNZxgTN8svznFVNIMA5PW1Gm%2FrR6V0bEMQ9xzeMPK07Z%2FWrG0ys3s6Wli8KUeKNpfjA26iskyDOK%2FjEKSBuDvSIKm%2BH5bFnKSz%2FQTWOeKB0T%2Bay%2FY4uCcKDp0280RIuOgNTh6E7a%2F7&X-Amz-Signature=b78a955cfbf6a67386f7847ea787ec041266a44615c5cc50aa583926ed0b4d8f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TCSEDRC3%2F20260611%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260611T120839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJHMEUCIEF4IY8peRypbFFdqZ4V%2Fx4Zera0iQ7FCqvmPG6MWbFUAiEAsrEVxKvjSwa5cYpWqXx8YeI1eplwvk1g2ICG3u1fcZcqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAH6vuAIqCO50ONEvCrcA8Od7mmXOudsIrqKthFUsnOLD3%2FJiu9jr420xlN%2BFiKyKG0frNCUIktM%2F5bwwfqV%2B9E2oN1dEz35YorGQAZijpxx4HTSmTIqPAqgWWsvnsLGpJAESKvYMzsJCr4cNc%2BCm56C77yfQzkk7%2F0KtqZ65NSI%2BKeYW1AivHojuzR4nAAvMQW8KpnGB9zEYvz3ct4cE3464W3V72KObzZcQ96TtUrvXl%2Fpuod3ygZEn04DDMbL7lVXTTfJExVmUhwAFtB3xj%2BrCHbOYJl4B94PY1KedZ3gwaIHcd5DbNxVSmVpAO7i4moCNBQ6djFNMojx0wc5TYNa6euqqPDO%2FAmQr%2F6s48AzlUlcs%2FrHmTBTgY9%2F7kGCnXUTZN8rku6s6EtOTMlEm%2BcsBxOUilcfbphu%2FAilrOgJcsfuiel5V5Pp1t7nxV8ANK%2BnXj7Qa4mMvYZQYuBuzWAxED3TzwnNr9Junpzwx2OzxorPn63819HyfI7K5BJbMbWr2LaoJIK%2BWVbFP%2FzA5xsn%2BWC%2BWYt4uAN7buJdq3uuST68d%2BBPtwRUefhSgSabtSKVBeK7zcPNjh6jet3kEzA%2BeoJjG9jU36UpR%2BeRtuNsvJZ2Bs1oTEWxezfCJjcwDZjtjjS456%2BFqRl9MMOvqtEGOqUBB9UlMEdxgDjtqPiAIMcsv6KduaPBcQ2WOWRFZP3BlrbVdAp8X1QWXJh8vyrFVkNdZpEaqCWs0mmPOVJ8LMbNZxgTN8svznFVNIMA5PW1Gm%2FrR6V0bEMQ9xzeMPK07Z%2FWrG0ys3s6Wli8KUeKNpfjA26iskyDOK%2FjEKSBuDvSIKm%2BH5bFnKSz%2FQTWOeKB0T%2Bay%2FY4uCcKDp0280RIuOgNTh6E7a%2F7&X-Amz-Signature=264a3632d891aac8fd744c280ed967dc52758c08abd09d6b8f7ed1044e9f65d1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TCSEDRC3%2F20260611%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260611T120839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJHMEUCIEF4IY8peRypbFFdqZ4V%2Fx4Zera0iQ7FCqvmPG6MWbFUAiEAsrEVxKvjSwa5cYpWqXx8YeI1eplwvk1g2ICG3u1fcZcqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAH6vuAIqCO50ONEvCrcA8Od7mmXOudsIrqKthFUsnOLD3%2FJiu9jr420xlN%2BFiKyKG0frNCUIktM%2F5bwwfqV%2B9E2oN1dEz35YorGQAZijpxx4HTSmTIqPAqgWWsvnsLGpJAESKvYMzsJCr4cNc%2BCm56C77yfQzkk7%2F0KtqZ65NSI%2BKeYW1AivHojuzR4nAAvMQW8KpnGB9zEYvz3ct4cE3464W3V72KObzZcQ96TtUrvXl%2Fpuod3ygZEn04DDMbL7lVXTTfJExVmUhwAFtB3xj%2BrCHbOYJl4B94PY1KedZ3gwaIHcd5DbNxVSmVpAO7i4moCNBQ6djFNMojx0wc5TYNa6euqqPDO%2FAmQr%2F6s48AzlUlcs%2FrHmTBTgY9%2F7kGCnXUTZN8rku6s6EtOTMlEm%2BcsBxOUilcfbphu%2FAilrOgJcsfuiel5V5Pp1t7nxV8ANK%2BnXj7Qa4mMvYZQYuBuzWAxED3TzwnNr9Junpzwx2OzxorPn63819HyfI7K5BJbMbWr2LaoJIK%2BWVbFP%2FzA5xsn%2BWC%2BWYt4uAN7buJdq3uuST68d%2BBPtwRUefhSgSabtSKVBeK7zcPNjh6jet3kEzA%2BeoJjG9jU36UpR%2BeRtuNsvJZ2Bs1oTEWxezfCJjcwDZjtjjS456%2BFqRl9MMOvqtEGOqUBB9UlMEdxgDjtqPiAIMcsv6KduaPBcQ2WOWRFZP3BlrbVdAp8X1QWXJh8vyrFVkNdZpEaqCWs0mmPOVJ8LMbNZxgTN8svznFVNIMA5PW1Gm%2FrR6V0bEMQ9xzeMPK07Z%2FWrG0ys3s6Wli8KUeKNpfjA26iskyDOK%2FjEKSBuDvSIKm%2BH5bFnKSz%2FQTWOeKB0T%2Bay%2FY4uCcKDp0280RIuOgNTh6E7a%2F7&X-Amz-Signature=8e3a57a25bd5fab6bc5ddd5fa8e770b581fe1c6e55a08133ab8f7c91567eecd3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YXZ2AL4U%2F20260611%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260611T120839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJIMEYCIQD3AZ64IIUlVdh8oqwvTYgBHjz43O6%2FZU8yFUcE4zClFgIhAMjK8lCDOMNkYHzz%2Bgwz0DQbsEz8%2BfiZ4Ssiq7eot%2BNSKogECPz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzsX0G8YGxqBU8BxVQq3AM9sJLUrhdQymHWRt6AZb%2BTJMUtkdEX4Qk4ylm2gKyDObp9ftjjqTl66zejS%2BY4SPL0qcAflwkMkk9rFNUV2oDlJbWalNjDQFPFhJ2nSkdBXnOgfD0JsUAMOIHHSyAPCNHTkndKnoJVwQXSiy4Y0EfjXzt4GlAbkTPUWycTDmY9VI1rtuO4cRbfa2i7l6MdQ1Yt1sGgJyH9whCoic28Kh%2B%2Frq8pmHEwHaNslLfcvKeO6c%2Ff35T8PeMllLEH4CdNe7WH8BhiUQeuil7J49XpzXr1wF2pkEYz9rcCwZgOsdJ5jR%2FzB22oC07VP4Pm2zV2emPAOb59Eptl4Ba8XB4ZVKa5B2vdMv9PnijyTBgijTn1t%2BCWt0YdZH7eaSyQJteJRiIYoHiYupeEPd41P%2F8fJC%2FihmjQdLpqwxv64p7VI%2B3Pjj4a1Ke7a7KXGdwnnBl1BSRMxlp0H%2Fnkepm0WxBbk7tt%2Bcw71JjI8pX3vmDlREJ4tx7vpYhLak0J4ggS1AMSXFSGECxP2GP%2FXzcH9S9vRHIrZaHWlFVEcj%2Bf%2FlW%2FRNjb%2BjQbth2Q%2BmHit6Lfbcc6LiWWIepFi64IWno2hvA6OKmuFXqgGZUjJ9SPm0rmviILYnRSBrLMcxvu138dazDGsqrRBjqkAWE9rH7XUXrs%2FD4Qrk3irbczMyUYSlDyVsJXdRPuqQgrhah286HxaSU9Kl3jyoT1jn0yhbZ3r142%2FaT7EE3e5spX%2BxSXVtoUC7kxpngSoI54RNeShOepVaqKWMQUg9yZKrIjl9DS%2Fj103J%2BqV176Z1UQCZMkI212926L%2BgktvErxXrdBYkshiyoYE39LUmfPn5YEWrW%2BRx0fyG15BO%2ByIZVeqEQM&X-Amz-Signature=c7093de89bad8a52b5011fd372d08560e4ae7c796d05c319111f6007828bce09&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YXZ2AL4U%2F20260611%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260611T120839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJIMEYCIQD3AZ64IIUlVdh8oqwvTYgBHjz43O6%2FZU8yFUcE4zClFgIhAMjK8lCDOMNkYHzz%2Bgwz0DQbsEz8%2BfiZ4Ssiq7eot%2BNSKogECPz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzsX0G8YGxqBU8BxVQq3AM9sJLUrhdQymHWRt6AZb%2BTJMUtkdEX4Qk4ylm2gKyDObp9ftjjqTl66zejS%2BY4SPL0qcAflwkMkk9rFNUV2oDlJbWalNjDQFPFhJ2nSkdBXnOgfD0JsUAMOIHHSyAPCNHTkndKnoJVwQXSiy4Y0EfjXzt4GlAbkTPUWycTDmY9VI1rtuO4cRbfa2i7l6MdQ1Yt1sGgJyH9whCoic28Kh%2B%2Frq8pmHEwHaNslLfcvKeO6c%2Ff35T8PeMllLEH4CdNe7WH8BhiUQeuil7J49XpzXr1wF2pkEYz9rcCwZgOsdJ5jR%2FzB22oC07VP4Pm2zV2emPAOb59Eptl4Ba8XB4ZVKa5B2vdMv9PnijyTBgijTn1t%2BCWt0YdZH7eaSyQJteJRiIYoHiYupeEPd41P%2F8fJC%2FihmjQdLpqwxv64p7VI%2B3Pjj4a1Ke7a7KXGdwnnBl1BSRMxlp0H%2Fnkepm0WxBbk7tt%2Bcw71JjI8pX3vmDlREJ4tx7vpYhLak0J4ggS1AMSXFSGECxP2GP%2FXzcH9S9vRHIrZaHWlFVEcj%2Bf%2FlW%2FRNjb%2BjQbth2Q%2BmHit6Lfbcc6LiWWIepFi64IWno2hvA6OKmuFXqgGZUjJ9SPm0rmviILYnRSBrLMcxvu138dazDGsqrRBjqkAWE9rH7XUXrs%2FD4Qrk3irbczMyUYSlDyVsJXdRPuqQgrhah286HxaSU9Kl3jyoT1jn0yhbZ3r142%2FaT7EE3e5spX%2BxSXVtoUC7kxpngSoI54RNeShOepVaqKWMQUg9yZKrIjl9DS%2Fj103J%2BqV176Z1UQCZMkI212926L%2BgktvErxXrdBYkshiyoYE39LUmfPn5YEWrW%2BRx0fyG15BO%2ByIZVeqEQM&X-Amz-Signature=332df7eb3b9211e143b2e4edcd75c6fe0eccfb1575ba3c6a17c494085143e701&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YXZ2AL4U%2F20260611%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260611T120839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJIMEYCIQD3AZ64IIUlVdh8oqwvTYgBHjz43O6%2FZU8yFUcE4zClFgIhAMjK8lCDOMNkYHzz%2Bgwz0DQbsEz8%2BfiZ4Ssiq7eot%2BNSKogECPz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzsX0G8YGxqBU8BxVQq3AM9sJLUrhdQymHWRt6AZb%2BTJMUtkdEX4Qk4ylm2gKyDObp9ftjjqTl66zejS%2BY4SPL0qcAflwkMkk9rFNUV2oDlJbWalNjDQFPFhJ2nSkdBXnOgfD0JsUAMOIHHSyAPCNHTkndKnoJVwQXSiy4Y0EfjXzt4GlAbkTPUWycTDmY9VI1rtuO4cRbfa2i7l6MdQ1Yt1sGgJyH9whCoic28Kh%2B%2Frq8pmHEwHaNslLfcvKeO6c%2Ff35T8PeMllLEH4CdNe7WH8BhiUQeuil7J49XpzXr1wF2pkEYz9rcCwZgOsdJ5jR%2FzB22oC07VP4Pm2zV2emPAOb59Eptl4Ba8XB4ZVKa5B2vdMv9PnijyTBgijTn1t%2BCWt0YdZH7eaSyQJteJRiIYoHiYupeEPd41P%2F8fJC%2FihmjQdLpqwxv64p7VI%2B3Pjj4a1Ke7a7KXGdwnnBl1BSRMxlp0H%2Fnkepm0WxBbk7tt%2Bcw71JjI8pX3vmDlREJ4tx7vpYhLak0J4ggS1AMSXFSGECxP2GP%2FXzcH9S9vRHIrZaHWlFVEcj%2Bf%2FlW%2FRNjb%2BjQbth2Q%2BmHit6Lfbcc6LiWWIepFi64IWno2hvA6OKmuFXqgGZUjJ9SPm0rmviILYnRSBrLMcxvu138dazDGsqrRBjqkAWE9rH7XUXrs%2FD4Qrk3irbczMyUYSlDyVsJXdRPuqQgrhah286HxaSU9Kl3jyoT1jn0yhbZ3r142%2FaT7EE3e5spX%2BxSXVtoUC7kxpngSoI54RNeShOepVaqKWMQUg9yZKrIjl9DS%2Fj103J%2BqV176Z1UQCZMkI212926L%2BgktvErxXrdBYkshiyoYE39LUmfPn5YEWrW%2BRx0fyG15BO%2ByIZVeqEQM&X-Amz-Signature=d305493f78837534ed6559826bca07eb8ece90aa39f753e61f4c442bffa5c936&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YXZ2AL4U%2F20260611%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260611T120839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJIMEYCIQD3AZ64IIUlVdh8oqwvTYgBHjz43O6%2FZU8yFUcE4zClFgIhAMjK8lCDOMNkYHzz%2Bgwz0DQbsEz8%2BfiZ4Ssiq7eot%2BNSKogECPz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzsX0G8YGxqBU8BxVQq3AM9sJLUrhdQymHWRt6AZb%2BTJMUtkdEX4Qk4ylm2gKyDObp9ftjjqTl66zejS%2BY4SPL0qcAflwkMkk9rFNUV2oDlJbWalNjDQFPFhJ2nSkdBXnOgfD0JsUAMOIHHSyAPCNHTkndKnoJVwQXSiy4Y0EfjXzt4GlAbkTPUWycTDmY9VI1rtuO4cRbfa2i7l6MdQ1Yt1sGgJyH9whCoic28Kh%2B%2Frq8pmHEwHaNslLfcvKeO6c%2Ff35T8PeMllLEH4CdNe7WH8BhiUQeuil7J49XpzXr1wF2pkEYz9rcCwZgOsdJ5jR%2FzB22oC07VP4Pm2zV2emPAOb59Eptl4Ba8XB4ZVKa5B2vdMv9PnijyTBgijTn1t%2BCWt0YdZH7eaSyQJteJRiIYoHiYupeEPd41P%2F8fJC%2FihmjQdLpqwxv64p7VI%2B3Pjj4a1Ke7a7KXGdwnnBl1BSRMxlp0H%2Fnkepm0WxBbk7tt%2Bcw71JjI8pX3vmDlREJ4tx7vpYhLak0J4ggS1AMSXFSGECxP2GP%2FXzcH9S9vRHIrZaHWlFVEcj%2Bf%2FlW%2FRNjb%2BjQbth2Q%2BmHit6Lfbcc6LiWWIepFi64IWno2hvA6OKmuFXqgGZUjJ9SPm0rmviILYnRSBrLMcxvu138dazDGsqrRBjqkAWE9rH7XUXrs%2FD4Qrk3irbczMyUYSlDyVsJXdRPuqQgrhah286HxaSU9Kl3jyoT1jn0yhbZ3r142%2FaT7EE3e5spX%2BxSXVtoUC7kxpngSoI54RNeShOepVaqKWMQUg9yZKrIjl9DS%2Fj103J%2BqV176Z1UQCZMkI212926L%2BgktvErxXrdBYkshiyoYE39LUmfPn5YEWrW%2BRx0fyG15BO%2ByIZVeqEQM&X-Amz-Signature=5e8da7afc36835ff31a5e111be264159b4eb3bbc5b154728e29c3755b7be8661&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663A4R756Z%2F20260611%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260611T120840Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJHMEUCIByizvg6FF2bPHVo8b4inxl0zX%2B7gzb%2BeEgB4pcK51CFAiEA5nzYi29PQHq4jioMecOvkpXmjWke%2BRu6xeufgIO7gmwqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMjDbKpKXOHJp7iUYCrcA76ZgL0ZTEVgltp63iaiWkJu2nKYWU4bCUBrPx70%2FUgZ9Mz7L6pT4PrXn2BpHFEc6aImsTeQ6YGPgGQSsFM5P3g6p33upnrye5icxgE0iBUB2OAHGb92Ijs7%2BMscVtHiAQbLJC8wZNsLNcxN4g99t%2F09yfDdDgV2itBpy%2FF4izPRvGb6xYRYafoWZ33KPJkk%2Fi4mJ16PGodaa6evzdOqQFGgqpgvCrJC8aRsUVpQTjRaTk8jXFiopI8Nx7wNoHDXZhyRVKoT8PRrSK7lyGvcno9TKUlQC9Uox6pqZpHFbNLa9v6DbgLt36EML90DEi3ZlTXcSAY5aVKeBYU8TR1riviMqJmv1mmHD4uSV%2Fg8cYT7%2FYrle1wBL11Yy5q9jJhylfxscxSfy%2FEdv8h6XZ298oHmYbHVi1uDqG%2B99jtmQB1G3bUf9X3hY2lNq7xqEbUc0ZM6FLkdNjwQ3KCnUJO65YZqMLxl5iok%2FNvLMxCk%2BP9wVVxcmxg4%2FjpXVKQBQnMMIDo%2B1Y%2FccyZNtRqMyq9gfkcHGAoSQN4T6%2BC8fBr%2BRUIR0B%2B%2F6UkB%2Bf%2BjxOSNL2fX4na2wwzNPEHn0OE8iaB4va0Lw23JfmdZJpHan5hcHUiUetOAhygmtp2AA7G6MPiwqtEGOqUB%2FCGSAtSLS5tWWDD%2FbjdJZzC5k9Xk3R7gHCFR4qxtrOajTGc9ApPlYCKK7BlRUMq3mn%2FkcLqMWGTJPr4OVLyyIKENsizWMvIVihKgnqwaGbYLHGKeXylbpUihuXWLG8Q4sv7Tlk9o0ASygY1oR3%2BE9GfRe3ys6acZyTbOLbD1NAr587hVeAPdrnUTeHviu1BdiI%2FT3ya566nH6kvfZxvz9pi%2F3kW%2B&X-Amz-Signature=acc4bfe6579d7386151d6e2c596a5bae5de43da4c0b96b5d810668b1224a2a89&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QEA4ZQF4%2F20260611%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260611T120840Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJGMEQCIBn9LcdjNCxPa29DMZKQFNg0Wp28%2B72HFPJq1c4zBvD8AiBK6npWGJiDpAlr0H8Q9X8JvmpdNxoJyM%2FxXTAkANJdhyqIBAj8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMh5o%2Bp4Qcq8PUGczyKtwDEfnaiPOxeW0YD2j%2FM9cufUbIrhwQWnd7zFwaBsoVv1FYigN1JP8So0o%2FScOn48gvKmcfW9aejSW2Qx7v3xoyVqVVJrHyqfwnrdgVIxy3vfrLyZ1xE%2F62MkxMIQO9Y20%2B8dLL59iCCnnBq7q%2F6EycI8BlppzRaVdS40Sxr%2BGfb2Nt0D5K99lxVnceBwfALjnhNS09AzymFCIJ4o22ftvu%2FHm38ngFea8Q%2BCWZ%2FS6xUaLnyRvzbZpw8nP2c%2FSA9cxUCVe7dYFPXw511AhcKa4TXjLTBj810tdzUTrsEAhJhVKh9GMOGqmq3kTFFxQ%2Fbv73nZ6G7HUt%2BKBF7nuE2SQIkBSe3EftFgAf%2BuVsJIrWezAMEXoemcegYfWz7iPA5NMI4KLAytE%2BG%2BVMmyCE%2FH2G%2BMimgFt5GQq4Z6k8mIg0CRa6gef4DJufiHpo3PJqSaqJYOyMwjwM%2BJ04lo5DN6%2Fzp0lhyIHnRB0E9Weis3Lil6mroVb%2BTeKrPFGYx1HSNJQXZ6P6utv06IVLj0i747U5zwTOQCblvJXP6Ojbd7eGqZ%2B1JezsB%2Bvp6fI%2F9KKTHSRpucOxmx6niPRbvJ0mcSzDVI39U%2BwDEyVqqHPH1h3jsVVIXkfa07j9fNxWQg8wsq%2Bq0QY6pgGKKkFXbIoa2qxCmX%2BwlOo0wAsqnD0%2FyJBe750qyUNeXDMWs%2F1VmjlwNN30GpHDumQn1WQq5X4w%2FK5yr%2Bq3eBnnqbNGSXAttoztciLDvHLrGfT55gGJCezTlBn%2Bm1xnnwbus2JvC5O7C%2Bn%2B8mVijGQmji34wuNzJpRsKsmfmpu%2FNvpKCzwzNLkk8EORvYcMrc1P7gKPaZ06a5wY7DYk8L8y9rFHEBTz&X-Amz-Signature=d5fb526edc4a2100ecf3f6505d7235a705149f31888de486d1aef7a8fca97714&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QEA4ZQF4%2F20260611%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260611T120840Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJGMEQCIBn9LcdjNCxPa29DMZKQFNg0Wp28%2B72HFPJq1c4zBvD8AiBK6npWGJiDpAlr0H8Q9X8JvmpdNxoJyM%2FxXTAkANJdhyqIBAj8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMh5o%2Bp4Qcq8PUGczyKtwDEfnaiPOxeW0YD2j%2FM9cufUbIrhwQWnd7zFwaBsoVv1FYigN1JP8So0o%2FScOn48gvKmcfW9aejSW2Qx7v3xoyVqVVJrHyqfwnrdgVIxy3vfrLyZ1xE%2F62MkxMIQO9Y20%2B8dLL59iCCnnBq7q%2F6EycI8BlppzRaVdS40Sxr%2BGfb2Nt0D5K99lxVnceBwfALjnhNS09AzymFCIJ4o22ftvu%2FHm38ngFea8Q%2BCWZ%2FS6xUaLnyRvzbZpw8nP2c%2FSA9cxUCVe7dYFPXw511AhcKa4TXjLTBj810tdzUTrsEAhJhVKh9GMOGqmq3kTFFxQ%2Fbv73nZ6G7HUt%2BKBF7nuE2SQIkBSe3EftFgAf%2BuVsJIrWezAMEXoemcegYfWz7iPA5NMI4KLAytE%2BG%2BVMmyCE%2FH2G%2BMimgFt5GQq4Z6k8mIg0CRa6gef4DJufiHpo3PJqSaqJYOyMwjwM%2BJ04lo5DN6%2Fzp0lhyIHnRB0E9Weis3Lil6mroVb%2BTeKrPFGYx1HSNJQXZ6P6utv06IVLj0i747U5zwTOQCblvJXP6Ojbd7eGqZ%2B1JezsB%2Bvp6fI%2F9KKTHSRpucOxmx6niPRbvJ0mcSzDVI39U%2BwDEyVqqHPH1h3jsVVIXkfa07j9fNxWQg8wsq%2Bq0QY6pgGKKkFXbIoa2qxCmX%2BwlOo0wAsqnD0%2FyJBe750qyUNeXDMWs%2F1VmjlwNN30GpHDumQn1WQq5X4w%2FK5yr%2Bq3eBnnqbNGSXAttoztciLDvHLrGfT55gGJCezTlBn%2Bm1xnnwbus2JvC5O7C%2Bn%2B8mVijGQmji34wuNzJpRsKsmfmpu%2FNvpKCzwzNLkk8EORvYcMrc1P7gKPaZ06a5wY7DYk8L8y9rFHEBTz&X-Amz-Signature=699280b7ef64a6664742f00a14490645f7d5b1c48093cbce2fbe0559d878729b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
