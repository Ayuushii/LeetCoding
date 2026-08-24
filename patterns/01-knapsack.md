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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZZV3LYVF%2F20260824%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260824T084523Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJHMEUCIF2bx5kfJT%2BU4joQ0Bgp2IUzN4l10rfODUbBmv%2FPTLDeAiEA5AfmXmVcdtPg7ShLHiqXjVVYptVl4dEwlmdXKjwnxGQqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAdll6C8m30uw5P%2FhCrcAzdukS2CoEo5KZuteT0J%2FRZ1j8bBeVYSrRfaem9Fr5ejihtjQ3DYMv9njYFyqSDFYj1BqJaD5mKWGYZYXlK%2B%2FekYAUbcmxCoBO0urLGtzdrmoNjPBlgD6xKYS6v4MhNsO57ccpGbnFI4Js0psXULfSkFSXx4hIHKcAA7UnBM1U1xmxOzzHFPsLoVLDjnh7D9N4NUy1Kbk0bP4MONFM%2Fur2P9HQSeGVH9gm%2BQJ5banxAheTj3bJeSo%2F5A4Nu4SqyU%2Ffk12kYnoLXLS1my1bsiWufp9NTSs%2BHIwnR4LQxtuyAc9YfFe6RIe%2BM%2ByFNlsLrI7QgU2GAiifhQZ1yRvSW4Xr0kCwGTtHwclffBmh3YlqOeMH0xG3qteTBHbJEDVc8FDxJ1LMivzY7uQtOjrKlXLQmJVr3VwHjxhvx8Ue9ZGR01M9UBSeNc2X7gTUdHo40osMjq%2FBsejga4KdN4w8twskygFIhdyPZlukis0CKQH628p%2Bk71fpVXXTLREHjNKHEP%2Fp8q4mqAREf0I93%2FzdhWNeRB1DxpbCczmPiYKhH6PXnb7yMSec7f5FyfyFrTwgo%2Ffn80M2cm%2B8yG5P95DBqYWGIzwtkjsOyGTg%2Bgw%2FbDQJFri4Orwi5VdkuDnFDMIzmr9QGOqUBK48LWzHNWoHPv74HJTT7nOQhIupc5utoBkSo4nWuTxulPtbSwGKtXX2GuqHNkQCJSNODqaNgqaVOtl2jhOU%2BcmP3p3wUh5XwvWg2wuYqYkSSfIz6VVByt1dxJXNtEeae61CyXNNROuoT%2FO33xwmYu6k9x%2BgVyAj7WxyLiPbTzpgVYIJjvkAcZ%2BspX%2FnroHb14fEMQslLHh%2BJPdp%2FBpf7gKXJpM9l&X-Amz-Signature=3d2abf09789310300159e6f814d6fbc4ffc70d7cd73586c0fa80cfeecae6a29a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZZV3LYVF%2F20260824%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260824T084523Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJHMEUCIF2bx5kfJT%2BU4joQ0Bgp2IUzN4l10rfODUbBmv%2FPTLDeAiEA5AfmXmVcdtPg7ShLHiqXjVVYptVl4dEwlmdXKjwnxGQqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAdll6C8m30uw5P%2FhCrcAzdukS2CoEo5KZuteT0J%2FRZ1j8bBeVYSrRfaem9Fr5ejihtjQ3DYMv9njYFyqSDFYj1BqJaD5mKWGYZYXlK%2B%2FekYAUbcmxCoBO0urLGtzdrmoNjPBlgD6xKYS6v4MhNsO57ccpGbnFI4Js0psXULfSkFSXx4hIHKcAA7UnBM1U1xmxOzzHFPsLoVLDjnh7D9N4NUy1Kbk0bP4MONFM%2Fur2P9HQSeGVH9gm%2BQJ5banxAheTj3bJeSo%2F5A4Nu4SqyU%2Ffk12kYnoLXLS1my1bsiWufp9NTSs%2BHIwnR4LQxtuyAc9YfFe6RIe%2BM%2ByFNlsLrI7QgU2GAiifhQZ1yRvSW4Xr0kCwGTtHwclffBmh3YlqOeMH0xG3qteTBHbJEDVc8FDxJ1LMivzY7uQtOjrKlXLQmJVr3VwHjxhvx8Ue9ZGR01M9UBSeNc2X7gTUdHo40osMjq%2FBsejga4KdN4w8twskygFIhdyPZlukis0CKQH628p%2Bk71fpVXXTLREHjNKHEP%2Fp8q4mqAREf0I93%2FzdhWNeRB1DxpbCczmPiYKhH6PXnb7yMSec7f5FyfyFrTwgo%2Ffn80M2cm%2B8yG5P95DBqYWGIzwtkjsOyGTg%2Bgw%2FbDQJFri4Orwi5VdkuDnFDMIzmr9QGOqUBK48LWzHNWoHPv74HJTT7nOQhIupc5utoBkSo4nWuTxulPtbSwGKtXX2GuqHNkQCJSNODqaNgqaVOtl2jhOU%2BcmP3p3wUh5XwvWg2wuYqYkSSfIz6VVByt1dxJXNtEeae61CyXNNROuoT%2FO33xwmYu6k9x%2BgVyAj7WxyLiPbTzpgVYIJjvkAcZ%2BspX%2FnroHb14fEMQslLHh%2BJPdp%2FBpf7gKXJpM9l&X-Amz-Signature=af2851ea535a0ca4913390587628b3277bc6f5157407f59013af8af7829c7d5d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZZV3LYVF%2F20260824%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260824T084523Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJHMEUCIF2bx5kfJT%2BU4joQ0Bgp2IUzN4l10rfODUbBmv%2FPTLDeAiEA5AfmXmVcdtPg7ShLHiqXjVVYptVl4dEwlmdXKjwnxGQqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAdll6C8m30uw5P%2FhCrcAzdukS2CoEo5KZuteT0J%2FRZ1j8bBeVYSrRfaem9Fr5ejihtjQ3DYMv9njYFyqSDFYj1BqJaD5mKWGYZYXlK%2B%2FekYAUbcmxCoBO0urLGtzdrmoNjPBlgD6xKYS6v4MhNsO57ccpGbnFI4Js0psXULfSkFSXx4hIHKcAA7UnBM1U1xmxOzzHFPsLoVLDjnh7D9N4NUy1Kbk0bP4MONFM%2Fur2P9HQSeGVH9gm%2BQJ5banxAheTj3bJeSo%2F5A4Nu4SqyU%2Ffk12kYnoLXLS1my1bsiWufp9NTSs%2BHIwnR4LQxtuyAc9YfFe6RIe%2BM%2ByFNlsLrI7QgU2GAiifhQZ1yRvSW4Xr0kCwGTtHwclffBmh3YlqOeMH0xG3qteTBHbJEDVc8FDxJ1LMivzY7uQtOjrKlXLQmJVr3VwHjxhvx8Ue9ZGR01M9UBSeNc2X7gTUdHo40osMjq%2FBsejga4KdN4w8twskygFIhdyPZlukis0CKQH628p%2Bk71fpVXXTLREHjNKHEP%2Fp8q4mqAREf0I93%2FzdhWNeRB1DxpbCczmPiYKhH6PXnb7yMSec7f5FyfyFrTwgo%2Ffn80M2cm%2B8yG5P95DBqYWGIzwtkjsOyGTg%2Bgw%2FbDQJFri4Orwi5VdkuDnFDMIzmr9QGOqUBK48LWzHNWoHPv74HJTT7nOQhIupc5utoBkSo4nWuTxulPtbSwGKtXX2GuqHNkQCJSNODqaNgqaVOtl2jhOU%2BcmP3p3wUh5XwvWg2wuYqYkSSfIz6VVByt1dxJXNtEeae61CyXNNROuoT%2FO33xwmYu6k9x%2BgVyAj7WxyLiPbTzpgVYIJjvkAcZ%2BspX%2FnroHb14fEMQslLHh%2BJPdp%2FBpf7gKXJpM9l&X-Amz-Signature=3c706eca298ac6006f50ede6726760c5355c20fa66c369660cccb5d97f384e74&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2Y4C2IH%2F20260824%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260824T084524Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJGMEQCIEYT9ci24g9huHDRqidoDV5bc4PQmIF8rZ%2FkffAHvhQAAiAcgtj50xgyohX2SJ9ocXT29YtBsftLvl81kvVJq5kOsyqIBAjp%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM7vvWf2388roS3cL2KtwDG9zIN4uREZW2Y4hVNqACqFe38v0wnAQ2jICyg3B9KuY4apUehzfIbspyrRrK0Ne9tHO%2FGaK89sn8n8V5hQTpk05gBLyWUqHhHdEGuOLGBDHIJxBp7Lbz6Fo6M52tsJgXYGbh%2BzdloOtBYPcBXhM8RNRspuOvEk6g2LXKQFVovdCCwF1lWaqJ8xYd%2FHOJOTWEY4i3A3bqloo8Kg7FfQ7ZHQBO2eVwmZY63miw79dE%2BsS3hBJ1TWiUqBQHyL%2FVzkiXo70uupb%2FQC%2FFduyhBogBJFsLXvAdD4gBA5WrsJv%2BGrhDW2dbFJ0bwHDKBnh20aQbrvyVcuizHkP1BJBQiYljmYJ8%2FPx5T%2B6kXqMKVu144NXMQ9jidtQsJscQkr%2FD24Ys%2B2s9m0s16kPLAt8BA2RCSW%2FtUSk8nrw66RgYHlw1VrPyxSn%2FjiPtFtY%2BFB6k0i494s5uRZ4i4yADKagczoFPDKLiVo7S3P1Bf%2BNQdiY8HDTW0iloXmBfbztsXeLY0LjQ%2FYBxp2fNjEK4C7%2F7GGx%2BnV67RxjM8GDMbRKQ2Y2dOIEwZLUHUWFZTjBKmaWjhNyosq4On8YyunOgpIX6DusS2qlVNwCeEpDvdzDY7egY5XPrd9Gz0PThLL9Cqegw5Oav1AY6pgEKunv2CuKujqwuksHxqdzYzCFpRfJvTOfjFIbombHDW%2FV9JtQDifrT6U5xb3bPSoVxg65hzGkvNi6FbdoBUCI0LpnNIa7dhlE02IYoFMdyTD0zh4PfxyZRzBxB%2F0bbyLuPfaEv7tHFyTU2apleDJ23qeOz3WmPh%2F8XkKGVq9y9FmmLSmtyiAJ%2BhkpaI8ceZuxeX74UMnwtkPMYY1dJe3qiSbX2%2BYiJ&X-Amz-Signature=ea6749cb16bd89da5aa00bf23956c9801c462695ecc78ca402ff263cf0ed31f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2Y4C2IH%2F20260824%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260824T084524Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJGMEQCIEYT9ci24g9huHDRqidoDV5bc4PQmIF8rZ%2FkffAHvhQAAiAcgtj50xgyohX2SJ9ocXT29YtBsftLvl81kvVJq5kOsyqIBAjp%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM7vvWf2388roS3cL2KtwDG9zIN4uREZW2Y4hVNqACqFe38v0wnAQ2jICyg3B9KuY4apUehzfIbspyrRrK0Ne9tHO%2FGaK89sn8n8V5hQTpk05gBLyWUqHhHdEGuOLGBDHIJxBp7Lbz6Fo6M52tsJgXYGbh%2BzdloOtBYPcBXhM8RNRspuOvEk6g2LXKQFVovdCCwF1lWaqJ8xYd%2FHOJOTWEY4i3A3bqloo8Kg7FfQ7ZHQBO2eVwmZY63miw79dE%2BsS3hBJ1TWiUqBQHyL%2FVzkiXo70uupb%2FQC%2FFduyhBogBJFsLXvAdD4gBA5WrsJv%2BGrhDW2dbFJ0bwHDKBnh20aQbrvyVcuizHkP1BJBQiYljmYJ8%2FPx5T%2B6kXqMKVu144NXMQ9jidtQsJscQkr%2FD24Ys%2B2s9m0s16kPLAt8BA2RCSW%2FtUSk8nrw66RgYHlw1VrPyxSn%2FjiPtFtY%2BFB6k0i494s5uRZ4i4yADKagczoFPDKLiVo7S3P1Bf%2BNQdiY8HDTW0iloXmBfbztsXeLY0LjQ%2FYBxp2fNjEK4C7%2F7GGx%2BnV67RxjM8GDMbRKQ2Y2dOIEwZLUHUWFZTjBKmaWjhNyosq4On8YyunOgpIX6DusS2qlVNwCeEpDvdzDY7egY5XPrd9Gz0PThLL9Cqegw5Oav1AY6pgEKunv2CuKujqwuksHxqdzYzCFpRfJvTOfjFIbombHDW%2FV9JtQDifrT6U5xb3bPSoVxg65hzGkvNi6FbdoBUCI0LpnNIa7dhlE02IYoFMdyTD0zh4PfxyZRzBxB%2F0bbyLuPfaEv7tHFyTU2apleDJ23qeOz3WmPh%2F8XkKGVq9y9FmmLSmtyiAJ%2BhkpaI8ceZuxeX74UMnwtkPMYY1dJe3qiSbX2%2BYiJ&X-Amz-Signature=8bcd87d096ccde845a4b24b525d2b9993f1751ac6dd72620b1683790f5d7bce2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2Y4C2IH%2F20260824%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260824T084524Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJGMEQCIEYT9ci24g9huHDRqidoDV5bc4PQmIF8rZ%2FkffAHvhQAAiAcgtj50xgyohX2SJ9ocXT29YtBsftLvl81kvVJq5kOsyqIBAjp%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM7vvWf2388roS3cL2KtwDG9zIN4uREZW2Y4hVNqACqFe38v0wnAQ2jICyg3B9KuY4apUehzfIbspyrRrK0Ne9tHO%2FGaK89sn8n8V5hQTpk05gBLyWUqHhHdEGuOLGBDHIJxBp7Lbz6Fo6M52tsJgXYGbh%2BzdloOtBYPcBXhM8RNRspuOvEk6g2LXKQFVovdCCwF1lWaqJ8xYd%2FHOJOTWEY4i3A3bqloo8Kg7FfQ7ZHQBO2eVwmZY63miw79dE%2BsS3hBJ1TWiUqBQHyL%2FVzkiXo70uupb%2FQC%2FFduyhBogBJFsLXvAdD4gBA5WrsJv%2BGrhDW2dbFJ0bwHDKBnh20aQbrvyVcuizHkP1BJBQiYljmYJ8%2FPx5T%2B6kXqMKVu144NXMQ9jidtQsJscQkr%2FD24Ys%2B2s9m0s16kPLAt8BA2RCSW%2FtUSk8nrw66RgYHlw1VrPyxSn%2FjiPtFtY%2BFB6k0i494s5uRZ4i4yADKagczoFPDKLiVo7S3P1Bf%2BNQdiY8HDTW0iloXmBfbztsXeLY0LjQ%2FYBxp2fNjEK4C7%2F7GGx%2BnV67RxjM8GDMbRKQ2Y2dOIEwZLUHUWFZTjBKmaWjhNyosq4On8YyunOgpIX6DusS2qlVNwCeEpDvdzDY7egY5XPrd9Gz0PThLL9Cqegw5Oav1AY6pgEKunv2CuKujqwuksHxqdzYzCFpRfJvTOfjFIbombHDW%2FV9JtQDifrT6U5xb3bPSoVxg65hzGkvNi6FbdoBUCI0LpnNIa7dhlE02IYoFMdyTD0zh4PfxyZRzBxB%2F0bbyLuPfaEv7tHFyTU2apleDJ23qeOz3WmPh%2F8XkKGVq9y9FmmLSmtyiAJ%2BhkpaI8ceZuxeX74UMnwtkPMYY1dJe3qiSbX2%2BYiJ&X-Amz-Signature=1df79ebd73906bdb3b8f0d31f53a9fa5bbe5df62bbfd625fc7b8aefaa29be856&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2Y4C2IH%2F20260824%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260824T084524Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJGMEQCIEYT9ci24g9huHDRqidoDV5bc4PQmIF8rZ%2FkffAHvhQAAiAcgtj50xgyohX2SJ9ocXT29YtBsftLvl81kvVJq5kOsyqIBAjp%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM7vvWf2388roS3cL2KtwDG9zIN4uREZW2Y4hVNqACqFe38v0wnAQ2jICyg3B9KuY4apUehzfIbspyrRrK0Ne9tHO%2FGaK89sn8n8V5hQTpk05gBLyWUqHhHdEGuOLGBDHIJxBp7Lbz6Fo6M52tsJgXYGbh%2BzdloOtBYPcBXhM8RNRspuOvEk6g2LXKQFVovdCCwF1lWaqJ8xYd%2FHOJOTWEY4i3A3bqloo8Kg7FfQ7ZHQBO2eVwmZY63miw79dE%2BsS3hBJ1TWiUqBQHyL%2FVzkiXo70uupb%2FQC%2FFduyhBogBJFsLXvAdD4gBA5WrsJv%2BGrhDW2dbFJ0bwHDKBnh20aQbrvyVcuizHkP1BJBQiYljmYJ8%2FPx5T%2B6kXqMKVu144NXMQ9jidtQsJscQkr%2FD24Ys%2B2s9m0s16kPLAt8BA2RCSW%2FtUSk8nrw66RgYHlw1VrPyxSn%2FjiPtFtY%2BFB6k0i494s5uRZ4i4yADKagczoFPDKLiVo7S3P1Bf%2BNQdiY8HDTW0iloXmBfbztsXeLY0LjQ%2FYBxp2fNjEK4C7%2F7GGx%2BnV67RxjM8GDMbRKQ2Y2dOIEwZLUHUWFZTjBKmaWjhNyosq4On8YyunOgpIX6DusS2qlVNwCeEpDvdzDY7egY5XPrd9Gz0PThLL9Cqegw5Oav1AY6pgEKunv2CuKujqwuksHxqdzYzCFpRfJvTOfjFIbombHDW%2FV9JtQDifrT6U5xb3bPSoVxg65hzGkvNi6FbdoBUCI0LpnNIa7dhlE02IYoFMdyTD0zh4PfxyZRzBxB%2F0bbyLuPfaEv7tHFyTU2apleDJ23qeOz3WmPh%2F8XkKGVq9y9FmmLSmtyiAJ%2BhkpaI8ceZuxeX74UMnwtkPMYY1dJe3qiSbX2%2BYiJ&X-Amz-Signature=0ecb70a2ebca5df8e259062f15b8711a5e87369c45aaece33b4d9e83a127a003&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QSSICEQJ%2F20260824%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260824T084524Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJHMEUCIQCkZDx3yjQZIW9ytKFNoSB4V3ZksPyefBY%2F5uv%2FaluOFgIgKBypEy4p1dypStqOdkEhuT9NeKZqyjAv1tQOzwXO99AqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHFgnIJMFJdvOB2PFCrcA7zPW%2Fim7RzCV3Lz%2BSQ6QFXfh0gn9sUlrVPZE2nFr0T2a5axZACkDYG0jRVmlkwrAOliTPPQ41RmpX6TsWRqkTxKXqnREMjLnheUc0b5gEjEW99hjD3avKJtbyD0C6GcRIx0h%2FL3rJcqGMiCIDcX2JHexmuKsKE%2BbtI2yU67w%2FmgE8nz3XTyNUGD1oKUynYYjvbYODcOmMYLpOm43TE9XaBxXvMUyyhd%2FwExAkqRjx3kBx7e4nzw2dWLtXFUF5z5Z57AYvrejjiUazot4peFHVpyxyMQdSV6myhnIGf2pk6GiVEc2k7dCX%2FDKg7X8X2FNI1bUzwl3lmo4iwIQq6UYc35gbWaD%2FzI1GCMzjwTdSpAiqJcR6FxOy9Ze8P3MbxShpKSryXhOv1Z7oY8g99GpLInon9s3JZtFFe5au7Uy0hxRbIxEx72rw%2FUKDWIyN6%2BysalCItlcvon5iJiKMTTwi9hMA%2FD6mKV3IG7wjc7b7HOLYwfViBas8r3ci6rKUc3dRIcJo74G08UPP4xwoSpH43DmjaxWr%2BLili3Xqvn8VKPyzqXjNi%2BJJ8YdywiKzA9i%2B9mbtrYwuwbcuM%2BPw31wtHPa%2BqknM3DRu0NPDSUJftzS49eeAZZde070lyQMJrir9QGOqUB%2BIqYIfMqmOwYYjhCVIvrUCqKuv1hVGMr%2BgmaRFziuDhQ3l4yzNUe8sYTmnW6wKrr9sRQbrIap772z3eiRyo3HM1dtbGVmLAG7dfGHAOm7SQXOg6svHObvv67pON9285EL4ieZajquLbYon9tV1ZQLOos7gATJ%2B2q08D0%2BJjhCV1%2B1Z7xDHUT%2FFyp1u4Vy3dtOxZuviX1VrDziYJyx6yX45pFqwRA&X-Amz-Signature=e2509860db68b8448834362a0e19907f843710b0293c7c577e53890a630f7a3e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUDMVDTA%2F20260824%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260824T084524Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJHMEUCIQCVf6tn%2BuScr2oL7gJUETlfAGFS0kigIMKudg7yHWtLDAIgB4Ndm0mxQLDBYolxmkfPYay4upu%2Fh6iE4OZnSkBxyFMqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDD%2FCy94%2FDSIANgzMoircA5NCuXCelNNcJvNMFOhfInrcgk8uIa%2BG1YTfTK9OUTqLho7rxSVj6TX0haVBmRFHexVVAjsv08eGjeMzcqjU0EB8NRrEG3eBtC2JivlQx05c66wNH1DYwho%2Flg2%2BD0CywtRYr9h%2Bd8CG%2BeZzKCGTtl4qA6jap0Wm5YGu%2Brj%2FfzkU4gjYjxnoOT8WE37IFQ08hjFCQXYs4EWLB%2Bvs%2B%2FTzAE9M9DNaTVaWqzLe2xqJDlyNVTjlH%2B5m6g5ZmoCH%2BkxvH%2FGZSZI64QfygW45jlrbu0QfFesKW%2BIydx3KXd6ytuXP%2BNs%2F3xK2SF1YE%2Fg89Gws40yjbJzbWFoI9zy9TwZDFpWFCn5l4MfZOcRYjlQe%2BdHas3%2B%2F%2BzXMnWUmaHBHveXRqfwh08JF9rOmFKkI6a56RjIdDJH5xjWSMi96hvCnwdpwE8Uawt5Y64g7jR1Ya7WCOHmQZ2MtnTvYs9Q%2FB4yefEUu9inBSwR9u%2Fi7Qs0UuM4%2F6QHrkwpfGEXAOXy4ahttbE%2FLprr%2Fb21JSMgjL0QoKqLKpZU2jwzXxm%2BeZKGKprJQCCLo7rl7dXuDdmnq7sS2BIPiC2Xs00cQMIDfDP0zE9BTnoIXStPUl449TYqjYGCHfZ9qMti7PrB1pFlCMJDir9QGOqUBkPsH64m3puV1pJki6%2FCm%2FT66B5E5p%2BhQYvQiXyTYZWvzDFkV1JdaofIr3EV9cPli2X4NDTu92YpuIftQT4Udm8TJSzRBMoiW6ptxGzaWxf8TUhrdLWKNBm174Jdjw0N1X2xLPrN5tsvIaSLprcKUPmlsDewmLNsGttqKc4x6tCeMlDORk3GD1FMyvysNqM7ss%2FOWvfOUg59KjziGZLZPpIh5qlyU&X-Amz-Signature=247083f28f39e82391aa791daa11b3b64f60025c091ad8f5797c04f8735b7fdf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUDMVDTA%2F20260824%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260824T084524Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJHMEUCIQCVf6tn%2BuScr2oL7gJUETlfAGFS0kigIMKudg7yHWtLDAIgB4Ndm0mxQLDBYolxmkfPYay4upu%2Fh6iE4OZnSkBxyFMqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDD%2FCy94%2FDSIANgzMoircA5NCuXCelNNcJvNMFOhfInrcgk8uIa%2BG1YTfTK9OUTqLho7rxSVj6TX0haVBmRFHexVVAjsv08eGjeMzcqjU0EB8NRrEG3eBtC2JivlQx05c66wNH1DYwho%2Flg2%2BD0CywtRYr9h%2Bd8CG%2BeZzKCGTtl4qA6jap0Wm5YGu%2Brj%2FfzkU4gjYjxnoOT8WE37IFQ08hjFCQXYs4EWLB%2Bvs%2B%2FTzAE9M9DNaTVaWqzLe2xqJDlyNVTjlH%2B5m6g5ZmoCH%2BkxvH%2FGZSZI64QfygW45jlrbu0QfFesKW%2BIydx3KXd6ytuXP%2BNs%2F3xK2SF1YE%2Fg89Gws40yjbJzbWFoI9zy9TwZDFpWFCn5l4MfZOcRYjlQe%2BdHas3%2B%2F%2BzXMnWUmaHBHveXRqfwh08JF9rOmFKkI6a56RjIdDJH5xjWSMi96hvCnwdpwE8Uawt5Y64g7jR1Ya7WCOHmQZ2MtnTvYs9Q%2FB4yefEUu9inBSwR9u%2Fi7Qs0UuM4%2F6QHrkwpfGEXAOXy4ahttbE%2FLprr%2Fb21JSMgjL0QoKqLKpZU2jwzXxm%2BeZKGKprJQCCLo7rl7dXuDdmnq7sS2BIPiC2Xs00cQMIDfDP0zE9BTnoIXStPUl449TYqjYGCHfZ9qMti7PrB1pFlCMJDir9QGOqUBkPsH64m3puV1pJki6%2FCm%2FT66B5E5p%2BhQYvQiXyTYZWvzDFkV1JdaofIr3EV9cPli2X4NDTu92YpuIftQT4Udm8TJSzRBMoiW6ptxGzaWxf8TUhrdLWKNBm174Jdjw0N1X2xLPrN5tsvIaSLprcKUPmlsDewmLNsGttqKc4x6tCeMlDORk3GD1FMyvysNqM7ss%2FOWvfOUg59KjziGZLZPpIh5qlyU&X-Amz-Signature=bc5d5cc2f4bd9337bcaedc30301aded85ad6931e279088e47bd5d0ac2b135a72&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
