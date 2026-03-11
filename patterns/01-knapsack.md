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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466227QUWIG%2F20260311%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260311T084032Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDHqeLt%2F6qqfy0DCYZTYXjCf%2BX8LLpWZGmYGCH0YbmlOAiA%2BRs3WJS92YmLdmqR%2Bu4zFrkth6Q3tueaQDEzI8HH%2BbCr%2FAwhaEAAaDDYzNzQyMzE4MzgwNSIMkliKg2ocqqrpQTU8KtwD6mg%2F5QxKbYE%2BHttbc7FY3MHn%2BoPnqaCfAEhZ8Rweq17MbmQO9H%2FwCrnNK5q12TcSOGeqb2ClCfAOetvk6%2BD8GstXPo4KO6PJqvI3TdpTj6PMU4TDoWELH%2FnOjjCR3THkC2UMxSpvMGhqIwiXmMDf44ey38%2BmNiNQ4rb89%2BxvJzU2VYIzHjUvkRUaJuQ6ax8GX9ycuSPUfKGYJiuvvyBLCkIoYYFjquwuTg3d4x%2BQYF5DmEPnRFktLf1KZw51%2BwLTJixEqcxJnODowWFGiGJwlNFs0mABfaWsSX%2FBxrkKLD18vqfzRMFCCLHb%2BVMrgFjKX%2FXWi9XyMuwybyTXld2BlioTIZtvNBcM8HnST3BBHdlwo2hiIVg41icJqW9ivpywTL1qDO6kp3Pd%2FsYGRFy%2B%2FYnhhr0vafNJU%2FRHz8h6v%2BL2cWxT4vFe6exYx0bWyr8R9jqbg%2BPnXLF5l%2BTLk%2FbejInh6jUcw2tLK2F7r8AQIPjGoDFKBogOwh2Le8Lz45va0ndz2%2BLpM2v3SwThQ%2F9UgTNXbyKEoj47QmE739JkgOl0pK9wIBNWL2Iace2PD%2F%2FxP8ycSsx2hJV5elT5TzZ8qjYB4mNVPJcEWgscEJRPdlSVtKe7XDHigbXTvUkwps3EzQY6pgHORDU%2FhWQ0%2BXaU0j0dtGxh2Le%2BImG9xsI9it%2FsM8B51GwpPwFi7a95bQiqb2ewbECPy%2BkXO3tos5WcCvTi%2BxhjVANHdXvaI9tILgbJuKLeqhIgZRn%2FmE1O8%2FOqUaHKU9EC54T2pIxf48nHr2I5wCwoPTLRAadl8JbyYKPDD72rUvY5svj1lICZIJAr5ty0COxM0DSeB0p94sWjRpgy1p1gqxPtrmGL&X-Amz-Signature=7fde0a55bc0379264091f25ba7312fe15e14962064e51af10b9b0be08ad53d09&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466227QUWIG%2F20260311%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260311T084032Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDHqeLt%2F6qqfy0DCYZTYXjCf%2BX8LLpWZGmYGCH0YbmlOAiA%2BRs3WJS92YmLdmqR%2Bu4zFrkth6Q3tueaQDEzI8HH%2BbCr%2FAwhaEAAaDDYzNzQyMzE4MzgwNSIMkliKg2ocqqrpQTU8KtwD6mg%2F5QxKbYE%2BHttbc7FY3MHn%2BoPnqaCfAEhZ8Rweq17MbmQO9H%2FwCrnNK5q12TcSOGeqb2ClCfAOetvk6%2BD8GstXPo4KO6PJqvI3TdpTj6PMU4TDoWELH%2FnOjjCR3THkC2UMxSpvMGhqIwiXmMDf44ey38%2BmNiNQ4rb89%2BxvJzU2VYIzHjUvkRUaJuQ6ax8GX9ycuSPUfKGYJiuvvyBLCkIoYYFjquwuTg3d4x%2BQYF5DmEPnRFktLf1KZw51%2BwLTJixEqcxJnODowWFGiGJwlNFs0mABfaWsSX%2FBxrkKLD18vqfzRMFCCLHb%2BVMrgFjKX%2FXWi9XyMuwybyTXld2BlioTIZtvNBcM8HnST3BBHdlwo2hiIVg41icJqW9ivpywTL1qDO6kp3Pd%2FsYGRFy%2B%2FYnhhr0vafNJU%2FRHz8h6v%2BL2cWxT4vFe6exYx0bWyr8R9jqbg%2BPnXLF5l%2BTLk%2FbejInh6jUcw2tLK2F7r8AQIPjGoDFKBogOwh2Le8Lz45va0ndz2%2BLpM2v3SwThQ%2F9UgTNXbyKEoj47QmE739JkgOl0pK9wIBNWL2Iace2PD%2F%2FxP8ycSsx2hJV5elT5TzZ8qjYB4mNVPJcEWgscEJRPdlSVtKe7XDHigbXTvUkwps3EzQY6pgHORDU%2FhWQ0%2BXaU0j0dtGxh2Le%2BImG9xsI9it%2FsM8B51GwpPwFi7a95bQiqb2ewbECPy%2BkXO3tos5WcCvTi%2BxhjVANHdXvaI9tILgbJuKLeqhIgZRn%2FmE1O8%2FOqUaHKU9EC54T2pIxf48nHr2I5wCwoPTLRAadl8JbyYKPDD72rUvY5svj1lICZIJAr5ty0COxM0DSeB0p94sWjRpgy1p1gqxPtrmGL&X-Amz-Signature=8b9b991c55336db66058c8f489bc9a13167624d10012f1f7b0da7f18f51852ce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466227QUWIG%2F20260311%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260311T084032Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDHqeLt%2F6qqfy0DCYZTYXjCf%2BX8LLpWZGmYGCH0YbmlOAiA%2BRs3WJS92YmLdmqR%2Bu4zFrkth6Q3tueaQDEzI8HH%2BbCr%2FAwhaEAAaDDYzNzQyMzE4MzgwNSIMkliKg2ocqqrpQTU8KtwD6mg%2F5QxKbYE%2BHttbc7FY3MHn%2BoPnqaCfAEhZ8Rweq17MbmQO9H%2FwCrnNK5q12TcSOGeqb2ClCfAOetvk6%2BD8GstXPo4KO6PJqvI3TdpTj6PMU4TDoWELH%2FnOjjCR3THkC2UMxSpvMGhqIwiXmMDf44ey38%2BmNiNQ4rb89%2BxvJzU2VYIzHjUvkRUaJuQ6ax8GX9ycuSPUfKGYJiuvvyBLCkIoYYFjquwuTg3d4x%2BQYF5DmEPnRFktLf1KZw51%2BwLTJixEqcxJnODowWFGiGJwlNFs0mABfaWsSX%2FBxrkKLD18vqfzRMFCCLHb%2BVMrgFjKX%2FXWi9XyMuwybyTXld2BlioTIZtvNBcM8HnST3BBHdlwo2hiIVg41icJqW9ivpywTL1qDO6kp3Pd%2FsYGRFy%2B%2FYnhhr0vafNJU%2FRHz8h6v%2BL2cWxT4vFe6exYx0bWyr8R9jqbg%2BPnXLF5l%2BTLk%2FbejInh6jUcw2tLK2F7r8AQIPjGoDFKBogOwh2Le8Lz45va0ndz2%2BLpM2v3SwThQ%2F9UgTNXbyKEoj47QmE739JkgOl0pK9wIBNWL2Iace2PD%2F%2FxP8ycSsx2hJV5elT5TzZ8qjYB4mNVPJcEWgscEJRPdlSVtKe7XDHigbXTvUkwps3EzQY6pgHORDU%2FhWQ0%2BXaU0j0dtGxh2Le%2BImG9xsI9it%2FsM8B51GwpPwFi7a95bQiqb2ewbECPy%2BkXO3tos5WcCvTi%2BxhjVANHdXvaI9tILgbJuKLeqhIgZRn%2FmE1O8%2FOqUaHKU9EC54T2pIxf48nHr2I5wCwoPTLRAadl8JbyYKPDD72rUvY5svj1lICZIJAr5ty0COxM0DSeB0p94sWjRpgy1p1gqxPtrmGL&X-Amz-Signature=5465e5ec5079094af2d164b1339e57f8bd48a1ba030bf1a4c047448bd931d230&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SLW4W6VL%2F20260311%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260311T084032Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCa2J13mJJ%2B0GCOzh6Q6joKRysr%2B%2FGI8ZfHZ3U0W4%2FxigIhAKjvGflEm8XMDGL%2Fb9IDWDdXRTmGijuMbUHoe1n%2FsMG3Kv8DCFkQABoMNjM3NDIzMTgzODA1IgyuYQy%2FqCbxTGCgEW0q3APLEsgN9dVC1%2FnT57X%2FhRNUGuspeJmHQiOzekyZBOSRiJTjdY6VI5AlBt16f43jEmocAXlsQxaQKQ6qnP%2BenFlmGKFX1uEQ6kUBK%2BaylOfTq4m%2FhZj8BhJ06HvXr4krd%2BmBB76iUT6piiM0jF%2F5bwWPXQLx78MbI0Ff9YtGh%2Boq9GQWyl3y4QVPG6RFJcx8snazB1b1Q9VY37pCeNSDvLbWndBNFpxcYY1LvqUvmIhumA1wSlwISVDtsx6Jcj9cj5XYVq8d7i41wEakt56MqSQR7zMOAOTidkKgwb4sgdJqruHU5NN5%2BeVCTO4nuhsHg0UJr6R3US%2BDxEHUXK5NMXIO%2BmDsCIhVtKDGywvt7ZPul2ql%2FKQ7bH1Ellex0Ny5XS9%2FpBW1ry3Th1S4wQ4SMddfKgDCbnQeP2HQSi8WEYhftnbSWkzDYdZa31MjX4Yumt4wCs1dGv9OM8JUOvjZwgbEj%2Bckr1cJZO3JU%2B8mdCFmxG55S3067ibV7iUH5GR6QHL9UG9vXxMq%2FlbvqpKBPuRB6mKnaZPZs85VHGRMAIVU7Lg4gUjU8wigdRFZ5N00njZAyR06bDb3eheSEdSiJ2IkhMIj5a%2FVIr8cbtfsq85W1TPvyJ6gL7hgP0klXTCny8TNBjqkAVFCKhAbcjZmIG8PMVvKe5wrK%2BbNzX%2BkpFx%2FYjfMs%2BtLs7n1YaDo8gF3nB%2FdEEvHtUn9Mohu63idnm%2BhiBOyP%2BAQM52sM%2F1DXF4a2J2zeCCUA9QgTnxYDSfZByb9uE59BGSMts7J6BHkfFMqhFpp61kvwloq1fkPR1XBwdNMbJRfq6i6bNWNBI022TQmaq0dOVoYQ9IqqDNkq41hCHl2rAC9%2BgaR&X-Amz-Signature=96ab7c8c8e97909e405b9687fc653245bf095bc77d3e59cf84753bf725341716&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SLW4W6VL%2F20260311%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260311T084032Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCa2J13mJJ%2B0GCOzh6Q6joKRysr%2B%2FGI8ZfHZ3U0W4%2FxigIhAKjvGflEm8XMDGL%2Fb9IDWDdXRTmGijuMbUHoe1n%2FsMG3Kv8DCFkQABoMNjM3NDIzMTgzODA1IgyuYQy%2FqCbxTGCgEW0q3APLEsgN9dVC1%2FnT57X%2FhRNUGuspeJmHQiOzekyZBOSRiJTjdY6VI5AlBt16f43jEmocAXlsQxaQKQ6qnP%2BenFlmGKFX1uEQ6kUBK%2BaylOfTq4m%2FhZj8BhJ06HvXr4krd%2BmBB76iUT6piiM0jF%2F5bwWPXQLx78MbI0Ff9YtGh%2Boq9GQWyl3y4QVPG6RFJcx8snazB1b1Q9VY37pCeNSDvLbWndBNFpxcYY1LvqUvmIhumA1wSlwISVDtsx6Jcj9cj5XYVq8d7i41wEakt56MqSQR7zMOAOTidkKgwb4sgdJqruHU5NN5%2BeVCTO4nuhsHg0UJr6R3US%2BDxEHUXK5NMXIO%2BmDsCIhVtKDGywvt7ZPul2ql%2FKQ7bH1Ellex0Ny5XS9%2FpBW1ry3Th1S4wQ4SMddfKgDCbnQeP2HQSi8WEYhftnbSWkzDYdZa31MjX4Yumt4wCs1dGv9OM8JUOvjZwgbEj%2Bckr1cJZO3JU%2B8mdCFmxG55S3067ibV7iUH5GR6QHL9UG9vXxMq%2FlbvqpKBPuRB6mKnaZPZs85VHGRMAIVU7Lg4gUjU8wigdRFZ5N00njZAyR06bDb3eheSEdSiJ2IkhMIj5a%2FVIr8cbtfsq85W1TPvyJ6gL7hgP0klXTCny8TNBjqkAVFCKhAbcjZmIG8PMVvKe5wrK%2BbNzX%2BkpFx%2FYjfMs%2BtLs7n1YaDo8gF3nB%2FdEEvHtUn9Mohu63idnm%2BhiBOyP%2BAQM52sM%2F1DXF4a2J2zeCCUA9QgTnxYDSfZByb9uE59BGSMts7J6BHkfFMqhFpp61kvwloq1fkPR1XBwdNMbJRfq6i6bNWNBI022TQmaq0dOVoYQ9IqqDNkq41hCHl2rAC9%2BgaR&X-Amz-Signature=35cf6a79e6a369dfb1e3fa7767b8b68f2449754b1a4558f88751537ac27f14f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SLW4W6VL%2F20260311%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260311T084032Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCa2J13mJJ%2B0GCOzh6Q6joKRysr%2B%2FGI8ZfHZ3U0W4%2FxigIhAKjvGflEm8XMDGL%2Fb9IDWDdXRTmGijuMbUHoe1n%2FsMG3Kv8DCFkQABoMNjM3NDIzMTgzODA1IgyuYQy%2FqCbxTGCgEW0q3APLEsgN9dVC1%2FnT57X%2FhRNUGuspeJmHQiOzekyZBOSRiJTjdY6VI5AlBt16f43jEmocAXlsQxaQKQ6qnP%2BenFlmGKFX1uEQ6kUBK%2BaylOfTq4m%2FhZj8BhJ06HvXr4krd%2BmBB76iUT6piiM0jF%2F5bwWPXQLx78MbI0Ff9YtGh%2Boq9GQWyl3y4QVPG6RFJcx8snazB1b1Q9VY37pCeNSDvLbWndBNFpxcYY1LvqUvmIhumA1wSlwISVDtsx6Jcj9cj5XYVq8d7i41wEakt56MqSQR7zMOAOTidkKgwb4sgdJqruHU5NN5%2BeVCTO4nuhsHg0UJr6R3US%2BDxEHUXK5NMXIO%2BmDsCIhVtKDGywvt7ZPul2ql%2FKQ7bH1Ellex0Ny5XS9%2FpBW1ry3Th1S4wQ4SMddfKgDCbnQeP2HQSi8WEYhftnbSWkzDYdZa31MjX4Yumt4wCs1dGv9OM8JUOvjZwgbEj%2Bckr1cJZO3JU%2B8mdCFmxG55S3067ibV7iUH5GR6QHL9UG9vXxMq%2FlbvqpKBPuRB6mKnaZPZs85VHGRMAIVU7Lg4gUjU8wigdRFZ5N00njZAyR06bDb3eheSEdSiJ2IkhMIj5a%2FVIr8cbtfsq85W1TPvyJ6gL7hgP0klXTCny8TNBjqkAVFCKhAbcjZmIG8PMVvKe5wrK%2BbNzX%2BkpFx%2FYjfMs%2BtLs7n1YaDo8gF3nB%2FdEEvHtUn9Mohu63idnm%2BhiBOyP%2BAQM52sM%2F1DXF4a2J2zeCCUA9QgTnxYDSfZByb9uE59BGSMts7J6BHkfFMqhFpp61kvwloq1fkPR1XBwdNMbJRfq6i6bNWNBI022TQmaq0dOVoYQ9IqqDNkq41hCHl2rAC9%2BgaR&X-Amz-Signature=24ffbf3bd695237c5379c00118ce6dbe31ab4518a3d70cc0cb1a670cbad820c1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SLW4W6VL%2F20260311%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260311T084032Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCa2J13mJJ%2B0GCOzh6Q6joKRysr%2B%2FGI8ZfHZ3U0W4%2FxigIhAKjvGflEm8XMDGL%2Fb9IDWDdXRTmGijuMbUHoe1n%2FsMG3Kv8DCFkQABoMNjM3NDIzMTgzODA1IgyuYQy%2FqCbxTGCgEW0q3APLEsgN9dVC1%2FnT57X%2FhRNUGuspeJmHQiOzekyZBOSRiJTjdY6VI5AlBt16f43jEmocAXlsQxaQKQ6qnP%2BenFlmGKFX1uEQ6kUBK%2BaylOfTq4m%2FhZj8BhJ06HvXr4krd%2BmBB76iUT6piiM0jF%2F5bwWPXQLx78MbI0Ff9YtGh%2Boq9GQWyl3y4QVPG6RFJcx8snazB1b1Q9VY37pCeNSDvLbWndBNFpxcYY1LvqUvmIhumA1wSlwISVDtsx6Jcj9cj5XYVq8d7i41wEakt56MqSQR7zMOAOTidkKgwb4sgdJqruHU5NN5%2BeVCTO4nuhsHg0UJr6R3US%2BDxEHUXK5NMXIO%2BmDsCIhVtKDGywvt7ZPul2ql%2FKQ7bH1Ellex0Ny5XS9%2FpBW1ry3Th1S4wQ4SMddfKgDCbnQeP2HQSi8WEYhftnbSWkzDYdZa31MjX4Yumt4wCs1dGv9OM8JUOvjZwgbEj%2Bckr1cJZO3JU%2B8mdCFmxG55S3067ibV7iUH5GR6QHL9UG9vXxMq%2FlbvqpKBPuRB6mKnaZPZs85VHGRMAIVU7Lg4gUjU8wigdRFZ5N00njZAyR06bDb3eheSEdSiJ2IkhMIj5a%2FVIr8cbtfsq85W1TPvyJ6gL7hgP0klXTCny8TNBjqkAVFCKhAbcjZmIG8PMVvKe5wrK%2BbNzX%2BkpFx%2FYjfMs%2BtLs7n1YaDo8gF3nB%2FdEEvHtUn9Mohu63idnm%2BhiBOyP%2BAQM52sM%2F1DXF4a2J2zeCCUA9QgTnxYDSfZByb9uE59BGSMts7J6BHkfFMqhFpp61kvwloq1fkPR1XBwdNMbJRfq6i6bNWNBI022TQmaq0dOVoYQ9IqqDNkq41hCHl2rAC9%2BgaR&X-Amz-Signature=9635558f83de07d5099b9f831507ac37df4d1b8b1f9a4fb497ce8e4129d928ca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WWONHJBQ%2F20260311%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260311T084033Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCf2bWJcElo%2BuU%2B6jRMb5v4TVB%2B9712VoMFjkIM6jDajAIhAOP77lvbpRkv%2BocJc7pYmTf06UbXMf5PHqMEk278gX%2FKKv8DCFkQABoMNjM3NDIzMTgzODA1Igzqj5c68rC%2B2EC8Ra4q3AMjgeFHeBbsMJHI8K8uxXfEi33282KQWOcpaAP%2F1pqMoCpG7obWrEIX7qDpFfjqnfCaizNGtsoYad7sH8nB20bEB1gUgBY%2FuqpxqvoyPW8XPwj5f1DIYncjqPwdG00wMFY4N307tyiWLxbl7pEXAqXfto%2FxrY4ND0cKpDNS01dMCVvBe5hbceo1qTPffzOX%2BJ%2F77kRZ1Gl4no9skqM8%2FlAIMXZfFMStC3t5StZ5k5F4wSBuMEkpPkrHNb%2FhqAQGELDsLzfba8CQegT8ktHJhgFhH238ugNQ5nqtnRMSU2BprclDYahDUtOdD5yqF5xEO%2Bj4nynRUk2awiXHYalFhM64B81yCmDSDlEtf8veGiX%2FyOc8y81nqE%2B2Zski5VerVS55jeVCvGDO8yppNNcXiGHhYHrVF1S7ZfKz1G4cvaxlxzRW1j7CFBDLVUvQfYtAEHH%2BBsmY1CY55wv9aWpXTXMKcwdDO2moq1uEe6HDE1qV0CbNoGv6WQ7CwH%2FEudG%2FoZ1x4T%2Frq7oBTkKK5gM53BWVXLqf6cTxfL1OI%2FLSuNK4Or9BeBGCivOcmhQUmiwOtH%2BQEfW5C1I8AmqwwmuZOEXePlanmBqJht7870%2FBFaesjI2dyO5EStJf%2FEePHTC6y8TNBjqkARPLhuJhHwLikxr0V4iHKMtlC35KWNHjjSz98gyCz%2B6QWQVGMAlKXM0niGXDeU2wYOx1MTE%2FDE95Z8MBOi4p%2FYblxzRHBBzNARGeFRKD54mx%2B4c4r5N%2FQXjB96spW2pZOVAGpKvtdkWWW0LQ5EeqOLuEKvZmi231eCbb%2FinWJb54uHus2YCGzjvT1JHaFjyovh8eLz6VqiEKcQ%2BtgqysjeCZrVSd&X-Amz-Signature=61b40baacb71f86e1bb8c50beae949d925be6b657f7e510b5ce54b88b6edad0a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X55YWLPP%2F20260311%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260311T084034Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIA4%2Bnex9QTB6QcZpFSdauSNjdsv2Gu%2Fc0Tghdk%2FqHA9EAiBAlNLU10bxieGblKZqq6%2F4YkUXF7ESDo3Eb0zdNlDJqCr%2FAwhZEAAaDDYzNzQyMzE4MzgwNSIM5lk%2F2l8BevYiYK25KtwDj%2FwSz9lHP%2F8J8%2BrOxwKaX5YQWyFQ0%2FJ87k12M0R%2BTJZ4cEd5uHQIxbcIyM7beY0qCaWaTnaNwXabu8ct%2BdyPQ4iKpR8G6%2FwGE70HFE3abf8VPtycTK%2BVvbhEwSBz8GNpPbkOWF9AEihTD%2BGrROMAuYx0ZRapa0w6NfrKHD%2FnLNdgyXr8rD8kiPeZT3bcVXqgzSt93D9E0Aoaf%2BBYNmVbPvWjqzmQbkYjZRSvUW30T0a5Pkn%2FeoGywxBDE%2Bd5%2BWpix3ZgKp%2B8ZohQYfygizSA6gz3mGXz16oFsHm6ch3FEZ3q4A8t%2B46baV04ynYhb4JStBsyQ7WbOLhwT84OPWSDfmzGli%2BeX6v%2FshT74XQxjWiNKrZAMSV27OfM6UsIkP1K%2FYsAiLMhCKazLhdTns29YNq4wtISKKDbmpJPHpnr37sDRsfcaMjt6cwxaH%2BTBHm%2FGa%2Bd8K7Bv6NSDT6GTYDI%2Bi4IOm4Dw3Gc1YCfMVH6H80RITT7o5bLvotwdV1myJGES7YTqw0550v%2Brm2ynWjPb73GIyBOZtz7JpWtNejxvcCsO4mhmDFNvKk%2B9oAlYI%2BppV6LqvAJn7p8vUgkbjhC%2BDcuvjosahpMc5mat7IOadczMWv2Sdj4UQ1ecNgwpMvEzQY6pgFKEneCsrL3rVzlPpDGQ0zxST8lt%2F6mzJ5RcWSkk7Mh3EyatunVL6cwPDT%2FsBA23IMAFBPDTvVeMCetNVtWNhgDX9Et4AFIaaNnuG0B6nzwAGHxyViw%2BAzjHxhE06UO0sE2EOPX2HCK2d4Cw%2BUeywNXlexxEt2AhrzNDMhuZNjFvrw2WZr2zR4SBsbtAEHLziTRVHSzt%2ByzVsU2kwstBgI1BL0CSl0U&X-Amz-Signature=9f57f7fc4423f7b211d885763d780d2364266c42de6b2df0ec976388221c9c89&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X55YWLPP%2F20260311%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260311T084034Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIA4%2Bnex9QTB6QcZpFSdauSNjdsv2Gu%2Fc0Tghdk%2FqHA9EAiBAlNLU10bxieGblKZqq6%2F4YkUXF7ESDo3Eb0zdNlDJqCr%2FAwhZEAAaDDYzNzQyMzE4MzgwNSIM5lk%2F2l8BevYiYK25KtwDj%2FwSz9lHP%2F8J8%2BrOxwKaX5YQWyFQ0%2FJ87k12M0R%2BTJZ4cEd5uHQIxbcIyM7beY0qCaWaTnaNwXabu8ct%2BdyPQ4iKpR8G6%2FwGE70HFE3abf8VPtycTK%2BVvbhEwSBz8GNpPbkOWF9AEihTD%2BGrROMAuYx0ZRapa0w6NfrKHD%2FnLNdgyXr8rD8kiPeZT3bcVXqgzSt93D9E0Aoaf%2BBYNmVbPvWjqzmQbkYjZRSvUW30T0a5Pkn%2FeoGywxBDE%2Bd5%2BWpix3ZgKp%2B8ZohQYfygizSA6gz3mGXz16oFsHm6ch3FEZ3q4A8t%2B46baV04ynYhb4JStBsyQ7WbOLhwT84OPWSDfmzGli%2BeX6v%2FshT74XQxjWiNKrZAMSV27OfM6UsIkP1K%2FYsAiLMhCKazLhdTns29YNq4wtISKKDbmpJPHpnr37sDRsfcaMjt6cwxaH%2BTBHm%2FGa%2Bd8K7Bv6NSDT6GTYDI%2Bi4IOm4Dw3Gc1YCfMVH6H80RITT7o5bLvotwdV1myJGES7YTqw0550v%2Brm2ynWjPb73GIyBOZtz7JpWtNejxvcCsO4mhmDFNvKk%2B9oAlYI%2BppV6LqvAJn7p8vUgkbjhC%2BDcuvjosahpMc5mat7IOadczMWv2Sdj4UQ1ecNgwpMvEzQY6pgFKEneCsrL3rVzlPpDGQ0zxST8lt%2F6mzJ5RcWSkk7Mh3EyatunVL6cwPDT%2FsBA23IMAFBPDTvVeMCetNVtWNhgDX9Et4AFIaaNnuG0B6nzwAGHxyViw%2BAzjHxhE06UO0sE2EOPX2HCK2d4Cw%2BUeywNXlexxEt2AhrzNDMhuZNjFvrw2WZr2zR4SBsbtAEHLziTRVHSzt%2ByzVsU2kwstBgI1BL0CSl0U&X-Amz-Signature=7f83f29fdba37e29c5fbc1799a2d95e8689b98832f36a734885aa3f401f2f079&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
