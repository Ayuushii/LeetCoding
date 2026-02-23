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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TP3R5TAA%2F20260223%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260223T085052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCICwDJQfzNFP4Nc7j6UJpHm0mnwBde1Tfr8ZQWo6bqFI2AiEAqSXAtc60IycvHp0%2BpKk4Lk2R29PDt%2Fxp6YQ7u6ZwMLsqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAn77TVJceTWu%2BZHsCrcA1yjR%2BefFahv58B39kVeiSh7TdcluWFBnK7JxgI%2BFXrIxmCDafWQJCf%2FOVKONXT4pBqjj8E5%2BmBYBy8UFVLGZdPALkCEnR3uOcf9YL3ZNPJJxgzH3jaKmoE43IxSzaPO7VomjDnKFQVJSlfUXZUyXcBcorIQ3aXSVpEwGf9F5kXiA2Rce648ur7ZI48RbjAqwgXZW8WvpxtMAs6drmN3fZlesrbntN2B5XsEXHkfJIdKbOYVleQHzKJST5eJnGi57Hqlw4JbsvSVlMYUWNgBRdSzzGZxI3stkDhjozMSPyjMXbVVeBkNGxk%2FmTmnINg%2BUQbFAzd%2BRO3d0dnQBvUIo6%2BpsKBf8tBp0%2BbBKbpbjlsNnFrIhoCN474EkPgUyqOGT5%2F3dEGhThOLvil7l6x49YXKC9Afnk4wl1m77aHwnDVM2dNk4NjNc88BTl68VaDNvAPNtFWjyRL42X3f4dzT6JiGoLgJ%2FFuAllPkTlzHnP7m2utQbyTUk1qBuJ9MCtR0k%2FQdEDzYdRKVuQP1VfhMe16aF%2FCRTzpW3173rw%2Ba%2Bo3gL16R27Z6H0P9g8tNCIg1kej%2FV6zw5ub%2B26%2B3Ro2LR3QIl2%2F127zuDaMtWSwU1Od5vcaLS%2FNqWM%2BagNc2MJmm8MwGOqUBCDAREkHkd8y6H5w%2BY6a420A3PesqHcRqq4yf%2F0KcF6mLDvshVxTzzbPieIrw8dlD1iKAr2wC3AZFUmghrpKNSQAFDz7maHTzO%2B3HbdP9z8GYaqYHYpRoQAsgJyVbXvswbyAr%2FUScdV0CtKqKSWMPByewE1BsQhq3jf%2Fm69QxA4Xz8fy3ckJXhk6th%2BQB54aQeYsgksbrVEMAc9QqMgn604NnruZ2&X-Amz-Signature=cd8fd6dfafbf90fd7d3e62fa793dc8d9e3bc27c63a76a0dc442e55bf9c22976b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TP3R5TAA%2F20260223%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260223T085052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCICwDJQfzNFP4Nc7j6UJpHm0mnwBde1Tfr8ZQWo6bqFI2AiEAqSXAtc60IycvHp0%2BpKk4Lk2R29PDt%2Fxp6YQ7u6ZwMLsqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAn77TVJceTWu%2BZHsCrcA1yjR%2BefFahv58B39kVeiSh7TdcluWFBnK7JxgI%2BFXrIxmCDafWQJCf%2FOVKONXT4pBqjj8E5%2BmBYBy8UFVLGZdPALkCEnR3uOcf9YL3ZNPJJxgzH3jaKmoE43IxSzaPO7VomjDnKFQVJSlfUXZUyXcBcorIQ3aXSVpEwGf9F5kXiA2Rce648ur7ZI48RbjAqwgXZW8WvpxtMAs6drmN3fZlesrbntN2B5XsEXHkfJIdKbOYVleQHzKJST5eJnGi57Hqlw4JbsvSVlMYUWNgBRdSzzGZxI3stkDhjozMSPyjMXbVVeBkNGxk%2FmTmnINg%2BUQbFAzd%2BRO3d0dnQBvUIo6%2BpsKBf8tBp0%2BbBKbpbjlsNnFrIhoCN474EkPgUyqOGT5%2F3dEGhThOLvil7l6x49YXKC9Afnk4wl1m77aHwnDVM2dNk4NjNc88BTl68VaDNvAPNtFWjyRL42X3f4dzT6JiGoLgJ%2FFuAllPkTlzHnP7m2utQbyTUk1qBuJ9MCtR0k%2FQdEDzYdRKVuQP1VfhMe16aF%2FCRTzpW3173rw%2Ba%2Bo3gL16R27Z6H0P9g8tNCIg1kej%2FV6zw5ub%2B26%2B3Ro2LR3QIl2%2F127zuDaMtWSwU1Od5vcaLS%2FNqWM%2BagNc2MJmm8MwGOqUBCDAREkHkd8y6H5w%2BY6a420A3PesqHcRqq4yf%2F0KcF6mLDvshVxTzzbPieIrw8dlD1iKAr2wC3AZFUmghrpKNSQAFDz7maHTzO%2B3HbdP9z8GYaqYHYpRoQAsgJyVbXvswbyAr%2FUScdV0CtKqKSWMPByewE1BsQhq3jf%2Fm69QxA4Xz8fy3ckJXhk6th%2BQB54aQeYsgksbrVEMAc9QqMgn604NnruZ2&X-Amz-Signature=2da9faac2d7ff1663b67e6be31da539ba21e43f3934d6270e8a9191773b36108&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TP3R5TAA%2F20260223%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260223T085052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCICwDJQfzNFP4Nc7j6UJpHm0mnwBde1Tfr8ZQWo6bqFI2AiEAqSXAtc60IycvHp0%2BpKk4Lk2R29PDt%2Fxp6YQ7u6ZwMLsqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAn77TVJceTWu%2BZHsCrcA1yjR%2BefFahv58B39kVeiSh7TdcluWFBnK7JxgI%2BFXrIxmCDafWQJCf%2FOVKONXT4pBqjj8E5%2BmBYBy8UFVLGZdPALkCEnR3uOcf9YL3ZNPJJxgzH3jaKmoE43IxSzaPO7VomjDnKFQVJSlfUXZUyXcBcorIQ3aXSVpEwGf9F5kXiA2Rce648ur7ZI48RbjAqwgXZW8WvpxtMAs6drmN3fZlesrbntN2B5XsEXHkfJIdKbOYVleQHzKJST5eJnGi57Hqlw4JbsvSVlMYUWNgBRdSzzGZxI3stkDhjozMSPyjMXbVVeBkNGxk%2FmTmnINg%2BUQbFAzd%2BRO3d0dnQBvUIo6%2BpsKBf8tBp0%2BbBKbpbjlsNnFrIhoCN474EkPgUyqOGT5%2F3dEGhThOLvil7l6x49YXKC9Afnk4wl1m77aHwnDVM2dNk4NjNc88BTl68VaDNvAPNtFWjyRL42X3f4dzT6JiGoLgJ%2FFuAllPkTlzHnP7m2utQbyTUk1qBuJ9MCtR0k%2FQdEDzYdRKVuQP1VfhMe16aF%2FCRTzpW3173rw%2Ba%2Bo3gL16R27Z6H0P9g8tNCIg1kej%2FV6zw5ub%2B26%2B3Ro2LR3QIl2%2F127zuDaMtWSwU1Od5vcaLS%2FNqWM%2BagNc2MJmm8MwGOqUBCDAREkHkd8y6H5w%2BY6a420A3PesqHcRqq4yf%2F0KcF6mLDvshVxTzzbPieIrw8dlD1iKAr2wC3AZFUmghrpKNSQAFDz7maHTzO%2B3HbdP9z8GYaqYHYpRoQAsgJyVbXvswbyAr%2FUScdV0CtKqKSWMPByewE1BsQhq3jf%2Fm69QxA4Xz8fy3ckJXhk6th%2BQB54aQeYsgksbrVEMAc9QqMgn604NnruZ2&X-Amz-Signature=339fd5d0cd36539979965a82321979fe58924e32b41b48da5b4963977b902bc8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QXHZRMQQ%2F20260223%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260223T085053Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJIMEYCIQDKgXX2HbdTE8fxHNNr0gwf5ckiYHAbhqjiHUyS%2Be8i6QIhAOZ3XBzi0N3ZhmikYvMy%2BVCrR9qo8Wpa96IrkgBmHPO%2FKogECNr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwKwThss1WhsqwZHaMq3AMN01Qyo%2F1o13OH%2FzXxIpuIbS5LwWe7sRO74RYzQmdPb2v1lVtlpkgMpu%2B%2BMxK1h4YNjuxhT8isCZ%2FIhi93z3k3M01Y2Qf%2BtWzLyZwclWbcjrTcNkIpoWxBLbbvh%2FdSDIlWZwqOWUOQcKLYjYLsuoHHvdf4D82X9M5kLWfNMHTLjRu6drYkBcqmglmKo3mQzhVBGGnQse0Q3Rt3ixQy7%2BJ1i49pRGYj1P6umvrE0qB5rlbgu1r0yhrFvShx5FTIBchrfXK7m%2BQ5GNYRS1%2BGMqvKiRAve3gphjeKbpBk2pgZPgtuoogwYPRzOtLtKL1KM%2FLaHUcNhIiEhvigVHfUctICMPxcmDcOTF9wxcfby34esusj8ZWSY4LZqkdgIiPSLRIU6ri56EQnipQvPGQYVm95DiUTw%2Ffnb1M1L%2F8itYfI8t3RFaDdCI6zgygDmKl3yEQgW%2BkJfTJtS0%2B3B9FMqysLzIOq3uZ4LYtew%2FzhxMhASTzwNoaLSlSG%2B3f7tE9SNZaHy6D2PSST0W6cwgSODLb6CgOmwPD6LcLnVQcQfNTmXGSL%2FPc9YoQ4yliZ3zquCsYKZxvkmJwmtxwVlZJNGsoVvIgKb%2F7xgrWezav9ntbBT82jJPbjUgSE2h4i2zCdpfDMBjqkAeWOD8RG9g8C1Y%2FVUjeUOIFhNiH4zxNXyHONPufKEPBThIHpZMpTWYXAsFgEqvDMAQBng%2BH3PMziWWj8Mm232lYQLUGih6ObHzJifHpKElYQond1jM%2BReTJOTFChicXDrIZfG1T7Vxw0gVrXUJ3q1ynA01HKt%2BUTzbvsyV4x71gGzRaTyf9rISO89mnZ%2F%2FGk%2BvV6tymggLJbc%2Blc429%2B8B2SSz1e&X-Amz-Signature=d6d636a7bd7f1446f160f2d0f91ed97fbec6359bf116472ea6bb72f0efaf709b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QXHZRMQQ%2F20260223%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260223T085053Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJIMEYCIQDKgXX2HbdTE8fxHNNr0gwf5ckiYHAbhqjiHUyS%2Be8i6QIhAOZ3XBzi0N3ZhmikYvMy%2BVCrR9qo8Wpa96IrkgBmHPO%2FKogECNr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwKwThss1WhsqwZHaMq3AMN01Qyo%2F1o13OH%2FzXxIpuIbS5LwWe7sRO74RYzQmdPb2v1lVtlpkgMpu%2B%2BMxK1h4YNjuxhT8isCZ%2FIhi93z3k3M01Y2Qf%2BtWzLyZwclWbcjrTcNkIpoWxBLbbvh%2FdSDIlWZwqOWUOQcKLYjYLsuoHHvdf4D82X9M5kLWfNMHTLjRu6drYkBcqmglmKo3mQzhVBGGnQse0Q3Rt3ixQy7%2BJ1i49pRGYj1P6umvrE0qB5rlbgu1r0yhrFvShx5FTIBchrfXK7m%2BQ5GNYRS1%2BGMqvKiRAve3gphjeKbpBk2pgZPgtuoogwYPRzOtLtKL1KM%2FLaHUcNhIiEhvigVHfUctICMPxcmDcOTF9wxcfby34esusj8ZWSY4LZqkdgIiPSLRIU6ri56EQnipQvPGQYVm95DiUTw%2Ffnb1M1L%2F8itYfI8t3RFaDdCI6zgygDmKl3yEQgW%2BkJfTJtS0%2B3B9FMqysLzIOq3uZ4LYtew%2FzhxMhASTzwNoaLSlSG%2B3f7tE9SNZaHy6D2PSST0W6cwgSODLb6CgOmwPD6LcLnVQcQfNTmXGSL%2FPc9YoQ4yliZ3zquCsYKZxvkmJwmtxwVlZJNGsoVvIgKb%2F7xgrWezav9ntbBT82jJPbjUgSE2h4i2zCdpfDMBjqkAeWOD8RG9g8C1Y%2FVUjeUOIFhNiH4zxNXyHONPufKEPBThIHpZMpTWYXAsFgEqvDMAQBng%2BH3PMziWWj8Mm232lYQLUGih6ObHzJifHpKElYQond1jM%2BReTJOTFChicXDrIZfG1T7Vxw0gVrXUJ3q1ynA01HKt%2BUTzbvsyV4x71gGzRaTyf9rISO89mnZ%2F%2FGk%2BvV6tymggLJbc%2Blc429%2B8B2SSz1e&X-Amz-Signature=0ef3ac3227a03976ac85ef46eb7c911061e421250206515b1f311e21fcc3ed66&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QXHZRMQQ%2F20260223%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260223T085053Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJIMEYCIQDKgXX2HbdTE8fxHNNr0gwf5ckiYHAbhqjiHUyS%2Be8i6QIhAOZ3XBzi0N3ZhmikYvMy%2BVCrR9qo8Wpa96IrkgBmHPO%2FKogECNr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwKwThss1WhsqwZHaMq3AMN01Qyo%2F1o13OH%2FzXxIpuIbS5LwWe7sRO74RYzQmdPb2v1lVtlpkgMpu%2B%2BMxK1h4YNjuxhT8isCZ%2FIhi93z3k3M01Y2Qf%2BtWzLyZwclWbcjrTcNkIpoWxBLbbvh%2FdSDIlWZwqOWUOQcKLYjYLsuoHHvdf4D82X9M5kLWfNMHTLjRu6drYkBcqmglmKo3mQzhVBGGnQse0Q3Rt3ixQy7%2BJ1i49pRGYj1P6umvrE0qB5rlbgu1r0yhrFvShx5FTIBchrfXK7m%2BQ5GNYRS1%2BGMqvKiRAve3gphjeKbpBk2pgZPgtuoogwYPRzOtLtKL1KM%2FLaHUcNhIiEhvigVHfUctICMPxcmDcOTF9wxcfby34esusj8ZWSY4LZqkdgIiPSLRIU6ri56EQnipQvPGQYVm95DiUTw%2Ffnb1M1L%2F8itYfI8t3RFaDdCI6zgygDmKl3yEQgW%2BkJfTJtS0%2B3B9FMqysLzIOq3uZ4LYtew%2FzhxMhASTzwNoaLSlSG%2B3f7tE9SNZaHy6D2PSST0W6cwgSODLb6CgOmwPD6LcLnVQcQfNTmXGSL%2FPc9YoQ4yliZ3zquCsYKZxvkmJwmtxwVlZJNGsoVvIgKb%2F7xgrWezav9ntbBT82jJPbjUgSE2h4i2zCdpfDMBjqkAeWOD8RG9g8C1Y%2FVUjeUOIFhNiH4zxNXyHONPufKEPBThIHpZMpTWYXAsFgEqvDMAQBng%2BH3PMziWWj8Mm232lYQLUGih6ObHzJifHpKElYQond1jM%2BReTJOTFChicXDrIZfG1T7Vxw0gVrXUJ3q1ynA01HKt%2BUTzbvsyV4x71gGzRaTyf9rISO89mnZ%2F%2FGk%2BvV6tymggLJbc%2Blc429%2B8B2SSz1e&X-Amz-Signature=51952dcc188294d60f103098ce119fa0677b2b0d8c0b8788048e71f2bf841fa0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QXHZRMQQ%2F20260223%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260223T085053Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJIMEYCIQDKgXX2HbdTE8fxHNNr0gwf5ckiYHAbhqjiHUyS%2Be8i6QIhAOZ3XBzi0N3ZhmikYvMy%2BVCrR9qo8Wpa96IrkgBmHPO%2FKogECNr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwKwThss1WhsqwZHaMq3AMN01Qyo%2F1o13OH%2FzXxIpuIbS5LwWe7sRO74RYzQmdPb2v1lVtlpkgMpu%2B%2BMxK1h4YNjuxhT8isCZ%2FIhi93z3k3M01Y2Qf%2BtWzLyZwclWbcjrTcNkIpoWxBLbbvh%2FdSDIlWZwqOWUOQcKLYjYLsuoHHvdf4D82X9M5kLWfNMHTLjRu6drYkBcqmglmKo3mQzhVBGGnQse0Q3Rt3ixQy7%2BJ1i49pRGYj1P6umvrE0qB5rlbgu1r0yhrFvShx5FTIBchrfXK7m%2BQ5GNYRS1%2BGMqvKiRAve3gphjeKbpBk2pgZPgtuoogwYPRzOtLtKL1KM%2FLaHUcNhIiEhvigVHfUctICMPxcmDcOTF9wxcfby34esusj8ZWSY4LZqkdgIiPSLRIU6ri56EQnipQvPGQYVm95DiUTw%2Ffnb1M1L%2F8itYfI8t3RFaDdCI6zgygDmKl3yEQgW%2BkJfTJtS0%2B3B9FMqysLzIOq3uZ4LYtew%2FzhxMhASTzwNoaLSlSG%2B3f7tE9SNZaHy6D2PSST0W6cwgSODLb6CgOmwPD6LcLnVQcQfNTmXGSL%2FPc9YoQ4yliZ3zquCsYKZxvkmJwmtxwVlZJNGsoVvIgKb%2F7xgrWezav9ntbBT82jJPbjUgSE2h4i2zCdpfDMBjqkAeWOD8RG9g8C1Y%2FVUjeUOIFhNiH4zxNXyHONPufKEPBThIHpZMpTWYXAsFgEqvDMAQBng%2BH3PMziWWj8Mm232lYQLUGih6ObHzJifHpKElYQond1jM%2BReTJOTFChicXDrIZfG1T7Vxw0gVrXUJ3q1ynA01HKt%2BUTzbvsyV4x71gGzRaTyf9rISO89mnZ%2F%2FGk%2BvV6tymggLJbc%2Blc429%2B8B2SSz1e&X-Amz-Signature=7cb3f9d2568914e9e5bc542c946b3472553409b131e1d98670dc84804cfc0ec7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SKETCWVR%2F20260223%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260223T085053Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCIH%2BDP7f3i%2FHy2ZHF3PgIQDnsOTEdAUC2dUxkYRrziYScAiEA0XOqsttqRQ88eir69UEU%2FbiwKhU5ZQP3r2kCCDJNJQAqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEUyPep3%2F5QAUEfl0CrcA4Zj6Ss%2B4ZhlKztvMYuCofA24IrpOxQS7WAk1nNgBsTAi4Ak4e9w6GGZU%2BAIJKDSNaZS48H0nU40nXLgPKKdHjbhW%2F%2FKA3cRidb%2BLkR90xKxNjs568IdXbQG%2FeGggcdJV5cA6xtax%2Bml6OEBmDmFn%2BZfJ2gQ%2B8jYRsZN7z9pKq2xMzVXTnAgoG%2FaXv5wAfSNBeQirf6BgVnZ8GNItcd1bwfYG10RxFhGVifV9ZSoVECQrmU8TZSsfHPVKa0VA0sH%2Bb4iIa7%2F3rCst80h%2FjUQR3ygQWSC5lY7gqaJEDaO1Qzsu6KHVjscjdlmL36zpC40d0GrOvP%2B%2BhkU7OwfFQ4nX%2FysCExp623Zm9NFcDBq7ylRtSubV8s531e2IYcVAlv1cJiU7rItvp8UWHCNa1fMsuXZV2i42dvLq2QC9UO3wVu5YHEaUDyviwylBYupX5TzCy1eURgs1WyE3Y8paoVxl5FS4jhvM%2BFxJw3bmVoY4OxOWM66FYJw2lufIX%2BzanMeaXjZENLr3UE6f9JbKLEfOlrlIweR4ncmhXcPMb%2FFeyPlCPg86dUK7ctM9hqvDdCjCaNB0G2XiyKsIkKxY30moh0YbuNJI3FV8eoDAFRIkPdNoy3k0Sf0o0TkjzG5MOqm8MwGOqUB0VOd2GglArCQFNmyIlvqUhGXE7tEtGa%2B0BIIyHqnHRkpCFj2%2FkB38ParVeFOaabZmScwCScYCqRo1bZ53T1DoPghPhsCFdWzfJsabu9w2DH2ncDMTjjywgOBs%2FaVr%2FBvVRue6MKVJsh0isRkSZw%2FAxNteM8In6k8qKr3ZA6Jb6q8ayS2Zf5MeN2%2BrzYvyfDQ6iw5WqiwWVovmJhCT4gxYqb88goq&X-Amz-Signature=164705f19501aa83f7896ead18763c50e4a3f7a4123d81bbdba1111fc0994ed5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YW4P4EN6%2F20260223%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260223T085053Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJIMEYCIQDi3%2FCOKBvIZqZdQOlEZ84323m%2B10c8GYkAl5cya8gvRQIhAKdhGhtc14nzBZ7ZUUs%2FowbBoj3gfTMnbDmvO4g04I4IKogECNr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyA7HFKq%2BiTlTN%2FqXoq3AOIf2acYc2bxtwQa4lIfqcUXFPYlaewXAyuxoTELkLQs4I2Xem5d6737TBGNviHSTn%2FQ%2BOPiDO%2FDIl9Aj%2Bs8E%2FIAdba1x2FH3c6JzyOK0En435clVV0fsvqFYkXGv5p8XalHq3H34D3YsPZvSFSMwoeaBp22D3%2B2prbY751gQCR%2B17HgBOsEVjYskvt45k%2F%2BJBfCXR7qOOG2rM5A61rEhmKR%2Bb6MPV4%2Fc%2BRNYPVkMQta%2Bo4UfL5AkjPYumjl8E%2FwD5qWvwYdAwgEFya8i8YexHBL273nm8JdJguRZLrbg4hBN6HK0EqyKoS1tapHpUrJgrLEQZP%2BnSkYPnhSDJIOzDl2lpkDKiEpJPV01C8GFWs%2F3qehwz9%2BNdDPD8vUToBKAk0FdpViwC4wuK3L8DFTP4h8K4imskYK8MQlpwxfDL3PKHeqqXhcvZBZoP%2B4KS45aY%2FtR7ihl162gSXxmnHqpBMP3il67Geu3rgs6blVxD3odfOSgZl9%2FxcPVPY7FfQhgd%2Fjs4u5XdB5bH3HCCH59HtjaVkqRWMuDQV2ESUKFz51Y5epKd8E7WvUBT9kgxrvqamDyBHmcOuLekWUM%2F%2BnnuAKdELs8m7hHctSiT6%2FgfY%2BvcPsJyRwpAJUb4dYDCWpvDMBjqkAeftyM2AbUG3dW9dy6oKs3%2FgmVsJwFUlgcdZyHxdwq2SjaOU1EdmdTJ7oAXSTUCsBRGb6Dq%2BaaCOAgqlFNUt0%2F%2BIvY06yXj6%2FG1CZTwjiYd%2BbEXqaMmaJiskhq1g9nT%2F2Qz1HS6%2B1eyudIaP6Swr38gB2EZZTQO8CCSZHChjtD11tCwN7C4r9WqZIp5w3gfLXtfST57TUnXcqSRaooT%2Bn7I9gXnP&X-Amz-Signature=d8cfe8228a88a8cf9a7f1a2a2de7552892f3a4c6ea1453b5c73d5606042335d4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YW4P4EN6%2F20260223%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260223T085053Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJIMEYCIQDi3%2FCOKBvIZqZdQOlEZ84323m%2B10c8GYkAl5cya8gvRQIhAKdhGhtc14nzBZ7ZUUs%2FowbBoj3gfTMnbDmvO4g04I4IKogECNr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyA7HFKq%2BiTlTN%2FqXoq3AOIf2acYc2bxtwQa4lIfqcUXFPYlaewXAyuxoTELkLQs4I2Xem5d6737TBGNviHSTn%2FQ%2BOPiDO%2FDIl9Aj%2Bs8E%2FIAdba1x2FH3c6JzyOK0En435clVV0fsvqFYkXGv5p8XalHq3H34D3YsPZvSFSMwoeaBp22D3%2B2prbY751gQCR%2B17HgBOsEVjYskvt45k%2F%2BJBfCXR7qOOG2rM5A61rEhmKR%2Bb6MPV4%2Fc%2BRNYPVkMQta%2Bo4UfL5AkjPYumjl8E%2FwD5qWvwYdAwgEFya8i8YexHBL273nm8JdJguRZLrbg4hBN6HK0EqyKoS1tapHpUrJgrLEQZP%2BnSkYPnhSDJIOzDl2lpkDKiEpJPV01C8GFWs%2F3qehwz9%2BNdDPD8vUToBKAk0FdpViwC4wuK3L8DFTP4h8K4imskYK8MQlpwxfDL3PKHeqqXhcvZBZoP%2B4KS45aY%2FtR7ihl162gSXxmnHqpBMP3il67Geu3rgs6blVxD3odfOSgZl9%2FxcPVPY7FfQhgd%2Fjs4u5XdB5bH3HCCH59HtjaVkqRWMuDQV2ESUKFz51Y5epKd8E7WvUBT9kgxrvqamDyBHmcOuLekWUM%2F%2BnnuAKdELs8m7hHctSiT6%2FgfY%2BvcPsJyRwpAJUb4dYDCWpvDMBjqkAeftyM2AbUG3dW9dy6oKs3%2FgmVsJwFUlgcdZyHxdwq2SjaOU1EdmdTJ7oAXSTUCsBRGb6Dq%2BaaCOAgqlFNUt0%2F%2BIvY06yXj6%2FG1CZTwjiYd%2BbEXqaMmaJiskhq1g9nT%2F2Qz1HS6%2B1eyudIaP6Swr38gB2EZZTQO8CCSZHChjtD11tCwN7C4r9WqZIp5w3gfLXtfST57TUnXcqSRaooT%2Bn7I9gXnP&X-Amz-Signature=2b98c99296e71917870c887c8df0ba4841c6561e319618c81acf09b3816ac43e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
