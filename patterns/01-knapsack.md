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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TYOYK7RE%2F20260602%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260602T120310Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFsaCXVzLXdlc3QtMiJHMEUCIB4%2F2A%2FS2Vh9f8diXdoayratrTI%2FrcO8sywpcUu0qgExAiEAj5uk0JqUi0y%2Bjj%2BDo0O7%2FSlFRxbD%2B8H8U%2BtXGOgMkSoq%2FwMIIxAAGgw2Mzc0MjMxODM4MDUiDImSf5ohQjkM%2B%2B12dyrcA1DmZiyXmStmXkZs3nR1LmXno5ylO3pk4Y5NUX5D7bvcc37WAyZBrSYfQqu8JELpi2oUwqUpSR6Vgd5YnBELGVMkk43m%2FpKkGal8LSexHyPyonp13sULat0JIferyUwwmnjI4rZQId%2BR0hDUsKZqP4rWPhGEJKpPdXMIR%2BkS25B6TvCCuEI0cegTD44ll3JLQCxmSDVShxp83ZaTBnf7z0TZM3HxZWf4X3UOy66asD49%2FUsXgvKm8HcvfUKl4jB4TDyo60qfQUZi%2FTu6xZMdYyEigggvTyumw3c1mr%2Bkj3klVUB6pbgM9c%2BT42iqNrrzx2irEVKAlLY6%2B%2FUGrH2cjZqNg77usXByEEOuE6fSNzvABn35OBVPgfg5FrysGW1ah2VYiaO6CnD%2FTIUtYUPM8ur8e2Ofd5UwEQKTFyv21%2BIhNB2N1SwsNTQ8smQhWh7DS2j0AVAeSAa3OYkyQ8Zo6PbK3S7QdSNJBMj7XS1tGl72aEn0x57TEMWNyrjNTlYHOhCu33v2c9J8vgxty4WXB%2BDbeS5FvpcROcuEHP2x8MsKVmLVHYjZLUe6tPQm7ZRwWXbyMFPQkl8EPXwvPAvsXLOuebTWAf8kq7oPtD8F3bNKN92hKDJ%2B9FXn2YX%2BMObd%2BtAGOqUBwYI%2BDtdeo%2Babd4yj6OFAGsZX3r2Ii10CvtypHM6wSWOgFMSe11njVc4EapETjqyF7FNingaMMIQiGJGVCesNN8DbGJ0e%2B%2BqPB0VD5JaZY68PsVyIVUa9SUani9KFFDi3gXFx2RWx0tsMdvkEr1sZXZnHodSoGZy7RF6jH0J4oyNIo4qZiAPLD7bF7M6DRzOll0ulcV9AjOA85B4Jrst6V4aBbjTj&X-Amz-Signature=baa10207760fa986dafc6bbc97a78d9ed04cc328637dfdf77324b46bfda1d4ed&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TYOYK7RE%2F20260602%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260602T120310Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFsaCXVzLXdlc3QtMiJHMEUCIB4%2F2A%2FS2Vh9f8diXdoayratrTI%2FrcO8sywpcUu0qgExAiEAj5uk0JqUi0y%2Bjj%2BDo0O7%2FSlFRxbD%2B8H8U%2BtXGOgMkSoq%2FwMIIxAAGgw2Mzc0MjMxODM4MDUiDImSf5ohQjkM%2B%2B12dyrcA1DmZiyXmStmXkZs3nR1LmXno5ylO3pk4Y5NUX5D7bvcc37WAyZBrSYfQqu8JELpi2oUwqUpSR6Vgd5YnBELGVMkk43m%2FpKkGal8LSexHyPyonp13sULat0JIferyUwwmnjI4rZQId%2BR0hDUsKZqP4rWPhGEJKpPdXMIR%2BkS25B6TvCCuEI0cegTD44ll3JLQCxmSDVShxp83ZaTBnf7z0TZM3HxZWf4X3UOy66asD49%2FUsXgvKm8HcvfUKl4jB4TDyo60qfQUZi%2FTu6xZMdYyEigggvTyumw3c1mr%2Bkj3klVUB6pbgM9c%2BT42iqNrrzx2irEVKAlLY6%2B%2FUGrH2cjZqNg77usXByEEOuE6fSNzvABn35OBVPgfg5FrysGW1ah2VYiaO6CnD%2FTIUtYUPM8ur8e2Ofd5UwEQKTFyv21%2BIhNB2N1SwsNTQ8smQhWh7DS2j0AVAeSAa3OYkyQ8Zo6PbK3S7QdSNJBMj7XS1tGl72aEn0x57TEMWNyrjNTlYHOhCu33v2c9J8vgxty4WXB%2BDbeS5FvpcROcuEHP2x8MsKVmLVHYjZLUe6tPQm7ZRwWXbyMFPQkl8EPXwvPAvsXLOuebTWAf8kq7oPtD8F3bNKN92hKDJ%2B9FXn2YX%2BMObd%2BtAGOqUBwYI%2BDtdeo%2Babd4yj6OFAGsZX3r2Ii10CvtypHM6wSWOgFMSe11njVc4EapETjqyF7FNingaMMIQiGJGVCesNN8DbGJ0e%2B%2BqPB0VD5JaZY68PsVyIVUa9SUani9KFFDi3gXFx2RWx0tsMdvkEr1sZXZnHodSoGZy7RF6jH0J4oyNIo4qZiAPLD7bF7M6DRzOll0ulcV9AjOA85B4Jrst6V4aBbjTj&X-Amz-Signature=be77a7c59d2593d4edada334f554a8f3498f3b4931603e0449ee0ffe53c276e6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TYOYK7RE%2F20260602%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260602T120310Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFsaCXVzLXdlc3QtMiJHMEUCIB4%2F2A%2FS2Vh9f8diXdoayratrTI%2FrcO8sywpcUu0qgExAiEAj5uk0JqUi0y%2Bjj%2BDo0O7%2FSlFRxbD%2B8H8U%2BtXGOgMkSoq%2FwMIIxAAGgw2Mzc0MjMxODM4MDUiDImSf5ohQjkM%2B%2B12dyrcA1DmZiyXmStmXkZs3nR1LmXno5ylO3pk4Y5NUX5D7bvcc37WAyZBrSYfQqu8JELpi2oUwqUpSR6Vgd5YnBELGVMkk43m%2FpKkGal8LSexHyPyonp13sULat0JIferyUwwmnjI4rZQId%2BR0hDUsKZqP4rWPhGEJKpPdXMIR%2BkS25B6TvCCuEI0cegTD44ll3JLQCxmSDVShxp83ZaTBnf7z0TZM3HxZWf4X3UOy66asD49%2FUsXgvKm8HcvfUKl4jB4TDyo60qfQUZi%2FTu6xZMdYyEigggvTyumw3c1mr%2Bkj3klVUB6pbgM9c%2BT42iqNrrzx2irEVKAlLY6%2B%2FUGrH2cjZqNg77usXByEEOuE6fSNzvABn35OBVPgfg5FrysGW1ah2VYiaO6CnD%2FTIUtYUPM8ur8e2Ofd5UwEQKTFyv21%2BIhNB2N1SwsNTQ8smQhWh7DS2j0AVAeSAa3OYkyQ8Zo6PbK3S7QdSNJBMj7XS1tGl72aEn0x57TEMWNyrjNTlYHOhCu33v2c9J8vgxty4WXB%2BDbeS5FvpcROcuEHP2x8MsKVmLVHYjZLUe6tPQm7ZRwWXbyMFPQkl8EPXwvPAvsXLOuebTWAf8kq7oPtD8F3bNKN92hKDJ%2B9FXn2YX%2BMObd%2BtAGOqUBwYI%2BDtdeo%2Babd4yj6OFAGsZX3r2Ii10CvtypHM6wSWOgFMSe11njVc4EapETjqyF7FNingaMMIQiGJGVCesNN8DbGJ0e%2B%2BqPB0VD5JaZY68PsVyIVUa9SUani9KFFDi3gXFx2RWx0tsMdvkEr1sZXZnHodSoGZy7RF6jH0J4oyNIo4qZiAPLD7bF7M6DRzOll0ulcV9AjOA85B4Jrst6V4aBbjTj&X-Amz-Signature=7d4f7f1c9d53f2e7926aa0ce55ba764606121d402d71275efd34b60f9657c580&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2W2LAJV%2F20260602%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260602T120312Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFsaCXVzLXdlc3QtMiJGMEQCICX2FffX5XSnV5YQ9yDhJolabmCekA4yVuB3MGFQPF4vAiAfSEmNbng8YmFlDY4rxNEycAO4GUMFOTlIuYqJpKybvCr%2FAwgkEAAaDDYzNzQyMzE4MzgwNSIM%2FQmBCnkeqrzcfKOCKtwDU50rE9L1BhTyfdirbVso04jV4oiaSMGi83%2BYcNIRYMmkm3CMXGKEZTM04hWLBIxhjRmMEFnTiG4EjcD%2FOeXuOvJ3yXqKAU2mIwoHlYLyHcaQ0I1U7f%2BrKfh7OK45E0bZbbk%2BGMkcDOJ%2BRSrwSrKPZUbVUOIpE8ewKeqH3S6yE5VjVYRiaki3npC%2FFkge%2Fo05t4WoxpCGc1GAeChgHi%2Fw4iQQ%2F9Z8z%2FqI0c8KJtvgK6Go1YGCnGExRNCVDvI3i5XNbKsQg3EGqLy5siLRSd7m1%2F8KqNlcjv%2FtHJAAsIMxubdfLjdwPrMUCTyxmvaM2bvzV4hm4erkvRLZ1Kbrihu2hSLWd8h1wnNtXP4skfy%2BTMN3xtXAIim%2B3NTBMBxGtoYzUbYV%2BFMMgapalrPpW6FWDAWE3TnDwxFf1M3IOwsXdDzV1mAMcY3CKTFK9xh1Edxh8voiUWIieHCKjlHQbiBv9C9dC2PNTVOt3vxwSbUfoPoIkL4a94Uch4tZZtdov24nKx1CWgpOQn5IS%2FhWIzS3ybCMJ7i1MlFdKf2r1GIrLq0piMxvFuSR%2Bbq1dLVQFyEoFr%2BY8WTXUrnBwfIhS9KFdC%2B7c5%2Fih8Z4s1fEiJC0f25zshWldj9ZJBU%2BU7cwyd760AY6pgGUlUbclPeRULKzI6u2GFmwa4HIepDFe042Cvjps8FbjmJMBXeQ317JFwRSHAswDsSiDul%2BLYykL2DE6Y3jy%2FLXGe2dY%2BQmOECK%2B1GhTCTPJHB0bWbfSZNsY32Ra56H032W%2F0ElBtcokHuhjNX6QzNj4YS47Xd6TeWb0dsiANrwsrra8EmlBFKDvMM62vaZmz%2BZf7TV%2BwCeJ0JBHqifQ7Oqmuy3oTHb&X-Amz-Signature=cc6bfcc4624377039aeb0ce97f0f507ed3a13dd0b200362e0e8d11c3e612bdcf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2W2LAJV%2F20260602%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260602T120312Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFsaCXVzLXdlc3QtMiJGMEQCICX2FffX5XSnV5YQ9yDhJolabmCekA4yVuB3MGFQPF4vAiAfSEmNbng8YmFlDY4rxNEycAO4GUMFOTlIuYqJpKybvCr%2FAwgkEAAaDDYzNzQyMzE4MzgwNSIM%2FQmBCnkeqrzcfKOCKtwDU50rE9L1BhTyfdirbVso04jV4oiaSMGi83%2BYcNIRYMmkm3CMXGKEZTM04hWLBIxhjRmMEFnTiG4EjcD%2FOeXuOvJ3yXqKAU2mIwoHlYLyHcaQ0I1U7f%2BrKfh7OK45E0bZbbk%2BGMkcDOJ%2BRSrwSrKPZUbVUOIpE8ewKeqH3S6yE5VjVYRiaki3npC%2FFkge%2Fo05t4WoxpCGc1GAeChgHi%2Fw4iQQ%2F9Z8z%2FqI0c8KJtvgK6Go1YGCnGExRNCVDvI3i5XNbKsQg3EGqLy5siLRSd7m1%2F8KqNlcjv%2FtHJAAsIMxubdfLjdwPrMUCTyxmvaM2bvzV4hm4erkvRLZ1Kbrihu2hSLWd8h1wnNtXP4skfy%2BTMN3xtXAIim%2B3NTBMBxGtoYzUbYV%2BFMMgapalrPpW6FWDAWE3TnDwxFf1M3IOwsXdDzV1mAMcY3CKTFK9xh1Edxh8voiUWIieHCKjlHQbiBv9C9dC2PNTVOt3vxwSbUfoPoIkL4a94Uch4tZZtdov24nKx1CWgpOQn5IS%2FhWIzS3ybCMJ7i1MlFdKf2r1GIrLq0piMxvFuSR%2Bbq1dLVQFyEoFr%2BY8WTXUrnBwfIhS9KFdC%2B7c5%2Fih8Z4s1fEiJC0f25zshWldj9ZJBU%2BU7cwyd760AY6pgGUlUbclPeRULKzI6u2GFmwa4HIepDFe042Cvjps8FbjmJMBXeQ317JFwRSHAswDsSiDul%2BLYykL2DE6Y3jy%2FLXGe2dY%2BQmOECK%2B1GhTCTPJHB0bWbfSZNsY32Ra56H032W%2F0ElBtcokHuhjNX6QzNj4YS47Xd6TeWb0dsiANrwsrra8EmlBFKDvMM62vaZmz%2BZf7TV%2BwCeJ0JBHqifQ7Oqmuy3oTHb&X-Amz-Signature=3b6844eb622940406cdfecff2a725a7ca21546f1add3a4987347a50b006df411&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2W2LAJV%2F20260602%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260602T120312Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFsaCXVzLXdlc3QtMiJGMEQCICX2FffX5XSnV5YQ9yDhJolabmCekA4yVuB3MGFQPF4vAiAfSEmNbng8YmFlDY4rxNEycAO4GUMFOTlIuYqJpKybvCr%2FAwgkEAAaDDYzNzQyMzE4MzgwNSIM%2FQmBCnkeqrzcfKOCKtwDU50rE9L1BhTyfdirbVso04jV4oiaSMGi83%2BYcNIRYMmkm3CMXGKEZTM04hWLBIxhjRmMEFnTiG4EjcD%2FOeXuOvJ3yXqKAU2mIwoHlYLyHcaQ0I1U7f%2BrKfh7OK45E0bZbbk%2BGMkcDOJ%2BRSrwSrKPZUbVUOIpE8ewKeqH3S6yE5VjVYRiaki3npC%2FFkge%2Fo05t4WoxpCGc1GAeChgHi%2Fw4iQQ%2F9Z8z%2FqI0c8KJtvgK6Go1YGCnGExRNCVDvI3i5XNbKsQg3EGqLy5siLRSd7m1%2F8KqNlcjv%2FtHJAAsIMxubdfLjdwPrMUCTyxmvaM2bvzV4hm4erkvRLZ1Kbrihu2hSLWd8h1wnNtXP4skfy%2BTMN3xtXAIim%2B3NTBMBxGtoYzUbYV%2BFMMgapalrPpW6FWDAWE3TnDwxFf1M3IOwsXdDzV1mAMcY3CKTFK9xh1Edxh8voiUWIieHCKjlHQbiBv9C9dC2PNTVOt3vxwSbUfoPoIkL4a94Uch4tZZtdov24nKx1CWgpOQn5IS%2FhWIzS3ybCMJ7i1MlFdKf2r1GIrLq0piMxvFuSR%2Bbq1dLVQFyEoFr%2BY8WTXUrnBwfIhS9KFdC%2B7c5%2Fih8Z4s1fEiJC0f25zshWldj9ZJBU%2BU7cwyd760AY6pgGUlUbclPeRULKzI6u2GFmwa4HIepDFe042Cvjps8FbjmJMBXeQ317JFwRSHAswDsSiDul%2BLYykL2DE6Y3jy%2FLXGe2dY%2BQmOECK%2B1GhTCTPJHB0bWbfSZNsY32Ra56H032W%2F0ElBtcokHuhjNX6QzNj4YS47Xd6TeWb0dsiANrwsrra8EmlBFKDvMM62vaZmz%2BZf7TV%2BwCeJ0JBHqifQ7Oqmuy3oTHb&X-Amz-Signature=7091d19bc0b5b2ce01a475635e556e416e2902ac767556adc54a2d8ce3f87612&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2W2LAJV%2F20260602%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260602T120312Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFsaCXVzLXdlc3QtMiJGMEQCICX2FffX5XSnV5YQ9yDhJolabmCekA4yVuB3MGFQPF4vAiAfSEmNbng8YmFlDY4rxNEycAO4GUMFOTlIuYqJpKybvCr%2FAwgkEAAaDDYzNzQyMzE4MzgwNSIM%2FQmBCnkeqrzcfKOCKtwDU50rE9L1BhTyfdirbVso04jV4oiaSMGi83%2BYcNIRYMmkm3CMXGKEZTM04hWLBIxhjRmMEFnTiG4EjcD%2FOeXuOvJ3yXqKAU2mIwoHlYLyHcaQ0I1U7f%2BrKfh7OK45E0bZbbk%2BGMkcDOJ%2BRSrwSrKPZUbVUOIpE8ewKeqH3S6yE5VjVYRiaki3npC%2FFkge%2Fo05t4WoxpCGc1GAeChgHi%2Fw4iQQ%2F9Z8z%2FqI0c8KJtvgK6Go1YGCnGExRNCVDvI3i5XNbKsQg3EGqLy5siLRSd7m1%2F8KqNlcjv%2FtHJAAsIMxubdfLjdwPrMUCTyxmvaM2bvzV4hm4erkvRLZ1Kbrihu2hSLWd8h1wnNtXP4skfy%2BTMN3xtXAIim%2B3NTBMBxGtoYzUbYV%2BFMMgapalrPpW6FWDAWE3TnDwxFf1M3IOwsXdDzV1mAMcY3CKTFK9xh1Edxh8voiUWIieHCKjlHQbiBv9C9dC2PNTVOt3vxwSbUfoPoIkL4a94Uch4tZZtdov24nKx1CWgpOQn5IS%2FhWIzS3ybCMJ7i1MlFdKf2r1GIrLq0piMxvFuSR%2Bbq1dLVQFyEoFr%2BY8WTXUrnBwfIhS9KFdC%2B7c5%2Fih8Z4s1fEiJC0f25zshWldj9ZJBU%2BU7cwyd760AY6pgGUlUbclPeRULKzI6u2GFmwa4HIepDFe042Cvjps8FbjmJMBXeQ317JFwRSHAswDsSiDul%2BLYykL2DE6Y3jy%2FLXGe2dY%2BQmOECK%2B1GhTCTPJHB0bWbfSZNsY32Ra56H032W%2F0ElBtcokHuhjNX6QzNj4YS47Xd6TeWb0dsiANrwsrra8EmlBFKDvMM62vaZmz%2BZf7TV%2BwCeJ0JBHqifQ7Oqmuy3oTHb&X-Amz-Signature=1831341ae12313d179bdc496abea92b6989d8931f385646411c8873f44e370bf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46656AOD6B6%2F20260602%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260602T120312Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFsaCXVzLXdlc3QtMiJGMEQCIEbKGsVR1%2BGVoG9Zq2%2FIycY4cbO3%2F6N5rASHDt8I4ydFAiBg5zuy5rTVaOTyF7UKYItfqR5wLm10%2BswBi%2Bi9i8b19ir%2FAwgkEAAaDDYzNzQyMzE4MzgwNSIMs1TJons0LaUwrr6qKtwD8zwkaEtU%2FeioE6Gf0mIlx7IPaAcGOBi5MHHKd4fFNJZpUaiuGdlyZmGtl4VnyscAynVFax7IeCwiAeHsIrjGA06oMTUH6kNOVtKHP8Sr2UmXyBTy3tZ6nhH7Mk1PrmN76Y6Y5h%2F3BtpprdHdtqozbcy5JdQPA6CxeKXQp4i54KtyaghKRLsU2itAQfQPyv7S1Luri9cJXvYIXmFLmEvTa%2FJTv%2FhiOO5FdFPaeApTkBqXfQ0WPMHHQw7UG3RKmdQ1bvy0BQ0zLtTb9QGdV3gRy6fCaK%2B8IBDA2ajU0Fv5QfiWaQjBWIh6EDEW1yDboVmc4FKYV0x66jxuRSs1F8Xjm3vcbhNuVqa8BptcVcwhLpbDSNvxfIAbVANBGWCeJ53SZxnkHtXZbX8akJKozZUJXTZs7pvXEhwWZMFzW5Emj2jKWZrUY6bsUkW2fWEB0YZ9X0hbSBQg4n%2B%2Be%2F2hTCXm6BJPNj77NVsESrTB8BlwUYYLbAE5vQ4%2FiYoVLgCglROEeoJxFOwYO637LxAatYnYdDgziOAYxLJ25QMf5F%2ByUaoQZESLX0%2BXTZL93bRAuU1t5MJ0BTHRAC5xx24QSn1njhZ4HUgfdooCxJ9%2FKvnqrkhdQkdqLivZ7kTVNPIwzd760AY6pgFyZ20KfIaHPr7V8oiYDtmlhpyn1YHQW2B40cgMllNhOFAkybejyTOk9tKDQUuL8%2BfsGo%2Bo7%2B7uFbYHATvevYoPIvchj59B7%2BZUFYhDwE7wInzlTmAnnWzKir4LlMeKV8OQBRVMng9pPbI7CaaycOBLO3Z%2FpnyT%2BAplL2bmd3dogDfi92f2Nw7%2BW9TFc2xHntOZEp8r9SqqSKF5SeYqWLK%2BYVG5Kdi8&X-Amz-Signature=67f56160581b8127f4598ae84ef676a83fd3fb6986974154a9380bfc9aafc169&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XT2XQVYR%2F20260602%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260602T120313Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFsaCXVzLXdlc3QtMiJIMEYCIQDnkFOimTJ2VGe0PllcXIdZKGsmto3baV5lTBXu895eiwIhALf%2Bs9GD6dx4ePFuoZ%2BXeWkMSjRdqm6aHwCaTzGA9j9IKv8DCCQQABoMNjM3NDIzMTgzODA1IgySiutuyKeyR93kgkkq3AOQB5xBRfuT56VOP686Osb%2FnprceWHXUL8agKKPqcrl%2F4ycQ8fv8LaIQLdxPM9%2B73rsyt9eXT%2BercM4CakzLrAbtpa8dRW6T2brm%2Bo6TijIrCOgZOdKjUbiY0zc7eQsZ9xkXLjzUq0Vxz4CBK5Ns3JoDajHJAz5ftLoWRKGfh5E0XY1OTzx3IBbPJ22OK%2BIPLjQbI%2BdyUgMfpP69R6ZGdOnH0LpA9be1sJyGHPlrA4XlibDffQf2sqBOVUHZP7kouunZWIBOlXJLMlu3dUs6%2BpmN9LT6VDgpyobPg7K3NPVbKjyi42uaXEpItLgLnYQ6wahSit9kcu%2BsCsxd6KKG%2BWg0p6uP%2ByIQeEt3zsMs462uuWdBrj9NYf%2FMqr37%2Fe4l2YJ261ljCG%2BC3T9JZ%2FhqPeg8TiW9GG%2FoNxoj1kSF81FbewH2BGVeaNKme%2F5KzSNhS42cXF%2F9%2FMY0VSbWNvpUnGPFgdkis0uH1Pwu%2FXgZHdc1ztRYSLcKVlF3NtdUC5urvLm%2FtMlKIIZYv3EFMTohIQbyUdO4Au9F7k1dxwA48Qjr%2FBWRpjLKoSrG5zr49U50gVg5Ao1bhXS1jRhEp8Oq5YPqdS7XlYMfynf0%2FVYoAD%2FOOilOhddAwWxc%2FrGvzDL3vrQBjqkAaXz3o%2FBi9Odaw7l%2B%2F3%2B%2FyyU7u8QbZYrIuKyDeamXHrRCYrB6Ui4Aycrnrj0TAF1TouHZ4Hifjg0AjXJvayTtmawifrnSpu2h%2F19QlPHvKWDuKEV617jNtm00nkB8KAFeklUHS%2Fp0PXTGky4VlfzyVkDMQDnpaac6NdCljNuiYivf40qGh9F54yT5YJEwxpK7Nq%2Fe2%2FVxjFwmuzbQ6In%2BqN70dwz&X-Amz-Signature=5011156ce5e5296372a6cb625dde9bb40b3cbb4db76892c2a9934c28bee081a4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XT2XQVYR%2F20260602%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260602T120313Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFsaCXVzLXdlc3QtMiJIMEYCIQDnkFOimTJ2VGe0PllcXIdZKGsmto3baV5lTBXu895eiwIhALf%2Bs9GD6dx4ePFuoZ%2BXeWkMSjRdqm6aHwCaTzGA9j9IKv8DCCQQABoMNjM3NDIzMTgzODA1IgySiutuyKeyR93kgkkq3AOQB5xBRfuT56VOP686Osb%2FnprceWHXUL8agKKPqcrl%2F4ycQ8fv8LaIQLdxPM9%2B73rsyt9eXT%2BercM4CakzLrAbtpa8dRW6T2brm%2Bo6TijIrCOgZOdKjUbiY0zc7eQsZ9xkXLjzUq0Vxz4CBK5Ns3JoDajHJAz5ftLoWRKGfh5E0XY1OTzx3IBbPJ22OK%2BIPLjQbI%2BdyUgMfpP69R6ZGdOnH0LpA9be1sJyGHPlrA4XlibDffQf2sqBOVUHZP7kouunZWIBOlXJLMlu3dUs6%2BpmN9LT6VDgpyobPg7K3NPVbKjyi42uaXEpItLgLnYQ6wahSit9kcu%2BsCsxd6KKG%2BWg0p6uP%2ByIQeEt3zsMs462uuWdBrj9NYf%2FMqr37%2Fe4l2YJ261ljCG%2BC3T9JZ%2FhqPeg8TiW9GG%2FoNxoj1kSF81FbewH2BGVeaNKme%2F5KzSNhS42cXF%2F9%2FMY0VSbWNvpUnGPFgdkis0uH1Pwu%2FXgZHdc1ztRYSLcKVlF3NtdUC5urvLm%2FtMlKIIZYv3EFMTohIQbyUdO4Au9F7k1dxwA48Qjr%2FBWRpjLKoSrG5zr49U50gVg5Ao1bhXS1jRhEp8Oq5YPqdS7XlYMfynf0%2FVYoAD%2FOOilOhddAwWxc%2FrGvzDL3vrQBjqkAaXz3o%2FBi9Odaw7l%2B%2F3%2B%2FyyU7u8QbZYrIuKyDeamXHrRCYrB6Ui4Aycrnrj0TAF1TouHZ4Hifjg0AjXJvayTtmawifrnSpu2h%2F19QlPHvKWDuKEV617jNtm00nkB8KAFeklUHS%2Fp0PXTGky4VlfzyVkDMQDnpaac6NdCljNuiYivf40qGh9F54yT5YJEwxpK7Nq%2Fe2%2FVxjFwmuzbQ6In%2BqN70dwz&X-Amz-Signature=085f2d85a4c2915bed2d1a29480d67e5630ed9cbcdcab4fd846895b700a611c0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
