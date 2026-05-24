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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46672OITBYE%2F20260524%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260524T095304Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCpSxdPyEhriEZBkPFGPA%2FqeQiKLyzmdpwIN4RZFQxkBQIhAIF%2BKUqjTqTqMhknAjCRMKjl8m2lgXc2kO2Q9YDMSejuKv8DCEoQABoMNjM3NDIzMTgzODA1IgyAp%2F2j2pNUy%2Bx3Osoq3AOSFEKLxo2q8V4bV4a2mKWXUU2h%2FNnaWYWWVwmlUxcvLD0R5g43%2BLdCkOuB99ckXszklPpCWtb6LfzL8459x3HrazT%2BQTulB%2F3hWGkquR0enWq6fg6kdf%2FUDwyzzLXQ6oqsbKGkygYkJIwSyCEiXP0S5ULc8S4vEPtTWf7XntIdRM%2Brq%2F2oORzvFjyM4YQprfoL%2BB2wqe96DFnL%2FpaFIzLnaD59qX5zAIttycmBcn2m5ku0KucZl7ua0ft3BdtqMmvjBYKDKpCbQhV0mnvYGAkXpkSOvoq75YI0LXSvBNUHpkjGlqGIxsu8%2FhE%2B9GMqzorMuo%2BEwQpZZOblzOPInGKOvl0ej6eiD6qUS1ac1NsX3T38mZeubpKVtaIJSjBH3qcuw7lI%2Bgq7KbYvOr0EW5vme0mbQoDynPoLpYkRMCNWdUUSBOiEbEHTNFP%2BXAZZsnSQ5fCqlxf5ZczYemSiv5UebYSfF2SuM0MXvJcO5A%2F9gMpgXQvzegytobeGkaa3wfGQGvg%2BiHglpGrVu68ACV1Dl4YuI3dZ5r1Wt7ZOq9fcuTPBp4rZaxLqvmHYu8s0ZRr7qBW4oiey8qqIl%2BBs2rC2WMFwNr9MyfiGBGD5j6PxK%2B4oj60sBvDvGZ9LMjDc78rQBjqkAYh63FQbcpMgKvkX3QkuTFVrkjqnjJvXPnCVMinIhvz%2BSk2C9FZ2575KRr1gkpEIy40owQNwBMDumdHvCb3hPae5aJgSBKXUTSUENHjSrLVZ740XLxSW47%2Bb2NpT0u%2FSo8qixH5GNyijIsBVGzo%2F%2BO%2BfHq5gD9SPHJ8ea%2BNCt2vg%2B7fL5V%2BBcJE3L1ENb0xwTiHW10FwxxHDqYUw5gcofZQEAy4s&X-Amz-Signature=467c97d42214766e5d9e6979916ce808331b05ac18f1681700e2349808c522f7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46672OITBYE%2F20260524%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260524T095304Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCpSxdPyEhriEZBkPFGPA%2FqeQiKLyzmdpwIN4RZFQxkBQIhAIF%2BKUqjTqTqMhknAjCRMKjl8m2lgXc2kO2Q9YDMSejuKv8DCEoQABoMNjM3NDIzMTgzODA1IgyAp%2F2j2pNUy%2Bx3Osoq3AOSFEKLxo2q8V4bV4a2mKWXUU2h%2FNnaWYWWVwmlUxcvLD0R5g43%2BLdCkOuB99ckXszklPpCWtb6LfzL8459x3HrazT%2BQTulB%2F3hWGkquR0enWq6fg6kdf%2FUDwyzzLXQ6oqsbKGkygYkJIwSyCEiXP0S5ULc8S4vEPtTWf7XntIdRM%2Brq%2F2oORzvFjyM4YQprfoL%2BB2wqe96DFnL%2FpaFIzLnaD59qX5zAIttycmBcn2m5ku0KucZl7ua0ft3BdtqMmvjBYKDKpCbQhV0mnvYGAkXpkSOvoq75YI0LXSvBNUHpkjGlqGIxsu8%2FhE%2B9GMqzorMuo%2BEwQpZZOblzOPInGKOvl0ej6eiD6qUS1ac1NsX3T38mZeubpKVtaIJSjBH3qcuw7lI%2Bgq7KbYvOr0EW5vme0mbQoDynPoLpYkRMCNWdUUSBOiEbEHTNFP%2BXAZZsnSQ5fCqlxf5ZczYemSiv5UebYSfF2SuM0MXvJcO5A%2F9gMpgXQvzegytobeGkaa3wfGQGvg%2BiHglpGrVu68ACV1Dl4YuI3dZ5r1Wt7ZOq9fcuTPBp4rZaxLqvmHYu8s0ZRr7qBW4oiey8qqIl%2BBs2rC2WMFwNr9MyfiGBGD5j6PxK%2B4oj60sBvDvGZ9LMjDc78rQBjqkAYh63FQbcpMgKvkX3QkuTFVrkjqnjJvXPnCVMinIhvz%2BSk2C9FZ2575KRr1gkpEIy40owQNwBMDumdHvCb3hPae5aJgSBKXUTSUENHjSrLVZ740XLxSW47%2Bb2NpT0u%2FSo8qixH5GNyijIsBVGzo%2F%2BO%2BfHq5gD9SPHJ8ea%2BNCt2vg%2B7fL5V%2BBcJE3L1ENb0xwTiHW10FwxxHDqYUw5gcofZQEAy4s&X-Amz-Signature=fe328b2450805b475db83b23d5ea1da5fa3754de9d892ec935617ea127afb6e6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46672OITBYE%2F20260524%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260524T095304Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCpSxdPyEhriEZBkPFGPA%2FqeQiKLyzmdpwIN4RZFQxkBQIhAIF%2BKUqjTqTqMhknAjCRMKjl8m2lgXc2kO2Q9YDMSejuKv8DCEoQABoMNjM3NDIzMTgzODA1IgyAp%2F2j2pNUy%2Bx3Osoq3AOSFEKLxo2q8V4bV4a2mKWXUU2h%2FNnaWYWWVwmlUxcvLD0R5g43%2BLdCkOuB99ckXszklPpCWtb6LfzL8459x3HrazT%2BQTulB%2F3hWGkquR0enWq6fg6kdf%2FUDwyzzLXQ6oqsbKGkygYkJIwSyCEiXP0S5ULc8S4vEPtTWf7XntIdRM%2Brq%2F2oORzvFjyM4YQprfoL%2BB2wqe96DFnL%2FpaFIzLnaD59qX5zAIttycmBcn2m5ku0KucZl7ua0ft3BdtqMmvjBYKDKpCbQhV0mnvYGAkXpkSOvoq75YI0LXSvBNUHpkjGlqGIxsu8%2FhE%2B9GMqzorMuo%2BEwQpZZOblzOPInGKOvl0ej6eiD6qUS1ac1NsX3T38mZeubpKVtaIJSjBH3qcuw7lI%2Bgq7KbYvOr0EW5vme0mbQoDynPoLpYkRMCNWdUUSBOiEbEHTNFP%2BXAZZsnSQ5fCqlxf5ZczYemSiv5UebYSfF2SuM0MXvJcO5A%2F9gMpgXQvzegytobeGkaa3wfGQGvg%2BiHglpGrVu68ACV1Dl4YuI3dZ5r1Wt7ZOq9fcuTPBp4rZaxLqvmHYu8s0ZRr7qBW4oiey8qqIl%2BBs2rC2WMFwNr9MyfiGBGD5j6PxK%2B4oj60sBvDvGZ9LMjDc78rQBjqkAYh63FQbcpMgKvkX3QkuTFVrkjqnjJvXPnCVMinIhvz%2BSk2C9FZ2575KRr1gkpEIy40owQNwBMDumdHvCb3hPae5aJgSBKXUTSUENHjSrLVZ740XLxSW47%2Bb2NpT0u%2FSo8qixH5GNyijIsBVGzo%2F%2BO%2BfHq5gD9SPHJ8ea%2BNCt2vg%2B7fL5V%2BBcJE3L1ENb0xwTiHW10FwxxHDqYUw5gcofZQEAy4s&X-Amz-Signature=af11539b59b38de33c316b26d68bc98e27bc538031cd776464588809d67b7508&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZEBBRJPV%2F20260524%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260524T095304Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCiPYigVl9Rc1ZStWtfey%2B62lyvfN%2Fwesncp4kja3OJYgIgT2Yi5mq0O2ttSbvWiGqIjcjk1rvawiyIIdTYy1nkEdwq%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDIZeBCcZ2mrY43OToCrcA8mLxmuZVTC8e2BuBv9MHBgguI%2FP51ITnXERalHkpIHJnLD116WBnbI9OOvminf792RIiWFJc8LvuqIlRsBa4AkpLdbBc9Lo1WxFPXfxHkEJO4KQ5OMX5xqypyRXfp4nijQpoWi314cwWQgh9mbFkT8ceYTyejWBL5jk3Phsz1Z%2FHA9CVMWi3XuPy6926Xr7XIMlsAEqVhBE9moMfc%2BCLGhhZzzihB8j9Y8NUmMiKcgpSvs0j9rc5qC2XAIc47wGemcnJYqJEe15kVibntUBmWW1LI74x%2FiJx6gO9HFNXxpld2TLOwjagRbTiwnHkx4XLbYzaOZDaKMSgDPk0k%2BSnfkaXfa7CCxoBTXXL%2BMZ55FeeZOMuItPZTo2MWpeVp7eLv0pVsoyVMNCsnfhwM5ifPdo%2BVzQ8BFrdmwQUEaz4eSrYStcshXpSUFzJlOzthCk9F8Qr4lB5teWNPCA2myXLCSwmd9%2F%2FFJ9ANhWAsfy3IpV%2FLWDS3ArXztbUmoCQbG7FS7%2BeF0hF1c9GeuMTRA%2FQ4%2BladCpa8c%2BP3Fiz0STGYp0PsJiL7o2j%2Bx1cxlTfySHcYwq0dUOoj%2Begj6ViGt5YiNXVySpNIC0Ku8OiHDW7bsQXdy1LFZjYCzBmijxMNrhytAGOqUBDWy%2FWgm4%2FZCJFuJQcHq%2BSsDIJjETrAA6IBschWp1pS0TORsd00OLDbdyP0kH8QLqa2tidC4GlOsHgiouUYRLQrXQ%2FwIX8nKPlbVqYeaxCP6%2F86zRTRnNy5d%2Ft8GRVsOppdxTYR4TMuhsJEwMPJ6Sa3%2FK9OJaLCmMw%2Bn9ZzyL0vRc1Gw%2BC6jRQg8aQD9pK6Mbmcebjqe7KvUPKxXOqEj4Y8yiHdcG&X-Amz-Signature=de15097a2c99f05c30f535f91fc5af3c2b802e531a2db1c98e5203bf3c8adcd9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZEBBRJPV%2F20260524%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260524T095304Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCiPYigVl9Rc1ZStWtfey%2B62lyvfN%2Fwesncp4kja3OJYgIgT2Yi5mq0O2ttSbvWiGqIjcjk1rvawiyIIdTYy1nkEdwq%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDIZeBCcZ2mrY43OToCrcA8mLxmuZVTC8e2BuBv9MHBgguI%2FP51ITnXERalHkpIHJnLD116WBnbI9OOvminf792RIiWFJc8LvuqIlRsBa4AkpLdbBc9Lo1WxFPXfxHkEJO4KQ5OMX5xqypyRXfp4nijQpoWi314cwWQgh9mbFkT8ceYTyejWBL5jk3Phsz1Z%2FHA9CVMWi3XuPy6926Xr7XIMlsAEqVhBE9moMfc%2BCLGhhZzzihB8j9Y8NUmMiKcgpSvs0j9rc5qC2XAIc47wGemcnJYqJEe15kVibntUBmWW1LI74x%2FiJx6gO9HFNXxpld2TLOwjagRbTiwnHkx4XLbYzaOZDaKMSgDPk0k%2BSnfkaXfa7CCxoBTXXL%2BMZ55FeeZOMuItPZTo2MWpeVp7eLv0pVsoyVMNCsnfhwM5ifPdo%2BVzQ8BFrdmwQUEaz4eSrYStcshXpSUFzJlOzthCk9F8Qr4lB5teWNPCA2myXLCSwmd9%2F%2FFJ9ANhWAsfy3IpV%2FLWDS3ArXztbUmoCQbG7FS7%2BeF0hF1c9GeuMTRA%2FQ4%2BladCpa8c%2BP3Fiz0STGYp0PsJiL7o2j%2Bx1cxlTfySHcYwq0dUOoj%2Begj6ViGt5YiNXVySpNIC0Ku8OiHDW7bsQXdy1LFZjYCzBmijxMNrhytAGOqUBDWy%2FWgm4%2FZCJFuJQcHq%2BSsDIJjETrAA6IBschWp1pS0TORsd00OLDbdyP0kH8QLqa2tidC4GlOsHgiouUYRLQrXQ%2FwIX8nKPlbVqYeaxCP6%2F86zRTRnNy5d%2Ft8GRVsOppdxTYR4TMuhsJEwMPJ6Sa3%2FK9OJaLCmMw%2Bn9ZzyL0vRc1Gw%2BC6jRQg8aQD9pK6Mbmcebjqe7KvUPKxXOqEj4Y8yiHdcG&X-Amz-Signature=fb10b39f516f518cc139281ee7e7148acfcc4554a5707abbc9cbfcf7a9d5cf92&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZEBBRJPV%2F20260524%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260524T095304Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCiPYigVl9Rc1ZStWtfey%2B62lyvfN%2Fwesncp4kja3OJYgIgT2Yi5mq0O2ttSbvWiGqIjcjk1rvawiyIIdTYy1nkEdwq%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDIZeBCcZ2mrY43OToCrcA8mLxmuZVTC8e2BuBv9MHBgguI%2FP51ITnXERalHkpIHJnLD116WBnbI9OOvminf792RIiWFJc8LvuqIlRsBa4AkpLdbBc9Lo1WxFPXfxHkEJO4KQ5OMX5xqypyRXfp4nijQpoWi314cwWQgh9mbFkT8ceYTyejWBL5jk3Phsz1Z%2FHA9CVMWi3XuPy6926Xr7XIMlsAEqVhBE9moMfc%2BCLGhhZzzihB8j9Y8NUmMiKcgpSvs0j9rc5qC2XAIc47wGemcnJYqJEe15kVibntUBmWW1LI74x%2FiJx6gO9HFNXxpld2TLOwjagRbTiwnHkx4XLbYzaOZDaKMSgDPk0k%2BSnfkaXfa7CCxoBTXXL%2BMZ55FeeZOMuItPZTo2MWpeVp7eLv0pVsoyVMNCsnfhwM5ifPdo%2BVzQ8BFrdmwQUEaz4eSrYStcshXpSUFzJlOzthCk9F8Qr4lB5teWNPCA2myXLCSwmd9%2F%2FFJ9ANhWAsfy3IpV%2FLWDS3ArXztbUmoCQbG7FS7%2BeF0hF1c9GeuMTRA%2FQ4%2BladCpa8c%2BP3Fiz0STGYp0PsJiL7o2j%2Bx1cxlTfySHcYwq0dUOoj%2Begj6ViGt5YiNXVySpNIC0Ku8OiHDW7bsQXdy1LFZjYCzBmijxMNrhytAGOqUBDWy%2FWgm4%2FZCJFuJQcHq%2BSsDIJjETrAA6IBschWp1pS0TORsd00OLDbdyP0kH8QLqa2tidC4GlOsHgiouUYRLQrXQ%2FwIX8nKPlbVqYeaxCP6%2F86zRTRnNy5d%2Ft8GRVsOppdxTYR4TMuhsJEwMPJ6Sa3%2FK9OJaLCmMw%2Bn9ZzyL0vRc1Gw%2BC6jRQg8aQD9pK6Mbmcebjqe7KvUPKxXOqEj4Y8yiHdcG&X-Amz-Signature=c5ccef1673615475e98468ae5de0b373130299e1b79b3642ef2c7cb2327d87eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZEBBRJPV%2F20260524%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260524T095304Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCiPYigVl9Rc1ZStWtfey%2B62lyvfN%2Fwesncp4kja3OJYgIgT2Yi5mq0O2ttSbvWiGqIjcjk1rvawiyIIdTYy1nkEdwq%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDIZeBCcZ2mrY43OToCrcA8mLxmuZVTC8e2BuBv9MHBgguI%2FP51ITnXERalHkpIHJnLD116WBnbI9OOvminf792RIiWFJc8LvuqIlRsBa4AkpLdbBc9Lo1WxFPXfxHkEJO4KQ5OMX5xqypyRXfp4nijQpoWi314cwWQgh9mbFkT8ceYTyejWBL5jk3Phsz1Z%2FHA9CVMWi3XuPy6926Xr7XIMlsAEqVhBE9moMfc%2BCLGhhZzzihB8j9Y8NUmMiKcgpSvs0j9rc5qC2XAIc47wGemcnJYqJEe15kVibntUBmWW1LI74x%2FiJx6gO9HFNXxpld2TLOwjagRbTiwnHkx4XLbYzaOZDaKMSgDPk0k%2BSnfkaXfa7CCxoBTXXL%2BMZ55FeeZOMuItPZTo2MWpeVp7eLv0pVsoyVMNCsnfhwM5ifPdo%2BVzQ8BFrdmwQUEaz4eSrYStcshXpSUFzJlOzthCk9F8Qr4lB5teWNPCA2myXLCSwmd9%2F%2FFJ9ANhWAsfy3IpV%2FLWDS3ArXztbUmoCQbG7FS7%2BeF0hF1c9GeuMTRA%2FQ4%2BladCpa8c%2BP3Fiz0STGYp0PsJiL7o2j%2Bx1cxlTfySHcYwq0dUOoj%2Begj6ViGt5YiNXVySpNIC0Ku8OiHDW7bsQXdy1LFZjYCzBmijxMNrhytAGOqUBDWy%2FWgm4%2FZCJFuJQcHq%2BSsDIJjETrAA6IBschWp1pS0TORsd00OLDbdyP0kH8QLqa2tidC4GlOsHgiouUYRLQrXQ%2FwIX8nKPlbVqYeaxCP6%2F86zRTRnNy5d%2Ft8GRVsOppdxTYR4TMuhsJEwMPJ6Sa3%2FK9OJaLCmMw%2Bn9ZzyL0vRc1Gw%2BC6jRQg8aQD9pK6Mbmcebjqe7KvUPKxXOqEj4Y8yiHdcG&X-Amz-Signature=d1c36037aa874a9de3d4559661b437b9485ae117e3e5fb93801772566d306de0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V7GPY7MG%2F20260524%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260524T095305Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIATsIqlh6qeW%2FhvKLguXmAJzhWPmkPAB9zxiaPNh3HoAAiEAjP9Ebl3CHxCqbzbhFWfA%2Bn2AV7VUWN84KAtaYH2%2BE7oq%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDH4O3hIWRdLYd2hnrircA5E9Y8azItJ6PiGGxIr2sX%2BW5Pk4BsXnWfaQnpc%2F5ODhLG15WbSgVN3ILpOz1D0080Fsi53%2BPvokzwmjYVdPxz3bUS82n2%2FS7ZrxMkh%2FIBRkNMOgTU9CdRGP69vHhlSwLZ%2F4eZh%2B9iiyea7167wiQIU7DYHMqc9AuLUwtQd70kMpvttg2V6HltpNBZWPoDsaXRLVyhQPNspTeHEXpAGv%2FfZA%2BpY8znBpdfWXa%2F39DcKPjj%2FLuDohDTzjzefoVPpdxgDE6zpC526Br4AUS3OCFNrqxqQDT6zHEbp%2F6wcXaIdKYY3jc99oH1VDuwQoHw5CIuij0yQxiHDm6leLgKpEc1e54%2FR8niAvl8rbGICHFZmzucPwuYEEH%2BbhgCYgqr5eQPHnD7g0sf97jCBgpguyHaKhaGcgtxptbxoJivKyDFAOBqH6wcPAbBrT%2FCMVOZdVwonGLn%2BIEDOgWTdwgFC5lL3V%2FUDoTaSDjF%2F6SR3vLMZa8yJSarJRTip3jfZUR%2BGP847QInVsdms1po3PL9JcWs7pfCDtkvkmhkVhLmOTc2AXHqQmXI1KW1YpgIU%2BuzP21nuKTDnuUjHjcDpwr7wOs8uNKPGz%2FJXD1tSy%2FbzjUZ0TMB%2FQ7sYay7wlzZ5dMMvmytAGOqUBYfpj9%2BU5FMtF2gCpkTwu6PzZ6UsDmI7jhf8X9Ch0kPK4PGp%2FYoS%2FNl51Md%2BvA6vKA0xrRCN32PHc11b%2FO%2Bg5SFGajgs%2B5RqWKBGGFtkYOuVM7RZkOTDMQhBAFgWzOoZTaM3glJTFGZMZKcAqjQYgvYsoWDM5iOqKSleewfmtaBUmgWXR2fiDnfVDBiqC8mJFIQceIMWmti2UVWEW45sBM%2FnVfoAq&X-Amz-Signature=7b548177439a5cccdf1c43d1c1904a86da513de55e3094f03e29e966595b40d1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZGNJ5ETL%2F20260524%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260524T095305Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCIhlOee%2Ba72ufk0RlmAWsw9w4lCwYe4Nlnsd0RLuk9IwIgKTCyfET0R4diqS%2F6CEvkU2tm3VKOS7WF%2Fl%2BRTIFDO9Iq%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDJP7ZZ3t%2FwgPcaC9LSrcA7hKBnIBBjFjBPm%2FuEtxQER0%2BJib%2FQ7V%2FeaVJ9lIozxigFeBwYSVmqrICVdOHWxTbRVOzh7hT%2BsrV%2FsbNoNWmwUVL0KfKCXo%2BJGKoZz5EDw36b%2Fx2Zzz%2F8oFXeWrFmSrjnaKMrFJuWSF%2BEooziH0TfWr63uKnzbv2TMBSgVGeLSjGnzcnoNG9m%2BB8FSqh42RX3mQaOOQM%2F5pv3rzgQSPZH52BPCxgFB4%2BIm7%2BzzREYIQ60gBtUH9Jiss7pcMShZy547hQUDNmJeesTMJg%2F3woDX2jUUgz8%2Ba9rsibS7O8sQJcRgOQ%2BG7KBjnNM2UvOJasWKhIaUG5uRup4TYBDv79BlkPxyaM1CuLXpGm3nNXWU9N4pDnQzVsepM2Nvu6hwQChcW9KoSBwSCsg%2BiVPbjtlPYY8aKuOPvhL812YjPJfbf26dAj84Yh%2Bs52fW0Ml4mgUXDSbGAMC7LRHWkAcSsmhv5tWb%2B0VyhXGjHF0Lr%2BuCAneQnKu%2BRK0%2BW0wlbMgRG%2BU760sorVoh7KtrzSNVPrbg0B6rP%2Fmjv8IwrOr2hmbY9fe69FRMrFvIp1iocfjk7%2BmMAs31puGKwm5zgsXXP2O8VS939i4DI5T%2BJPK9siuaK9Q8SjR5tUD4PxOAkMLHnytAGOqUBFYkaHRjgZ3HKYtOoljxGXPYVMvXuXj4Gcpi8odmkLtTn0AH2c3FD3h9iD1hZIX8DE1JzWCS56%2BqCkSqedbbHsHF4XsnYMi2%2BDpTBbXb2bAQFpjHDi7QEVlBzw6FGV1uQnyeFbGbeNMHhSlRSQSmF6hmgBdcOX7kGngozSzju%2FJRXAjEq%2FqAda6GEBMzIDwbUWTzHoHm6JKDewhXO0LDk4uza6yfh&X-Amz-Signature=f4f810ef1f090bb41773af1e5552cb0d2a8fd25c95b2504f8778ed817b8beb77&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZGNJ5ETL%2F20260524%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260524T095305Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCIhlOee%2Ba72ufk0RlmAWsw9w4lCwYe4Nlnsd0RLuk9IwIgKTCyfET0R4diqS%2F6CEvkU2tm3VKOS7WF%2Fl%2BRTIFDO9Iq%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDJP7ZZ3t%2FwgPcaC9LSrcA7hKBnIBBjFjBPm%2FuEtxQER0%2BJib%2FQ7V%2FeaVJ9lIozxigFeBwYSVmqrICVdOHWxTbRVOzh7hT%2BsrV%2FsbNoNWmwUVL0KfKCXo%2BJGKoZz5EDw36b%2Fx2Zzz%2F8oFXeWrFmSrjnaKMrFJuWSF%2BEooziH0TfWr63uKnzbv2TMBSgVGeLSjGnzcnoNG9m%2BB8FSqh42RX3mQaOOQM%2F5pv3rzgQSPZH52BPCxgFB4%2BIm7%2BzzREYIQ60gBtUH9Jiss7pcMShZy547hQUDNmJeesTMJg%2F3woDX2jUUgz8%2Ba9rsibS7O8sQJcRgOQ%2BG7KBjnNM2UvOJasWKhIaUG5uRup4TYBDv79BlkPxyaM1CuLXpGm3nNXWU9N4pDnQzVsepM2Nvu6hwQChcW9KoSBwSCsg%2BiVPbjtlPYY8aKuOPvhL812YjPJfbf26dAj84Yh%2Bs52fW0Ml4mgUXDSbGAMC7LRHWkAcSsmhv5tWb%2B0VyhXGjHF0Lr%2BuCAneQnKu%2BRK0%2BW0wlbMgRG%2BU760sorVoh7KtrzSNVPrbg0B6rP%2Fmjv8IwrOr2hmbY9fe69FRMrFvIp1iocfjk7%2BmMAs31puGKwm5zgsXXP2O8VS939i4DI5T%2BJPK9siuaK9Q8SjR5tUD4PxOAkMLHnytAGOqUBFYkaHRjgZ3HKYtOoljxGXPYVMvXuXj4Gcpi8odmkLtTn0AH2c3FD3h9iD1hZIX8DE1JzWCS56%2BqCkSqedbbHsHF4XsnYMi2%2BDpTBbXb2bAQFpjHDi7QEVlBzw6FGV1uQnyeFbGbeNMHhSlRSQSmF6hmgBdcOX7kGngozSzju%2FJRXAjEq%2FqAda6GEBMzIDwbUWTzHoHm6JKDewhXO0LDk4uza6yfh&X-Amz-Signature=b531060cf278daeb7a2a0b39f63f54b9405c4a7cb06110bc727df9dd2a620846&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
