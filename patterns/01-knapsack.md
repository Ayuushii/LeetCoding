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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YLGUX5FQ%2F20261121%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261121T155427Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDMz3dJqrF1A0kYFQXVX2d1xOGs9q76DvyCqg%2BgIrOeigIgEmGj81KI6GAPHdMDOwd61T%2F3VPr3Wnd99EjzTR68lxIq%2FwMISBAAGgw2Mzc0MjMxODM4MDUiDMJJMHSiNsZG8UQkuSrcA3nWPmU74JyeGCQrLKceW7myJBud6dCJ05zQP77QRCRg9agn0t1tejHUSZ%2FE7SGs7CY%2FaHk9E0uPPa%2FuRLXo0xRKmwmDaHVhI6UG1kR1MTjduvwleTZFhDieh9C9Rx8o6IlIp3ZoF4xN5L8IV8pKsAMKsE5Pz2Rg6N4ol%2FxbIXL49Z%2BQREaquuolFGU3CVkgWbcVXctmXBkTsAUra4%2FHGGNsMxmBu1dySE9%2BhIsdoMdhUHiLcXYFseDilAIJ0MMHG83MZQdtbZ7s1EOag15d5Dib090m0k%2FOMwdqwL6YmmS13btBcxKjNi3wmsgiIfhdnsHhNPcvF3x58eWkbA0yiGfHXayGkE60hN3xxsB7VusVsB%2F6ajHZBnNXE3Lt803mE8S7344gRoMZzy2X4PxCVO3J7i6af85q7J4%2F7Yrysw%2BY0%2Bpby8EGal1e%2Fa1jdE1UD%2F9Z6QiOEWoPVs8j9crKvHEC8EzG8kywxjo6PkZ%2FXHQ11vCpErpcYd4diJ5a8nCR4c3iAn0lmdmIRC%2FZkpPorJUq5bWMtC8q4wOjCr49Dzir%2FdNVqkrh%2Fv9TuvTUHG%2B0x9souvt9BLHmo0XFuNJXx9xsE9VnthYXnKPaLlMZVc0RHfuSqOQKRBuuE5iiMLL8htgGOqUBuOmyYpLkUN3v7%2Bm2RoRGqHzuQkHdN3S4yH5SXWfTJkAPj%2Fu8DLDfLu6bslGtOR3Irz1P3uYOuVkn2gQRvywMyUNJxR8Pb%2FI5mDXb8LSqt1bIc1aLUpjRBzuP3ZJ8nuAyzxDPiIrsR95Gwok1NiFlLrpDSL77fYWxgKetNp%2FLLkq2DWEl8VX6VsLIIugeD3OsJPLVMP%2B85w2UNxvm2T3nxyNEip%2Bk&X-Amz-Signature=6226c400509f3bf887b305bee1a4e2f5747368a15e7a2e5e6c73c71137a0039b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YLGUX5FQ%2F20261121%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261121T155427Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDMz3dJqrF1A0kYFQXVX2d1xOGs9q76DvyCqg%2BgIrOeigIgEmGj81KI6GAPHdMDOwd61T%2F3VPr3Wnd99EjzTR68lxIq%2FwMISBAAGgw2Mzc0MjMxODM4MDUiDMJJMHSiNsZG8UQkuSrcA3nWPmU74JyeGCQrLKceW7myJBud6dCJ05zQP77QRCRg9agn0t1tejHUSZ%2FE7SGs7CY%2FaHk9E0uPPa%2FuRLXo0xRKmwmDaHVhI6UG1kR1MTjduvwleTZFhDieh9C9Rx8o6IlIp3ZoF4xN5L8IV8pKsAMKsE5Pz2Rg6N4ol%2FxbIXL49Z%2BQREaquuolFGU3CVkgWbcVXctmXBkTsAUra4%2FHGGNsMxmBu1dySE9%2BhIsdoMdhUHiLcXYFseDilAIJ0MMHG83MZQdtbZ7s1EOag15d5Dib090m0k%2FOMwdqwL6YmmS13btBcxKjNi3wmsgiIfhdnsHhNPcvF3x58eWkbA0yiGfHXayGkE60hN3xxsB7VusVsB%2F6ajHZBnNXE3Lt803mE8S7344gRoMZzy2X4PxCVO3J7i6af85q7J4%2F7Yrysw%2BY0%2Bpby8EGal1e%2Fa1jdE1UD%2F9Z6QiOEWoPVs8j9crKvHEC8EzG8kywxjo6PkZ%2FXHQ11vCpErpcYd4diJ5a8nCR4c3iAn0lmdmIRC%2FZkpPorJUq5bWMtC8q4wOjCr49Dzir%2FdNVqkrh%2Fv9TuvTUHG%2B0x9souvt9BLHmo0XFuNJXx9xsE9VnthYXnKPaLlMZVc0RHfuSqOQKRBuuE5iiMLL8htgGOqUBuOmyYpLkUN3v7%2Bm2RoRGqHzuQkHdN3S4yH5SXWfTJkAPj%2Fu8DLDfLu6bslGtOR3Irz1P3uYOuVkn2gQRvywMyUNJxR8Pb%2FI5mDXb8LSqt1bIc1aLUpjRBzuP3ZJ8nuAyzxDPiIrsR95Gwok1NiFlLrpDSL77fYWxgKetNp%2FLLkq2DWEl8VX6VsLIIugeD3OsJPLVMP%2B85w2UNxvm2T3nxyNEip%2Bk&X-Amz-Signature=c07cd5a320fd2db4890a9c15157c3b91e569424a2291d855b442da21ead573f2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YLGUX5FQ%2F20261121%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261121T155427Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDMz3dJqrF1A0kYFQXVX2d1xOGs9q76DvyCqg%2BgIrOeigIgEmGj81KI6GAPHdMDOwd61T%2F3VPr3Wnd99EjzTR68lxIq%2FwMISBAAGgw2Mzc0MjMxODM4MDUiDMJJMHSiNsZG8UQkuSrcA3nWPmU74JyeGCQrLKceW7myJBud6dCJ05zQP77QRCRg9agn0t1tejHUSZ%2FE7SGs7CY%2FaHk9E0uPPa%2FuRLXo0xRKmwmDaHVhI6UG1kR1MTjduvwleTZFhDieh9C9Rx8o6IlIp3ZoF4xN5L8IV8pKsAMKsE5Pz2Rg6N4ol%2FxbIXL49Z%2BQREaquuolFGU3CVkgWbcVXctmXBkTsAUra4%2FHGGNsMxmBu1dySE9%2BhIsdoMdhUHiLcXYFseDilAIJ0MMHG83MZQdtbZ7s1EOag15d5Dib090m0k%2FOMwdqwL6YmmS13btBcxKjNi3wmsgiIfhdnsHhNPcvF3x58eWkbA0yiGfHXayGkE60hN3xxsB7VusVsB%2F6ajHZBnNXE3Lt803mE8S7344gRoMZzy2X4PxCVO3J7i6af85q7J4%2F7Yrysw%2BY0%2Bpby8EGal1e%2Fa1jdE1UD%2F9Z6QiOEWoPVs8j9crKvHEC8EzG8kywxjo6PkZ%2FXHQ11vCpErpcYd4diJ5a8nCR4c3iAn0lmdmIRC%2FZkpPorJUq5bWMtC8q4wOjCr49Dzir%2FdNVqkrh%2Fv9TuvTUHG%2B0x9souvt9BLHmo0XFuNJXx9xsE9VnthYXnKPaLlMZVc0RHfuSqOQKRBuuE5iiMLL8htgGOqUBuOmyYpLkUN3v7%2Bm2RoRGqHzuQkHdN3S4yH5SXWfTJkAPj%2Fu8DLDfLu6bslGtOR3Irz1P3uYOuVkn2gQRvywMyUNJxR8Pb%2FI5mDXb8LSqt1bIc1aLUpjRBzuP3ZJ8nuAyzxDPiIrsR95Gwok1NiFlLrpDSL77fYWxgKetNp%2FLLkq2DWEl8VX6VsLIIugeD3OsJPLVMP%2B85w2UNxvm2T3nxyNEip%2Bk&X-Amz-Signature=6f2997cf35e2498d7343ed82a5774f0c0b2c8a28aa0a8bd4a011980dbc8e45d3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663HBH2O5X%2F20261121%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261121T155428Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHsaCXVzLXdlc3QtMiJHMEUCIBb4bNyvdLzf1d92tA0o6OrzlcTKpO9HDkjq%2FZFimBKkAiEAyIgQOBye6TnWvB%2B7X2RyvHEw2ms6paJPalxlWNheWToq%2FwMIRBAAGgw2Mzc0MjMxODM4MDUiDP%2FQQ9%2FA0Qscrw3F3ircA1U2aIJjOmfUaaQo5H%2BlFwzeaBFhjxlJIVp2qybq4YTesysNEIyuh4XxDjcLtknB1SC2353pXuFZo5xDDYjk0zj1ZwGH4AfvARyUDVr%2FhZJYg%2BCLcw%2B24rp3n4ESlfNajnzB3P9sB%2FukwtQ31AJRN6k1FuUlplxkVU7fgFOmqTd%2BNNnPg7BTtcLg3Nzm2jMTwYGOFqLZLUL%2FKLiCmXZy%2F%2FwGxIwBP9M0dE7TTan%2BuQPxoxQkCD63iz5BVeOCKQtWRWcQKs5aKElQ1lRJsChaU1qlo6BhlYTHv6cHu%2FSB54U9L8ept7UzLL3x1E2CaOozDRhPIpa1kelNwlm91bTf7jIXsHnT%2BcEP%2FUI1Zir5gytGra6TAxBRmO0TCxVUwVVB%2FWRcEX5Sx3NCU1vkfnFklgfL9I7aJpxcnwOMiwOYCoI0MMkfwN4H9uDfKsk37Eq6v2Dd3S%2FeGFPUd6qJDCogh8hSCN4dM%2FPLJuK8mOzreSO6LAwiG3WjRRF4BG5VK6dfxuls84EHkCrVDMxY1y7WNwdDAmfe9Fhg%2FnJw6EECru9WOpQmhWKTMYZCFwi%2BWmVuOX%2BGJBpc6Lwe7C02OnLg5M44WKKXa7sjHLSk5VBU0m5L4MT3ljxvifM4QEQGMIb5hdgGOqUB9zMoZtuFPXl8ioOGMPsNpfhLG3QXf%2BYlJS69MOlKY9AR4m2AldNvpZO0ITfMbBHYDOqpbd5fXP9J4AqlLKG1DhE1VR110ikEdH3YeCPkG6C2eROZ7PLDFaJkvw25X54Tcz5yU37nMVCSOxXoBncHkvp7ZHHNLsyCC4XQanHu23IGwlHBGQ0Mbr9MW4ei3L05Fqrz%2B7arwmnZtRHB6Bu2n1gSKMBo&X-Amz-Signature=40dd051344498cde61299c80ef8be9f5bba1e70794ab24a8c8223a5c6fc4e2d9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663HBH2O5X%2F20261121%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261121T155428Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHsaCXVzLXdlc3QtMiJHMEUCIBb4bNyvdLzf1d92tA0o6OrzlcTKpO9HDkjq%2FZFimBKkAiEAyIgQOBye6TnWvB%2B7X2RyvHEw2ms6paJPalxlWNheWToq%2FwMIRBAAGgw2Mzc0MjMxODM4MDUiDP%2FQQ9%2FA0Qscrw3F3ircA1U2aIJjOmfUaaQo5H%2BlFwzeaBFhjxlJIVp2qybq4YTesysNEIyuh4XxDjcLtknB1SC2353pXuFZo5xDDYjk0zj1ZwGH4AfvARyUDVr%2FhZJYg%2BCLcw%2B24rp3n4ESlfNajnzB3P9sB%2FukwtQ31AJRN6k1FuUlplxkVU7fgFOmqTd%2BNNnPg7BTtcLg3Nzm2jMTwYGOFqLZLUL%2FKLiCmXZy%2F%2FwGxIwBP9M0dE7TTan%2BuQPxoxQkCD63iz5BVeOCKQtWRWcQKs5aKElQ1lRJsChaU1qlo6BhlYTHv6cHu%2FSB54U9L8ept7UzLL3x1E2CaOozDRhPIpa1kelNwlm91bTf7jIXsHnT%2BcEP%2FUI1Zir5gytGra6TAxBRmO0TCxVUwVVB%2FWRcEX5Sx3NCU1vkfnFklgfL9I7aJpxcnwOMiwOYCoI0MMkfwN4H9uDfKsk37Eq6v2Dd3S%2FeGFPUd6qJDCogh8hSCN4dM%2FPLJuK8mOzreSO6LAwiG3WjRRF4BG5VK6dfxuls84EHkCrVDMxY1y7WNwdDAmfe9Fhg%2FnJw6EECru9WOpQmhWKTMYZCFwi%2BWmVuOX%2BGJBpc6Lwe7C02OnLg5M44WKKXa7sjHLSk5VBU0m5L4MT3ljxvifM4QEQGMIb5hdgGOqUB9zMoZtuFPXl8ioOGMPsNpfhLG3QXf%2BYlJS69MOlKY9AR4m2AldNvpZO0ITfMbBHYDOqpbd5fXP9J4AqlLKG1DhE1VR110ikEdH3YeCPkG6C2eROZ7PLDFaJkvw25X54Tcz5yU37nMVCSOxXoBncHkvp7ZHHNLsyCC4XQanHu23IGwlHBGQ0Mbr9MW4ei3L05Fqrz%2B7arwmnZtRHB6Bu2n1gSKMBo&X-Amz-Signature=89940d2d29720773dc75273871c450a02a7c4035c82944cb87869d1226fcbb4b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663HBH2O5X%2F20261121%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261121T155428Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHsaCXVzLXdlc3QtMiJHMEUCIBb4bNyvdLzf1d92tA0o6OrzlcTKpO9HDkjq%2FZFimBKkAiEAyIgQOBye6TnWvB%2B7X2RyvHEw2ms6paJPalxlWNheWToq%2FwMIRBAAGgw2Mzc0MjMxODM4MDUiDP%2FQQ9%2FA0Qscrw3F3ircA1U2aIJjOmfUaaQo5H%2BlFwzeaBFhjxlJIVp2qybq4YTesysNEIyuh4XxDjcLtknB1SC2353pXuFZo5xDDYjk0zj1ZwGH4AfvARyUDVr%2FhZJYg%2BCLcw%2B24rp3n4ESlfNajnzB3P9sB%2FukwtQ31AJRN6k1FuUlplxkVU7fgFOmqTd%2BNNnPg7BTtcLg3Nzm2jMTwYGOFqLZLUL%2FKLiCmXZy%2F%2FwGxIwBP9M0dE7TTan%2BuQPxoxQkCD63iz5BVeOCKQtWRWcQKs5aKElQ1lRJsChaU1qlo6BhlYTHv6cHu%2FSB54U9L8ept7UzLL3x1E2CaOozDRhPIpa1kelNwlm91bTf7jIXsHnT%2BcEP%2FUI1Zir5gytGra6TAxBRmO0TCxVUwVVB%2FWRcEX5Sx3NCU1vkfnFklgfL9I7aJpxcnwOMiwOYCoI0MMkfwN4H9uDfKsk37Eq6v2Dd3S%2FeGFPUd6qJDCogh8hSCN4dM%2FPLJuK8mOzreSO6LAwiG3WjRRF4BG5VK6dfxuls84EHkCrVDMxY1y7WNwdDAmfe9Fhg%2FnJw6EECru9WOpQmhWKTMYZCFwi%2BWmVuOX%2BGJBpc6Lwe7C02OnLg5M44WKKXa7sjHLSk5VBU0m5L4MT3ljxvifM4QEQGMIb5hdgGOqUB9zMoZtuFPXl8ioOGMPsNpfhLG3QXf%2BYlJS69MOlKY9AR4m2AldNvpZO0ITfMbBHYDOqpbd5fXP9J4AqlLKG1DhE1VR110ikEdH3YeCPkG6C2eROZ7PLDFaJkvw25X54Tcz5yU37nMVCSOxXoBncHkvp7ZHHNLsyCC4XQanHu23IGwlHBGQ0Mbr9MW4ei3L05Fqrz%2B7arwmnZtRHB6Bu2n1gSKMBo&X-Amz-Signature=eaca1e4678e969c62e47b11b2ab859352158668ac194ea9e36d3fdb136bce58d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663HBH2O5X%2F20261121%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261121T155428Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHsaCXVzLXdlc3QtMiJHMEUCIBb4bNyvdLzf1d92tA0o6OrzlcTKpO9HDkjq%2FZFimBKkAiEAyIgQOBye6TnWvB%2B7X2RyvHEw2ms6paJPalxlWNheWToq%2FwMIRBAAGgw2Mzc0MjMxODM4MDUiDP%2FQQ9%2FA0Qscrw3F3ircA1U2aIJjOmfUaaQo5H%2BlFwzeaBFhjxlJIVp2qybq4YTesysNEIyuh4XxDjcLtknB1SC2353pXuFZo5xDDYjk0zj1ZwGH4AfvARyUDVr%2FhZJYg%2BCLcw%2B24rp3n4ESlfNajnzB3P9sB%2FukwtQ31AJRN6k1FuUlplxkVU7fgFOmqTd%2BNNnPg7BTtcLg3Nzm2jMTwYGOFqLZLUL%2FKLiCmXZy%2F%2FwGxIwBP9M0dE7TTan%2BuQPxoxQkCD63iz5BVeOCKQtWRWcQKs5aKElQ1lRJsChaU1qlo6BhlYTHv6cHu%2FSB54U9L8ept7UzLL3x1E2CaOozDRhPIpa1kelNwlm91bTf7jIXsHnT%2BcEP%2FUI1Zir5gytGra6TAxBRmO0TCxVUwVVB%2FWRcEX5Sx3NCU1vkfnFklgfL9I7aJpxcnwOMiwOYCoI0MMkfwN4H9uDfKsk37Eq6v2Dd3S%2FeGFPUd6qJDCogh8hSCN4dM%2FPLJuK8mOzreSO6LAwiG3WjRRF4BG5VK6dfxuls84EHkCrVDMxY1y7WNwdDAmfe9Fhg%2FnJw6EECru9WOpQmhWKTMYZCFwi%2BWmVuOX%2BGJBpc6Lwe7C02OnLg5M44WKKXa7sjHLSk5VBU0m5L4MT3ljxvifM4QEQGMIb5hdgGOqUB9zMoZtuFPXl8ioOGMPsNpfhLG3QXf%2BYlJS69MOlKY9AR4m2AldNvpZO0ITfMbBHYDOqpbd5fXP9J4AqlLKG1DhE1VR110ikEdH3YeCPkG6C2eROZ7PLDFaJkvw25X54Tcz5yU37nMVCSOxXoBncHkvp7ZHHNLsyCC4XQanHu23IGwlHBGQ0Mbr9MW4ei3L05Fqrz%2B7arwmnZtRHB6Bu2n1gSKMBo&X-Amz-Signature=3b637b9ffbc89c7d934e135774cc6903d8f373dc0ac707c91837464312cd824c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XZZ3HFGQ%2F20261121%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261121T155428Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCQoT44n%2FintYSWgJS68wXT%2FdzgS8klcuNYuCIXNoO6BgIhAIvY6psoheFT6FW2AsSRb9IobQ2PNYKvBJzR8RYjxLzeKv8DCEgQABoMNjM3NDIzMTgzODA1Igy6VwD6tFLO6Q55Akkq3APQd9d7Ir2ExaqOi9S0ojCfpgKEw6do979C30RoFx%2Bi5sLD1cPSeqiJ%2BOiIYzvxa%2Bb85s3glQel1d1tepEJNGTcw1Kfxz5XXclELlx1WMb2ya%2BVLDX%2BB8R7TccWUyVojP9rF87jV43kBy7EyHudydbt7sFTTM5sB%2F8gtuW61jo87LzVsz4SGdNeE9HMT2uoCJ0PyQTywcNEL5pMp%2FWhnYexKUwdJXX9S%2FslKCqRLZgiNfNIf9wI%2BbpC%2BlaKUtNGat6WCFM464DnBX3ddMDPtvKIMKfGY4EuJRQIPxBfjMIFmRxaZRr3wcgP%2FJGDJ74GHMcoGSZGbJ5SolcPJh9uQwECZweKdSWY26E2G%2Fzvs4Re7%2BjOs9MLLfT9k3kKS4zJ0bK8oZwDOhlWvt16UnofjvfFy7oy%2BH1P3hqXCohXIkFIAO6EvZetW%2F9F6fg92y%2FiRbvitwI1sf956M9B2g9jxTgR3BLSEA6mBQo8GJtNa6Zg6NVHIweXfYWfVzQ%2FPTZMqLXi3UB1pTwG3GXEOGsc3NBPQ3rx03i7kvhca0RArFBQI9YOofSIN3mOmk1Z0xqhl8v%2Bh1we%2F5ajx8zABn6rw0NBR7ZSXr7M6l8jCwgCdrB1kcrBHGUEO%2FeOpCkcxjCe%2B4bYBjqkAVbZcNznLDHaHsj0B77UDsSVcqPP1WYLT2wPG0Wa9yFgZiSw4vXoUc%2BWJGH0FBi1c6mmFZbm%2BBwempO4p6qQRr6%2BfxHLlmlMpQmpVxcI%2BwuiWTME3%2BBlKjwBV6VgY3YOZTfunwl5uHwEufYdmJrdhbqbgUOpn1bBieSBHM6hDwi0bYLy0gkDuaaO63emLEqXUwZeKMF%2FFAveN1kySXnsCuaUZZx6&X-Amz-Signature=5546f079fe9d49daf1db8ec9d79fb069a0cb80656561e47e7ba726b3e3de0cbc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665A4WRPA3%2F20261121%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261121T155428Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDiH6VUBIZUvmmuVNl04rF0Y07Va5ZgTz%2Bwmz%2FSfZ0XGQIhALFZLCzcNCBgvJci%2FisSHwWvEvSsGJEd566l%2BsBptVP6Kv8DCEgQABoMNjM3NDIzMTgzODA1Igx4GzM%2BhnyymoIF5Psq3AOs60wvmJhrXL5qZ2zEU7JDBt%2Fy4JQWiovcaC7VyJCfQTl2FLyavhpL6MTlzz1xfVouIVTCbWJPNESP2wnOYwbiaQlCZYMHrLEQxmiuQKHJqciwJGqqHxSye7V8CtWuaTtFmI1XwfjkHRBx0ZFLIcuKwhH2sWJkiC2xi%2Bm2ZOWQP8qRM88Srud1tvf3quU8LtwAdf9qX4I7v1DESlcXLX1Mp%2F4tzsBIG0O%2BBzBRD23kXr0izQcIDyzI53D6HMV6XOePtCLvKpivfuuZFXwVne08xZ3loG7E2toTV3q7MT3xJK3uGT2n5bXiBo8D9faZD0vy0hFkjfT2DFCa%2FYRmK7R3tZLLNBN4%2F9fvLJyf0vodpXsXKdC0Qrp%2FOgQgIWZx4KjgxMWgo4L7%2FBLuHeDUq08WecL5i3Uy0%2FvyI4qzaMVfxLq7luS2wv40lLTKPb9fOGpkcrULt7A6DNK0NzfITrRN7M638P%2BDDGwd2RJJlHcxGLmvq5Q8%2BECl6%2BJ8CZZcu%2BW30j4LZWRCJyMk3GQ99x58XC27DCPiki3Ph5Leml9OFKRaWUdOU2AFlg7PgXGQH8b2p9c4hcbwQYZAozsgim5d%2FLe%2BFcsd6dKOioRK2NwpBqBLZWkFCun9MFeIDDCo%2B4bYBjqkAcpwKVDsBTEeYnq%2FPqXSWy60imtg2JAw51MFPfquWLVxdNNt6VKszee8It16LaZPP%2BKdVBzAvZGZMTALJEKQDiut9TEzDU6j6gcj%2FvtnYcUbTFYj4ve4Nos072uxsPrMTaYZKNW8uGDFaM2PcZ2%2FxbejcMrTlvCptK9Sb1dWH9R6DsBL6HX6RYpr%2FLXzevUo1yQ5CFE84KeGxxbbgc44HdTyh3Lg&X-Amz-Signature=a8822039e925303ddda428227c15c43ccfd96818ce287a6623295e90c6112287&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665A4WRPA3%2F20261121%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261121T155428Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDiH6VUBIZUvmmuVNl04rF0Y07Va5ZgTz%2Bwmz%2FSfZ0XGQIhALFZLCzcNCBgvJci%2FisSHwWvEvSsGJEd566l%2BsBptVP6Kv8DCEgQABoMNjM3NDIzMTgzODA1Igx4GzM%2BhnyymoIF5Psq3AOs60wvmJhrXL5qZ2zEU7JDBt%2Fy4JQWiovcaC7VyJCfQTl2FLyavhpL6MTlzz1xfVouIVTCbWJPNESP2wnOYwbiaQlCZYMHrLEQxmiuQKHJqciwJGqqHxSye7V8CtWuaTtFmI1XwfjkHRBx0ZFLIcuKwhH2sWJkiC2xi%2Bm2ZOWQP8qRM88Srud1tvf3quU8LtwAdf9qX4I7v1DESlcXLX1Mp%2F4tzsBIG0O%2BBzBRD23kXr0izQcIDyzI53D6HMV6XOePtCLvKpivfuuZFXwVne08xZ3loG7E2toTV3q7MT3xJK3uGT2n5bXiBo8D9faZD0vy0hFkjfT2DFCa%2FYRmK7R3tZLLNBN4%2F9fvLJyf0vodpXsXKdC0Qrp%2FOgQgIWZx4KjgxMWgo4L7%2FBLuHeDUq08WecL5i3Uy0%2FvyI4qzaMVfxLq7luS2wv40lLTKPb9fOGpkcrULt7A6DNK0NzfITrRN7M638P%2BDDGwd2RJJlHcxGLmvq5Q8%2BECl6%2BJ8CZZcu%2BW30j4LZWRCJyMk3GQ99x58XC27DCPiki3Ph5Leml9OFKRaWUdOU2AFlg7PgXGQH8b2p9c4hcbwQYZAozsgim5d%2FLe%2BFcsd6dKOioRK2NwpBqBLZWkFCun9MFeIDDCo%2B4bYBjqkAcpwKVDsBTEeYnq%2FPqXSWy60imtg2JAw51MFPfquWLVxdNNt6VKszee8It16LaZPP%2BKdVBzAvZGZMTALJEKQDiut9TEzDU6j6gcj%2FvtnYcUbTFYj4ve4Nos072uxsPrMTaYZKNW8uGDFaM2PcZ2%2FxbejcMrTlvCptK9Sb1dWH9R6DsBL6HX6RYpr%2FLXzevUo1yQ5CFE84KeGxxbbgc44HdTyh3Lg&X-Amz-Signature=454c7584699b0cce27baffd51d45c68b272c60a6f001f26033c8a5130f0b6343&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
