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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667VB2WGAU%2F20260714%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260714T095649Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJIMEYCIQDF%2B7gLpHHG8uLVmw5zp9A3xMDIteCT4dWoiBAF3OZmBwIhAOdS%2BLpwitvdvLAxV2UZ44wVDLJfqKvkfK6377eNI4WqKv8DCBEQABoMNjM3NDIzMTgzODA1IgxtkILq9XdvHYcSzG4q3AMhrmcoIqz5Xh4LJHI3lMVzsESQpBXi1PG1BHHIL4YlndGg15YaLpb9o8muk%2F%2BxuVk0TGvqiQ%2FgSHTOQ4CoL7uRXS5B2ZA4%2Fwthz6sbGjLJYrV9nOV46josXzCv3cSCc8mn6V8LJPCs%2FUwxrs22hPIigUasRoOKnytcTdBQXxxG5ADi%2FqtHskYhybfY4U%2BuuDmeXs7x7J50k%2FQpiMG8%2FnwvfTsMW4T6pGHWGEJSHwzY805J%2BJrgMsQkgftPsoJwipLu3QM%2FIqBf8P8%2FKRzJQve2QkUf57qZ8LoBD9T8tPI44N6ZSKN5IkpjqQCIa2klYQZR6udNHgySQA5B5tmD3DDDQknS9iBc3yORYOlQz5JP1eDRiz%2BkttN20zvsGzODC02CcjiGwh4%2BoLB4ypIsuhoKR1HV91aMou2WG4wiDh4B60JDqpzJiTOKM0K5ly0XbvSEpE8fnBamDtMGyWvRyHks2X7hMvu1v%2BpwUqVdygqrUIAC8lXEcrADR13nTsz%2FliSa0n1JPFg71nJ%2FdXfsZ%2B0KNEVoeOMLHPPwE1iGnfXW5F4DoYH33uGav3lz%2Fy3mSloKnEjZddR%2F67%2BKjezh%2BV5%2Bvv97TSW7SSFYotG7h5JssPCGYNMV7EIQ0%2BU3STDSzNfSBjqkAdrnhP7C%2FzrFVARq55X41DjXvDwGedXPDqjUc%2BaRnNK1VopV1cvaDJbQhjH3Okg5D0ArpnBuvJWPyEgS5nbwrYd%2FAdn5FjZUt6e4DoovYgMSlTiHGi%2BlYoBXf31kMfZedhKI9zhBvxsLtxi86s0V5G8nissHArsjDm21zXtW%2BVZd8Tu9GTOnhgzA4pilr3JXWeOvo8nfaSvvJK7S2QvHHOQHD05S&X-Amz-Signature=3ffae6066fe3bd197eb8ddb6e4307478ebf1e666cf13398db38bd83e3727ef09&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667VB2WGAU%2F20260714%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260714T095649Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJIMEYCIQDF%2B7gLpHHG8uLVmw5zp9A3xMDIteCT4dWoiBAF3OZmBwIhAOdS%2BLpwitvdvLAxV2UZ44wVDLJfqKvkfK6377eNI4WqKv8DCBEQABoMNjM3NDIzMTgzODA1IgxtkILq9XdvHYcSzG4q3AMhrmcoIqz5Xh4LJHI3lMVzsESQpBXi1PG1BHHIL4YlndGg15YaLpb9o8muk%2F%2BxuVk0TGvqiQ%2FgSHTOQ4CoL7uRXS5B2ZA4%2Fwthz6sbGjLJYrV9nOV46josXzCv3cSCc8mn6V8LJPCs%2FUwxrs22hPIigUasRoOKnytcTdBQXxxG5ADi%2FqtHskYhybfY4U%2BuuDmeXs7x7J50k%2FQpiMG8%2FnwvfTsMW4T6pGHWGEJSHwzY805J%2BJrgMsQkgftPsoJwipLu3QM%2FIqBf8P8%2FKRzJQve2QkUf57qZ8LoBD9T8tPI44N6ZSKN5IkpjqQCIa2klYQZR6udNHgySQA5B5tmD3DDDQknS9iBc3yORYOlQz5JP1eDRiz%2BkttN20zvsGzODC02CcjiGwh4%2BoLB4ypIsuhoKR1HV91aMou2WG4wiDh4B60JDqpzJiTOKM0K5ly0XbvSEpE8fnBamDtMGyWvRyHks2X7hMvu1v%2BpwUqVdygqrUIAC8lXEcrADR13nTsz%2FliSa0n1JPFg71nJ%2FdXfsZ%2B0KNEVoeOMLHPPwE1iGnfXW5F4DoYH33uGav3lz%2Fy3mSloKnEjZddR%2F67%2BKjezh%2BV5%2Bvv97TSW7SSFYotG7h5JssPCGYNMV7EIQ0%2BU3STDSzNfSBjqkAdrnhP7C%2FzrFVARq55X41DjXvDwGedXPDqjUc%2BaRnNK1VopV1cvaDJbQhjH3Okg5D0ArpnBuvJWPyEgS5nbwrYd%2FAdn5FjZUt6e4DoovYgMSlTiHGi%2BlYoBXf31kMfZedhKI9zhBvxsLtxi86s0V5G8nissHArsjDm21zXtW%2BVZd8Tu9GTOnhgzA4pilr3JXWeOvo8nfaSvvJK7S2QvHHOQHD05S&X-Amz-Signature=96e182345e7285826c6adaa46769d7a85c34563c15606a3248b8af4e8df6b8d7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667VB2WGAU%2F20260714%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260714T095649Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJIMEYCIQDF%2B7gLpHHG8uLVmw5zp9A3xMDIteCT4dWoiBAF3OZmBwIhAOdS%2BLpwitvdvLAxV2UZ44wVDLJfqKvkfK6377eNI4WqKv8DCBEQABoMNjM3NDIzMTgzODA1IgxtkILq9XdvHYcSzG4q3AMhrmcoIqz5Xh4LJHI3lMVzsESQpBXi1PG1BHHIL4YlndGg15YaLpb9o8muk%2F%2BxuVk0TGvqiQ%2FgSHTOQ4CoL7uRXS5B2ZA4%2Fwthz6sbGjLJYrV9nOV46josXzCv3cSCc8mn6V8LJPCs%2FUwxrs22hPIigUasRoOKnytcTdBQXxxG5ADi%2FqtHskYhybfY4U%2BuuDmeXs7x7J50k%2FQpiMG8%2FnwvfTsMW4T6pGHWGEJSHwzY805J%2BJrgMsQkgftPsoJwipLu3QM%2FIqBf8P8%2FKRzJQve2QkUf57qZ8LoBD9T8tPI44N6ZSKN5IkpjqQCIa2klYQZR6udNHgySQA5B5tmD3DDDQknS9iBc3yORYOlQz5JP1eDRiz%2BkttN20zvsGzODC02CcjiGwh4%2BoLB4ypIsuhoKR1HV91aMou2WG4wiDh4B60JDqpzJiTOKM0K5ly0XbvSEpE8fnBamDtMGyWvRyHks2X7hMvu1v%2BpwUqVdygqrUIAC8lXEcrADR13nTsz%2FliSa0n1JPFg71nJ%2FdXfsZ%2B0KNEVoeOMLHPPwE1iGnfXW5F4DoYH33uGav3lz%2Fy3mSloKnEjZddR%2F67%2BKjezh%2BV5%2Bvv97TSW7SSFYotG7h5JssPCGYNMV7EIQ0%2BU3STDSzNfSBjqkAdrnhP7C%2FzrFVARq55X41DjXvDwGedXPDqjUc%2BaRnNK1VopV1cvaDJbQhjH3Okg5D0ArpnBuvJWPyEgS5nbwrYd%2FAdn5FjZUt6e4DoovYgMSlTiHGi%2BlYoBXf31kMfZedhKI9zhBvxsLtxi86s0V5G8nissHArsjDm21zXtW%2BVZd8Tu9GTOnhgzA4pilr3JXWeOvo8nfaSvvJK7S2QvHHOQHD05S&X-Amz-Signature=655bc426073545c15ec5377e59d72c512c77c369d049dc085cf0d6b5aa553c04&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RKN5GMJK%2F20260714%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260714T095649Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQDBAwiPqPFpLCcONCXy7cgcbBiT%2Fl9gQ5%2FWwhDPKMs%2BigIgB%2FDrccrwdb4iBzo0CeR8gzrEFdE9NrJGUtp5BBbqZJYq%2FwMIERAAGgw2Mzc0MjMxODM4MDUiDBlq5TtjH44fP6YVkircA%2FuZx8y%2FvOM5LABns3U%2FQu8y0OWoOcy35IVh%2BPAmwADJypZq5RzuVw3Jqv%2FhrEEyTX7HowBNmzpExtFgrkuWDsLSQ8VaQGn%2B8Bm9TASz%2BkSZH6o81aLs6a2EPoWFZhDeKkHt83puDy6R8zFCs8zDHQcG2Mv6wQMsZFSr3V9J4f0HJE9sVGm8QTZYAeRcqnibBws6ZuzoQqy6UNc0BtIj0nf3kXCPIZfomPjy0LlxhNYTkyFCTuoOgjk8KHmFs8bCjHp5SRpfU2iBX%2F6V1z%2BjMyG1Bz5oyd2qTZCFP3wldNaLClaafco%2FR6EZflan9gbJxxcqATuaOWK01sBtypD2DdkiOuttGYSKTStMGuv0lBDC1qcu%2BmEz6LFSLoomzW6CGwN0cXJI6vCduI%2BUOA4eV3nVbXHgMA%2BFRiYM8%2FZEgymuP95vRw0BBhiQ7nBjvkDnevrstN%2FEdiwSHWJ%2FYN%2B8QewaG7dk4HTR1HMpyxmBb5eqmbCzHSe0Hz39HzPTNWtde2sG7WvDgPXFW%2By3f188QlLlaJ8ahr1f%2FH%2B7S%2FpaAIWcWTH11UoipNlBXOJkbUZGQxUwJiiGDANo%2F93D2RgAU0p4ZMg1NQ%2Bpn5cm9usgGK4yfMEeAjFMSoDnEmFZMKfN19IGOqUB5X%2FWGgVAx8j3zMSzvhlhmjinlyMkewlH9xblGoBeccUbhhF4wzaNyNoLg2nO4VBuowcLK6yUw592DgQgplwo1fdIyihAo3dKlQB%2Fs1qcOlGD20JUr21HnxKeZefdXgCFhoV25WDYGlxdRNAG3H7fHA6eQ0OcPTljtdzAF9iJGoxeFM%2B8PVx68qf5r8U8c3iVyUVIfWIuSD4IiPV0ThT2VBW%2B%2FmUh&X-Amz-Signature=ffe3028994018850af40a684236967e7fd38f4bbacb91db7d0fb37073c4c1163&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RKN5GMJK%2F20260714%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260714T095649Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQDBAwiPqPFpLCcONCXy7cgcbBiT%2Fl9gQ5%2FWwhDPKMs%2BigIgB%2FDrccrwdb4iBzo0CeR8gzrEFdE9NrJGUtp5BBbqZJYq%2FwMIERAAGgw2Mzc0MjMxODM4MDUiDBlq5TtjH44fP6YVkircA%2FuZx8y%2FvOM5LABns3U%2FQu8y0OWoOcy35IVh%2BPAmwADJypZq5RzuVw3Jqv%2FhrEEyTX7HowBNmzpExtFgrkuWDsLSQ8VaQGn%2B8Bm9TASz%2BkSZH6o81aLs6a2EPoWFZhDeKkHt83puDy6R8zFCs8zDHQcG2Mv6wQMsZFSr3V9J4f0HJE9sVGm8QTZYAeRcqnibBws6ZuzoQqy6UNc0BtIj0nf3kXCPIZfomPjy0LlxhNYTkyFCTuoOgjk8KHmFs8bCjHp5SRpfU2iBX%2F6V1z%2BjMyG1Bz5oyd2qTZCFP3wldNaLClaafco%2FR6EZflan9gbJxxcqATuaOWK01sBtypD2DdkiOuttGYSKTStMGuv0lBDC1qcu%2BmEz6LFSLoomzW6CGwN0cXJI6vCduI%2BUOA4eV3nVbXHgMA%2BFRiYM8%2FZEgymuP95vRw0BBhiQ7nBjvkDnevrstN%2FEdiwSHWJ%2FYN%2B8QewaG7dk4HTR1HMpyxmBb5eqmbCzHSe0Hz39HzPTNWtde2sG7WvDgPXFW%2By3f188QlLlaJ8ahr1f%2FH%2B7S%2FpaAIWcWTH11UoipNlBXOJkbUZGQxUwJiiGDANo%2F93D2RgAU0p4ZMg1NQ%2Bpn5cm9usgGK4yfMEeAjFMSoDnEmFZMKfN19IGOqUB5X%2FWGgVAx8j3zMSzvhlhmjinlyMkewlH9xblGoBeccUbhhF4wzaNyNoLg2nO4VBuowcLK6yUw592DgQgplwo1fdIyihAo3dKlQB%2Fs1qcOlGD20JUr21HnxKeZefdXgCFhoV25WDYGlxdRNAG3H7fHA6eQ0OcPTljtdzAF9iJGoxeFM%2B8PVx68qf5r8U8c3iVyUVIfWIuSD4IiPV0ThT2VBW%2B%2FmUh&X-Amz-Signature=41e06dcb91a26efb091508f3239da3df5390ee5500f93f7e963c8d8221759bda&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RKN5GMJK%2F20260714%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260714T095649Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQDBAwiPqPFpLCcONCXy7cgcbBiT%2Fl9gQ5%2FWwhDPKMs%2BigIgB%2FDrccrwdb4iBzo0CeR8gzrEFdE9NrJGUtp5BBbqZJYq%2FwMIERAAGgw2Mzc0MjMxODM4MDUiDBlq5TtjH44fP6YVkircA%2FuZx8y%2FvOM5LABns3U%2FQu8y0OWoOcy35IVh%2BPAmwADJypZq5RzuVw3Jqv%2FhrEEyTX7HowBNmzpExtFgrkuWDsLSQ8VaQGn%2B8Bm9TASz%2BkSZH6o81aLs6a2EPoWFZhDeKkHt83puDy6R8zFCs8zDHQcG2Mv6wQMsZFSr3V9J4f0HJE9sVGm8QTZYAeRcqnibBws6ZuzoQqy6UNc0BtIj0nf3kXCPIZfomPjy0LlxhNYTkyFCTuoOgjk8KHmFs8bCjHp5SRpfU2iBX%2F6V1z%2BjMyG1Bz5oyd2qTZCFP3wldNaLClaafco%2FR6EZflan9gbJxxcqATuaOWK01sBtypD2DdkiOuttGYSKTStMGuv0lBDC1qcu%2BmEz6LFSLoomzW6CGwN0cXJI6vCduI%2BUOA4eV3nVbXHgMA%2BFRiYM8%2FZEgymuP95vRw0BBhiQ7nBjvkDnevrstN%2FEdiwSHWJ%2FYN%2B8QewaG7dk4HTR1HMpyxmBb5eqmbCzHSe0Hz39HzPTNWtde2sG7WvDgPXFW%2By3f188QlLlaJ8ahr1f%2FH%2B7S%2FpaAIWcWTH11UoipNlBXOJkbUZGQxUwJiiGDANo%2F93D2RgAU0p4ZMg1NQ%2Bpn5cm9usgGK4yfMEeAjFMSoDnEmFZMKfN19IGOqUB5X%2FWGgVAx8j3zMSzvhlhmjinlyMkewlH9xblGoBeccUbhhF4wzaNyNoLg2nO4VBuowcLK6yUw592DgQgplwo1fdIyihAo3dKlQB%2Fs1qcOlGD20JUr21HnxKeZefdXgCFhoV25WDYGlxdRNAG3H7fHA6eQ0OcPTljtdzAF9iJGoxeFM%2B8PVx68qf5r8U8c3iVyUVIfWIuSD4IiPV0ThT2VBW%2B%2FmUh&X-Amz-Signature=d08ea4b6600293c7f34d57fa0e7bbec1a08a1e7f5242ceba4a2d95682f4cd31b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RKN5GMJK%2F20260714%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260714T095649Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQDBAwiPqPFpLCcONCXy7cgcbBiT%2Fl9gQ5%2FWwhDPKMs%2BigIgB%2FDrccrwdb4iBzo0CeR8gzrEFdE9NrJGUtp5BBbqZJYq%2FwMIERAAGgw2Mzc0MjMxODM4MDUiDBlq5TtjH44fP6YVkircA%2FuZx8y%2FvOM5LABns3U%2FQu8y0OWoOcy35IVh%2BPAmwADJypZq5RzuVw3Jqv%2FhrEEyTX7HowBNmzpExtFgrkuWDsLSQ8VaQGn%2B8Bm9TASz%2BkSZH6o81aLs6a2EPoWFZhDeKkHt83puDy6R8zFCs8zDHQcG2Mv6wQMsZFSr3V9J4f0HJE9sVGm8QTZYAeRcqnibBws6ZuzoQqy6UNc0BtIj0nf3kXCPIZfomPjy0LlxhNYTkyFCTuoOgjk8KHmFs8bCjHp5SRpfU2iBX%2F6V1z%2BjMyG1Bz5oyd2qTZCFP3wldNaLClaafco%2FR6EZflan9gbJxxcqATuaOWK01sBtypD2DdkiOuttGYSKTStMGuv0lBDC1qcu%2BmEz6LFSLoomzW6CGwN0cXJI6vCduI%2BUOA4eV3nVbXHgMA%2BFRiYM8%2FZEgymuP95vRw0BBhiQ7nBjvkDnevrstN%2FEdiwSHWJ%2FYN%2B8QewaG7dk4HTR1HMpyxmBb5eqmbCzHSe0Hz39HzPTNWtde2sG7WvDgPXFW%2By3f188QlLlaJ8ahr1f%2FH%2B7S%2FpaAIWcWTH11UoipNlBXOJkbUZGQxUwJiiGDANo%2F93D2RgAU0p4ZMg1NQ%2Bpn5cm9usgGK4yfMEeAjFMSoDnEmFZMKfN19IGOqUB5X%2FWGgVAx8j3zMSzvhlhmjinlyMkewlH9xblGoBeccUbhhF4wzaNyNoLg2nO4VBuowcLK6yUw592DgQgplwo1fdIyihAo3dKlQB%2Fs1qcOlGD20JUr21HnxKeZefdXgCFhoV25WDYGlxdRNAG3H7fHA6eQ0OcPTljtdzAF9iJGoxeFM%2B8PVx68qf5r8U8c3iVyUVIfWIuSD4IiPV0ThT2VBW%2B%2FmUh&X-Amz-Signature=1bdab1f4963e4c7e86995978d3e6497c541b7838ddaefb3a6e2a8cebc228e413&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662BQBQUNY%2F20260714%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260714T095650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJGMEQCIDOWr8W1ahrkFTo7pFe8oEbiM07R4mKW%2FbHP%2Fh5C%2F%2FToAiAbnHkNptz6c2kksFtzfT7F8Yvrnlj4w3Er4SIbmKMzNyr%2FAwgREAAaDDYzNzQyMzE4MzgwNSIMvpLVrkrai%2BUhoCQ1KtwDqRNgSXpzQuhYrRxc3MrnsJMBTcpJbcXNVHkH4N%2BMGf3r3wyYLZIxxbNnljk%2Ft7xfdNOXPW2TvUtC4p%2Fcw%2FyKyVTtuISIDw3gG9vSjroBszZ9Xx2UVaifk85kFU0tUpz2AIMG4WfKfh0qQYZD%2BbGU97KrKm5m%2FnhtWtRLkdzetPgWIYEp%2B4wS9f7IAv%2BsaWZ7YzP125Cv4uuJfVFKVhzeAPF3KQdqicx79SY2bbpG%2B7z9%2FEk9N%2FKxlh5ZBYfCSOkLvo0a3OwMgcu0vFZin60%2FRX%2FnGl%2BR93rAb4NtqroyVz02n8%2F1WWXaODUvmE9C2XI4gZRr9GLpJJ1tDCtLBvNIl1mKTFJn%2Fsnm9wUGIGSCG2hvzFeSYucRZfhz5hAvROAXJO8D%2Fm84fygnrBfVkxV%2FeJSo7yJKcnArRGfs6bYSsVV5LqudOHxzYENICtDGMumuaas82paYym9yNuDQHDxNN0lIncanbG68gYoelexRJ0DGFHYw2MfBYU1N3f3ZA0ZL7Cv%2FTsu5iGbBDWbgaRpHaX%2FpGPJymnTmJc27fMepCy5FgSVNsCmHXXdSOsnGpypwx0lJat0B7yiAndyCn5GTnNhSBDYNXV815XO1Gu9mr4AWhM%2BAG19iFPCdXx8wmMvX0gY6pgHyKBSOKrPkhlbqLM%2FTFrSpUbgth3k1WfgVhn%2FZkxkZ6k%2FLn6uleWXGgQJiPpmLBJPdWV9QcRDaNu6Bbk3%2FIC2PI6uWZeNAOw%2FTNaLokAOReX1lBJp%2Fxs%2BOhLEwy29gd2omJRVMcevDReMHsLmKIQN4Iq8tB4oEe%2Bkj8OM%2FBeuvOinyv%2B%2Bx8UUnTy5lmhJJlLwT4ocDYOOmQXon1SNDGhWeZq5w6kV8&X-Amz-Signature=f92c1dbdd41862b87d2908ad34c93db2515fd5c96d3043e1fe9d3e9cca2626bb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664THMSWV5%2F20260714%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260714T095650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJGMEQCIFdgKMvwJlM1eCUzVoF4wo%2F0Gorret3rLsdjJ3x25AEXAiAmg6shYCdU9I8bGQX2Nq2kmtcc4UBVjeQuqqoe6zdvRSr%2FAwgREAAaDDYzNzQyMzE4MzgwNSIMyaoJgS3rSgbX3goTKtwDjcMGrAVBZvAFgsSBh57Tlt4mPWPP%2BNtNcrtHgLKJgPbWXNND0hn0JdC4bNgp5qsra3hihNtkfPnRGiGAfe9BEwWEH%2FO6Oq1ydJXdwn%2Bfj96Uj%2FGTw8LeRvo72u773G0WQajSwOTNTzQQKIYmD1NL4d8yMwpPUJlqHkJKw%2FznmQ9q2Cqa8RfQzKhWkb%2FmqL%2FxJlYX%2BBueFuEi%2FH9FVppEbtxg36WAHyy9B%2Bo2KTlZXQXx4GmaV48SdIkCG351m8DLrn3NnVT2qQCjQmq%2BpM1ejMBbRDUXd36ciy%2FDBJ88PdH1yHJqDt6mTZpL3nAOTNV9HzPQGNSNhVDflpOetSaV8TnmgSKsR2GQWPekOhmWYOdokSyxFwGTRlxhZ6OzVCQl9Wc8DOUUCIbm6DIxcF0pT%2Fu46OdO5T6fUzDBLSVu9yJyPoSl3CEP3NZ%2BepIP%2FbsjueyPDy%2FZKtGADo3mj69no%2F1El1deBhZ9tIUvaGSrDnC01%2FAvfuVplz3ufsE8hpEOUHKEXKQS0C5tkah0qp9iOj4JKK3yJw6x%2BlDHeSv8wLNGaKZICFWmqKXmQUTHc8%2FlZeDSamq3At8cUaimQZ09IywP8JiwXEDSLNVb7YXL30%2BLphFNQG03NUTHROAwx8vX0gY6pgE%2FPnv8Uppnv%2BeaGD1G3QHL4TyDoUqysYSAEyHFPm1kNYJb1QB1YcEGJOnbh7AqY3kCMVFtrv7YDG88VT4pmpx4rUzMmWnfiBI640cqidjgVlbj1t49w6molJgSi%2BBU6H2%2BeSOgZQB9rFQVKBnnFHpknSfYiWn55FVV9CgFk4YcaDCkMu1TkqidC%2BxYA0ZgUa5kIzgmtdt5hA3LCK%2BoNBaC48hb1kGv&X-Amz-Signature=eb7f84df00a0a4270f0ebe3bc6963b665be1c04b3654251f8b2a88002dba86fd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664THMSWV5%2F20260714%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260714T095650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJGMEQCIFdgKMvwJlM1eCUzVoF4wo%2F0Gorret3rLsdjJ3x25AEXAiAmg6shYCdU9I8bGQX2Nq2kmtcc4UBVjeQuqqoe6zdvRSr%2FAwgREAAaDDYzNzQyMzE4MzgwNSIMyaoJgS3rSgbX3goTKtwDjcMGrAVBZvAFgsSBh57Tlt4mPWPP%2BNtNcrtHgLKJgPbWXNND0hn0JdC4bNgp5qsra3hihNtkfPnRGiGAfe9BEwWEH%2FO6Oq1ydJXdwn%2Bfj96Uj%2FGTw8LeRvo72u773G0WQajSwOTNTzQQKIYmD1NL4d8yMwpPUJlqHkJKw%2FznmQ9q2Cqa8RfQzKhWkb%2FmqL%2FxJlYX%2BBueFuEi%2FH9FVppEbtxg36WAHyy9B%2Bo2KTlZXQXx4GmaV48SdIkCG351m8DLrn3NnVT2qQCjQmq%2BpM1ejMBbRDUXd36ciy%2FDBJ88PdH1yHJqDt6mTZpL3nAOTNV9HzPQGNSNhVDflpOetSaV8TnmgSKsR2GQWPekOhmWYOdokSyxFwGTRlxhZ6OzVCQl9Wc8DOUUCIbm6DIxcF0pT%2Fu46OdO5T6fUzDBLSVu9yJyPoSl3CEP3NZ%2BepIP%2FbsjueyPDy%2FZKtGADo3mj69no%2F1El1deBhZ9tIUvaGSrDnC01%2FAvfuVplz3ufsE8hpEOUHKEXKQS0C5tkah0qp9iOj4JKK3yJw6x%2BlDHeSv8wLNGaKZICFWmqKXmQUTHc8%2FlZeDSamq3At8cUaimQZ09IywP8JiwXEDSLNVb7YXL30%2BLphFNQG03NUTHROAwx8vX0gY6pgE%2FPnv8Uppnv%2BeaGD1G3QHL4TyDoUqysYSAEyHFPm1kNYJb1QB1YcEGJOnbh7AqY3kCMVFtrv7YDG88VT4pmpx4rUzMmWnfiBI640cqidjgVlbj1t49w6molJgSi%2BBU6H2%2BeSOgZQB9rFQVKBnnFHpknSfYiWn55FVV9CgFk4YcaDCkMu1TkqidC%2BxYA0ZgUa5kIzgmtdt5hA3LCK%2BoNBaC48hb1kGv&X-Amz-Signature=45c986e4dfc2d40b87fc82f63b2c545d9a3e58d86240ce0bba2979e8dd164bc4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
