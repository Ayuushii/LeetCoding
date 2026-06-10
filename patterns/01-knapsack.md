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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X7SLKHLH%2F20260610%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260610T113743Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBsaCXVzLXdlc3QtMiJHMEUCIHW5Z8G7b2zC%2FPhjrCH%2FVrU%2BBgIhT9k5635oA16075q9AiEA0rGY2Yf1FOk0kC0NxfaYjmnLEy8M%2FKcs6IHKcScm7XEqiAQI5P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLRKXUMa8qJ25UbM5SrcA5DL5jJvGgxBUi3ljHF%2BjNnr3PXR9sKXtbRnzXe11m8kWw%2BdGu7qzulWEugVlwL3Z1%2FpoY0RSDrK0aLVpVCPkxfw7%2FEhyampuGpsyuMrKyS5lbzMg1di3SYiAmq5IhlOQE5CPWAGqPctbxzhciEf7Ac4uJYdJWI4qNW%2FbDqWBYagLTdnlLMiDtYDOAicjDKpOovzWMJ8NO%2BedkznwVFeUPpI5MEU6hMl%2BqlZwrL9Q6n%2BuwnBZk%2B392U8Vn7d5SeyQdIfrnKTpmiywbju7BPHLGbJsniPOz9dF9hOIArBXPI5qU5m9us5HsHnRT43q21Gefh06NuFKVCyzur4DGY2%2Bf4gYBEYQU346RUZJ4ImwNH1tp8r685P70dW5VUkB0%2BOH%2F%2BPpTCwsLq3cKZDBLCs%2F2gNlBViZix5wuNq1V3J3uNVFnKvPvb4hTsN%2BoMRJ1Tz2ev4Tb4hzSUFlpV8%2Bs3a1OC8HlSNhrhBwcnr6LH2wwuynF23PD8P4swDiARwkbyHqPjBTC%2FE1yiAp2QmAoCDOvI5aZQHpfh98dw20RvqfzrDut8rMMv6CenvmdWedCEFdNQ%2BDvpk02BcknocB6i8ccilcpxpgOEu3Tj9nQjbaFolnYXvioPjeHfEz6eMMJSNpdEGOqUBRytJHLsDRTCEXOAkRNluLV8k0quSPWv0ZxLuVw%2BvSt8AL8NY5w3uvQkyjifp8LeybxY0WPikseBKxEw%2FNlmNQCiJAPAThD2m6fViMslCeSPHGuSCy8pa3ISgEcqAYyqw7CAzWec14Y9UleRzbGZtR6rsfxTcYS1fxAT1sjHOrthU2Ld1%2FDmZthlBWAz%2FR8JQa0IwZNLFwF%2BtxUwgUJPqQ%2FFdt5iy&X-Amz-Signature=cb1e5aae001afe7163d9a359edd80879e8c4263ccbf8a944c74bea191d528bfa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X7SLKHLH%2F20260610%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260610T113743Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBsaCXVzLXdlc3QtMiJHMEUCIHW5Z8G7b2zC%2FPhjrCH%2FVrU%2BBgIhT9k5635oA16075q9AiEA0rGY2Yf1FOk0kC0NxfaYjmnLEy8M%2FKcs6IHKcScm7XEqiAQI5P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLRKXUMa8qJ25UbM5SrcA5DL5jJvGgxBUi3ljHF%2BjNnr3PXR9sKXtbRnzXe11m8kWw%2BdGu7qzulWEugVlwL3Z1%2FpoY0RSDrK0aLVpVCPkxfw7%2FEhyampuGpsyuMrKyS5lbzMg1di3SYiAmq5IhlOQE5CPWAGqPctbxzhciEf7Ac4uJYdJWI4qNW%2FbDqWBYagLTdnlLMiDtYDOAicjDKpOovzWMJ8NO%2BedkznwVFeUPpI5MEU6hMl%2BqlZwrL9Q6n%2BuwnBZk%2B392U8Vn7d5SeyQdIfrnKTpmiywbju7BPHLGbJsniPOz9dF9hOIArBXPI5qU5m9us5HsHnRT43q21Gefh06NuFKVCyzur4DGY2%2Bf4gYBEYQU346RUZJ4ImwNH1tp8r685P70dW5VUkB0%2BOH%2F%2BPpTCwsLq3cKZDBLCs%2F2gNlBViZix5wuNq1V3J3uNVFnKvPvb4hTsN%2BoMRJ1Tz2ev4Tb4hzSUFlpV8%2Bs3a1OC8HlSNhrhBwcnr6LH2wwuynF23PD8P4swDiARwkbyHqPjBTC%2FE1yiAp2QmAoCDOvI5aZQHpfh98dw20RvqfzrDut8rMMv6CenvmdWedCEFdNQ%2BDvpk02BcknocB6i8ccilcpxpgOEu3Tj9nQjbaFolnYXvioPjeHfEz6eMMJSNpdEGOqUBRytJHLsDRTCEXOAkRNluLV8k0quSPWv0ZxLuVw%2BvSt8AL8NY5w3uvQkyjifp8LeybxY0WPikseBKxEw%2FNlmNQCiJAPAThD2m6fViMslCeSPHGuSCy8pa3ISgEcqAYyqw7CAzWec14Y9UleRzbGZtR6rsfxTcYS1fxAT1sjHOrthU2Ld1%2FDmZthlBWAz%2FR8JQa0IwZNLFwF%2BtxUwgUJPqQ%2FFdt5iy&X-Amz-Signature=3fb4d9c542b52c0e2268d023f8e593aa3df8ee31d7e8f694160b27548e364437&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X7SLKHLH%2F20260610%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260610T113743Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBsaCXVzLXdlc3QtMiJHMEUCIHW5Z8G7b2zC%2FPhjrCH%2FVrU%2BBgIhT9k5635oA16075q9AiEA0rGY2Yf1FOk0kC0NxfaYjmnLEy8M%2FKcs6IHKcScm7XEqiAQI5P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLRKXUMa8qJ25UbM5SrcA5DL5jJvGgxBUi3ljHF%2BjNnr3PXR9sKXtbRnzXe11m8kWw%2BdGu7qzulWEugVlwL3Z1%2FpoY0RSDrK0aLVpVCPkxfw7%2FEhyampuGpsyuMrKyS5lbzMg1di3SYiAmq5IhlOQE5CPWAGqPctbxzhciEf7Ac4uJYdJWI4qNW%2FbDqWBYagLTdnlLMiDtYDOAicjDKpOovzWMJ8NO%2BedkznwVFeUPpI5MEU6hMl%2BqlZwrL9Q6n%2BuwnBZk%2B392U8Vn7d5SeyQdIfrnKTpmiywbju7BPHLGbJsniPOz9dF9hOIArBXPI5qU5m9us5HsHnRT43q21Gefh06NuFKVCyzur4DGY2%2Bf4gYBEYQU346RUZJ4ImwNH1tp8r685P70dW5VUkB0%2BOH%2F%2BPpTCwsLq3cKZDBLCs%2F2gNlBViZix5wuNq1V3J3uNVFnKvPvb4hTsN%2BoMRJ1Tz2ev4Tb4hzSUFlpV8%2Bs3a1OC8HlSNhrhBwcnr6LH2wwuynF23PD8P4swDiARwkbyHqPjBTC%2FE1yiAp2QmAoCDOvI5aZQHpfh98dw20RvqfzrDut8rMMv6CenvmdWedCEFdNQ%2BDvpk02BcknocB6i8ccilcpxpgOEu3Tj9nQjbaFolnYXvioPjeHfEz6eMMJSNpdEGOqUBRytJHLsDRTCEXOAkRNluLV8k0quSPWv0ZxLuVw%2BvSt8AL8NY5w3uvQkyjifp8LeybxY0WPikseBKxEw%2FNlmNQCiJAPAThD2m6fViMslCeSPHGuSCy8pa3ISgEcqAYyqw7CAzWec14Y9UleRzbGZtR6rsfxTcYS1fxAT1sjHOrthU2Ld1%2FDmZthlBWAz%2FR8JQa0IwZNLFwF%2BtxUwgUJPqQ%2FFdt5iy&X-Amz-Signature=6771b4abf2082ff0e6296658331b87c2ab2adb44a97eb700323fd364cfb27af3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WBHQ5YM3%2F20260610%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260610T113745Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBsaCXVzLXdlc3QtMiJGMEQCIAb9PyJ29viN1bqQGtl%2BNNhEGmxStv7uzqCKb5iKqubfAiBzulv6T3PvibQI7xiyNcK%2BroLgjuJRXpO%2B2WH1S2D5XyqIBAjk%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMAEg8KtbaoZGKxc7IKtwDGiYQmgfGEeZFzyHmSTiBTlYln%2BFLt7cJlX3jwoP6fGRDacEBbHoR6z44bFeO1ffzd0YrKJLSWSexwum%2BKVtOGRTms6WmhMglJHdfhAWVVYcj5mmEs8DYUQqebw%2BmAcTmvI7zukzdm0UTSFArHYv1Ee64mcEtHdrdRytBc9R2RmRqt0kGzcmHw8eb1XpiQFUVwMKqZ7CfBPAEUm2Crg0rHpmc%2BdOF7xIASeuNQoDT5Xv%2F5aNlH95T6GCEJgR6YzZIn7mFojb3rXRp46s67CDIuTvbBZbW2esDDChEfzhsLuYhd185gRAIXa23tbeRamq79ubWymmg9JchxDqTxUvz44%2BW%2B6HI8aZU4Kb%2B%2BQW5mCqMsIrj5%2BXWtBS7Ako5YYcYyjzzom%2FDCbO8YrBRljqmGx3Vxic6k5GRb2HnWh%2FsVcVDKzWNfhiwUCGal4n6XAEy7BXWUugyCJGJeepAwpYWVRrXXZ4%2BaQfWRJImqqzhiZcsiaDggoaziGbgiFVpov%2FSkxqJGjBSfkCzzwZdiQ1Ud%2BNTAp4%2Fza0YfT0hHu2m8fDVMbhhxopFdGTAnPIh3bZuGYlGJ1sGqnQKe2WX7nNkDsxbtjueGLF0pSTiEa%2F7C7K7ieqHN5Hrc4aVQW4w2Y2l0QY6pgFpj1FZEdRf02038d5GjklgE5GxyWC5MB651tF11QxnRojZZ6YuqAGIRNDty8j9ieAjak%2B%2Blgne%2BU1uKDReSnJ6GgEl8FtMlhx%2FiwFkLMo8dscqKqiij%2B48rJ%2F%2BSwV4OKkbqrQbk7ibhRRoIMHU2gO6UBpgygHL2BA8V07NSwXPnZTerChV7ijBhgiO20D%2F0JEJpCX%2BEB%2B1X%2FZvE9%2FGg%2BVCLjHn5%2FKW&X-Amz-Signature=8eed972b8ce811a121fdc40dc78206ea654019e42c9ccb549c8decffc0716b32&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WBHQ5YM3%2F20260610%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260610T113745Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBsaCXVzLXdlc3QtMiJGMEQCIAb9PyJ29viN1bqQGtl%2BNNhEGmxStv7uzqCKb5iKqubfAiBzulv6T3PvibQI7xiyNcK%2BroLgjuJRXpO%2B2WH1S2D5XyqIBAjk%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMAEg8KtbaoZGKxc7IKtwDGiYQmgfGEeZFzyHmSTiBTlYln%2BFLt7cJlX3jwoP6fGRDacEBbHoR6z44bFeO1ffzd0YrKJLSWSexwum%2BKVtOGRTms6WmhMglJHdfhAWVVYcj5mmEs8DYUQqebw%2BmAcTmvI7zukzdm0UTSFArHYv1Ee64mcEtHdrdRytBc9R2RmRqt0kGzcmHw8eb1XpiQFUVwMKqZ7CfBPAEUm2Crg0rHpmc%2BdOF7xIASeuNQoDT5Xv%2F5aNlH95T6GCEJgR6YzZIn7mFojb3rXRp46s67CDIuTvbBZbW2esDDChEfzhsLuYhd185gRAIXa23tbeRamq79ubWymmg9JchxDqTxUvz44%2BW%2B6HI8aZU4Kb%2B%2BQW5mCqMsIrj5%2BXWtBS7Ako5YYcYyjzzom%2FDCbO8YrBRljqmGx3Vxic6k5GRb2HnWh%2FsVcVDKzWNfhiwUCGal4n6XAEy7BXWUugyCJGJeepAwpYWVRrXXZ4%2BaQfWRJImqqzhiZcsiaDggoaziGbgiFVpov%2FSkxqJGjBSfkCzzwZdiQ1Ud%2BNTAp4%2Fza0YfT0hHu2m8fDVMbhhxopFdGTAnPIh3bZuGYlGJ1sGqnQKe2WX7nNkDsxbtjueGLF0pSTiEa%2F7C7K7ieqHN5Hrc4aVQW4w2Y2l0QY6pgFpj1FZEdRf02038d5GjklgE5GxyWC5MB651tF11QxnRojZZ6YuqAGIRNDty8j9ieAjak%2B%2Blgne%2BU1uKDReSnJ6GgEl8FtMlhx%2FiwFkLMo8dscqKqiij%2B48rJ%2F%2BSwV4OKkbqrQbk7ibhRRoIMHU2gO6UBpgygHL2BA8V07NSwXPnZTerChV7ijBhgiO20D%2F0JEJpCX%2BEB%2B1X%2FZvE9%2FGg%2BVCLjHn5%2FKW&X-Amz-Signature=69d2892872f5727fbfa967c52dceba9e936ba37aa2ba1fd88464719bf7d14dd7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WBHQ5YM3%2F20260610%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260610T113745Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBsaCXVzLXdlc3QtMiJGMEQCIAb9PyJ29viN1bqQGtl%2BNNhEGmxStv7uzqCKb5iKqubfAiBzulv6T3PvibQI7xiyNcK%2BroLgjuJRXpO%2B2WH1S2D5XyqIBAjk%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMAEg8KtbaoZGKxc7IKtwDGiYQmgfGEeZFzyHmSTiBTlYln%2BFLt7cJlX3jwoP6fGRDacEBbHoR6z44bFeO1ffzd0YrKJLSWSexwum%2BKVtOGRTms6WmhMglJHdfhAWVVYcj5mmEs8DYUQqebw%2BmAcTmvI7zukzdm0UTSFArHYv1Ee64mcEtHdrdRytBc9R2RmRqt0kGzcmHw8eb1XpiQFUVwMKqZ7CfBPAEUm2Crg0rHpmc%2BdOF7xIASeuNQoDT5Xv%2F5aNlH95T6GCEJgR6YzZIn7mFojb3rXRp46s67CDIuTvbBZbW2esDDChEfzhsLuYhd185gRAIXa23tbeRamq79ubWymmg9JchxDqTxUvz44%2BW%2B6HI8aZU4Kb%2B%2BQW5mCqMsIrj5%2BXWtBS7Ako5YYcYyjzzom%2FDCbO8YrBRljqmGx3Vxic6k5GRb2HnWh%2FsVcVDKzWNfhiwUCGal4n6XAEy7BXWUugyCJGJeepAwpYWVRrXXZ4%2BaQfWRJImqqzhiZcsiaDggoaziGbgiFVpov%2FSkxqJGjBSfkCzzwZdiQ1Ud%2BNTAp4%2Fza0YfT0hHu2m8fDVMbhhxopFdGTAnPIh3bZuGYlGJ1sGqnQKe2WX7nNkDsxbtjueGLF0pSTiEa%2F7C7K7ieqHN5Hrc4aVQW4w2Y2l0QY6pgFpj1FZEdRf02038d5GjklgE5GxyWC5MB651tF11QxnRojZZ6YuqAGIRNDty8j9ieAjak%2B%2Blgne%2BU1uKDReSnJ6GgEl8FtMlhx%2FiwFkLMo8dscqKqiij%2B48rJ%2F%2BSwV4OKkbqrQbk7ibhRRoIMHU2gO6UBpgygHL2BA8V07NSwXPnZTerChV7ijBhgiO20D%2F0JEJpCX%2BEB%2B1X%2FZvE9%2FGg%2BVCLjHn5%2FKW&X-Amz-Signature=6dd87e7beee14f2d9943fede3c40c88ebb69d925fa5c2a11885e11261d1735f6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WBHQ5YM3%2F20260610%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260610T113745Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBsaCXVzLXdlc3QtMiJGMEQCIAb9PyJ29viN1bqQGtl%2BNNhEGmxStv7uzqCKb5iKqubfAiBzulv6T3PvibQI7xiyNcK%2BroLgjuJRXpO%2B2WH1S2D5XyqIBAjk%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMAEg8KtbaoZGKxc7IKtwDGiYQmgfGEeZFzyHmSTiBTlYln%2BFLt7cJlX3jwoP6fGRDacEBbHoR6z44bFeO1ffzd0YrKJLSWSexwum%2BKVtOGRTms6WmhMglJHdfhAWVVYcj5mmEs8DYUQqebw%2BmAcTmvI7zukzdm0UTSFArHYv1Ee64mcEtHdrdRytBc9R2RmRqt0kGzcmHw8eb1XpiQFUVwMKqZ7CfBPAEUm2Crg0rHpmc%2BdOF7xIASeuNQoDT5Xv%2F5aNlH95T6GCEJgR6YzZIn7mFojb3rXRp46s67CDIuTvbBZbW2esDDChEfzhsLuYhd185gRAIXa23tbeRamq79ubWymmg9JchxDqTxUvz44%2BW%2B6HI8aZU4Kb%2B%2BQW5mCqMsIrj5%2BXWtBS7Ako5YYcYyjzzom%2FDCbO8YrBRljqmGx3Vxic6k5GRb2HnWh%2FsVcVDKzWNfhiwUCGal4n6XAEy7BXWUugyCJGJeepAwpYWVRrXXZ4%2BaQfWRJImqqzhiZcsiaDggoaziGbgiFVpov%2FSkxqJGjBSfkCzzwZdiQ1Ud%2BNTAp4%2Fza0YfT0hHu2m8fDVMbhhxopFdGTAnPIh3bZuGYlGJ1sGqnQKe2WX7nNkDsxbtjueGLF0pSTiEa%2F7C7K7ieqHN5Hrc4aVQW4w2Y2l0QY6pgFpj1FZEdRf02038d5GjklgE5GxyWC5MB651tF11QxnRojZZ6YuqAGIRNDty8j9ieAjak%2B%2Blgne%2BU1uKDReSnJ6GgEl8FtMlhx%2FiwFkLMo8dscqKqiij%2B48rJ%2F%2BSwV4OKkbqrQbk7ibhRRoIMHU2gO6UBpgygHL2BA8V07NSwXPnZTerChV7ijBhgiO20D%2F0JEJpCX%2BEB%2B1X%2FZvE9%2FGg%2BVCLjHn5%2FKW&X-Amz-Signature=9152e47dd06d3623da4ada531d6274ae8e13881a0a49840102d7e298eb5110ec&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663WXVW5KD%2F20260610%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260610T113746Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBsaCXVzLXdlc3QtMiJHMEUCIHSwMg9nMlsxzkPJ9bAgOrw9t95qzvMw%2FQwTwK2U31ntAiEAlMdviILHoEAeR9EIuF6Lg8Qv696Dl7YbYKICk%2B6NEvkqiAQI5P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKZjvkUvqWub2lyqVyrcA2oGsvKMR4AmV8FKJUpiblCsHEx%2Bzy4f9FQwcHkdxQZX99c7ccboN9Socn5kYox6NWd4oLCgICjBGuECUzNX%2FBkUy7VrSDCUCQT73H76LJMK6UzBwOzA4x1SEOMxUcz%2BnDcb%2FuBcXYdlCI188wDlcezLv%2BAsJW%2F28jVhhMb5tvEgYNxYJGTPA8IDFWsrTZd5g3C%2FwO%2BDUWXnoigghpYkElO3wO0P2fCKGBqghf3ZdIgA9SRN2qe5vA5DBo5ivDVbPLumDnABHwiEugIJ4X1o%2BieeoxdURSM4GyVTihX4OSyObWVTlwQIVtiSvRz1pDFLTzEt8kgUimrAP8bP%2FHr4joPB%2FP%2FOWPOYQgytEJqnMZ4cbzMCCP9FUt%2FeoZmlCp7esb9z%2FheZK3rvMT54vrq1tBqMhQxbGraqFoH4ek8aCzQhmoqfMmSFJbMPYVEGDUljEvbi8mfIFLKBAUbOOQ9vvzB5%2B%2BG0H9aO3phdH5rGWHcX9s4pipxEzhE5BWTZC6iA1nGku2P96LO6SHRZwSJEkA6Apqbs9ouGoA9VXCLA%2B1FzN6g4CbRXvqGLJ51ygaJ5V8vJuqDyCgFMDCaZuomk92PTvKO57bMAT9FU8hPrhhXY59jDeSQsjQU4jMAkMJONpdEGOqUB9ITXaxmIAWC7RpYNvoADwCVO0enEjPBSLB6QqQmD0Evys2ddllK8eNIXz9ozPtK5oghuDFRzrrLpz0xLCgCSrDpg%2Bn%2B%2FC264SZFBnwH97CTq33%2Bt8Vby21QqJqPqyoPNN7Xap9hZaJhw25qokygXMDcI34cgDEeLF2eAuswR2JGKiqmUK0bFad9tz%2BhrWwEoVHjCOVmv%2Fi54oWeUL4jxu4vyWAnK&X-Amz-Signature=a1c87723e0ff640b8db679c3d136584ce99ed71e06efa2c14cef87c92b306e1d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WAN2P4KU%2F20260610%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260610T113746Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBsaCXVzLXdlc3QtMiJGMEQCIE%2B0YDsxJ0W%2F35%2FBhS6hmo3z52UyL7hZDGKp9gGvN5hyAiAdyRwW9F9izl44D92Ju%2Fr5SOqBJz%2BLbT8pLMEeL3RQBiqIBAjk%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMX6jz8yBEjkgnCYtYKtwDhbVezZlHu0VC8EKYjfw8ksJuGTrE0ijczWbzZneP4OjUpQnG0L8zn%2BHt0jjdIcQFg2lFifxAsH%2FBTaN%2BZUElkWc8By1ROaZysUgxSojwDCGD%2BWMD2oiEnkIdwH%2FksG5LcHa8OOYX9mRVnkwuuwe97cciY%2BQzhwGeJRdhFK14zz88W2J42jjwI0N6BGSXX7kVsp11XQdMzAB74mjPUSmL%2Bkj6OY44mDvb%2F8dCFyvCCXvVhjOmVgDVkcXOwjm1RA3GARHUg3gbrcR5ty8utlBo7iwuEPEYBwhWFuejVfMge2nrxUIZnPsMTcafTRV2CHfnboWkAJth9ukGL4Rhjwlr3yfEj5D6QOKLNFJwjw9O4F%2Fq%2BobumphIWvE11CRSb7c9StpX5A6h46aYihdVC%2FjhHDr5270Vh9TW3RPn0NomiZDjm2rqG9iVNb6uu0cNUWIV2DMZ8VzoF7SxYNYsqNZixWvY9r%2FMFXkYmlqoSQwwvKwtnr81vAQ34iINwphm5jY8ZFhUofmKDYrhWtxhKkIQK7JE0l0abVcMn8UWLLN5Jnb%2FzaPvzLNZdwbYEpDb5IgoLlB%2FeZbrJ6x64jcYWKvdfJmRDgtYY64jlJWzhNn%2Fk2NpX1gC%2FPDOZyMOHZow5Y2l0QY6pgETnzZScZLePUSFnBTEDHQjCG8gRONIXuNFElR9jeE%2BfWWpO9PF1bO%2BC2y8yJJ%2FDJFr8wbL9zG0wP2VHZrehkbDbOzmwyyfxE3EHdnGkoOqHFiouX2Z95JssurIWVgzEFnN9bK%2BSTmkMkOlWATdRAKjnbiNjvyfLmOVJY8C%2FwkMLgy9VgBSygVk0UL3vZRp4FyQY7aC%2FpBFDJvez%2FtjCZU6i7BdVm%2Bs&X-Amz-Signature=292d449fde4a3cc72893a071a92af38ce14081bb2362dbeb249429d9f6cb4704&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WAN2P4KU%2F20260610%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260610T113746Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBsaCXVzLXdlc3QtMiJGMEQCIE%2B0YDsxJ0W%2F35%2FBhS6hmo3z52UyL7hZDGKp9gGvN5hyAiAdyRwW9F9izl44D92Ju%2Fr5SOqBJz%2BLbT8pLMEeL3RQBiqIBAjk%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMX6jz8yBEjkgnCYtYKtwDhbVezZlHu0VC8EKYjfw8ksJuGTrE0ijczWbzZneP4OjUpQnG0L8zn%2BHt0jjdIcQFg2lFifxAsH%2FBTaN%2BZUElkWc8By1ROaZysUgxSojwDCGD%2BWMD2oiEnkIdwH%2FksG5LcHa8OOYX9mRVnkwuuwe97cciY%2BQzhwGeJRdhFK14zz88W2J42jjwI0N6BGSXX7kVsp11XQdMzAB74mjPUSmL%2Bkj6OY44mDvb%2F8dCFyvCCXvVhjOmVgDVkcXOwjm1RA3GARHUg3gbrcR5ty8utlBo7iwuEPEYBwhWFuejVfMge2nrxUIZnPsMTcafTRV2CHfnboWkAJth9ukGL4Rhjwlr3yfEj5D6QOKLNFJwjw9O4F%2Fq%2BobumphIWvE11CRSb7c9StpX5A6h46aYihdVC%2FjhHDr5270Vh9TW3RPn0NomiZDjm2rqG9iVNb6uu0cNUWIV2DMZ8VzoF7SxYNYsqNZixWvY9r%2FMFXkYmlqoSQwwvKwtnr81vAQ34iINwphm5jY8ZFhUofmKDYrhWtxhKkIQK7JE0l0abVcMn8UWLLN5Jnb%2FzaPvzLNZdwbYEpDb5IgoLlB%2FeZbrJ6x64jcYWKvdfJmRDgtYY64jlJWzhNn%2Fk2NpX1gC%2FPDOZyMOHZow5Y2l0QY6pgETnzZScZLePUSFnBTEDHQjCG8gRONIXuNFElR9jeE%2BfWWpO9PF1bO%2BC2y8yJJ%2FDJFr8wbL9zG0wP2VHZrehkbDbOzmwyyfxE3EHdnGkoOqHFiouX2Z95JssurIWVgzEFnN9bK%2BSTmkMkOlWATdRAKjnbiNjvyfLmOVJY8C%2FwkMLgy9VgBSygVk0UL3vZRp4FyQY7aC%2FpBFDJvez%2FtjCZU6i7BdVm%2Bs&X-Amz-Signature=aea6d30085abc2f5fde5beece73672ab04cf6ea473eb786eddec3c03cb655d34&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
