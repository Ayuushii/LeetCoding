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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X5QSQC2F%2F20260222%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260222T083151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCFadDALIOBwW9OCRLDUoe2v8IVb14gBLINr3n%2BDKLXOQIgSM7AeOykLILQjpb19HP14WEEZV8fJnITpp7yprAqq7wqiAQIwP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBxxQd%2FXy5M9GdV9DircA3TRwb5fvHarIXsXUS8KfbrukptPhk3EScmR%2FFXebm%2B8BwhDik5VTjCduf7rAKw%2BZj6a1K1Pg%2BVS0eWbzcUTB6hKLXzWfK63sRfTHYMEPqwucqpL8vQYSUMOW74%2FKtGEv7N2gv6k9zZr2nKQglM%2BReyruFCUOi0wp9BoiOwKeG3WxjnU3Svq4z1B8cMrzfmX2Pf%2FETd6v2MpzCRncbuda6j%2BIxTiuuF5p%2Fbk8MnHdTjUvUy1z8n%2BjYjhmy%2FvzPWKRlPZlUKRWSOxNVOnIl33pyQbf%2FKUXWPS%2BSl3sH5exB14gFro5sEeeHZBcbSIj26Bq4seAdfl2Ag1Dle1tAUlvnaRi6a%2F1kE2PwLKyOEWaW5g%2BM0V%2BN%2BUXQRzEu9VBmuQziq%2B5eZtbwV0AXPFHZML%2FqOydUuyxw8T%2Fk3p8D4Mdl%2FRcAxCzSf1O92zvKSKYzjqkR4nbRi3Mk5YotzL2vSRfvoW7J2Ra3T1vtyc3pqI3%2BC%2BxXEJlO1st06xW%2FuqCK7QShg9Va4VZHvRov2Y0IskIrGuvl25C773g4pKEcbq3KSjBi0hVup%2FtiKC91tIMVWXTHoRqurtHyKf%2BMU6UxtxoqOn7AaZDVoVLYyft70MB4oIVRLbppgh%2BW6Cee%2FMMPbF6swGOqUBQToY0qeCccp4Z2bqfIQakTKXIe4dm3to9%2FL60%2Fb7C9Wu8lLls5n1lSvikHGyuz97yjwwr4zvww9V9J94%2FnorARfM1btPBbYXXQQENdDH12kEfIhZWpzBwg%2FEsFPB7ZtY8HDoprwL1zp7OuBxMo3RUmKptY4feOnLtz%2Bf28lhkPNUNAQZp8BpHhXj4odID8A1tuw5DkNxQxSxP9TGcHO%2BtKW%2FYmJX&X-Amz-Signature=b726ce9c88fe53e867c81d4fd9bb7418f6bf94181ab35883a62ed7c058e1ae51&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X5QSQC2F%2F20260222%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260222T083151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCFadDALIOBwW9OCRLDUoe2v8IVb14gBLINr3n%2BDKLXOQIgSM7AeOykLILQjpb19HP14WEEZV8fJnITpp7yprAqq7wqiAQIwP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBxxQd%2FXy5M9GdV9DircA3TRwb5fvHarIXsXUS8KfbrukptPhk3EScmR%2FFXebm%2B8BwhDik5VTjCduf7rAKw%2BZj6a1K1Pg%2BVS0eWbzcUTB6hKLXzWfK63sRfTHYMEPqwucqpL8vQYSUMOW74%2FKtGEv7N2gv6k9zZr2nKQglM%2BReyruFCUOi0wp9BoiOwKeG3WxjnU3Svq4z1B8cMrzfmX2Pf%2FETd6v2MpzCRncbuda6j%2BIxTiuuF5p%2Fbk8MnHdTjUvUy1z8n%2BjYjhmy%2FvzPWKRlPZlUKRWSOxNVOnIl33pyQbf%2FKUXWPS%2BSl3sH5exB14gFro5sEeeHZBcbSIj26Bq4seAdfl2Ag1Dle1tAUlvnaRi6a%2F1kE2PwLKyOEWaW5g%2BM0V%2BN%2BUXQRzEu9VBmuQziq%2B5eZtbwV0AXPFHZML%2FqOydUuyxw8T%2Fk3p8D4Mdl%2FRcAxCzSf1O92zvKSKYzjqkR4nbRi3Mk5YotzL2vSRfvoW7J2Ra3T1vtyc3pqI3%2BC%2BxXEJlO1st06xW%2FuqCK7QShg9Va4VZHvRov2Y0IskIrGuvl25C773g4pKEcbq3KSjBi0hVup%2FtiKC91tIMVWXTHoRqurtHyKf%2BMU6UxtxoqOn7AaZDVoVLYyft70MB4oIVRLbppgh%2BW6Cee%2FMMPbF6swGOqUBQToY0qeCccp4Z2bqfIQakTKXIe4dm3to9%2FL60%2Fb7C9Wu8lLls5n1lSvikHGyuz97yjwwr4zvww9V9J94%2FnorARfM1btPBbYXXQQENdDH12kEfIhZWpzBwg%2FEsFPB7ZtY8HDoprwL1zp7OuBxMo3RUmKptY4feOnLtz%2Bf28lhkPNUNAQZp8BpHhXj4odID8A1tuw5DkNxQxSxP9TGcHO%2BtKW%2FYmJX&X-Amz-Signature=60b27bb07b256fb60335ef1cc152f2e992f274d3d86d479dbddf37a63ea9801b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X5QSQC2F%2F20260222%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260222T083151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCFadDALIOBwW9OCRLDUoe2v8IVb14gBLINr3n%2BDKLXOQIgSM7AeOykLILQjpb19HP14WEEZV8fJnITpp7yprAqq7wqiAQIwP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBxxQd%2FXy5M9GdV9DircA3TRwb5fvHarIXsXUS8KfbrukptPhk3EScmR%2FFXebm%2B8BwhDik5VTjCduf7rAKw%2BZj6a1K1Pg%2BVS0eWbzcUTB6hKLXzWfK63sRfTHYMEPqwucqpL8vQYSUMOW74%2FKtGEv7N2gv6k9zZr2nKQglM%2BReyruFCUOi0wp9BoiOwKeG3WxjnU3Svq4z1B8cMrzfmX2Pf%2FETd6v2MpzCRncbuda6j%2BIxTiuuF5p%2Fbk8MnHdTjUvUy1z8n%2BjYjhmy%2FvzPWKRlPZlUKRWSOxNVOnIl33pyQbf%2FKUXWPS%2BSl3sH5exB14gFro5sEeeHZBcbSIj26Bq4seAdfl2Ag1Dle1tAUlvnaRi6a%2F1kE2PwLKyOEWaW5g%2BM0V%2BN%2BUXQRzEu9VBmuQziq%2B5eZtbwV0AXPFHZML%2FqOydUuyxw8T%2Fk3p8D4Mdl%2FRcAxCzSf1O92zvKSKYzjqkR4nbRi3Mk5YotzL2vSRfvoW7J2Ra3T1vtyc3pqI3%2BC%2BxXEJlO1st06xW%2FuqCK7QShg9Va4VZHvRov2Y0IskIrGuvl25C773g4pKEcbq3KSjBi0hVup%2FtiKC91tIMVWXTHoRqurtHyKf%2BMU6UxtxoqOn7AaZDVoVLYyft70MB4oIVRLbppgh%2BW6Cee%2FMMPbF6swGOqUBQToY0qeCccp4Z2bqfIQakTKXIe4dm3to9%2FL60%2Fb7C9Wu8lLls5n1lSvikHGyuz97yjwwr4zvww9V9J94%2FnorARfM1btPBbYXXQQENdDH12kEfIhZWpzBwg%2FEsFPB7ZtY8HDoprwL1zp7OuBxMo3RUmKptY4feOnLtz%2Bf28lhkPNUNAQZp8BpHhXj4odID8A1tuw5DkNxQxSxP9TGcHO%2BtKW%2FYmJX&X-Amz-Signature=7668cc1cde409784c74be50582818fdb051c2df030b9939e7a68e1db28ddabc7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S7KML7QF%2F20260222%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260222T083152Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDT3RzU57M9U6I%2BllUshujRhf1ME%2BkZ38X5Ma5EH9uemwIgf3T4V4OhyEyTnKRizURDoIFLCqLZ%2Bk5M%2FQLbWhEx3gsqiAQIwP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGsFRzY8DaviOHWx3CrcA4yR5W9CsXUoTOD3d1Bc3e6dyESzkAJErmjzQWMvF%2Bane2KOzpYwm43RInW%2BO9EMuGK7zhhhHdtqMFfFYBQfswKPQypmOdFJcrS6L7zohQAvuadApO%2Bp8mB5a%2Fc1oNRaRRoafFCwkEKMUEU4ag8xFuwYF9u4xf%2BOLsfwGf59RLVjWlVOpq7%2F9%2BRDV5siwqYcv34zIQVFc4sbnOQ1duta47urCXZhsh9ySu1YEMjfMEAalJy%2Bax2kf2JJm%2FVhk%2BXf%2FbbjLNQ8bV3rUIrYWXTxRBexdODxCEdrAw6bzXh%2FgSyjWth65YqzJLXF1UPYmDz3Yng8K99MzMCJRgk3f%2BRhAZET6i3q9W2A9gSclxPuXyPXat6%2FJNaxPVb2X5qjivfjkroFIkA2rg4gxZFJQ0d8YO4bWjHRNUGfAaycS%2FYV2vUHT7QxTEfTrmp3S2fNl8Lj6yjHkz5vqlFlzQvfXtbwJw8bhcN%2BO8kV%2F3BGXedZBMWxHJUnFKTo8J9HE5HGeqe7IXE0RDjsGrGP1vRbxzeHHqMPcR3WOD3nu%2BhWzStlMrzLxKKLEV4a0cjucMyv%2BNLQOwg0PfEGAXBLtKPsPgGU18d7qFRFAkOPfWwgQUPuOy8VkQrI0qXpIQufrJ0KMLDF6swGOqUBlkdRCOa0L9dVLsQV5REgDtFLpqqSwmJvIma1GiR1WJ9GVzXewXDKl3tAgTvMPfPedN9C%2FelpvWuSvg6fD38kEoCL7ixwjHqh%2BniOX8bN5s22vkCP%2Fbnq52W4FZyoLxFFZYwNKV6edc98R5qHXOfQrSPLYyhYSG%2F2NNFf9%2FZBJ75V5Va%2Bpf5PJb0HtatFD8sgnDxfNnbOWhKhhmOfTRa5DH4AdQjy&X-Amz-Signature=6357721514e8ea044e266366a15e20bdbc3387ad8aed35b85e55c3ab39ca6dcc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S7KML7QF%2F20260222%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260222T083152Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDT3RzU57M9U6I%2BllUshujRhf1ME%2BkZ38X5Ma5EH9uemwIgf3T4V4OhyEyTnKRizURDoIFLCqLZ%2Bk5M%2FQLbWhEx3gsqiAQIwP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGsFRzY8DaviOHWx3CrcA4yR5W9CsXUoTOD3d1Bc3e6dyESzkAJErmjzQWMvF%2Bane2KOzpYwm43RInW%2BO9EMuGK7zhhhHdtqMFfFYBQfswKPQypmOdFJcrS6L7zohQAvuadApO%2Bp8mB5a%2Fc1oNRaRRoafFCwkEKMUEU4ag8xFuwYF9u4xf%2BOLsfwGf59RLVjWlVOpq7%2F9%2BRDV5siwqYcv34zIQVFc4sbnOQ1duta47urCXZhsh9ySu1YEMjfMEAalJy%2Bax2kf2JJm%2FVhk%2BXf%2FbbjLNQ8bV3rUIrYWXTxRBexdODxCEdrAw6bzXh%2FgSyjWth65YqzJLXF1UPYmDz3Yng8K99MzMCJRgk3f%2BRhAZET6i3q9W2A9gSclxPuXyPXat6%2FJNaxPVb2X5qjivfjkroFIkA2rg4gxZFJQ0d8YO4bWjHRNUGfAaycS%2FYV2vUHT7QxTEfTrmp3S2fNl8Lj6yjHkz5vqlFlzQvfXtbwJw8bhcN%2BO8kV%2F3BGXedZBMWxHJUnFKTo8J9HE5HGeqe7IXE0RDjsGrGP1vRbxzeHHqMPcR3WOD3nu%2BhWzStlMrzLxKKLEV4a0cjucMyv%2BNLQOwg0PfEGAXBLtKPsPgGU18d7qFRFAkOPfWwgQUPuOy8VkQrI0qXpIQufrJ0KMLDF6swGOqUBlkdRCOa0L9dVLsQV5REgDtFLpqqSwmJvIma1GiR1WJ9GVzXewXDKl3tAgTvMPfPedN9C%2FelpvWuSvg6fD38kEoCL7ixwjHqh%2BniOX8bN5s22vkCP%2Fbnq52W4FZyoLxFFZYwNKV6edc98R5qHXOfQrSPLYyhYSG%2F2NNFf9%2FZBJ75V5Va%2Bpf5PJb0HtatFD8sgnDxfNnbOWhKhhmOfTRa5DH4AdQjy&X-Amz-Signature=2c5f152880e0fc652f39179cffa50399b1505ead115bac041bf16baba6690883&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S7KML7QF%2F20260222%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260222T083152Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDT3RzU57M9U6I%2BllUshujRhf1ME%2BkZ38X5Ma5EH9uemwIgf3T4V4OhyEyTnKRizURDoIFLCqLZ%2Bk5M%2FQLbWhEx3gsqiAQIwP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGsFRzY8DaviOHWx3CrcA4yR5W9CsXUoTOD3d1Bc3e6dyESzkAJErmjzQWMvF%2Bane2KOzpYwm43RInW%2BO9EMuGK7zhhhHdtqMFfFYBQfswKPQypmOdFJcrS6L7zohQAvuadApO%2Bp8mB5a%2Fc1oNRaRRoafFCwkEKMUEU4ag8xFuwYF9u4xf%2BOLsfwGf59RLVjWlVOpq7%2F9%2BRDV5siwqYcv34zIQVFc4sbnOQ1duta47urCXZhsh9ySu1YEMjfMEAalJy%2Bax2kf2JJm%2FVhk%2BXf%2FbbjLNQ8bV3rUIrYWXTxRBexdODxCEdrAw6bzXh%2FgSyjWth65YqzJLXF1UPYmDz3Yng8K99MzMCJRgk3f%2BRhAZET6i3q9W2A9gSclxPuXyPXat6%2FJNaxPVb2X5qjivfjkroFIkA2rg4gxZFJQ0d8YO4bWjHRNUGfAaycS%2FYV2vUHT7QxTEfTrmp3S2fNl8Lj6yjHkz5vqlFlzQvfXtbwJw8bhcN%2BO8kV%2F3BGXedZBMWxHJUnFKTo8J9HE5HGeqe7IXE0RDjsGrGP1vRbxzeHHqMPcR3WOD3nu%2BhWzStlMrzLxKKLEV4a0cjucMyv%2BNLQOwg0PfEGAXBLtKPsPgGU18d7qFRFAkOPfWwgQUPuOy8VkQrI0qXpIQufrJ0KMLDF6swGOqUBlkdRCOa0L9dVLsQV5REgDtFLpqqSwmJvIma1GiR1WJ9GVzXewXDKl3tAgTvMPfPedN9C%2FelpvWuSvg6fD38kEoCL7ixwjHqh%2BniOX8bN5s22vkCP%2Fbnq52W4FZyoLxFFZYwNKV6edc98R5qHXOfQrSPLYyhYSG%2F2NNFf9%2FZBJ75V5Va%2Bpf5PJb0HtatFD8sgnDxfNnbOWhKhhmOfTRa5DH4AdQjy&X-Amz-Signature=f8fcdc06b6547d974ffd7c6700aacaba19f1a03c43dbfffde9b57e73648d2cc7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S7KML7QF%2F20260222%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260222T083152Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDT3RzU57M9U6I%2BllUshujRhf1ME%2BkZ38X5Ma5EH9uemwIgf3T4V4OhyEyTnKRizURDoIFLCqLZ%2Bk5M%2FQLbWhEx3gsqiAQIwP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGsFRzY8DaviOHWx3CrcA4yR5W9CsXUoTOD3d1Bc3e6dyESzkAJErmjzQWMvF%2Bane2KOzpYwm43RInW%2BO9EMuGK7zhhhHdtqMFfFYBQfswKPQypmOdFJcrS6L7zohQAvuadApO%2Bp8mB5a%2Fc1oNRaRRoafFCwkEKMUEU4ag8xFuwYF9u4xf%2BOLsfwGf59RLVjWlVOpq7%2F9%2BRDV5siwqYcv34zIQVFc4sbnOQ1duta47urCXZhsh9ySu1YEMjfMEAalJy%2Bax2kf2JJm%2FVhk%2BXf%2FbbjLNQ8bV3rUIrYWXTxRBexdODxCEdrAw6bzXh%2FgSyjWth65YqzJLXF1UPYmDz3Yng8K99MzMCJRgk3f%2BRhAZET6i3q9W2A9gSclxPuXyPXat6%2FJNaxPVb2X5qjivfjkroFIkA2rg4gxZFJQ0d8YO4bWjHRNUGfAaycS%2FYV2vUHT7QxTEfTrmp3S2fNl8Lj6yjHkz5vqlFlzQvfXtbwJw8bhcN%2BO8kV%2F3BGXedZBMWxHJUnFKTo8J9HE5HGeqe7IXE0RDjsGrGP1vRbxzeHHqMPcR3WOD3nu%2BhWzStlMrzLxKKLEV4a0cjucMyv%2BNLQOwg0PfEGAXBLtKPsPgGU18d7qFRFAkOPfWwgQUPuOy8VkQrI0qXpIQufrJ0KMLDF6swGOqUBlkdRCOa0L9dVLsQV5REgDtFLpqqSwmJvIma1GiR1WJ9GVzXewXDKl3tAgTvMPfPedN9C%2FelpvWuSvg6fD38kEoCL7ixwjHqh%2BniOX8bN5s22vkCP%2Fbnq52W4FZyoLxFFZYwNKV6edc98R5qHXOfQrSPLYyhYSG%2F2NNFf9%2FZBJ75V5Va%2Bpf5PJb0HtatFD8sgnDxfNnbOWhKhhmOfTRa5DH4AdQjy&X-Amz-Signature=7395630e50434ba6b31f0e28eb3513ab308ee4d76c1680c55d5ab6715f9e7236&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XJP2KRF7%2F20260222%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260222T083154Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDHZEFwajS1CCCZyYCzmMhxEFTm5S03PgZ8nSkY1Gmo6AIhANzJ8%2BfQbUm%2BMsi03gMIX3YjF8C9igDwnw%2BhA%2FnT8F53KogECMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyI7McVAhI2dA2dB4Qq3AP1kPflJZZ7Ub8cH%2F5H6yGIODN0A673y9vIDryfhk%2BHRqUNhe4hQSKcqA%2BRfVvZeZ9SG7usyOhyzAh55mLe1vmHqsP6CJbgNnLHyBZke60y9jdj51BtReXm7wCoDgb8Eu0QWSqB3w8VDFhLr%2FCYSTXs5u1IxipBulLHj%2Bi0UL5g4vJVZPhHO62wkI3wzXf6AtzHCruEK4s%2FTBGDt0SLfpljJASv2rydgMDTIwceK0uTzNJ8Qoe5C2Dwpuvjjx1nbUsaPdTfWwzrgTA19m4tPimeyYx8fe3FRu6jE%2BdEiQZEaCwhYa7RzUv2jEg4rhkHyHGb7esm8S6rq%2BAdZYVI8s9rePbIiaUmSzB3tIViHuL6xrzBBHbmb9GN7yp34wNJZRMMbJAqc2XtSqUbTABcp7NwpqhOgu4AxBeuy9GxVE9jxibopXFwxsZoPBupCceuL3WbbeDv5S2qh%2FPqS6XMrxDHXMXAxrQC%2FD%2F88CSZ9mKc3YchVrQPpIXW6An0hDzqkDbYNPl0DahyEWTEHa8MIXiiLyTTq8wu8TJMZliKYHPiO7KgfXSK99Iu1LEZw1E8RSzU%2B1A5U69eUjxDe%2B0ZVolciodtGmiGJP%2FCQL0ePjCrxJz0bNLmhZcxyzEaBzDCxerMBjqkAU0bsOpgQWb8%2FsJW4qpTs09Ftl0qNRU1h%2FgIn8KBvcia6Pt8bwMcPpQ8vKYfMFkrV79PVlCenJpzhSCOmrFCkDLy3NYRcXs1Xu%2BW6l1%2F4cDcCVXlr125STIQsgGuH4fmO0UyqoG6%2BsUVlgPa4BnFhCY1%2FwohgylIN11BzFKZ1Rj63VXwFEMFFWJ6od%2B2YvF%2BBUU4sc4Ggl9R9KrckhbsfNa0hhZk&X-Amz-Signature=9e0bff90c8b1eb0928e9d1ba5c278d8ae48d7dc1520b3479c90fb03029fa1ecc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3TGAG6V%2F20260222%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260222T083155Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIALaowZGCwIulOpbHagkHIHMdc6MpkfG5aZSBOCvmpIHAiAeOzZVNRBI5miMlMAJ7ilwQyYmR9fYCP2SPixFIScbPSqIBAjA%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMeeb2WNpMpt0BWhztKtwDQE6W8F5I8zr3mpIkZC%2BcjCB0TXksZeLInMjkQ3%2BtI1tEsjZcOxdqbtooxINnvQUpOfgO0f35Zd22%2FDAs4HZM5yjGbiLfU8Y8eEm7BclDCRCANsZyxPdhBZecmvJbaNJtkjWQ2ZdeR1jugnOv%2Bhz4RnjtoMeYGablZ95qZefEezVlSztndTms162sIUeeDbz9w61SHH0MGKL0QNpZzH4YYNl2KPLFq3bpjfGENcdNYRub6CVcbvb8jGvE8Vax4FCv1JmsnAj8fIh5B6wvGk7D2xbEi4Q6sTzqOWvE7rCkD%2Fitm5PitMygBunQeXNKvga%2BrtwJDNge5BnxNa5XdE9YbyNHtTvKWZLVmxEIG4rsPadv2vZlfGnPK9J4ycX5T1WXPeeJIiS%2F4S%2BKchWjX7R23YNv81hI75SYdakFOa7nrKAYmEfVrx7TyOyoLWTeu5y%2FWxfffP5u5BIE%2Fhb9TapxXPYmZRN%2BH%2F5zoEyX0LA6ZTNRCzdAFHIb5j7iEdRRun4a8QJmr3c1NMrQHN1HbOVZ%2BcwIbfYFeh4lL1RmAif9UUF5qVTBWRAZL7Gdldwz4gU2XrV2zLYk7ZQGLaxhbVa%2BcXw6czHdxB4xN7a57nJysUc7KiT4g4ngYpkNgNswlcXqzAY6pgHoluqFNFbgKdqfjdgvMQwI4oZzyigpQJHQ2HjxfeHcD8OQQFYZBFNf8H27CFOzmViEqNYuAagPXyfZMqsMdqGSWjLn6cITxmDmof%2Fa2lSasf4EXwYLLzAB82HSr09U7E1JDpTOfglkjsSaDPqUZ48pP%2ByYGZ3TSOhVfxC4q84oZgEe8MXv26Y8mN3xtMam%2FJLHpgmfzgdIMnLUdzkTQQ402qwlOIp3&X-Amz-Signature=10fd28c4d76cfb0430b8ff0e6036cac59cee8f210ce9c6118a12e4bf0f849d17&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3TGAG6V%2F20260222%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260222T083155Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIALaowZGCwIulOpbHagkHIHMdc6MpkfG5aZSBOCvmpIHAiAeOzZVNRBI5miMlMAJ7ilwQyYmR9fYCP2SPixFIScbPSqIBAjA%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMeeb2WNpMpt0BWhztKtwDQE6W8F5I8zr3mpIkZC%2BcjCB0TXksZeLInMjkQ3%2BtI1tEsjZcOxdqbtooxINnvQUpOfgO0f35Zd22%2FDAs4HZM5yjGbiLfU8Y8eEm7BclDCRCANsZyxPdhBZecmvJbaNJtkjWQ2ZdeR1jugnOv%2Bhz4RnjtoMeYGablZ95qZefEezVlSztndTms162sIUeeDbz9w61SHH0MGKL0QNpZzH4YYNl2KPLFq3bpjfGENcdNYRub6CVcbvb8jGvE8Vax4FCv1JmsnAj8fIh5B6wvGk7D2xbEi4Q6sTzqOWvE7rCkD%2Fitm5PitMygBunQeXNKvga%2BrtwJDNge5BnxNa5XdE9YbyNHtTvKWZLVmxEIG4rsPadv2vZlfGnPK9J4ycX5T1WXPeeJIiS%2F4S%2BKchWjX7R23YNv81hI75SYdakFOa7nrKAYmEfVrx7TyOyoLWTeu5y%2FWxfffP5u5BIE%2Fhb9TapxXPYmZRN%2BH%2F5zoEyX0LA6ZTNRCzdAFHIb5j7iEdRRun4a8QJmr3c1NMrQHN1HbOVZ%2BcwIbfYFeh4lL1RmAif9UUF5qVTBWRAZL7Gdldwz4gU2XrV2zLYk7ZQGLaxhbVa%2BcXw6czHdxB4xN7a57nJysUc7KiT4g4ngYpkNgNswlcXqzAY6pgHoluqFNFbgKdqfjdgvMQwI4oZzyigpQJHQ2HjxfeHcD8OQQFYZBFNf8H27CFOzmViEqNYuAagPXyfZMqsMdqGSWjLn6cITxmDmof%2Fa2lSasf4EXwYLLzAB82HSr09U7E1JDpTOfglkjsSaDPqUZ48pP%2ByYGZ3TSOhVfxC4q84oZgEe8MXv26Y8mN3xtMam%2FJLHpgmfzgdIMnLUdzkTQQ402qwlOIp3&X-Amz-Signature=637f2ad0ee8ad96909124303490e17d2844043767f53c8e4a4825ad9c431656a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
