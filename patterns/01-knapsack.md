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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S3IK2NO5%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T055548Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDBDxqD9EjyJAoEEm%2BlPpqGOU946vyKOPstTJMWaBt%2BwgIhAPqq%2FWG%2FdCwgdteQfARXpBAbbyWWMU6JWZeHCRo9UnUfKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx4S%2Bnd7O9NH%2FCI5IQq3AMYYMzN0WtT1SeHKSdA5asQjZkTMSX8K53ignnxbJwP0iF5DhneMm8foudbyX0eY%2BRxoHOjfuDzOgrLiA7ab7NPKfUwB6gQOTLkv80Gu3IVI%2Bt62JMmba65%2FP1gyZTbwyg92o6K5F7m27AfXCbi6BGaW6rEBy0k8rfuiX%2BKD0y7UsJ%2Fp7C8OQDRcZTwNoD33hMvnARgMewVknhQ6xXIb1Zk1yix8VzmgVGz9NWWVC2SLDxOGAkZp1lJv%2BfN0B5vQ0P3%2BwzD%2FE5ltKk3BP7HWHr4EGjVweerklaulDUSt7thF1cAVX%2BHDTylMkJ76WuKedBseg7I9M5K3DlCVC11XrFbHQeIYIFIPR9a7der8gvjKWkrhpXM45x4FkHT8FcGK4VpC8EktYQcxAX6COLxjQkWv3W4NhKZO3vr019VJf3ZnVICVizh1o%2BJUTZd2m1bCzYfuWTd8KRKdoVZkdVNA8wJwFQhQIotrk9t7RvkWNUvgvdnI5abDA%2BVrHg36tMjYmZwpcYELy%2BCufV4a%2FezIgyfm%2FGNVY%2F6Wxjzpl3xNsLutsVA6fck2L0RX9qOKGt4DPMDrDjLxHlF39shDFmlpw5OBJ1ukCIAHHTiI%2BwuY2t8xKAxSsgWiuvHRP8trzCrzK%2FMBjqkARftUQ8PlzmkJuwhMroO9Nkk1SMIIQ9e%2F%2BbYQFpDSurBTUKmdGHDiMpDL7IoURi6eA42jM0D0TL6%2B8zUn3aW8uGIDYmkaon76vyd0Ub99DiW9QLtgf2aA9am1hitrYMcU5NJpyLWknh4O9bDu9jSzboY7%2BHqnBh8pNeiM1JcwjXA7PCmpu%2FEXwhdINM7AD7156iYNNVxS8%2BAJrKP5YTfennCN64J&X-Amz-Signature=c30ef15ca266f63ccc955c97899c3d2a6815ebcb6134b747191d5c74a8ca4cbb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S3IK2NO5%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T055548Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDBDxqD9EjyJAoEEm%2BlPpqGOU946vyKOPstTJMWaBt%2BwgIhAPqq%2FWG%2FdCwgdteQfARXpBAbbyWWMU6JWZeHCRo9UnUfKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx4S%2Bnd7O9NH%2FCI5IQq3AMYYMzN0WtT1SeHKSdA5asQjZkTMSX8K53ignnxbJwP0iF5DhneMm8foudbyX0eY%2BRxoHOjfuDzOgrLiA7ab7NPKfUwB6gQOTLkv80Gu3IVI%2Bt62JMmba65%2FP1gyZTbwyg92o6K5F7m27AfXCbi6BGaW6rEBy0k8rfuiX%2BKD0y7UsJ%2Fp7C8OQDRcZTwNoD33hMvnARgMewVknhQ6xXIb1Zk1yix8VzmgVGz9NWWVC2SLDxOGAkZp1lJv%2BfN0B5vQ0P3%2BwzD%2FE5ltKk3BP7HWHr4EGjVweerklaulDUSt7thF1cAVX%2BHDTylMkJ76WuKedBseg7I9M5K3DlCVC11XrFbHQeIYIFIPR9a7der8gvjKWkrhpXM45x4FkHT8FcGK4VpC8EktYQcxAX6COLxjQkWv3W4NhKZO3vr019VJf3ZnVICVizh1o%2BJUTZd2m1bCzYfuWTd8KRKdoVZkdVNA8wJwFQhQIotrk9t7RvkWNUvgvdnI5abDA%2BVrHg36tMjYmZwpcYELy%2BCufV4a%2FezIgyfm%2FGNVY%2F6Wxjzpl3xNsLutsVA6fck2L0RX9qOKGt4DPMDrDjLxHlF39shDFmlpw5OBJ1ukCIAHHTiI%2BwuY2t8xKAxSsgWiuvHRP8trzCrzK%2FMBjqkARftUQ8PlzmkJuwhMroO9Nkk1SMIIQ9e%2F%2BbYQFpDSurBTUKmdGHDiMpDL7IoURi6eA42jM0D0TL6%2B8zUn3aW8uGIDYmkaon76vyd0Ub99DiW9QLtgf2aA9am1hitrYMcU5NJpyLWknh4O9bDu9jSzboY7%2BHqnBh8pNeiM1JcwjXA7PCmpu%2FEXwhdINM7AD7156iYNNVxS8%2BAJrKP5YTfennCN64J&X-Amz-Signature=479c7114b392d302d83007897db031204d4ef1f9131aef56a2ffbd7816c01e2d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S3IK2NO5%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T055548Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDBDxqD9EjyJAoEEm%2BlPpqGOU946vyKOPstTJMWaBt%2BwgIhAPqq%2FWG%2FdCwgdteQfARXpBAbbyWWMU6JWZeHCRo9UnUfKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx4S%2Bnd7O9NH%2FCI5IQq3AMYYMzN0WtT1SeHKSdA5asQjZkTMSX8K53ignnxbJwP0iF5DhneMm8foudbyX0eY%2BRxoHOjfuDzOgrLiA7ab7NPKfUwB6gQOTLkv80Gu3IVI%2Bt62JMmba65%2FP1gyZTbwyg92o6K5F7m27AfXCbi6BGaW6rEBy0k8rfuiX%2BKD0y7UsJ%2Fp7C8OQDRcZTwNoD33hMvnARgMewVknhQ6xXIb1Zk1yix8VzmgVGz9NWWVC2SLDxOGAkZp1lJv%2BfN0B5vQ0P3%2BwzD%2FE5ltKk3BP7HWHr4EGjVweerklaulDUSt7thF1cAVX%2BHDTylMkJ76WuKedBseg7I9M5K3DlCVC11XrFbHQeIYIFIPR9a7der8gvjKWkrhpXM45x4FkHT8FcGK4VpC8EktYQcxAX6COLxjQkWv3W4NhKZO3vr019VJf3ZnVICVizh1o%2BJUTZd2m1bCzYfuWTd8KRKdoVZkdVNA8wJwFQhQIotrk9t7RvkWNUvgvdnI5abDA%2BVrHg36tMjYmZwpcYELy%2BCufV4a%2FezIgyfm%2FGNVY%2F6Wxjzpl3xNsLutsVA6fck2L0RX9qOKGt4DPMDrDjLxHlF39shDFmlpw5OBJ1ukCIAHHTiI%2BwuY2t8xKAxSsgWiuvHRP8trzCrzK%2FMBjqkARftUQ8PlzmkJuwhMroO9Nkk1SMIIQ9e%2F%2BbYQFpDSurBTUKmdGHDiMpDL7IoURi6eA42jM0D0TL6%2B8zUn3aW8uGIDYmkaon76vyd0Ub99DiW9QLtgf2aA9am1hitrYMcU5NJpyLWknh4O9bDu9jSzboY7%2BHqnBh8pNeiM1JcwjXA7PCmpu%2FEXwhdINM7AD7156iYNNVxS8%2BAJrKP5YTfennCN64J&X-Amz-Signature=dc52ba353c2b0babd7fea40ff54e0a3b0846190ab6755e1e3c3def5178b82fe2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZUVLC2ME%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T055548Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBgsExZX28hOJk%2FKy6R1c0oiTvVKyRh4IyMSnboCstXNAiBJs8%2BKLczxIiWFI2pxwcX9EqpWaARf9khc1s0ekmuJviqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMCl%2Fq%2FDGam%2BG7gSQoKtwDyjspLVdXlCEvDzI4Q2Kt9pNYfF3bN2vP7Z5v0noWkI9dTgvE6Mz3vk8X%2Be3sAraIuugUEeBA%2B%2FC5w98gEtVaVCJF%2Fndhe6z3Go%2BoV6Ku7iGvkzWnMX8fjNax95bLdfmnRveZPzIMGIjlkFDTG1vpjUMo4Yv2tztE8ZAFRMlkVAVHs5%2B5SOPunKscF5Two86d0jcDfShb3UFoxnrEUd3lE7801dza5htDtAOavHkQElAJO2p9jsORq2CmWjWshggBQNNdvdP8XKszMiNumkVhDOEApUChtnseNiIw3woN8qEV4vmbUEo%2Be6tbuKEYkFZQ0zh8qNBErvO9sh9JUugpO%2FCkjbSW2BxZAdzMznOjax%2FUi0xNF7xBAELcYbG8SXWp73rBqGxgfGDZFmhiltTU9gw3%2Bx3PSEmAZsYXB1EtVjcoqyEBOOLgZS5V%2BxPQHeIL655BfZ1yKJdyWMTvro11itx8fbraKHQF8iKh%2Frdr4f4qG3cO1NOAeH1DZcplsWCFh8M9tBuqfzfalR%2BbXzLmd5A11ZCTz9VBAia3V0vK48TtadLbgAkdqc3dhF4AA3R2NtTvjCOGp%2FjW69K%2FHSuVyuuwRZuIawRunaBI%2BPmI7QHspBpvwBNi7LVMbbIwt8uvzAY6pgHDlbOt65ZsAYoQFp%2BcyeeUDMwRfzLwH0vygwSvDb%2Bu64Hh7m929BggHJDULYVCDFPq5H7kGp8a6hLfobfv%2BIJ4We1qurdujc1XepAIp%2BwiZcaQAa25SVYRedreXpxyKoddnFFKO52RaLNkoqlFy%2B6rZliXcWS%2BoB1jHVueycyfwlE59jsqmnibWdNxmjW7IFeV8ppmPoEbgIYdiBKt0NbvROM7Dh7m&X-Amz-Signature=dd8d9985666d0761e5b739abd55a1374e5d00320a0ab1994bc82f65f97fbfea3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZUVLC2ME%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T055548Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBgsExZX28hOJk%2FKy6R1c0oiTvVKyRh4IyMSnboCstXNAiBJs8%2BKLczxIiWFI2pxwcX9EqpWaARf9khc1s0ekmuJviqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMCl%2Fq%2FDGam%2BG7gSQoKtwDyjspLVdXlCEvDzI4Q2Kt9pNYfF3bN2vP7Z5v0noWkI9dTgvE6Mz3vk8X%2Be3sAraIuugUEeBA%2B%2FC5w98gEtVaVCJF%2Fndhe6z3Go%2BoV6Ku7iGvkzWnMX8fjNax95bLdfmnRveZPzIMGIjlkFDTG1vpjUMo4Yv2tztE8ZAFRMlkVAVHs5%2B5SOPunKscF5Two86d0jcDfShb3UFoxnrEUd3lE7801dza5htDtAOavHkQElAJO2p9jsORq2CmWjWshggBQNNdvdP8XKszMiNumkVhDOEApUChtnseNiIw3woN8qEV4vmbUEo%2Be6tbuKEYkFZQ0zh8qNBErvO9sh9JUugpO%2FCkjbSW2BxZAdzMznOjax%2FUi0xNF7xBAELcYbG8SXWp73rBqGxgfGDZFmhiltTU9gw3%2Bx3PSEmAZsYXB1EtVjcoqyEBOOLgZS5V%2BxPQHeIL655BfZ1yKJdyWMTvro11itx8fbraKHQF8iKh%2Frdr4f4qG3cO1NOAeH1DZcplsWCFh8M9tBuqfzfalR%2BbXzLmd5A11ZCTz9VBAia3V0vK48TtadLbgAkdqc3dhF4AA3R2NtTvjCOGp%2FjW69K%2FHSuVyuuwRZuIawRunaBI%2BPmI7QHspBpvwBNi7LVMbbIwt8uvzAY6pgHDlbOt65ZsAYoQFp%2BcyeeUDMwRfzLwH0vygwSvDb%2Bu64Hh7m929BggHJDULYVCDFPq5H7kGp8a6hLfobfv%2BIJ4We1qurdujc1XepAIp%2BwiZcaQAa25SVYRedreXpxyKoddnFFKO52RaLNkoqlFy%2B6rZliXcWS%2BoB1jHVueycyfwlE59jsqmnibWdNxmjW7IFeV8ppmPoEbgIYdiBKt0NbvROM7Dh7m&X-Amz-Signature=6733cc2acdf28724262c6f528afee4fb42561ebe4a891a5327ebc32a98db3840&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZUVLC2ME%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T055548Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBgsExZX28hOJk%2FKy6R1c0oiTvVKyRh4IyMSnboCstXNAiBJs8%2BKLczxIiWFI2pxwcX9EqpWaARf9khc1s0ekmuJviqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMCl%2Fq%2FDGam%2BG7gSQoKtwDyjspLVdXlCEvDzI4Q2Kt9pNYfF3bN2vP7Z5v0noWkI9dTgvE6Mz3vk8X%2Be3sAraIuugUEeBA%2B%2FC5w98gEtVaVCJF%2Fndhe6z3Go%2BoV6Ku7iGvkzWnMX8fjNax95bLdfmnRveZPzIMGIjlkFDTG1vpjUMo4Yv2tztE8ZAFRMlkVAVHs5%2B5SOPunKscF5Two86d0jcDfShb3UFoxnrEUd3lE7801dza5htDtAOavHkQElAJO2p9jsORq2CmWjWshggBQNNdvdP8XKszMiNumkVhDOEApUChtnseNiIw3woN8qEV4vmbUEo%2Be6tbuKEYkFZQ0zh8qNBErvO9sh9JUugpO%2FCkjbSW2BxZAdzMznOjax%2FUi0xNF7xBAELcYbG8SXWp73rBqGxgfGDZFmhiltTU9gw3%2Bx3PSEmAZsYXB1EtVjcoqyEBOOLgZS5V%2BxPQHeIL655BfZ1yKJdyWMTvro11itx8fbraKHQF8iKh%2Frdr4f4qG3cO1NOAeH1DZcplsWCFh8M9tBuqfzfalR%2BbXzLmd5A11ZCTz9VBAia3V0vK48TtadLbgAkdqc3dhF4AA3R2NtTvjCOGp%2FjW69K%2FHSuVyuuwRZuIawRunaBI%2BPmI7QHspBpvwBNi7LVMbbIwt8uvzAY6pgHDlbOt65ZsAYoQFp%2BcyeeUDMwRfzLwH0vygwSvDb%2Bu64Hh7m929BggHJDULYVCDFPq5H7kGp8a6hLfobfv%2BIJ4We1qurdujc1XepAIp%2BwiZcaQAa25SVYRedreXpxyKoddnFFKO52RaLNkoqlFy%2B6rZliXcWS%2BoB1jHVueycyfwlE59jsqmnibWdNxmjW7IFeV8ppmPoEbgIYdiBKt0NbvROM7Dh7m&X-Amz-Signature=adad52800096405c0e0100cef011555f42cfdb7152b616ecfbec7229843db231&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZUVLC2ME%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T055548Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBgsExZX28hOJk%2FKy6R1c0oiTvVKyRh4IyMSnboCstXNAiBJs8%2BKLczxIiWFI2pxwcX9EqpWaARf9khc1s0ekmuJviqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMCl%2Fq%2FDGam%2BG7gSQoKtwDyjspLVdXlCEvDzI4Q2Kt9pNYfF3bN2vP7Z5v0noWkI9dTgvE6Mz3vk8X%2Be3sAraIuugUEeBA%2B%2FC5w98gEtVaVCJF%2Fndhe6z3Go%2BoV6Ku7iGvkzWnMX8fjNax95bLdfmnRveZPzIMGIjlkFDTG1vpjUMo4Yv2tztE8ZAFRMlkVAVHs5%2B5SOPunKscF5Two86d0jcDfShb3UFoxnrEUd3lE7801dza5htDtAOavHkQElAJO2p9jsORq2CmWjWshggBQNNdvdP8XKszMiNumkVhDOEApUChtnseNiIw3woN8qEV4vmbUEo%2Be6tbuKEYkFZQ0zh8qNBErvO9sh9JUugpO%2FCkjbSW2BxZAdzMznOjax%2FUi0xNF7xBAELcYbG8SXWp73rBqGxgfGDZFmhiltTU9gw3%2Bx3PSEmAZsYXB1EtVjcoqyEBOOLgZS5V%2BxPQHeIL655BfZ1yKJdyWMTvro11itx8fbraKHQF8iKh%2Frdr4f4qG3cO1NOAeH1DZcplsWCFh8M9tBuqfzfalR%2BbXzLmd5A11ZCTz9VBAia3V0vK48TtadLbgAkdqc3dhF4AA3R2NtTvjCOGp%2FjW69K%2FHSuVyuuwRZuIawRunaBI%2BPmI7QHspBpvwBNi7LVMbbIwt8uvzAY6pgHDlbOt65ZsAYoQFp%2BcyeeUDMwRfzLwH0vygwSvDb%2Bu64Hh7m929BggHJDULYVCDFPq5H7kGp8a6hLfobfv%2BIJ4We1qurdujc1XepAIp%2BwiZcaQAa25SVYRedreXpxyKoddnFFKO52RaLNkoqlFy%2B6rZliXcWS%2BoB1jHVueycyfwlE59jsqmnibWdNxmjW7IFeV8ppmPoEbgIYdiBKt0NbvROM7Dh7m&X-Amz-Signature=9d9f07a042f154b6efcfcecc2c006d3ac92fb1ab7292339ad27f29c0a90600d3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XON6SQKS%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T055553Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCyr2UG2BwjjrUziVK18z7NDQ3DcR2xVfCv7cbchkVWWAIhAMww%2BoHErweUAyIV1l5UTKoCYHD5kMveb2CxCj2oycpqKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw0Gmpqt8QNF%2FFByIwq3AMmdViDZl204t1zyB2rlHKemKBMFiNMRDqPkhY2%2BvQrFXOwpKaBVlxGVs%2BU4b6zMv7u6fzus6PDD11rxYz%2FOEvKpbU6O0DcmdysopbEIiAphgX7zXq5Aj9LYqTGCUJsWgVAMBznTMkpkkiiNgnHfHzLZTfAH84bNJtpeUCiA2GJpHV6nOOvN40VNflrY1QY830rokAx%2Bx3Sk3qK9lhuVFvDF5fH1VLrSbg62J7jM8IfT%2BbKsagAkh1xUg%2Blk%2BiajzMrUl8mvmqXKmrbeeAIRh%2B0o%2Bqm4ywURgZVxLbw0vjnDcxBcoo%2BRAR0Lcbv%2BGESyZc4Mvxl8gQcLgT%2BAwLwHHMeMGcOpKWtohc2xrAN%2BRDcJ%2B76BCatKNknDDYhW2qxtJujPOlXNBH4szWw4eqG%2FdHaAOps2JPYH809IgDgMSAL3FXHpWVa2TpTVrdG4DLPPshxON5oz29cIex5uj20UtOMTqahSG3Hv20cOcpRrO2YZnMl6BkFzU%2FYWWaxtAQ8AQLgaY5TEXOgNb4I4jUFxE8rolZCcGrD%2B7mEDUwYFU0kQlkurLZyt753u6vOfG5ms%2BJgZEOzVtUcJ5U%2Bcg1uSejAp6HLhi8iK1qhmLnTfvQUZGXdbi1ZOj073S7nmTDRy6%2FMBjqkAZviaN8ZqrgsxvAIWmP3RwaUAfR2rm1jATuumfKCZ4g5N3r%2FP1370V%2FMmodpLRoFf%2BxmBnM42UZzkSzKfIAGlua3Oxwl4JF3sKpEah9gFJZCneVkKiLRIrz%2FoZNxIeIe%2BYzi5ryKZAni1nfs3mxq13q5GydN4V1XgDA1rG4kfMay26jrXVJhJ60FwVxYYb52NDoy1jbLLKoKHuqucq9L%2FKaQAVsG&X-Amz-Signature=4db04bb18b0f7e7b662cf8631c1082adedd04e12f35b15c9131dae9b54f93c7a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YGWDQ33W%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T055553Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHXdvYqkjIh3KHuAoC2CEcsA3RvQNWfl9ynVs80VwapQAiEA4Tp91y6Hxfkqyibza5sI%2F5xxtMOpTLE3cU365njaofoqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAzt4l%2FlMsXP4owZRircA5zV1NIe%2FkS1rUEdRgZ7eNxQTJS5bP40oDOhnR%2BVc%2B6VXRBhTMkVaAQdJPnyM7lj%2FI30zDmdFo32yxlEon6Q9HBlfTEDYEmAmXXKgXCk%2BmWxZiF4MBIz0OywDxxAV8cOnJdonTSGt6i4xyGtO%2BndoCZFeCIx%2FEbigTL2f3I%2BhJ5KcZIC0HWkKIK1POJGqywsmqwc4C5e0dgwFNTT8SSw4AteK7LM3g0RTrrbTmcPWzMhjhnVCgv%2FbZjF%2FyZo9M0uuESNa%2FCg1RZ3jhdSY8phFb2%2BjDRWnea9%2FEAxEvWz0Omr2jaRWG4%2FPJRpvO4Ij7DtSuMagJPrD%2Bf60eqnoK2F3nDJ2q1N99ibCBw0LlVR2Sx%2BIWSSOqCACPHXC6DtYh73quikvC%2FpRYQIFfj9UAPNpIBQ2NtlhfavsicGEfXfT9VwsESCrC4r3eOIjWs4zOIs5%2F6U8mlGz0qr%2FFZfc%2B1U9a9XUu%2FSlQ0M%2BaXUskS4D2w%2BNhbkx7sRjnNhDcGY2L1jXzegOhPkah0mEbUz5tLa5%2F%2FMY98qHiI2qNawg0iKuzqA0054wFVHi4h8M8kP%2FFsvBp3SrlWkjuiQNEfyq%2B23Alrdxi%2Bak1K0dh6OAYyNtXMDh5yaAE0LuNaeG4d%2BMIPMr8wGOqUBwZqueNzYwHsgFEcLGOMLm%2BJqIvSra3rXrV0v5q%2Fe%2FK4RTqzMqRRi%2BA2lO72t9dw75QCkr86K6sovJ9maJbThado6CN3RKRCCGjIxyFBXV4YgOQ7M60bnPKerC32Ie0GnKZ2x5mMYFTyxDio5FSGEtr7Jtf2mJUpp3ARUOPR5CEDr1tG%2Bg4jmrQlWOnGRr7G7oFEsfOAjOVVttqTBWmtDgeQLXEoM&X-Amz-Signature=0165b0268b07e05ea8250dda4959e0aec8f25c3d1dd9e390a1013a0d4e390ecd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YGWDQ33W%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T055553Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHXdvYqkjIh3KHuAoC2CEcsA3RvQNWfl9ynVs80VwapQAiEA4Tp91y6Hxfkqyibza5sI%2F5xxtMOpTLE3cU365njaofoqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAzt4l%2FlMsXP4owZRircA5zV1NIe%2FkS1rUEdRgZ7eNxQTJS5bP40oDOhnR%2BVc%2B6VXRBhTMkVaAQdJPnyM7lj%2FI30zDmdFo32yxlEon6Q9HBlfTEDYEmAmXXKgXCk%2BmWxZiF4MBIz0OywDxxAV8cOnJdonTSGt6i4xyGtO%2BndoCZFeCIx%2FEbigTL2f3I%2BhJ5KcZIC0HWkKIK1POJGqywsmqwc4C5e0dgwFNTT8SSw4AteK7LM3g0RTrrbTmcPWzMhjhnVCgv%2FbZjF%2FyZo9M0uuESNa%2FCg1RZ3jhdSY8phFb2%2BjDRWnea9%2FEAxEvWz0Omr2jaRWG4%2FPJRpvO4Ij7DtSuMagJPrD%2Bf60eqnoK2F3nDJ2q1N99ibCBw0LlVR2Sx%2BIWSSOqCACPHXC6DtYh73quikvC%2FpRYQIFfj9UAPNpIBQ2NtlhfavsicGEfXfT9VwsESCrC4r3eOIjWs4zOIs5%2F6U8mlGz0qr%2FFZfc%2B1U9a9XUu%2FSlQ0M%2BaXUskS4D2w%2BNhbkx7sRjnNhDcGY2L1jXzegOhPkah0mEbUz5tLa5%2F%2FMY98qHiI2qNawg0iKuzqA0054wFVHi4h8M8kP%2FFsvBp3SrlWkjuiQNEfyq%2B23Alrdxi%2Bak1K0dh6OAYyNtXMDh5yaAE0LuNaeG4d%2BMIPMr8wGOqUBwZqueNzYwHsgFEcLGOMLm%2BJqIvSra3rXrV0v5q%2Fe%2FK4RTqzMqRRi%2BA2lO72t9dw75QCkr86K6sovJ9maJbThado6CN3RKRCCGjIxyFBXV4YgOQ7M60bnPKerC32Ie0GnKZ2x5mMYFTyxDio5FSGEtr7Jtf2mJUpp3ARUOPR5CEDr1tG%2Bg4jmrQlWOnGRr7G7oFEsfOAjOVVttqTBWmtDgeQLXEoM&X-Amz-Signature=f2afa7b03adc9953f32dfba0b18dd3e81c15500fdc2f68ae10d0a39a5d604c6c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
