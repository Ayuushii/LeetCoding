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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665NYFHWSW%2F20260920%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260920T125158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFyeW6zo47Gcq5e3JQrTWmMQ6oxhnUzaVd2Ml8CIHHlRAiEAwgUkoVpV2a7SATvyV0C0MpZziVLvt6x6WhZIGuJ58o4q%2FwMIdBAAGgw2Mzc0MjMxODM4MDUiDFabRDxdNuB06uK6xircA0qAo6OrhEdblknedwltlaaR38pu2OvziKzbmGMvzoJt43yNgyvExxNGY%2BibzArqWHowiTj9UhHexr7uNYO47efunxVxf6wxGqD32gnart4cfFoqzbS07eNTWHlD20qTV4DDDFZylOFEDg9EJX8N23H%2FEHVW1WozFRiVr2oXRz5bCDzDWldXPym88zVQVEoOaST8%2FI%2BlvKKls4uMhPyP8tBtDOQM7kQG%2B5HD6gBqMgx1KwT%2BI4wkcQUIAqa8Nygdfb2hIhogQl0jPSzG3WWE%2FUnd1i%2FHUg1Qn%2BkcHxzJToW7LwpBSqTJLc3uBLe9gUYavBRooS9qFcvO%2Fm6NgbBYyj%2FbmOqCSFCAwRSshI4N7nRmLt37RERZYw07fe1xze0kQj2vLPa%2BvLRXWmdKwiJxIC5%2BZ%2FpGgZ4WzXWCGP8fdWSwf6%2FcAtYBe%2FwMxjPRHtZN%2FS%2BOhl%2FZYyNMwy6z7OBQ7PqGW%2B39G%2BCoP3Yb5P%2BPEatvFhePZPTObFjygGX4zaOvzNrf1%2Ftg8ZShsIeVN6EScNS3rdueNs2Vyi9zF4wCuJ7OkCK4Zb7Ucrm2gNJ%2BoAv6M8lfYbkc3%2B%2Fabi%2Bg8pA3EFaawQJsHmeIxge6S7UsEfYq6JBP13XZAhm0uq9NMKP8vtUGOqUBcZcPE1anVMQfspg%2FFMlPRm6Ezz%2B6wSJyc24nDHV8tmUfU57CSWjKHKzb4qwtTsWy2oG9Mm798og2eOkTyo6hA7HI4xsJ0Ecgjz2uJg6Cv14tIGx8cB%2BxsYIHO7ZOU3mGA4TqfQ53T2Ymzko6PU%2Fql3VZ1kx4YGqOPbMsb7P4qY9uHV8NaQn2GQovTnP%2FS1iq%2F%2F%2Br2gwhcJMdAh9nsCffBV9JrAVS&X-Amz-Signature=1144fb8dfb8cc2057c36f939409028c4c50f46b9172f93bccad081728e5fef19&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665NYFHWSW%2F20260920%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260920T125158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFyeW6zo47Gcq5e3JQrTWmMQ6oxhnUzaVd2Ml8CIHHlRAiEAwgUkoVpV2a7SATvyV0C0MpZziVLvt6x6WhZIGuJ58o4q%2FwMIdBAAGgw2Mzc0MjMxODM4MDUiDFabRDxdNuB06uK6xircA0qAo6OrhEdblknedwltlaaR38pu2OvziKzbmGMvzoJt43yNgyvExxNGY%2BibzArqWHowiTj9UhHexr7uNYO47efunxVxf6wxGqD32gnart4cfFoqzbS07eNTWHlD20qTV4DDDFZylOFEDg9EJX8N23H%2FEHVW1WozFRiVr2oXRz5bCDzDWldXPym88zVQVEoOaST8%2FI%2BlvKKls4uMhPyP8tBtDOQM7kQG%2B5HD6gBqMgx1KwT%2BI4wkcQUIAqa8Nygdfb2hIhogQl0jPSzG3WWE%2FUnd1i%2FHUg1Qn%2BkcHxzJToW7LwpBSqTJLc3uBLe9gUYavBRooS9qFcvO%2Fm6NgbBYyj%2FbmOqCSFCAwRSshI4N7nRmLt37RERZYw07fe1xze0kQj2vLPa%2BvLRXWmdKwiJxIC5%2BZ%2FpGgZ4WzXWCGP8fdWSwf6%2FcAtYBe%2FwMxjPRHtZN%2FS%2BOhl%2FZYyNMwy6z7OBQ7PqGW%2B39G%2BCoP3Yb5P%2BPEatvFhePZPTObFjygGX4zaOvzNrf1%2Ftg8ZShsIeVN6EScNS3rdueNs2Vyi9zF4wCuJ7OkCK4Zb7Ucrm2gNJ%2BoAv6M8lfYbkc3%2B%2Fabi%2Bg8pA3EFaawQJsHmeIxge6S7UsEfYq6JBP13XZAhm0uq9NMKP8vtUGOqUBcZcPE1anVMQfspg%2FFMlPRm6Ezz%2B6wSJyc24nDHV8tmUfU57CSWjKHKzb4qwtTsWy2oG9Mm798og2eOkTyo6hA7HI4xsJ0Ecgjz2uJg6Cv14tIGx8cB%2BxsYIHO7ZOU3mGA4TqfQ53T2Ymzko6PU%2Fql3VZ1kx4YGqOPbMsb7P4qY9uHV8NaQn2GQovTnP%2FS1iq%2F%2F%2Br2gwhcJMdAh9nsCffBV9JrAVS&X-Amz-Signature=7e37de9d97ca7164d1a1f2e148c2756310b2229112847aeaecbf47fc6e77b80a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665NYFHWSW%2F20260920%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260920T125158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFyeW6zo47Gcq5e3JQrTWmMQ6oxhnUzaVd2Ml8CIHHlRAiEAwgUkoVpV2a7SATvyV0C0MpZziVLvt6x6WhZIGuJ58o4q%2FwMIdBAAGgw2Mzc0MjMxODM4MDUiDFabRDxdNuB06uK6xircA0qAo6OrhEdblknedwltlaaR38pu2OvziKzbmGMvzoJt43yNgyvExxNGY%2BibzArqWHowiTj9UhHexr7uNYO47efunxVxf6wxGqD32gnart4cfFoqzbS07eNTWHlD20qTV4DDDFZylOFEDg9EJX8N23H%2FEHVW1WozFRiVr2oXRz5bCDzDWldXPym88zVQVEoOaST8%2FI%2BlvKKls4uMhPyP8tBtDOQM7kQG%2B5HD6gBqMgx1KwT%2BI4wkcQUIAqa8Nygdfb2hIhogQl0jPSzG3WWE%2FUnd1i%2FHUg1Qn%2BkcHxzJToW7LwpBSqTJLc3uBLe9gUYavBRooS9qFcvO%2Fm6NgbBYyj%2FbmOqCSFCAwRSshI4N7nRmLt37RERZYw07fe1xze0kQj2vLPa%2BvLRXWmdKwiJxIC5%2BZ%2FpGgZ4WzXWCGP8fdWSwf6%2FcAtYBe%2FwMxjPRHtZN%2FS%2BOhl%2FZYyNMwy6z7OBQ7PqGW%2B39G%2BCoP3Yb5P%2BPEatvFhePZPTObFjygGX4zaOvzNrf1%2Ftg8ZShsIeVN6EScNS3rdueNs2Vyi9zF4wCuJ7OkCK4Zb7Ucrm2gNJ%2BoAv6M8lfYbkc3%2B%2Fabi%2Bg8pA3EFaawQJsHmeIxge6S7UsEfYq6JBP13XZAhm0uq9NMKP8vtUGOqUBcZcPE1anVMQfspg%2FFMlPRm6Ezz%2B6wSJyc24nDHV8tmUfU57CSWjKHKzb4qwtTsWy2oG9Mm798og2eOkTyo6hA7HI4xsJ0Ecgjz2uJg6Cv14tIGx8cB%2BxsYIHO7ZOU3mGA4TqfQ53T2Ymzko6PU%2Fql3VZ1kx4YGqOPbMsb7P4qY9uHV8NaQn2GQovTnP%2FS1iq%2F%2F%2Br2gwhcJMdAh9nsCffBV9JrAVS&X-Amz-Signature=a7b694619b9de8be910f9120f0df1ae2a1ec3df97863c885ca0a4fac223beeba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBUTYJPE%2F20260920%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260920T125158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDAnNitPGpR1%2FcWyZzseqSJYo5%2BxM6hhFwzv6HaTLu2nAIhAMazC4EJ16KXyyqvhkGyG1IXiWbKXzLlsPL7fG6mDDnjKv8DCHQQABoMNjM3NDIzMTgzODA1Igze9al%2FJjz1CaKLpQgq3APaf5IF58Q79vof8PojZ59RTqXFpKyKARq6PlOOFDhg2kTKJOmAyGglIkpuTMetzMS5jUAPnKT%2FxemUgvnY62euYVyJSvLRWm7mZiQvixiMOmExrB9u%2FU7mrz0Bm0ZAUQBr0LPULrZ7dUmdsVVB2otDKnPVtjj7uV5N5XZkvJyI1kWcmRhEeifG6KrvujMvXr%2B8hQeosbgtyLQJ%2BIVwPE1mIfdrC8YCmEUuXuFu2nS0FMaFkvNg8W9k0IjoDoG5D69SgVbl%2Fwwzfaf0IYN63Oy08rQBOLWE%2Bes%2BJXqjRTRgWNtwbke0iY4j8Gv8XZPZ5DgKEiY3S9WOW%2BS5xNFr8hvt7sZ7IS4xXk%2FLEfBsaEfgrCllfbte2ntKoTZW%2FsaQK1ksG9q5RlXpGPp%2BRWKS%2Bz8DuoeKU0P7hZXkx3YREq1tYWI%2BjkmLvKPY0IlnQ4jpE43eIedQ8Hk0%2BsN66yFDEEgcEAbTq2RzG7Kg6gIdgDvIFRklSE90s2a4tVDDipusWbln6YstFv6l4cTJtScylU%2BSlFdcbLRI%2BRATVs0euTvG3OWSlk0fr%2FnrdKt8%2B8JRShghZjXNBsBzaaLru4bomum8L0DHdzUc%2BYPvEIHrBfa8boEv%2BqM3sDL693ikWzCc%2Fb7VBjqkAV5zyIT5sh9UENev4zENDTQ%2BSpqUSMj%2Fo%2FljBjxqwEsisPT4TzzuL%2FduLAxFFXFYxiqIjjS%2Bd8HnC0QNaJFzcwFeyPvaBNreXUHFwyHLAHQFq835VVbMdjl0Bnj2N%2FB0qgAwLmLivFYbRQg1%2B2uDxaRMpyCZSU%2BaOEamFMUB5dZOqkmUNwUdbYw%2FQZxuwD5YWHh7ahkKoq%2BgQPL7BOGGB%2FodWMre&X-Amz-Signature=dcd3e9462395ef821e3fe841ac433c36e19bbc909dd73c52b53e83c30546b4b3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBUTYJPE%2F20260920%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260920T125158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDAnNitPGpR1%2FcWyZzseqSJYo5%2BxM6hhFwzv6HaTLu2nAIhAMazC4EJ16KXyyqvhkGyG1IXiWbKXzLlsPL7fG6mDDnjKv8DCHQQABoMNjM3NDIzMTgzODA1Igze9al%2FJjz1CaKLpQgq3APaf5IF58Q79vof8PojZ59RTqXFpKyKARq6PlOOFDhg2kTKJOmAyGglIkpuTMetzMS5jUAPnKT%2FxemUgvnY62euYVyJSvLRWm7mZiQvixiMOmExrB9u%2FU7mrz0Bm0ZAUQBr0LPULrZ7dUmdsVVB2otDKnPVtjj7uV5N5XZkvJyI1kWcmRhEeifG6KrvujMvXr%2B8hQeosbgtyLQJ%2BIVwPE1mIfdrC8YCmEUuXuFu2nS0FMaFkvNg8W9k0IjoDoG5D69SgVbl%2Fwwzfaf0IYN63Oy08rQBOLWE%2Bes%2BJXqjRTRgWNtwbke0iY4j8Gv8XZPZ5DgKEiY3S9WOW%2BS5xNFr8hvt7sZ7IS4xXk%2FLEfBsaEfgrCllfbte2ntKoTZW%2FsaQK1ksG9q5RlXpGPp%2BRWKS%2Bz8DuoeKU0P7hZXkx3YREq1tYWI%2BjkmLvKPY0IlnQ4jpE43eIedQ8Hk0%2BsN66yFDEEgcEAbTq2RzG7Kg6gIdgDvIFRklSE90s2a4tVDDipusWbln6YstFv6l4cTJtScylU%2BSlFdcbLRI%2BRATVs0euTvG3OWSlk0fr%2FnrdKt8%2B8JRShghZjXNBsBzaaLru4bomum8L0DHdzUc%2BYPvEIHrBfa8boEv%2BqM3sDL693ikWzCc%2Fb7VBjqkAV5zyIT5sh9UENev4zENDTQ%2BSpqUSMj%2Fo%2FljBjxqwEsisPT4TzzuL%2FduLAxFFXFYxiqIjjS%2Bd8HnC0QNaJFzcwFeyPvaBNreXUHFwyHLAHQFq835VVbMdjl0Bnj2N%2FB0qgAwLmLivFYbRQg1%2B2uDxaRMpyCZSU%2BaOEamFMUB5dZOqkmUNwUdbYw%2FQZxuwD5YWHh7ahkKoq%2BgQPL7BOGGB%2FodWMre&X-Amz-Signature=c40ac7bf1034dc361f5f74119de4876cbf7242f6058032792d62f19ba74ef7fe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBUTYJPE%2F20260920%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260920T125158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDAnNitPGpR1%2FcWyZzseqSJYo5%2BxM6hhFwzv6HaTLu2nAIhAMazC4EJ16KXyyqvhkGyG1IXiWbKXzLlsPL7fG6mDDnjKv8DCHQQABoMNjM3NDIzMTgzODA1Igze9al%2FJjz1CaKLpQgq3APaf5IF58Q79vof8PojZ59RTqXFpKyKARq6PlOOFDhg2kTKJOmAyGglIkpuTMetzMS5jUAPnKT%2FxemUgvnY62euYVyJSvLRWm7mZiQvixiMOmExrB9u%2FU7mrz0Bm0ZAUQBr0LPULrZ7dUmdsVVB2otDKnPVtjj7uV5N5XZkvJyI1kWcmRhEeifG6KrvujMvXr%2B8hQeosbgtyLQJ%2BIVwPE1mIfdrC8YCmEUuXuFu2nS0FMaFkvNg8W9k0IjoDoG5D69SgVbl%2Fwwzfaf0IYN63Oy08rQBOLWE%2Bes%2BJXqjRTRgWNtwbke0iY4j8Gv8XZPZ5DgKEiY3S9WOW%2BS5xNFr8hvt7sZ7IS4xXk%2FLEfBsaEfgrCllfbte2ntKoTZW%2FsaQK1ksG9q5RlXpGPp%2BRWKS%2Bz8DuoeKU0P7hZXkx3YREq1tYWI%2BjkmLvKPY0IlnQ4jpE43eIedQ8Hk0%2BsN66yFDEEgcEAbTq2RzG7Kg6gIdgDvIFRklSE90s2a4tVDDipusWbln6YstFv6l4cTJtScylU%2BSlFdcbLRI%2BRATVs0euTvG3OWSlk0fr%2FnrdKt8%2B8JRShghZjXNBsBzaaLru4bomum8L0DHdzUc%2BYPvEIHrBfa8boEv%2BqM3sDL693ikWzCc%2Fb7VBjqkAV5zyIT5sh9UENev4zENDTQ%2BSpqUSMj%2Fo%2FljBjxqwEsisPT4TzzuL%2FduLAxFFXFYxiqIjjS%2Bd8HnC0QNaJFzcwFeyPvaBNreXUHFwyHLAHQFq835VVbMdjl0Bnj2N%2FB0qgAwLmLivFYbRQg1%2B2uDxaRMpyCZSU%2BaOEamFMUB5dZOqkmUNwUdbYw%2FQZxuwD5YWHh7ahkKoq%2BgQPL7BOGGB%2FodWMre&X-Amz-Signature=414fd8bf09f31aa4421e1ddde7cf32d6ff04909f3ea01ab96169dbc28814712b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBUTYJPE%2F20260920%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260920T125158Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDAnNitPGpR1%2FcWyZzseqSJYo5%2BxM6hhFwzv6HaTLu2nAIhAMazC4EJ16KXyyqvhkGyG1IXiWbKXzLlsPL7fG6mDDnjKv8DCHQQABoMNjM3NDIzMTgzODA1Igze9al%2FJjz1CaKLpQgq3APaf5IF58Q79vof8PojZ59RTqXFpKyKARq6PlOOFDhg2kTKJOmAyGglIkpuTMetzMS5jUAPnKT%2FxemUgvnY62euYVyJSvLRWm7mZiQvixiMOmExrB9u%2FU7mrz0Bm0ZAUQBr0LPULrZ7dUmdsVVB2otDKnPVtjj7uV5N5XZkvJyI1kWcmRhEeifG6KrvujMvXr%2B8hQeosbgtyLQJ%2BIVwPE1mIfdrC8YCmEUuXuFu2nS0FMaFkvNg8W9k0IjoDoG5D69SgVbl%2Fwwzfaf0IYN63Oy08rQBOLWE%2Bes%2BJXqjRTRgWNtwbke0iY4j8Gv8XZPZ5DgKEiY3S9WOW%2BS5xNFr8hvt7sZ7IS4xXk%2FLEfBsaEfgrCllfbte2ntKoTZW%2FsaQK1ksG9q5RlXpGPp%2BRWKS%2Bz8DuoeKU0P7hZXkx3YREq1tYWI%2BjkmLvKPY0IlnQ4jpE43eIedQ8Hk0%2BsN66yFDEEgcEAbTq2RzG7Kg6gIdgDvIFRklSE90s2a4tVDDipusWbln6YstFv6l4cTJtScylU%2BSlFdcbLRI%2BRATVs0euTvG3OWSlk0fr%2FnrdKt8%2B8JRShghZjXNBsBzaaLru4bomum8L0DHdzUc%2BYPvEIHrBfa8boEv%2BqM3sDL693ikWzCc%2Fb7VBjqkAV5zyIT5sh9UENev4zENDTQ%2BSpqUSMj%2Fo%2FljBjxqwEsisPT4TzzuL%2FduLAxFFXFYxiqIjjS%2Bd8HnC0QNaJFzcwFeyPvaBNreXUHFwyHLAHQFq835VVbMdjl0Bnj2N%2FB0qgAwLmLivFYbRQg1%2B2uDxaRMpyCZSU%2BaOEamFMUB5dZOqkmUNwUdbYw%2FQZxuwD5YWHh7ahkKoq%2BgQPL7BOGGB%2FodWMre&X-Amz-Signature=8cf46c3a07e480e4c57cb16cc4f9d00e5521ac02677e7d0fa62436da0d869daa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662F6QO4NZ%2F20260920%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260920T125159Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDfUC1ivtSSbuZdD5l1jKBvWbIwHsqvR6eG6ogjrMuhhAIhAN1onjIeucgVb2QvO7H9ztVc7dMM8eaPqTSfsj%2FKmNovKv8DCHQQABoMNjM3NDIzMTgzODA1IgyFBoNRM62eQVUqMpgq3APobEiT4qEQHEOzM1xtandbX%2BGdpx6vykqrx9rMGYX74HgIzjwVU%2FV%2Bm4whQlagF0CVJMqVoV2dQZNZqgkix97rqjyDLTVPZ2bPlQ%2BARNVXtnA3fRHm3nHXul8hwbhAP461YNkYx7b7crai6T15Hei0bL0pqSDtUJEeXJ9DisAlUa%2B79d71MIumcwQvyuUPQDfdwceJpBai5E6buqD0kPIBD0GgsET%2BrtFqcW9hVS%2Burzq%2BFxwwfe9d0Nxfkut47DC080sZHdWeQq8MN0NPrH%2FX6pBy5QFfKGpmOj3HcXRW5ksWCSZ4QihBh5WjBJYa31C5JWoaeVdnSOrxMHqyv24TCs6SjYK6%2FQ%2Be8ffum55YhMow08ui%2F6y%2Fq1oiK3ZwvmgbEd1BAC6cvlntaqGhG13TGNX1OpqrYiJeRga1X%2FX0HszpNUn1%2BmyGhunMawkKjgHpqMzTlQNYnmgqIfmdNl6cyr21gfRLpXM6UHmbqtA5Ul7GA4%2Bzht74RkSy0noMk6oEfPcFokvcQmT7CztWPEjKF%2FVEALrrHpY2MEh0KsBPrHwGX3wHMMxvfMPkOlldeFPp8msYxv%2FF7Zq6BT2Q344oTtSRDPTFAXgD1W%2FWfd5uUOIOXc2TZ3pEp8ym4DDY%2Fb7VBjqkAVitYHImNK8ZAda0zvcDrugdbPoEtFzK%2BR5hHbYggsJJHCjRhDN2YKZMuLJ32ollWYSoP5I1uxY0ssXdS40krolF4PImKWv9A9efOjnuyO9QjIWBeiOUr8xoxhBrNCaCy6umPa061Rb31l5TZ0GuMg9sPR5oFA%2F7exkVs4koxxyWakiPiFxYIPyXqqDaPdCic1cyv2%2BS4CW4ZYXztgTDxbFJuK2K&X-Amz-Signature=d406a2e3f0c896eba6eae9986e67ef5518c853ee1cde85323ac8d5098a32f39f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46666ODR2SX%2F20260920%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260920T125202Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEUpFiBN96lPiLEPRkyAHpffDQC4e1aehr6gT7X55fWvAiBZNJFWWO3mefofONKZqv4IcZYoNWgrvCAwrXW3%2F5lAHyr%2FAwh0EAAaDDYzNzQyMzE4MzgwNSIMjlE9ade%2Bk1se%2BlJQKtwDwkIFmRlPnHwGWtGUO5dKBULcMe3SEk2%2B0sFuzafIfCgITWJ3ED%2BupSVOPF3nxfqbUMJhO8h%2BpLhoK%2FqUrrO%2FX%2FLrAK9A7j4knwASwoR3RVzzetint2Nqvr1GD1OOX8tVK6cdv7Xx0Ss8splxSDciwobWoYvgY6kwrlh9AuMp9vGB%2BKyRPpNnfAKpdnbFeZdPGnCICYdq5T3glt8HkjupIaDqBjJ9hDnKKPQqL2JV6rLcm4wdoNVFyRdUdWt99xVG%2FE%2FCBmWiR4QTAMgtSc6Vp4xW5jZKKcTcjvm%2Bj2MChhgh1uzLHlfMRk0%2BuQN1wbR94ovYWZvV44XAm79PTRvLyoh9Y05RSIKMEGzvKpfUfEqdN4%2BfmJLRz7AMbHYMXgKXpL8Hx88sbJ%2FtYrLXZrvTTXn3vgJ2unbFzcX%2BEoThLgturAwX76bCW4zyss%2FKwerkStWFH7s19FvjA0miCJjXTItIC9%2BAeS1wncwqaMvco0Y5nLFIbDt%2FlMXm0WiC%2F0nRludxtnZG7NOabcJ9%2FV5ekMdYfAnpVwZE%2B9jkZPk4a9AtR0VsAheosr8gGcuz0DsK9k7Sor6pO1b%2FZQ8pKmeurPnLA8eqMLQgyXvnFGyB1Y0wbuaYeKq7zkRnQHMwiPy%2B1QY6pgH16uXGcBZl2GO3M8fqvNaJMPIgNzZKJZULgFcUt0YrLnLF%2BCD4%2FyOKH1E7f1fxyArYWqXBBBDVP2Z8e4DS3dvm%2FtusgNvDOoMgQE9CtThOJC7cDo6TiZc9kvQ9HD1xcE2ujdiCZIdWHUiiPzg8UoMFBSkn0qyDS7Tf6r61P7oWCQaas%2BgLefu%2Ba2f8lnqZ5JLYnsFtjgRyEwJJ3NbT82M5vSbG5%2B31&X-Amz-Signature=653eed778bc0780d8eb5f377992df934e4da637fdfde6a8e366cacbbaaa17138&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46666ODR2SX%2F20260920%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260920T125202Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEUpFiBN96lPiLEPRkyAHpffDQC4e1aehr6gT7X55fWvAiBZNJFWWO3mefofONKZqv4IcZYoNWgrvCAwrXW3%2F5lAHyr%2FAwh0EAAaDDYzNzQyMzE4MzgwNSIMjlE9ade%2Bk1se%2BlJQKtwDwkIFmRlPnHwGWtGUO5dKBULcMe3SEk2%2B0sFuzafIfCgITWJ3ED%2BupSVOPF3nxfqbUMJhO8h%2BpLhoK%2FqUrrO%2FX%2FLrAK9A7j4knwASwoR3RVzzetint2Nqvr1GD1OOX8tVK6cdv7Xx0Ss8splxSDciwobWoYvgY6kwrlh9AuMp9vGB%2BKyRPpNnfAKpdnbFeZdPGnCICYdq5T3glt8HkjupIaDqBjJ9hDnKKPQqL2JV6rLcm4wdoNVFyRdUdWt99xVG%2FE%2FCBmWiR4QTAMgtSc6Vp4xW5jZKKcTcjvm%2Bj2MChhgh1uzLHlfMRk0%2BuQN1wbR94ovYWZvV44XAm79PTRvLyoh9Y05RSIKMEGzvKpfUfEqdN4%2BfmJLRz7AMbHYMXgKXpL8Hx88sbJ%2FtYrLXZrvTTXn3vgJ2unbFzcX%2BEoThLgturAwX76bCW4zyss%2FKwerkStWFH7s19FvjA0miCJjXTItIC9%2BAeS1wncwqaMvco0Y5nLFIbDt%2FlMXm0WiC%2F0nRludxtnZG7NOabcJ9%2FV5ekMdYfAnpVwZE%2B9jkZPk4a9AtR0VsAheosr8gGcuz0DsK9k7Sor6pO1b%2FZQ8pKmeurPnLA8eqMLQgyXvnFGyB1Y0wbuaYeKq7zkRnQHMwiPy%2B1QY6pgH16uXGcBZl2GO3M8fqvNaJMPIgNzZKJZULgFcUt0YrLnLF%2BCD4%2FyOKH1E7f1fxyArYWqXBBBDVP2Z8e4DS3dvm%2FtusgNvDOoMgQE9CtThOJC7cDo6TiZc9kvQ9HD1xcE2ujdiCZIdWHUiiPzg8UoMFBSkn0qyDS7Tf6r61P7oWCQaas%2BgLefu%2Ba2f8lnqZ5JLYnsFtjgRyEwJJ3NbT82M5vSbG5%2B31&X-Amz-Signature=75f61e542de42811b468f18913b093e2921647107dc03c6aba6b5b911a7e6942&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
