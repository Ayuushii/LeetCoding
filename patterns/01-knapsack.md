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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W3ZNKAN3%2F20260405%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260405T084153Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4VbzazclQURiJYNr%2FCka%2Fk%2B5gPCAqxOWiZdOPUv3ItgIhAO9jqBUjJhmAmtFOluk7tn9IPWQ1qxskCK5srDmN131uKogECK7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igy6ORaecND%2FmdgW0s4q3ANNVxmXyPm7LfkVVAJfGakqst0OzMQb58VyCH%2FPqVAmqz5Wqcb9sQfIOxv8XnDoNQgnM4llV9CoEDR44TztPmpgaYnUYCigG8RaWJKsNW%2F96VWCoBKsFJECW%2FieRQLpUZlAVWf1ES%2FQ9cMWiwhAr%2Be8lP7derou55udOzWS5EndHHDBY2SdDa28ZMAIXWDzNhLdojPEqhf6FCdtcYgJZySM94sVcvhwIEXPJjJHpry2s9lbgLsjNvqZTbzEdcizhLCWrD1C4JRinbslAFYoE3Hlj1asXrMJZJtd6RUQ4M4LuYI89zvCegKIUrWsMEeFvm%2FHM8W5aLRBtATWCDFdZeNu%2FUAmmyrQILur3tr2cBjD1Vl8rWdUMqyQqUtS7Q0EAw1mtw4bSAygawyDt1MdpEm%2FqVOMUm8rRUtwpxhn%2FK8flCk5qU%2F4treI3WFvypd0Zs%2B2qF7Yq23gdANvPMCvsyXu%2FLCkQen3NAsajI8L%2BetmwUyHQFMdcYoFr%2BCHrr8PijlEem8yCEkdBR1eliwsNFZkz3CV7g5ktfcI6P3raIryPiBEpcsqsDsJdOsYNQTZ7VL5zwRqwI91Z%2FTEIVvjMJ3Gx3mFaf2sPm3XqY2KF%2FqDT%2FcypZ6QUMwfGeG%2BRjCwzcfOBjqkAfG9LThy0ojhbWOwyM4Q39NAS5xXsax7WoMUEg8nisZMIT1%2BsWfuROg5ykrEhulHLhEpAlBZlS67J16yhqrS490vAZj41wP6CmYauCsSZQ%2F%2BnTERSYQVea91Ksl%2BmBHBOqUfGKED46J5ozPP1%2F43XvOe0LHRMkG20V%2FDMdO7eaAaYA%2BXlFe5L8bwz18qQRGTCeYQZugUV8iT%2BnS2Y0%2F2sPblBnyf&X-Amz-Signature=11d0518989785faad72e1e7e963de97aa22dbcf162524b3f35c1b2763b20e1b8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W3ZNKAN3%2F20260405%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260405T084153Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4VbzazclQURiJYNr%2FCka%2Fk%2B5gPCAqxOWiZdOPUv3ItgIhAO9jqBUjJhmAmtFOluk7tn9IPWQ1qxskCK5srDmN131uKogECK7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igy6ORaecND%2FmdgW0s4q3ANNVxmXyPm7LfkVVAJfGakqst0OzMQb58VyCH%2FPqVAmqz5Wqcb9sQfIOxv8XnDoNQgnM4llV9CoEDR44TztPmpgaYnUYCigG8RaWJKsNW%2F96VWCoBKsFJECW%2FieRQLpUZlAVWf1ES%2FQ9cMWiwhAr%2Be8lP7derou55udOzWS5EndHHDBY2SdDa28ZMAIXWDzNhLdojPEqhf6FCdtcYgJZySM94sVcvhwIEXPJjJHpry2s9lbgLsjNvqZTbzEdcizhLCWrD1C4JRinbslAFYoE3Hlj1asXrMJZJtd6RUQ4M4LuYI89zvCegKIUrWsMEeFvm%2FHM8W5aLRBtATWCDFdZeNu%2FUAmmyrQILur3tr2cBjD1Vl8rWdUMqyQqUtS7Q0EAw1mtw4bSAygawyDt1MdpEm%2FqVOMUm8rRUtwpxhn%2FK8flCk5qU%2F4treI3WFvypd0Zs%2B2qF7Yq23gdANvPMCvsyXu%2FLCkQen3NAsajI8L%2BetmwUyHQFMdcYoFr%2BCHrr8PijlEem8yCEkdBR1eliwsNFZkz3CV7g5ktfcI6P3raIryPiBEpcsqsDsJdOsYNQTZ7VL5zwRqwI91Z%2FTEIVvjMJ3Gx3mFaf2sPm3XqY2KF%2FqDT%2FcypZ6QUMwfGeG%2BRjCwzcfOBjqkAfG9LThy0ojhbWOwyM4Q39NAS5xXsax7WoMUEg8nisZMIT1%2BsWfuROg5ykrEhulHLhEpAlBZlS67J16yhqrS490vAZj41wP6CmYauCsSZQ%2F%2BnTERSYQVea91Ksl%2BmBHBOqUfGKED46J5ozPP1%2F43XvOe0LHRMkG20V%2FDMdO7eaAaYA%2BXlFe5L8bwz18qQRGTCeYQZugUV8iT%2BnS2Y0%2F2sPblBnyf&X-Amz-Signature=e2eb1e29871041b484fcf1c2c06d1848c78ba56238b020d94ab33ef4d21844fb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W3ZNKAN3%2F20260405%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260405T084153Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4VbzazclQURiJYNr%2FCka%2Fk%2B5gPCAqxOWiZdOPUv3ItgIhAO9jqBUjJhmAmtFOluk7tn9IPWQ1qxskCK5srDmN131uKogECK7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igy6ORaecND%2FmdgW0s4q3ANNVxmXyPm7LfkVVAJfGakqst0OzMQb58VyCH%2FPqVAmqz5Wqcb9sQfIOxv8XnDoNQgnM4llV9CoEDR44TztPmpgaYnUYCigG8RaWJKsNW%2F96VWCoBKsFJECW%2FieRQLpUZlAVWf1ES%2FQ9cMWiwhAr%2Be8lP7derou55udOzWS5EndHHDBY2SdDa28ZMAIXWDzNhLdojPEqhf6FCdtcYgJZySM94sVcvhwIEXPJjJHpry2s9lbgLsjNvqZTbzEdcizhLCWrD1C4JRinbslAFYoE3Hlj1asXrMJZJtd6RUQ4M4LuYI89zvCegKIUrWsMEeFvm%2FHM8W5aLRBtATWCDFdZeNu%2FUAmmyrQILur3tr2cBjD1Vl8rWdUMqyQqUtS7Q0EAw1mtw4bSAygawyDt1MdpEm%2FqVOMUm8rRUtwpxhn%2FK8flCk5qU%2F4treI3WFvypd0Zs%2B2qF7Yq23gdANvPMCvsyXu%2FLCkQen3NAsajI8L%2BetmwUyHQFMdcYoFr%2BCHrr8PijlEem8yCEkdBR1eliwsNFZkz3CV7g5ktfcI6P3raIryPiBEpcsqsDsJdOsYNQTZ7VL5zwRqwI91Z%2FTEIVvjMJ3Gx3mFaf2sPm3XqY2KF%2FqDT%2FcypZ6QUMwfGeG%2BRjCwzcfOBjqkAfG9LThy0ojhbWOwyM4Q39NAS5xXsax7WoMUEg8nisZMIT1%2BsWfuROg5ykrEhulHLhEpAlBZlS67J16yhqrS490vAZj41wP6CmYauCsSZQ%2F%2BnTERSYQVea91Ksl%2BmBHBOqUfGKED46J5ozPP1%2F43XvOe0LHRMkG20V%2FDMdO7eaAaYA%2BXlFe5L8bwz18qQRGTCeYQZugUV8iT%2BnS2Y0%2F2sPblBnyf&X-Amz-Signature=b9f7444083fade8c958140ade7081b815c1d73a75555fad1358088d4d37dee98&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XWOHROIT%2F20260405%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260405T084153Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFGR5OAD972X9jczAer5lYaL8i7wnCrdhz0e2mk1AJhgAiEAlehUtayFow3FEElHV1YLAndjIx0zuuyvJYfAjV3gjKsqiAQIrv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMMy91%2FLbHCufCIvByrcA5CYC0SWumtLfjQmvVXjS2g%2Bt0995OUDFRDXCSYXMAj%2B4aSF6VJRl88GN0kp%2Bk1KF6izdsV3UwG1Wj%2BC53KsTNOIOy%2BVY3pQjVY2YJsRoE3DJwDUeksXGl5%2BEF%2F7gBERdcDPVP8Z%2FAE2LWbYjHzGrsgRGivqOKrbwVr9u09lEERnRShn%2BejqPXwjE2EXEtoc2QWquQnnlIRGD0AA0McEIG12eD862vkJMYIpmhSYW1taugBHrURqUYj5Ty%2FW4BBO4UeFx7ns6KdZ2%2FL0EQ5MTRQIMiZK7V6HY1T9WEOOBSZCDjHvXK1bnhY0GiOhIpKWcOopoNdWQUdlb8Mjt7zU3hCJDDqPQ5MwDFcjEqY1pj%2FszwoZkiI7zXLBbUzr4VO5%2FHwp8srcQ%2F84csKqOKU8n8woPvUNi3gb2wkJdkNv1Ng0qxQUB1WpYxjFGMRrxIfZsdfMatBQdN6JtLqdwJUft1UW1dKcxdeN2eaztVesaDJhyrszrMozq0nHE2URndZTAgRFj1oeq8PVYlww0omrWo4Qi01HLhOTNhwsnSIOXa6xtpd6A%2BA9vnBtztl7ZsRzdkneiS4hUVd%2FrtQ%2F4koJH6UrnycyGxG8Men%2FqiMXIso5BigDHzm7eiY8J7g9MMrLx84GOqUBZ%2FjwrBlekaU5XFz6js6DYIEycP88tlwYJRWvI5pVW0%2FFwRdUXn8qxO5O3Lnz1LqDmjJjhTqGxbpcQO7NDGYWhCXauqZt%2BPrXTcWF%2FbcIlxKjbHs5Crx1qR0r30PJjDbS2vVYehcDWYtIo2SJQNL%2FrBQ3ioG3%2Bsfm4f2lYRpFjJOJRltvkU5WraO4rK%2Fbd39rdTmy6ndlrLPVg97qc1Qy0fkxCTBi&X-Amz-Signature=e7b82559027dda35dc679e374adb60aa87e5cf7aca34c3a9953cdc748eb0ff8f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XWOHROIT%2F20260405%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260405T084153Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFGR5OAD972X9jczAer5lYaL8i7wnCrdhz0e2mk1AJhgAiEAlehUtayFow3FEElHV1YLAndjIx0zuuyvJYfAjV3gjKsqiAQIrv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMMy91%2FLbHCufCIvByrcA5CYC0SWumtLfjQmvVXjS2g%2Bt0995OUDFRDXCSYXMAj%2B4aSF6VJRl88GN0kp%2Bk1KF6izdsV3UwG1Wj%2BC53KsTNOIOy%2BVY3pQjVY2YJsRoE3DJwDUeksXGl5%2BEF%2F7gBERdcDPVP8Z%2FAE2LWbYjHzGrsgRGivqOKrbwVr9u09lEERnRShn%2BejqPXwjE2EXEtoc2QWquQnnlIRGD0AA0McEIG12eD862vkJMYIpmhSYW1taugBHrURqUYj5Ty%2FW4BBO4UeFx7ns6KdZ2%2FL0EQ5MTRQIMiZK7V6HY1T9WEOOBSZCDjHvXK1bnhY0GiOhIpKWcOopoNdWQUdlb8Mjt7zU3hCJDDqPQ5MwDFcjEqY1pj%2FszwoZkiI7zXLBbUzr4VO5%2FHwp8srcQ%2F84csKqOKU8n8woPvUNi3gb2wkJdkNv1Ng0qxQUB1WpYxjFGMRrxIfZsdfMatBQdN6JtLqdwJUft1UW1dKcxdeN2eaztVesaDJhyrszrMozq0nHE2URndZTAgRFj1oeq8PVYlww0omrWo4Qi01HLhOTNhwsnSIOXa6xtpd6A%2BA9vnBtztl7ZsRzdkneiS4hUVd%2FrtQ%2F4koJH6UrnycyGxG8Men%2FqiMXIso5BigDHzm7eiY8J7g9MMrLx84GOqUBZ%2FjwrBlekaU5XFz6js6DYIEycP88tlwYJRWvI5pVW0%2FFwRdUXn8qxO5O3Lnz1LqDmjJjhTqGxbpcQO7NDGYWhCXauqZt%2BPrXTcWF%2FbcIlxKjbHs5Crx1qR0r30PJjDbS2vVYehcDWYtIo2SJQNL%2FrBQ3ioG3%2Bsfm4f2lYRpFjJOJRltvkU5WraO4rK%2Fbd39rdTmy6ndlrLPVg97qc1Qy0fkxCTBi&X-Amz-Signature=9992cffd404b092436a03dd9e3675dc76733a97c2066e037a73de971030b89c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XWOHROIT%2F20260405%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260405T084153Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFGR5OAD972X9jczAer5lYaL8i7wnCrdhz0e2mk1AJhgAiEAlehUtayFow3FEElHV1YLAndjIx0zuuyvJYfAjV3gjKsqiAQIrv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMMy91%2FLbHCufCIvByrcA5CYC0SWumtLfjQmvVXjS2g%2Bt0995OUDFRDXCSYXMAj%2B4aSF6VJRl88GN0kp%2Bk1KF6izdsV3UwG1Wj%2BC53KsTNOIOy%2BVY3pQjVY2YJsRoE3DJwDUeksXGl5%2BEF%2F7gBERdcDPVP8Z%2FAE2LWbYjHzGrsgRGivqOKrbwVr9u09lEERnRShn%2BejqPXwjE2EXEtoc2QWquQnnlIRGD0AA0McEIG12eD862vkJMYIpmhSYW1taugBHrURqUYj5Ty%2FW4BBO4UeFx7ns6KdZ2%2FL0EQ5MTRQIMiZK7V6HY1T9WEOOBSZCDjHvXK1bnhY0GiOhIpKWcOopoNdWQUdlb8Mjt7zU3hCJDDqPQ5MwDFcjEqY1pj%2FszwoZkiI7zXLBbUzr4VO5%2FHwp8srcQ%2F84csKqOKU8n8woPvUNi3gb2wkJdkNv1Ng0qxQUB1WpYxjFGMRrxIfZsdfMatBQdN6JtLqdwJUft1UW1dKcxdeN2eaztVesaDJhyrszrMozq0nHE2URndZTAgRFj1oeq8PVYlww0omrWo4Qi01HLhOTNhwsnSIOXa6xtpd6A%2BA9vnBtztl7ZsRzdkneiS4hUVd%2FrtQ%2F4koJH6UrnycyGxG8Men%2FqiMXIso5BigDHzm7eiY8J7g9MMrLx84GOqUBZ%2FjwrBlekaU5XFz6js6DYIEycP88tlwYJRWvI5pVW0%2FFwRdUXn8qxO5O3Lnz1LqDmjJjhTqGxbpcQO7NDGYWhCXauqZt%2BPrXTcWF%2FbcIlxKjbHs5Crx1qR0r30PJjDbS2vVYehcDWYtIo2SJQNL%2FrBQ3ioG3%2Bsfm4f2lYRpFjJOJRltvkU5WraO4rK%2Fbd39rdTmy6ndlrLPVg97qc1Qy0fkxCTBi&X-Amz-Signature=7c01d4ca76c739c8908b26ad1615f28b31b961de99efc430e1518d31cc245777&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XWOHROIT%2F20260405%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260405T084153Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFGR5OAD972X9jczAer5lYaL8i7wnCrdhz0e2mk1AJhgAiEAlehUtayFow3FEElHV1YLAndjIx0zuuyvJYfAjV3gjKsqiAQIrv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMMy91%2FLbHCufCIvByrcA5CYC0SWumtLfjQmvVXjS2g%2Bt0995OUDFRDXCSYXMAj%2B4aSF6VJRl88GN0kp%2Bk1KF6izdsV3UwG1Wj%2BC53KsTNOIOy%2BVY3pQjVY2YJsRoE3DJwDUeksXGl5%2BEF%2F7gBERdcDPVP8Z%2FAE2LWbYjHzGrsgRGivqOKrbwVr9u09lEERnRShn%2BejqPXwjE2EXEtoc2QWquQnnlIRGD0AA0McEIG12eD862vkJMYIpmhSYW1taugBHrURqUYj5Ty%2FW4BBO4UeFx7ns6KdZ2%2FL0EQ5MTRQIMiZK7V6HY1T9WEOOBSZCDjHvXK1bnhY0GiOhIpKWcOopoNdWQUdlb8Mjt7zU3hCJDDqPQ5MwDFcjEqY1pj%2FszwoZkiI7zXLBbUzr4VO5%2FHwp8srcQ%2F84csKqOKU8n8woPvUNi3gb2wkJdkNv1Ng0qxQUB1WpYxjFGMRrxIfZsdfMatBQdN6JtLqdwJUft1UW1dKcxdeN2eaztVesaDJhyrszrMozq0nHE2URndZTAgRFj1oeq8PVYlww0omrWo4Qi01HLhOTNhwsnSIOXa6xtpd6A%2BA9vnBtztl7ZsRzdkneiS4hUVd%2FrtQ%2F4koJH6UrnycyGxG8Men%2FqiMXIso5BigDHzm7eiY8J7g9MMrLx84GOqUBZ%2FjwrBlekaU5XFz6js6DYIEycP88tlwYJRWvI5pVW0%2FFwRdUXn8qxO5O3Lnz1LqDmjJjhTqGxbpcQO7NDGYWhCXauqZt%2BPrXTcWF%2FbcIlxKjbHs5Crx1qR0r30PJjDbS2vVYehcDWYtIo2SJQNL%2FrBQ3ioG3%2Bsfm4f2lYRpFjJOJRltvkU5WraO4rK%2Fbd39rdTmy6ndlrLPVg97qc1Qy0fkxCTBi&X-Amz-Signature=5e139b6a36e88ba1925a57e4a4e448a86f92099e9ed5b06a6da35a830df5b54e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QXBZUEFO%2F20260405%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260405T084154Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDNYfghXKbbsR7m5Mmu%2FKpjt8iRHgvJx1V%2BCpsgL90Q7wIhAKOErwxAXRIMu6WgiRlGkWnz3MKxTVfnjCAWKzPTUpPGKogECK7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgweWXG0jo%2FW8vG3%2FXgq3APL9MxLYS0c7xTMR1ebiY%2FUTRF9Czx27doZFqRHJ4yN70mzYKzPcF7Z4OqB%2FKmvGrid348S4JbKVJNPEMlAC4YQRc%2FwBUmrQ8xa4Ur6FHOf29QHNX9sZCOUIXCUyRpyu6yOJ4RuCabjzgRI7ey4dtn4zTdPj3OOzanSTFmRliz1ncQN%2Fu8fDDreBRd5QcY6GbkJ5S0QBNveTaO%2BQ1rSCbt0mxL0qYtAZsEvDM%2BchtzPYxAziswoj99SVWJX%2Bj4aMQUvNOiwK%2FcOS%2BubgK4EXFiRrodA4LOndQbpK2z0d7VBA2Pjn5XynB%2FY5v3XI3EmzhTSoqtjUcp%2Bd0M1x7CHE4NyH0A42mzxMknRbzHXPlUYXbhyVRlCjivi0mQAkCj%2BgelxYiSzB%2Fspvi0pe4kEdYIWgm1UPP0QZbOgq5m2SUmeCF6XPpcgjvrQ%2FS%2B%2FFxqLYeAYHQvj9zcgXYfrIiz9o63PYEvuTJHGxaVV37zLXCD3yh3UjAJbvCP%2Fc70cN%2B5UaoUeSrYK%2FJKyTczIYatQEqWa3Paf5N48XKKtoKOlNkUSAH8bK%2FZoIsDAdUDH3J%2B9RR6lXzr3dZDDsj6est5XrvKLYipshcKvNJJ21uGybB8AQijIReSyNHCRaz%2FpLzDIysfOBjqkATJj5OELJcdemajri8moBZjhsFSSUkCKbfHUd4HJdqitKa88aT%2FwZXB4rr7gmV9QLzXK3240BhcpaCMozgXoX0RQZHDWk%2FwUr4x%2FBpHiLJYG1o%2Fq7QBfmdi0kyOiZ5%2FKqVmFR5LO%2BjIXclJ0m4nHWIGobHWgizop9%2FDmnwkC56i1qFpE0MWfxz3rOFoFiVbLqdEBMpsrqX0DNUL4wTnrfMaobRbS&X-Amz-Signature=cad3af79d5cfffaf009992b575f1098ac5dcc42c16898057d910e3a07ff69970&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXC4OFB3%2F20260405%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260405T084155Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCPr4yTtkXr4ozNdr%2FoF3KhH5%2FYpjfeSrOwtlFn6ujMxgIhAITtXrMaGEhC5opHTHajkpES6QDyPxgVVXfwe%2F5CqUrzKogECK7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwzeqmKf%2BeXUuUcpfEq3ANXtUQRNmNM230oTh7wuVEQOX7jQvIM82ZNtApkYo8m7%2FUghCJL8SdSi6eYIM1eKkQJaVOj05pzE62ZBeH2SPnuEX7pxyr2%2BSZEUylCk9ttlQFVEUk7R0RTwSJeXPkN4YheLdGE2j2UlG48z%2FNFA7Lm6ut%2FmdxVnQpqn0m9QuPyZqtOZ2aEHPoCcN8Wr9SjSgAVDi5GNY%2B8ZJlOT1%2FZb03FPgogNdX3iUlUpZOXZ83K2M2scCg3ss92fS4fXCFp0ssOFcSyV5hCoGkyBqezQXsl3onAJiKFZkyx1%2BW0hHXWRpAuUtZHaR%2BFFmwBV5qEu%2F528ShvQwKcOS0NUe4jMdB49jNYIwVC%2FOaUWhLY%2BnPrpvKyFXTMYGULREm5rZUYo13VUNcecs0AR0sR3Apj%2BMeEWZcxbl37%2F5Z%2FQumiGeKLRGJ8X5LgvaacnN7Tx9xdR3EsQKCf43p1Ie%2BR0FG%2Fq7HiJPHxPb4d%2By6TQKaibN6fDTeOHFPDoqMg3P%2BGAEytvp2PcyjWsXVYZaeLp93UaFK3yPx6Ze1Pyrzx1Z%2BGHrItoKSJPE08u58YqHqMSBf5J6hZ0NfMQ4lRvMinAw1W8qaKuGWLCPnkT3PY%2FhwUCBfS5hUn0b5KAyqL3OgoxjC4y8fOBjqkAacgvFH2rGLPNJZbx2LboxX1o87CVj4qomAIHKf79j6Msa6x0V%2BdI2rf4OO3pbo5PrxIbvSvIah36XZYYPjFNQD5xirX8Zhbkpd0F5rl9VzZA6ueUeB8leUEnq%2BFzAVaf5Xxp%2BZjAfouSehCBZvbYS5Z8TnCAhFRnD4pHruOSE1NmDTcu6hWV59kwu32BxyFFbQ8D48gUjVe9Z6NVsXbSgQcg0kR&X-Amz-Signature=9c67ce0fc9eb973182449e9cee3c236712b32df8799e01c184d832923feb415a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXC4OFB3%2F20260405%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260405T084155Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCPr4yTtkXr4ozNdr%2FoF3KhH5%2FYpjfeSrOwtlFn6ujMxgIhAITtXrMaGEhC5opHTHajkpES6QDyPxgVVXfwe%2F5CqUrzKogECK7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwzeqmKf%2BeXUuUcpfEq3ANXtUQRNmNM230oTh7wuVEQOX7jQvIM82ZNtApkYo8m7%2FUghCJL8SdSi6eYIM1eKkQJaVOj05pzE62ZBeH2SPnuEX7pxyr2%2BSZEUylCk9ttlQFVEUk7R0RTwSJeXPkN4YheLdGE2j2UlG48z%2FNFA7Lm6ut%2FmdxVnQpqn0m9QuPyZqtOZ2aEHPoCcN8Wr9SjSgAVDi5GNY%2B8ZJlOT1%2FZb03FPgogNdX3iUlUpZOXZ83K2M2scCg3ss92fS4fXCFp0ssOFcSyV5hCoGkyBqezQXsl3onAJiKFZkyx1%2BW0hHXWRpAuUtZHaR%2BFFmwBV5qEu%2F528ShvQwKcOS0NUe4jMdB49jNYIwVC%2FOaUWhLY%2BnPrpvKyFXTMYGULREm5rZUYo13VUNcecs0AR0sR3Apj%2BMeEWZcxbl37%2F5Z%2FQumiGeKLRGJ8X5LgvaacnN7Tx9xdR3EsQKCf43p1Ie%2BR0FG%2Fq7HiJPHxPb4d%2By6TQKaibN6fDTeOHFPDoqMg3P%2BGAEytvp2PcyjWsXVYZaeLp93UaFK3yPx6Ze1Pyrzx1Z%2BGHrItoKSJPE08u58YqHqMSBf5J6hZ0NfMQ4lRvMinAw1W8qaKuGWLCPnkT3PY%2FhwUCBfS5hUn0b5KAyqL3OgoxjC4y8fOBjqkAacgvFH2rGLPNJZbx2LboxX1o87CVj4qomAIHKf79j6Msa6x0V%2BdI2rf4OO3pbo5PrxIbvSvIah36XZYYPjFNQD5xirX8Zhbkpd0F5rl9VzZA6ueUeB8leUEnq%2BFzAVaf5Xxp%2BZjAfouSehCBZvbYS5Z8TnCAhFRnD4pHruOSE1NmDTcu6hWV59kwu32BxyFFbQ8D48gUjVe9Z6NVsXbSgQcg0kR&X-Amz-Signature=74972a301d9c96b4d5c611b2dec11c17be74c08aaf3bc1609f7eefb0d8277092&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
