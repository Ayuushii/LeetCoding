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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666YV7M4XE%2F20260729%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260729T103701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC%2BDGq2FVW9qQYqQyoTucRVX3Aw6IHfEjGi0gFsjp%2B11wIgfsD6KgDAA6JZXDAtgkrd6V1XWKxKzLCJD0eFBvBJog4q%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDCVkkcrQ557dj0N15ircA1He2pesyHXcj7wEIThZnls2JBOIv4lvxEu0aH8CvfPDMwK7MnmlhY5bHpf6ORitOqwcv1bAbwTCP0ylkriuhWxQSx5xIxWoGxFKnrKvvBqDQ%2B4ddKxwEJ3Yzxjk3q3P8D0x%2FkiIFaXK1cBhYjHWbqVYFbdIRwHJGnliYLnNMip0%2BIRfPyAPo5CIpCNI4BQPczGVGrql9F5UgsRGs5umo8Fc5scy0OZANTtTCd5ahnk%2FiAWERlL%2Bsgm09fe5moPjWfOGBT0t%2FDTjW6yiC083piQ9zkHWHLANa73Cb5UhGeCDv%2BDoLJSJRtZ%2BcBXkYr9nsioQ7jKwJAgMdyXDYHN8thhCBHAiU34LMp%2FBgiExY1bLs4kHP%2BdJbuAVSbeoxgQMSLGhoV%2FNehkG32BCODl6z9G7csndXbkJUe21zMhk0cI7cKmung2l5qY3353v5UqK7nExsZf2u80wQ6MZ9TwF1ghk8iDUskIITuwyZeq88YDpVFbqk1WzUFrfkyNvrarqyMdKBy80fbPBpm67i3sLi4y4numzeg4zGFEaRYjl%2BnZNGx9XKPklru%2F1VAMFj8LfZ4tFsQteHLJxLo5MmW%2F%2Fx1hx3Yddzako9xx1T53MNY2B6k5yOIkRwMZ7cB1HMLOQp9MGOqUBPI4wfvk1WEiA9CllECY0%2Fxr%2FrD4AV63%2B4m1jWEUYS1KPO9fCgE7olDm7tdTJiH4HTKCaXgj%2BdmRpWPerX8QrVIFdBC2NH8jzP1i9hT8SZbDXUX2joXF7VVT7IUAZTtXGPLGIkHOjtANufsscT7ElouFZZU9GSThKJ5G03Nypt4S3Bw3JDJrckkSgobMkQOEIODoehzo1axzWRFA%2F5g9ysN7jntij&X-Amz-Signature=9eba4c9a7ce3dd83d1a6cb13893c6ffda7d2ffb9ac1e0253ffa91054812c3caf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666YV7M4XE%2F20260729%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260729T103701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC%2BDGq2FVW9qQYqQyoTucRVX3Aw6IHfEjGi0gFsjp%2B11wIgfsD6KgDAA6JZXDAtgkrd6V1XWKxKzLCJD0eFBvBJog4q%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDCVkkcrQ557dj0N15ircA1He2pesyHXcj7wEIThZnls2JBOIv4lvxEu0aH8CvfPDMwK7MnmlhY5bHpf6ORitOqwcv1bAbwTCP0ylkriuhWxQSx5xIxWoGxFKnrKvvBqDQ%2B4ddKxwEJ3Yzxjk3q3P8D0x%2FkiIFaXK1cBhYjHWbqVYFbdIRwHJGnliYLnNMip0%2BIRfPyAPo5CIpCNI4BQPczGVGrql9F5UgsRGs5umo8Fc5scy0OZANTtTCd5ahnk%2FiAWERlL%2Bsgm09fe5moPjWfOGBT0t%2FDTjW6yiC083piQ9zkHWHLANa73Cb5UhGeCDv%2BDoLJSJRtZ%2BcBXkYr9nsioQ7jKwJAgMdyXDYHN8thhCBHAiU34LMp%2FBgiExY1bLs4kHP%2BdJbuAVSbeoxgQMSLGhoV%2FNehkG32BCODl6z9G7csndXbkJUe21zMhk0cI7cKmung2l5qY3353v5UqK7nExsZf2u80wQ6MZ9TwF1ghk8iDUskIITuwyZeq88YDpVFbqk1WzUFrfkyNvrarqyMdKBy80fbPBpm67i3sLi4y4numzeg4zGFEaRYjl%2BnZNGx9XKPklru%2F1VAMFj8LfZ4tFsQteHLJxLo5MmW%2F%2Fx1hx3Yddzako9xx1T53MNY2B6k5yOIkRwMZ7cB1HMLOQp9MGOqUBPI4wfvk1WEiA9CllECY0%2Fxr%2FrD4AV63%2B4m1jWEUYS1KPO9fCgE7olDm7tdTJiH4HTKCaXgj%2BdmRpWPerX8QrVIFdBC2NH8jzP1i9hT8SZbDXUX2joXF7VVT7IUAZTtXGPLGIkHOjtANufsscT7ElouFZZU9GSThKJ5G03Nypt4S3Bw3JDJrckkSgobMkQOEIODoehzo1axzWRFA%2F5g9ysN7jntij&X-Amz-Signature=cf258b82ff3b599ea1bbb9b23ca9cea85afddfb4ff691dda34181d25c633d5ff&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666YV7M4XE%2F20260729%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260729T103701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC%2BDGq2FVW9qQYqQyoTucRVX3Aw6IHfEjGi0gFsjp%2B11wIgfsD6KgDAA6JZXDAtgkrd6V1XWKxKzLCJD0eFBvBJog4q%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDCVkkcrQ557dj0N15ircA1He2pesyHXcj7wEIThZnls2JBOIv4lvxEu0aH8CvfPDMwK7MnmlhY5bHpf6ORitOqwcv1bAbwTCP0ylkriuhWxQSx5xIxWoGxFKnrKvvBqDQ%2B4ddKxwEJ3Yzxjk3q3P8D0x%2FkiIFaXK1cBhYjHWbqVYFbdIRwHJGnliYLnNMip0%2BIRfPyAPo5CIpCNI4BQPczGVGrql9F5UgsRGs5umo8Fc5scy0OZANTtTCd5ahnk%2FiAWERlL%2Bsgm09fe5moPjWfOGBT0t%2FDTjW6yiC083piQ9zkHWHLANa73Cb5UhGeCDv%2BDoLJSJRtZ%2BcBXkYr9nsioQ7jKwJAgMdyXDYHN8thhCBHAiU34LMp%2FBgiExY1bLs4kHP%2BdJbuAVSbeoxgQMSLGhoV%2FNehkG32BCODl6z9G7csndXbkJUe21zMhk0cI7cKmung2l5qY3353v5UqK7nExsZf2u80wQ6MZ9TwF1ghk8iDUskIITuwyZeq88YDpVFbqk1WzUFrfkyNvrarqyMdKBy80fbPBpm67i3sLi4y4numzeg4zGFEaRYjl%2BnZNGx9XKPklru%2F1VAMFj8LfZ4tFsQteHLJxLo5MmW%2F%2Fx1hx3Yddzako9xx1T53MNY2B6k5yOIkRwMZ7cB1HMLOQp9MGOqUBPI4wfvk1WEiA9CllECY0%2Fxr%2FrD4AV63%2B4m1jWEUYS1KPO9fCgE7olDm7tdTJiH4HTKCaXgj%2BdmRpWPerX8QrVIFdBC2NH8jzP1i9hT8SZbDXUX2joXF7VVT7IUAZTtXGPLGIkHOjtANufsscT7ElouFZZU9GSThKJ5G03Nypt4S3Bw3JDJrckkSgobMkQOEIODoehzo1axzWRFA%2F5g9ysN7jntij&X-Amz-Signature=9ed8aac34f4912ccc511ccd808298682bbd02c6f94c6bfb182bcd514e14cae75&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q6BNGFM2%2F20260729%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260729T103701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEVVagLovMqBKoSYBVrkx9Ko3Ewl8T8LbJ5skj%2BvphuCAiEAxGMwbPynmNaXpOOHaol9qhTwl93ygRFy%2By1oynYdMtMq%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDFBeotNP7nyW4dz28CrcA6I1IwHvZwCg2TsO72RYlgIy3D4iFA2q427nA8a%2FLa00v9N3LuS7CToMu8qFQNo1yA%2BpyNWY%2F0ChiWZnvoTbokvOShoJi9U8VGUEgsIrVRvYRpKtUxke3RYiab1Exar4D1phQlXVS3ikZylNhT6O11wWAtr%2FDQ%2BWWoKzcpoNUTu8QMQIeIVycJhDN9LGAgJTNfcoB%2BsVI7OWTU9kCyQUjkY%2B%2BZs%2FlrCDZZBVCYaeH0NjHuGpnMwHxTReKfqBw2nh5B4FmxDhkvx94pnVpib6%2FrlIvig1E1nSF2YE7TTUkdHlthKa7nZ5e93qoXV9tKDGvQpf3afIV2RjbKWKQhjrSPne3PjeqdLMh3IWdBif4qeCIqRh6AtP3Tem2CuGaz8IZ%2FIvnSVztkxVOuA%2BfGM6TossLBcw4jTXvWxF%2Ftp1fnbAsySqZFQVY3w4PlS1uesIrLMMiFajsj0ztiC6vMMz%2BiMQx%2FSerEkr%2Bo5ns54FYPxzdtuw6BLH23VO4I%2FOfMG2FSCrQG8gn%2F3vqs94YojDal9yYfO56GvV77czKXsdV9xJY3YD%2B23daAGAfj9dJ2nnaD5unbOWT4dBHVAJKnlsmrvlLdcyaYWUc%2F5XVgpuhCQCHszRtWDJS%2Bt3HWOBMK%2BRp9MGOqUB6zts9%2BA2kHRBLcm4ZM82hcMWQv2h%2FkzKta8iaxBGjWmNzBucdNLKqKqgWtlyjgo%2FK5Dw9qwOJ70wuMDeVK5mlKF5GorhXMLG0nuP6hdHy8h9KQM6TjBTghzjVQrXSKEULTlBrFmozM453mnRXxosXjrNYEDNQmFlCzWu8BmH0hYENwm14g5dcA1a1xVD1fHey%2FEQYMjGkhdO7PeRG3m8F%2F7ik59y&X-Amz-Signature=ffafb65e93351435761c9d19210c42aea5b04f37c405731ef730c73a91939332&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q6BNGFM2%2F20260729%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260729T103701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEVVagLovMqBKoSYBVrkx9Ko3Ewl8T8LbJ5skj%2BvphuCAiEAxGMwbPynmNaXpOOHaol9qhTwl93ygRFy%2By1oynYdMtMq%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDFBeotNP7nyW4dz28CrcA6I1IwHvZwCg2TsO72RYlgIy3D4iFA2q427nA8a%2FLa00v9N3LuS7CToMu8qFQNo1yA%2BpyNWY%2F0ChiWZnvoTbokvOShoJi9U8VGUEgsIrVRvYRpKtUxke3RYiab1Exar4D1phQlXVS3ikZylNhT6O11wWAtr%2FDQ%2BWWoKzcpoNUTu8QMQIeIVycJhDN9LGAgJTNfcoB%2BsVI7OWTU9kCyQUjkY%2B%2BZs%2FlrCDZZBVCYaeH0NjHuGpnMwHxTReKfqBw2nh5B4FmxDhkvx94pnVpib6%2FrlIvig1E1nSF2YE7TTUkdHlthKa7nZ5e93qoXV9tKDGvQpf3afIV2RjbKWKQhjrSPne3PjeqdLMh3IWdBif4qeCIqRh6AtP3Tem2CuGaz8IZ%2FIvnSVztkxVOuA%2BfGM6TossLBcw4jTXvWxF%2Ftp1fnbAsySqZFQVY3w4PlS1uesIrLMMiFajsj0ztiC6vMMz%2BiMQx%2FSerEkr%2Bo5ns54FYPxzdtuw6BLH23VO4I%2FOfMG2FSCrQG8gn%2F3vqs94YojDal9yYfO56GvV77czKXsdV9xJY3YD%2B23daAGAfj9dJ2nnaD5unbOWT4dBHVAJKnlsmrvlLdcyaYWUc%2F5XVgpuhCQCHszRtWDJS%2Bt3HWOBMK%2BRp9MGOqUB6zts9%2BA2kHRBLcm4ZM82hcMWQv2h%2FkzKta8iaxBGjWmNzBucdNLKqKqgWtlyjgo%2FK5Dw9qwOJ70wuMDeVK5mlKF5GorhXMLG0nuP6hdHy8h9KQM6TjBTghzjVQrXSKEULTlBrFmozM453mnRXxosXjrNYEDNQmFlCzWu8BmH0hYENwm14g5dcA1a1xVD1fHey%2FEQYMjGkhdO7PeRG3m8F%2F7ik59y&X-Amz-Signature=512008e36d383bdea23965f392155b97edf4a3894e9ee04942d96b6c0d8bec24&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q6BNGFM2%2F20260729%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260729T103701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEVVagLovMqBKoSYBVrkx9Ko3Ewl8T8LbJ5skj%2BvphuCAiEAxGMwbPynmNaXpOOHaol9qhTwl93ygRFy%2By1oynYdMtMq%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDFBeotNP7nyW4dz28CrcA6I1IwHvZwCg2TsO72RYlgIy3D4iFA2q427nA8a%2FLa00v9N3LuS7CToMu8qFQNo1yA%2BpyNWY%2F0ChiWZnvoTbokvOShoJi9U8VGUEgsIrVRvYRpKtUxke3RYiab1Exar4D1phQlXVS3ikZylNhT6O11wWAtr%2FDQ%2BWWoKzcpoNUTu8QMQIeIVycJhDN9LGAgJTNfcoB%2BsVI7OWTU9kCyQUjkY%2B%2BZs%2FlrCDZZBVCYaeH0NjHuGpnMwHxTReKfqBw2nh5B4FmxDhkvx94pnVpib6%2FrlIvig1E1nSF2YE7TTUkdHlthKa7nZ5e93qoXV9tKDGvQpf3afIV2RjbKWKQhjrSPne3PjeqdLMh3IWdBif4qeCIqRh6AtP3Tem2CuGaz8IZ%2FIvnSVztkxVOuA%2BfGM6TossLBcw4jTXvWxF%2Ftp1fnbAsySqZFQVY3w4PlS1uesIrLMMiFajsj0ztiC6vMMz%2BiMQx%2FSerEkr%2Bo5ns54FYPxzdtuw6BLH23VO4I%2FOfMG2FSCrQG8gn%2F3vqs94YojDal9yYfO56GvV77czKXsdV9xJY3YD%2B23daAGAfj9dJ2nnaD5unbOWT4dBHVAJKnlsmrvlLdcyaYWUc%2F5XVgpuhCQCHszRtWDJS%2Bt3HWOBMK%2BRp9MGOqUB6zts9%2BA2kHRBLcm4ZM82hcMWQv2h%2FkzKta8iaxBGjWmNzBucdNLKqKqgWtlyjgo%2FK5Dw9qwOJ70wuMDeVK5mlKF5GorhXMLG0nuP6hdHy8h9KQM6TjBTghzjVQrXSKEULTlBrFmozM453mnRXxosXjrNYEDNQmFlCzWu8BmH0hYENwm14g5dcA1a1xVD1fHey%2FEQYMjGkhdO7PeRG3m8F%2F7ik59y&X-Amz-Signature=52d2e4b3f33358039a310f08b7ab7335e53a909ad4e91c26476211b5e892664a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q6BNGFM2%2F20260729%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260729T103701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEVVagLovMqBKoSYBVrkx9Ko3Ewl8T8LbJ5skj%2BvphuCAiEAxGMwbPynmNaXpOOHaol9qhTwl93ygRFy%2By1oynYdMtMq%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDFBeotNP7nyW4dz28CrcA6I1IwHvZwCg2TsO72RYlgIy3D4iFA2q427nA8a%2FLa00v9N3LuS7CToMu8qFQNo1yA%2BpyNWY%2F0ChiWZnvoTbokvOShoJi9U8VGUEgsIrVRvYRpKtUxke3RYiab1Exar4D1phQlXVS3ikZylNhT6O11wWAtr%2FDQ%2BWWoKzcpoNUTu8QMQIeIVycJhDN9LGAgJTNfcoB%2BsVI7OWTU9kCyQUjkY%2B%2BZs%2FlrCDZZBVCYaeH0NjHuGpnMwHxTReKfqBw2nh5B4FmxDhkvx94pnVpib6%2FrlIvig1E1nSF2YE7TTUkdHlthKa7nZ5e93qoXV9tKDGvQpf3afIV2RjbKWKQhjrSPne3PjeqdLMh3IWdBif4qeCIqRh6AtP3Tem2CuGaz8IZ%2FIvnSVztkxVOuA%2BfGM6TossLBcw4jTXvWxF%2Ftp1fnbAsySqZFQVY3w4PlS1uesIrLMMiFajsj0ztiC6vMMz%2BiMQx%2FSerEkr%2Bo5ns54FYPxzdtuw6BLH23VO4I%2FOfMG2FSCrQG8gn%2F3vqs94YojDal9yYfO56GvV77czKXsdV9xJY3YD%2B23daAGAfj9dJ2nnaD5unbOWT4dBHVAJKnlsmrvlLdcyaYWUc%2F5XVgpuhCQCHszRtWDJS%2Bt3HWOBMK%2BRp9MGOqUB6zts9%2BA2kHRBLcm4ZM82hcMWQv2h%2FkzKta8iaxBGjWmNzBucdNLKqKqgWtlyjgo%2FK5Dw9qwOJ70wuMDeVK5mlKF5GorhXMLG0nuP6hdHy8h9KQM6TjBTghzjVQrXSKEULTlBrFmozM453mnRXxosXjrNYEDNQmFlCzWu8BmH0hYENwm14g5dcA1a1xVD1fHey%2FEQYMjGkhdO7PeRG3m8F%2F7ik59y&X-Amz-Signature=f18a9e30486a4d9c324a7c7ee25116b79e8c835621a4729dd41435f3a244c50d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664FEDIBK6%2F20260729%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260729T103702Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICDQqa6RXMk7ISDRd58vaWTaEq9IV67QFaeZKENliMQ7AiEA%2FDi7dVcDVLYHcNHjEMMJWqV77naJjetNKWyPAH0GJJsq%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDIaG7TsxTR9HMhep1CrcA2QuPwfvYRRgGNopOdhoGPNnHqDKlhRQAIsexO6JctYtkNSi3H9d0nS1KDJKVJBMuBIrOuS%2Fr7LDCVMGvRkkY5%2FA9AeqkrHh51Y5jbEeIVnvus%2F7616BjPZIBTwbLdhu8qq5o6FTe%2BTtu0vFO9hbQE2s4yAGcJCclBRsOz4A64fIgM837POlGvKRLRGrnZAZm0OLrNlZac%2BfHczDHkK0fMJ4m2nNMcyQUhJtX%2FrCQ4rYNndHiAOKwDVfAvbZvW3MaNjoQ5b7b4aoc14MJypd58lsQnL37df86uuUXesPGT4DoWoKoe8kHx1H73oCHWcy%2BvIL51dkpDUmg%2FsDGWqRsRUT6akFdNFcqUcl7C1IVdMSd9%2FiWqT4ppCO8jUOBowKRAuzRGLbHNoGXhg51WhuU%2FBudXCQCIpofuyh%2FtOspx8yxXE0pYU6WWe6Kxaj3rwpYH%2BKjZin1n57xx62dAa3O5hF7MAeSdH%2FolBf0o7Y4NWCYc4IxXWJSJ6Aedi659TOT7Ogr4f3NFsxLuJHC8KKaGIvKa8bIQ6AJl1VPCho3tHdOZgPpSj5lVZWfWxfGvpkJqPwoJUha7GW429TRhEpMTsrkzSqcJgyysBgN%2Fs7RMGuU5DBcwu60S%2BUQ5%2FDMK6Sp9MGOqUB%2FFSsDp5gLtsO3am5HpqgUbW3h%2B2QwJ%2B7Z8k2QC6f9FkOMbzPfakQIPKW3csg0%2Bq2D2lYOB9PrP5BmG6w%2Fam02U91cwA6bZvih01e7mmvz0IxEbu91d6FnQVMTWQwY8bF%2BkM1fMXhaJ1aAl0uunqVQaV3Yfr05Sqbf492u%2BazR4h%2Fh%2Bsp63AtDOE3YVUR4EKFy86ag7G%2BQHaPpbIvPX6fQMuDw%2BlN&X-Amz-Signature=169cda1325a5e0e1d2a39ad4c287ce05f3545b7553bd083f30370c57f1da6d5f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UB523Z6Z%2F20260729%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260729T103702Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDVQF1Erkvd34bVfQrDd1956K2Zw700ju9zTC51Xnk0LAIgU4h1NbzXjn5rWw2a5%2BpIFxGsPhJlSx03QwdsX99iXv0q%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDJToxH8ABsqKXmEA1yrcA6KkAWFjeCWYOs75mq6rvLlb5rrkRsqiCb3dTlHjFaUfxeSS7kctXKpDpuR3APqDefPmg5NL2O%2B2kfKhhNt3QM%2FmkHvHiCR18kpisCEEoNlsGETRuoSUgkec3WZlEVejWlAJUxRm%2B%2Bfdyyk9UpTnuRAvQWRJDnjIVeGtHCC7mpux2DUpM9PgCq1iflXK6pbXczPEhqN4O9X0lXdbQLpC0M0QSM4Zw4CeMXmTRb6tdVWnW%2FOtkVSOqNHWLa%2FoKZBZ%2B%2F5vyzvtrSkSSctGX1E%2F8gLmZCLFy9WFVVD2ybm8TbslVKqp2CDA2703rsIwhsgxivsGCyVEsjnKeTeJFKFbt9MZs6ErOK8yjyo5QQ60Hazl0h%2FnslcfslnxqluXdBX2KNuzU1rtvzKvHafuh3DVOsJ1kDYHKDKC3Jq6IGEUrOZoKZCxgiVsznzBYldu7MnCpcTda8os7PuTgj4U%2B7usC8mY1EzOuFtrw6Y%2F6EVRodoUsE8baaCXnZW4gL8gGHaVZMUjrS7xCw6MAKFCgCVR4OfNl06w4BWUMk3PHmcEEbSmakWNTIkbl7r%2B%2FR%2FziLGs8yUZK%2BOMMfhmBng3VWZz0ayr%2FhMU9BcZkDONNINeqZqzbJa8FxiJeXtT0P1pMMiUp9MGOqUBE0T%2B2XPymrNsiCdefdo9AkfLDmbysYqcPUrt4yPgR2PMgvFZeQQeRAmJ%2ByGQn%2FcjHwuKOewDBhu3hQXE%2BhGr2uw8R1WhoRLQATDtWV2TPFNlwjTjIf%2BozUB6FoLAB66117CUguY7UBgslPKchi4X6OlLOXTX0Fc7UQVI8ie878ypbZrTYFAtxPiqP%2FfZy0fRoEvySX%2BJWyYhUVdLAbE7TnlNt79G&X-Amz-Signature=6cb351e03700ebbbbab71765e11fd2590a1da8ba814ac91684754539298d4f6b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UB523Z6Z%2F20260729%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260729T103702Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDVQF1Erkvd34bVfQrDd1956K2Zw700ju9zTC51Xnk0LAIgU4h1NbzXjn5rWw2a5%2BpIFxGsPhJlSx03QwdsX99iXv0q%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDJToxH8ABsqKXmEA1yrcA6KkAWFjeCWYOs75mq6rvLlb5rrkRsqiCb3dTlHjFaUfxeSS7kctXKpDpuR3APqDefPmg5NL2O%2B2kfKhhNt3QM%2FmkHvHiCR18kpisCEEoNlsGETRuoSUgkec3WZlEVejWlAJUxRm%2B%2Bfdyyk9UpTnuRAvQWRJDnjIVeGtHCC7mpux2DUpM9PgCq1iflXK6pbXczPEhqN4O9X0lXdbQLpC0M0QSM4Zw4CeMXmTRb6tdVWnW%2FOtkVSOqNHWLa%2FoKZBZ%2B%2F5vyzvtrSkSSctGX1E%2F8gLmZCLFy9WFVVD2ybm8TbslVKqp2CDA2703rsIwhsgxivsGCyVEsjnKeTeJFKFbt9MZs6ErOK8yjyo5QQ60Hazl0h%2FnslcfslnxqluXdBX2KNuzU1rtvzKvHafuh3DVOsJ1kDYHKDKC3Jq6IGEUrOZoKZCxgiVsznzBYldu7MnCpcTda8os7PuTgj4U%2B7usC8mY1EzOuFtrw6Y%2F6EVRodoUsE8baaCXnZW4gL8gGHaVZMUjrS7xCw6MAKFCgCVR4OfNl06w4BWUMk3PHmcEEbSmakWNTIkbl7r%2B%2FR%2FziLGs8yUZK%2BOMMfhmBng3VWZz0ayr%2FhMU9BcZkDONNINeqZqzbJa8FxiJeXtT0P1pMMiUp9MGOqUBE0T%2B2XPymrNsiCdefdo9AkfLDmbysYqcPUrt4yPgR2PMgvFZeQQeRAmJ%2ByGQn%2FcjHwuKOewDBhu3hQXE%2BhGr2uw8R1WhoRLQATDtWV2TPFNlwjTjIf%2BozUB6FoLAB66117CUguY7UBgslPKchi4X6OlLOXTX0Fc7UQVI8ie878ypbZrTYFAtxPiqP%2FfZy0fRoEvySX%2BJWyYhUVdLAbE7TnlNt79G&X-Amz-Signature=5e76da25a145773592e02479251184b349975681c4e192fecb304e80eee06b5b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
