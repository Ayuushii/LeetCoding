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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z526XZMJ%2F20260215%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260215T083302Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEE8aCXVzLXdlc3QtMiJHMEUCIFfsN5FJk4Sfz5vMqXK24CQuJHvb%2BM%2BnPm%2BUr2wmQX8LAiEArUpFEvews%2F6yGbQDkqsvvQMLKfdxRJt7%2FEMwLtztUSUq%2FwMIGBAAGgw2Mzc0MjMxODM4MDUiDBikV5qbISzOKdLlnircA97%2Bcktd%2FXT84XhqwwSny9Z9EFjow7%2FYdAgT2ATguwpdWfga%2BInw2MKXWYBV8xCi9meid15ViyoWL7Ah5UOcmg67MyDF6ysoYRaUcxeKCE1rtq1AIL4fWdPo5ixRMHnkteveePFW%2B%2Fcy3ZaEWhrPJ23CutG38D7ST2hjrQYK%2FY9ffBCwWa7ls398l7F1meMJGv3AuwmSU9A0QUAnf4n8%2F8ma2JfL8HHsTc1z%2FF%2BA%2Bt12ET2JaID7O7uURsRLfXBrbhVwImTER7BldpaPuCkrH15AvlJw%2FDAGxsaQWK9WOy83euG9e6H9a8Q4yiqFHfVO1tTS41lbQWx0sXpZXhjY925LTxeCcGMy2bE7XDVf9%2FvoXqNwK8%2BwKiSEkrM6%2B6a5E3xShwS%2FNArSYFKHbkOklF39ThMc46FQDq5ls8LlwXgiI61ABEndPy48oi48JWWJ%2Bs3M6pU1YvEfdyHfBZNr1mamVhhzR6XhK0XkdZ3Pfbea6wiCXVRn2CCrfpvrCdKnsl6ABAz3kXfRL%2FqFRf71NQdy%2FJODE%2BWEzowB3Dz4Ffp%2BK0TNF7z4ky5zSLiBwMoWYBWVlPvd7e0OZO1xoSu51jUijOIi%2BF8%2BA%2BkvJ5scaUrc7GsVTKFM21E%2BdCd9MJ%2FexcwGOqUBuRH8aVnmNz2biqkFMGP8AW4f%2FTeaZPj%2FsGONUCEMe9nkD528XphM7HqeMdC2n0ol3lvP5B8SbeMGElhVNOPy3OyLSYaYlkMz%2F%2Bzuzjye%2F1CGimpibLOumRj5QcFuQUlkGa7%2B2NI3cDuWT5y4wtQVRV0WuHYSa96trPRKmm7Bs6hAXQ7i5DZyCct58TD9fkYakPTjOQ%2BB8PUwc0gPHrv2DzDyFeiA&X-Amz-Signature=dd71da6bd0527bd9b50fc67c230a45ed04187281452bb83205a8f3a4830164f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z526XZMJ%2F20260215%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260215T083302Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEE8aCXVzLXdlc3QtMiJHMEUCIFfsN5FJk4Sfz5vMqXK24CQuJHvb%2BM%2BnPm%2BUr2wmQX8LAiEArUpFEvews%2F6yGbQDkqsvvQMLKfdxRJt7%2FEMwLtztUSUq%2FwMIGBAAGgw2Mzc0MjMxODM4MDUiDBikV5qbISzOKdLlnircA97%2Bcktd%2FXT84XhqwwSny9Z9EFjow7%2FYdAgT2ATguwpdWfga%2BInw2MKXWYBV8xCi9meid15ViyoWL7Ah5UOcmg67MyDF6ysoYRaUcxeKCE1rtq1AIL4fWdPo5ixRMHnkteveePFW%2B%2Fcy3ZaEWhrPJ23CutG38D7ST2hjrQYK%2FY9ffBCwWa7ls398l7F1meMJGv3AuwmSU9A0QUAnf4n8%2F8ma2JfL8HHsTc1z%2FF%2BA%2Bt12ET2JaID7O7uURsRLfXBrbhVwImTER7BldpaPuCkrH15AvlJw%2FDAGxsaQWK9WOy83euG9e6H9a8Q4yiqFHfVO1tTS41lbQWx0sXpZXhjY925LTxeCcGMy2bE7XDVf9%2FvoXqNwK8%2BwKiSEkrM6%2B6a5E3xShwS%2FNArSYFKHbkOklF39ThMc46FQDq5ls8LlwXgiI61ABEndPy48oi48JWWJ%2Bs3M6pU1YvEfdyHfBZNr1mamVhhzR6XhK0XkdZ3Pfbea6wiCXVRn2CCrfpvrCdKnsl6ABAz3kXfRL%2FqFRf71NQdy%2FJODE%2BWEzowB3Dz4Ffp%2BK0TNF7z4ky5zSLiBwMoWYBWVlPvd7e0OZO1xoSu51jUijOIi%2BF8%2BA%2BkvJ5scaUrc7GsVTKFM21E%2BdCd9MJ%2FexcwGOqUBuRH8aVnmNz2biqkFMGP8AW4f%2FTeaZPj%2FsGONUCEMe9nkD528XphM7HqeMdC2n0ol3lvP5B8SbeMGElhVNOPy3OyLSYaYlkMz%2F%2Bzuzjye%2F1CGimpibLOumRj5QcFuQUlkGa7%2B2NI3cDuWT5y4wtQVRV0WuHYSa96trPRKmm7Bs6hAXQ7i5DZyCct58TD9fkYakPTjOQ%2BB8PUwc0gPHrv2DzDyFeiA&X-Amz-Signature=bf2a9372a93c9935c5f4041a2d038d04142e0c6ce5fd425c7698c7979cf3bbb0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z526XZMJ%2F20260215%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260215T083302Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEE8aCXVzLXdlc3QtMiJHMEUCIFfsN5FJk4Sfz5vMqXK24CQuJHvb%2BM%2BnPm%2BUr2wmQX8LAiEArUpFEvews%2F6yGbQDkqsvvQMLKfdxRJt7%2FEMwLtztUSUq%2FwMIGBAAGgw2Mzc0MjMxODM4MDUiDBikV5qbISzOKdLlnircA97%2Bcktd%2FXT84XhqwwSny9Z9EFjow7%2FYdAgT2ATguwpdWfga%2BInw2MKXWYBV8xCi9meid15ViyoWL7Ah5UOcmg67MyDF6ysoYRaUcxeKCE1rtq1AIL4fWdPo5ixRMHnkteveePFW%2B%2Fcy3ZaEWhrPJ23CutG38D7ST2hjrQYK%2FY9ffBCwWa7ls398l7F1meMJGv3AuwmSU9A0QUAnf4n8%2F8ma2JfL8HHsTc1z%2FF%2BA%2Bt12ET2JaID7O7uURsRLfXBrbhVwImTER7BldpaPuCkrH15AvlJw%2FDAGxsaQWK9WOy83euG9e6H9a8Q4yiqFHfVO1tTS41lbQWx0sXpZXhjY925LTxeCcGMy2bE7XDVf9%2FvoXqNwK8%2BwKiSEkrM6%2B6a5E3xShwS%2FNArSYFKHbkOklF39ThMc46FQDq5ls8LlwXgiI61ABEndPy48oi48JWWJ%2Bs3M6pU1YvEfdyHfBZNr1mamVhhzR6XhK0XkdZ3Pfbea6wiCXVRn2CCrfpvrCdKnsl6ABAz3kXfRL%2FqFRf71NQdy%2FJODE%2BWEzowB3Dz4Ffp%2BK0TNF7z4ky5zSLiBwMoWYBWVlPvd7e0OZO1xoSu51jUijOIi%2BF8%2BA%2BkvJ5scaUrc7GsVTKFM21E%2BdCd9MJ%2FexcwGOqUBuRH8aVnmNz2biqkFMGP8AW4f%2FTeaZPj%2FsGONUCEMe9nkD528XphM7HqeMdC2n0ol3lvP5B8SbeMGElhVNOPy3OyLSYaYlkMz%2F%2Bzuzjye%2F1CGimpibLOumRj5QcFuQUlkGa7%2B2NI3cDuWT5y4wtQVRV0WuHYSa96trPRKmm7Bs6hAXQ7i5DZyCct58TD9fkYakPTjOQ%2BB8PUwc0gPHrv2DzDyFeiA&X-Amz-Signature=b617211ffc83ace6877945e4ad23dfb51f327d655bb83252255c5e7b36beff88&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3GZT3LZ%2F20260215%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260215T083303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEE8aCXVzLXdlc3QtMiJHMEUCIQCUhTAW6aHo1%2B7D1wbHWkVmEjtG1eydQrzmjG4SoX93jgIgFMrLRNfzddgVQS9KwGPHNdgdmBIiyan2Aqm5G%2BwQOLMq%2FwMIGBAAGgw2Mzc0MjMxODM4MDUiDMUbkVp%2Fi%2BP00G38SyrcA6Dc4I1iZXAyVwraiuCjYAi60JEC%2BVKC3ylCkDL0msmCP1ywGuUAtvZLRXiMqzWh7h%2FTT2mjYf4c0n5lYZTjri93cLEvnNrvmQ9GpUI2JyzCDBPtNCkWSgb4N0ZmpYzS7DCx0vnWG5ZwAEMpUgjq3QI%2FNO0p6WxCXmkBHEzCZIo2GE5aDXikhfVXjcVwJkRCwCH2b5kNd1zShQpw4f0kCp3niMACTjQ7ph9QKZw1jyv6SSuJ%2BIZh7WvuNNFM3UbuKDnaqBMhwiRKnEn5L%2FvBxdpcGAy2fC%2FecfUeHIKFAOWfmXOWBo9zOUj5QNyVl55RR8ogIOGUrE8qtF7Cj7xZ3ZqdTc7xVP1sYNdbSbFDfww%2F6B5q8c2qG1GunE2mWyzoDH6RRQtOORwaFrHs0mtQGIckLa3hFgS4PCyzfTR1DJWtdWV9w%2BAtJuXWkO7%2FJJz0nJKwxY3Z9L3B%2F7295hudYeXYo8KtEB%2FQ0i1j1%2FoN0CtxZx%2FusV0lQY219aT5%2F4668NRY7PeuTZVr%2FV0uyfvHmHdjSQPONlHC%2FWNs3GuDdMlCxuiUtC6Xqw%2BW2kDPB4K9tF4JjEaSOrbxByZilCj9sCfPxUBefZKvGW5ZWcspcz4noy1EyrsrHA2ApmnvMMXexcwGOqUBHk1srZz2%2FH%2BGDC8UehPKWKEMCT4L7lJE%2BOTBor3AdF0EAMWMaNufaIRBNrMfXcGYOBRvB7cgDw50ISxylS5owo%2FSP7XnqgKzHgb0tua3gfK5OfQmpakGMazTBX5alQgbXmwZ5DMXH7lE%2FMkukS0VGM6kg77%2FoulTZqrn%2FbPC3jtdBOoTRJKS4bA13hIbcIOOFOzDG14cqsLfvp%2Ftz3M09D7Nci2O&X-Amz-Signature=85728dc6c1f99c083bb8f518740d370f43cbea295d18521e48dfc93bacf8dc95&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3GZT3LZ%2F20260215%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260215T083303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEE8aCXVzLXdlc3QtMiJHMEUCIQCUhTAW6aHo1%2B7D1wbHWkVmEjtG1eydQrzmjG4SoX93jgIgFMrLRNfzddgVQS9KwGPHNdgdmBIiyan2Aqm5G%2BwQOLMq%2FwMIGBAAGgw2Mzc0MjMxODM4MDUiDMUbkVp%2Fi%2BP00G38SyrcA6Dc4I1iZXAyVwraiuCjYAi60JEC%2BVKC3ylCkDL0msmCP1ywGuUAtvZLRXiMqzWh7h%2FTT2mjYf4c0n5lYZTjri93cLEvnNrvmQ9GpUI2JyzCDBPtNCkWSgb4N0ZmpYzS7DCx0vnWG5ZwAEMpUgjq3QI%2FNO0p6WxCXmkBHEzCZIo2GE5aDXikhfVXjcVwJkRCwCH2b5kNd1zShQpw4f0kCp3niMACTjQ7ph9QKZw1jyv6SSuJ%2BIZh7WvuNNFM3UbuKDnaqBMhwiRKnEn5L%2FvBxdpcGAy2fC%2FecfUeHIKFAOWfmXOWBo9zOUj5QNyVl55RR8ogIOGUrE8qtF7Cj7xZ3ZqdTc7xVP1sYNdbSbFDfww%2F6B5q8c2qG1GunE2mWyzoDH6RRQtOORwaFrHs0mtQGIckLa3hFgS4PCyzfTR1DJWtdWV9w%2BAtJuXWkO7%2FJJz0nJKwxY3Z9L3B%2F7295hudYeXYo8KtEB%2FQ0i1j1%2FoN0CtxZx%2FusV0lQY219aT5%2F4668NRY7PeuTZVr%2FV0uyfvHmHdjSQPONlHC%2FWNs3GuDdMlCxuiUtC6Xqw%2BW2kDPB4K9tF4JjEaSOrbxByZilCj9sCfPxUBefZKvGW5ZWcspcz4noy1EyrsrHA2ApmnvMMXexcwGOqUBHk1srZz2%2FH%2BGDC8UehPKWKEMCT4L7lJE%2BOTBor3AdF0EAMWMaNufaIRBNrMfXcGYOBRvB7cgDw50ISxylS5owo%2FSP7XnqgKzHgb0tua3gfK5OfQmpakGMazTBX5alQgbXmwZ5DMXH7lE%2FMkukS0VGM6kg77%2FoulTZqrn%2FbPC3jtdBOoTRJKS4bA13hIbcIOOFOzDG14cqsLfvp%2Ftz3M09D7Nci2O&X-Amz-Signature=fd9ef7f9b2c149d1e0187795fa6922a9c9170f797e29b928345996f74af31959&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3GZT3LZ%2F20260215%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260215T083303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEE8aCXVzLXdlc3QtMiJHMEUCIQCUhTAW6aHo1%2B7D1wbHWkVmEjtG1eydQrzmjG4SoX93jgIgFMrLRNfzddgVQS9KwGPHNdgdmBIiyan2Aqm5G%2BwQOLMq%2FwMIGBAAGgw2Mzc0MjMxODM4MDUiDMUbkVp%2Fi%2BP00G38SyrcA6Dc4I1iZXAyVwraiuCjYAi60JEC%2BVKC3ylCkDL0msmCP1ywGuUAtvZLRXiMqzWh7h%2FTT2mjYf4c0n5lYZTjri93cLEvnNrvmQ9GpUI2JyzCDBPtNCkWSgb4N0ZmpYzS7DCx0vnWG5ZwAEMpUgjq3QI%2FNO0p6WxCXmkBHEzCZIo2GE5aDXikhfVXjcVwJkRCwCH2b5kNd1zShQpw4f0kCp3niMACTjQ7ph9QKZw1jyv6SSuJ%2BIZh7WvuNNFM3UbuKDnaqBMhwiRKnEn5L%2FvBxdpcGAy2fC%2FecfUeHIKFAOWfmXOWBo9zOUj5QNyVl55RR8ogIOGUrE8qtF7Cj7xZ3ZqdTc7xVP1sYNdbSbFDfww%2F6B5q8c2qG1GunE2mWyzoDH6RRQtOORwaFrHs0mtQGIckLa3hFgS4PCyzfTR1DJWtdWV9w%2BAtJuXWkO7%2FJJz0nJKwxY3Z9L3B%2F7295hudYeXYo8KtEB%2FQ0i1j1%2FoN0CtxZx%2FusV0lQY219aT5%2F4668NRY7PeuTZVr%2FV0uyfvHmHdjSQPONlHC%2FWNs3GuDdMlCxuiUtC6Xqw%2BW2kDPB4K9tF4JjEaSOrbxByZilCj9sCfPxUBefZKvGW5ZWcspcz4noy1EyrsrHA2ApmnvMMXexcwGOqUBHk1srZz2%2FH%2BGDC8UehPKWKEMCT4L7lJE%2BOTBor3AdF0EAMWMaNufaIRBNrMfXcGYOBRvB7cgDw50ISxylS5owo%2FSP7XnqgKzHgb0tua3gfK5OfQmpakGMazTBX5alQgbXmwZ5DMXH7lE%2FMkukS0VGM6kg77%2FoulTZqrn%2FbPC3jtdBOoTRJKS4bA13hIbcIOOFOzDG14cqsLfvp%2Ftz3M09D7Nci2O&X-Amz-Signature=5715b692ba30bf35a24baec94e6bd489fcd66c7a2c7c7b09956e86262a648940&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3GZT3LZ%2F20260215%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260215T083303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEE8aCXVzLXdlc3QtMiJHMEUCIQCUhTAW6aHo1%2B7D1wbHWkVmEjtG1eydQrzmjG4SoX93jgIgFMrLRNfzddgVQS9KwGPHNdgdmBIiyan2Aqm5G%2BwQOLMq%2FwMIGBAAGgw2Mzc0MjMxODM4MDUiDMUbkVp%2Fi%2BP00G38SyrcA6Dc4I1iZXAyVwraiuCjYAi60JEC%2BVKC3ylCkDL0msmCP1ywGuUAtvZLRXiMqzWh7h%2FTT2mjYf4c0n5lYZTjri93cLEvnNrvmQ9GpUI2JyzCDBPtNCkWSgb4N0ZmpYzS7DCx0vnWG5ZwAEMpUgjq3QI%2FNO0p6WxCXmkBHEzCZIo2GE5aDXikhfVXjcVwJkRCwCH2b5kNd1zShQpw4f0kCp3niMACTjQ7ph9QKZw1jyv6SSuJ%2BIZh7WvuNNFM3UbuKDnaqBMhwiRKnEn5L%2FvBxdpcGAy2fC%2FecfUeHIKFAOWfmXOWBo9zOUj5QNyVl55RR8ogIOGUrE8qtF7Cj7xZ3ZqdTc7xVP1sYNdbSbFDfww%2F6B5q8c2qG1GunE2mWyzoDH6RRQtOORwaFrHs0mtQGIckLa3hFgS4PCyzfTR1DJWtdWV9w%2BAtJuXWkO7%2FJJz0nJKwxY3Z9L3B%2F7295hudYeXYo8KtEB%2FQ0i1j1%2FoN0CtxZx%2FusV0lQY219aT5%2F4668NRY7PeuTZVr%2FV0uyfvHmHdjSQPONlHC%2FWNs3GuDdMlCxuiUtC6Xqw%2BW2kDPB4K9tF4JjEaSOrbxByZilCj9sCfPxUBefZKvGW5ZWcspcz4noy1EyrsrHA2ApmnvMMXexcwGOqUBHk1srZz2%2FH%2BGDC8UehPKWKEMCT4L7lJE%2BOTBor3AdF0EAMWMaNufaIRBNrMfXcGYOBRvB7cgDw50ISxylS5owo%2FSP7XnqgKzHgb0tua3gfK5OfQmpakGMazTBX5alQgbXmwZ5DMXH7lE%2FMkukS0VGM6kg77%2FoulTZqrn%2FbPC3jtdBOoTRJKS4bA13hIbcIOOFOzDG14cqsLfvp%2Ftz3M09D7Nci2O&X-Amz-Signature=43a323266a2a96637ded30d03c5cb49822dbf8b1544408394ca178aa42ce5373&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y3AAX2G4%2F20260215%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260215T083305Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEE8aCXVzLXdlc3QtMiJHMEUCICAZb4JJ805RhKmLMR4fsD9PaZm4KpoL0C85eXPPdtbTAiEAlYisznslJ8Z3Ue7bqNawOg88pgurs1D%2B%2BaNf%2Ft4sGZgq%2FwMIGBAAGgw2Mzc0MjMxODM4MDUiDCHN4CKRlt7kkwtdQCrcA730m8cXOrh%2Bi6N8Eh3mS%2Fo87oDg1bFz34Wewu7bVxN6f4ROQm1VD9i10xPu3ifk%2Bmv0ivPIsbnqAIKBzuuwXPfGiAIYRT5R4tVVx7%2BjcxqlzkQKa%2Fe%2Bo1wrax8Yg4MKHtZgZ0mBfsnBctgFJwrcHbInJokq80kL%2BHdNizpG5o8YOmsU4mJs4c5Ej4ce2r%2BjnnLFno7wOs5PAr8gejDh7ZokXKrWEag%2B7XsnJ9NPHhcmS6kVp6hCIxldtSLTW9vrA4YPyaDuvuhx3N19Do%2BGkNx02YVTr%2FMcv3VK96kAKspluiF4RKg1JXT8rc4DWqPC6Z9rxKmuMTuCZycV%2FeBxXlcjJTg6CWqP2zizPBf4b5VaSqInwwHzMZUMQ4%2BhZAf6uoulQobWQRWfzN0WPJoUj6nWdcNWgvse%2BwpzfXrAlsyWmHVpX%2Fv%2F%2F4rJfUfJ%2Bk0T0nfVgdisjG6so%2BFd7AyGkxYTUhpp%2BTvw0yRm9rdEKDAv4IVvEfPE01Guh1IqqhIC%2BdPJYhbqW8epCtuObrdowz03unD%2FpXym%2FwyTGuPjhFGoQ3MKLkoP3iBKr9I03bO%2BvI2lUa8Lz5Ty7gEfkxRkBDmiDREkKqlFYME8YwkICRptBDXCFrSV2vzOQl%2BYMKbexcwGOqUBXY%2Fsnv4BNo8wWU7YjuCcDVJvcQXe%2FeYMsG4JSM9obPKmrYh0sgO2t6H5dnC0UxL9p46b1DpU3qzxpvA6aAHbnjApVMWO1hKLZ%2B7rNdvHnIso4baemFSqYeux1gzCRzIsPVkVQwobvs%2FGQaQfkw4ul%2FjSeN5U9fPutGOmjA6ywCeOl3w8meVQ%2Fxg%2Bhgsj%2FToGxTX46sBwbB1SX14tEOZh4CWpWdwn&X-Amz-Signature=bdd44f70f664300c8a46a4025c1a9a802119ddd516f365731166c0d11643ab83&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WVQW4QFQ%2F20260215%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260215T083305Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEE8aCXVzLXdlc3QtMiJIMEYCIQCsGzBOr7Yx%2BQcIpQvdKHzXl4UIzHQnmpC7tCRA%2Buo9BQIhALAUsQxUc74nyKDbkTdn7t0R2yFdYsvKsOwIKYN4srZ1Kv8DCBgQABoMNjM3NDIzMTgzODA1IgzsREjt9wTRsWk2wVkq3AOc2PLMDbuclj9Sl8LnjbvgDs3SNEAMD5cm6F5zm1UpLEetgwnGaSoJyxq0UWce%2FgoPGblv4C%2Fk9%2FP1NbcejZkMo1K0kOeF9loZPxy6FjncVs0g8MTWWl8oHnB82ZLKrgvUfOgwKMrcRcfw3F52qBShCwXqPE32Jv%2BVWbpe7nMUfyiOricBIr92M4A0UivnEomBTcZcSjMKuJ2ZDZ1wFbbhrgv3IyBCQzlxjsbHlfR35cuxwSBNc%2Bo5H6MOf7wZKEltssZnUdNL1zRsC3Zrb65%2B1KQisguHA11x%2FO80EUFIkRzKEb1w0QVyTME5aGCb%2Fi4LO9sMjm%2B4s%2F7ID3LsyHA%2F3qHyk1uOYvjtwsGHSqC81g%2Fv2dq0XNR3llaW4Sa55FQlOc0Rn9T%2B3kYd%2B%2Fwrmdhx8%2F3Jeg84ftM9Lb%2BP%2BiQOG1XmZ9yk%2FfWeNlXFT0ag2cADBQsqZqQfvsBJTGkBZKQIcCpF04ShPoBZm%2B%2F3aAnNtCa1lylIyBRoteT7CXd0AEz%2F0RcYmMIx9F4cBtnyo5AgIifgUpt5qoPsOO12jVHizWCAz3JKdJKKW9UzSB2t5g8F2maNu%2FOHOClkAPjKkjzitsVeyu3%2Fc%2BBBh3Ne6PzKATVnc%2BZtJw12OF5a4TD%2B3cXMBjqkASbDh3a0aX8kYVIlw4vXO4W1rL06gp3XlKcBFtcWm1byidyN6rNHs%2FnsZD54T6kmTM%2BTGn9V1r9E4Y2n2DCt9D9QJfFxJKI0KWFHpDWBY2tr%2BErFU6luubPWvLe12xMMcSL0GkpTVAbwPuhtEF1ozcTHTaQzP3xvrpsRuvou8CxkP%2FcOOTRfUES9j2XLARY5VlQxd%2FeTXK5J6WfczgZUZmYj1gtE&X-Amz-Signature=87ed5367bd14ce9a45c8833d628822087595334a1305b396fe955ea86b12ed52&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WVQW4QFQ%2F20260215%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260215T083305Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEE8aCXVzLXdlc3QtMiJIMEYCIQCsGzBOr7Yx%2BQcIpQvdKHzXl4UIzHQnmpC7tCRA%2Buo9BQIhALAUsQxUc74nyKDbkTdn7t0R2yFdYsvKsOwIKYN4srZ1Kv8DCBgQABoMNjM3NDIzMTgzODA1IgzsREjt9wTRsWk2wVkq3AOc2PLMDbuclj9Sl8LnjbvgDs3SNEAMD5cm6F5zm1UpLEetgwnGaSoJyxq0UWce%2FgoPGblv4C%2Fk9%2FP1NbcejZkMo1K0kOeF9loZPxy6FjncVs0g8MTWWl8oHnB82ZLKrgvUfOgwKMrcRcfw3F52qBShCwXqPE32Jv%2BVWbpe7nMUfyiOricBIr92M4A0UivnEomBTcZcSjMKuJ2ZDZ1wFbbhrgv3IyBCQzlxjsbHlfR35cuxwSBNc%2Bo5H6MOf7wZKEltssZnUdNL1zRsC3Zrb65%2B1KQisguHA11x%2FO80EUFIkRzKEb1w0QVyTME5aGCb%2Fi4LO9sMjm%2B4s%2F7ID3LsyHA%2F3qHyk1uOYvjtwsGHSqC81g%2Fv2dq0XNR3llaW4Sa55FQlOc0Rn9T%2B3kYd%2B%2Fwrmdhx8%2F3Jeg84ftM9Lb%2BP%2BiQOG1XmZ9yk%2FfWeNlXFT0ag2cADBQsqZqQfvsBJTGkBZKQIcCpF04ShPoBZm%2B%2F3aAnNtCa1lylIyBRoteT7CXd0AEz%2F0RcYmMIx9F4cBtnyo5AgIifgUpt5qoPsOO12jVHizWCAz3JKdJKKW9UzSB2t5g8F2maNu%2FOHOClkAPjKkjzitsVeyu3%2Fc%2BBBh3Ne6PzKATVnc%2BZtJw12OF5a4TD%2B3cXMBjqkASbDh3a0aX8kYVIlw4vXO4W1rL06gp3XlKcBFtcWm1byidyN6rNHs%2FnsZD54T6kmTM%2BTGn9V1r9E4Y2n2DCt9D9QJfFxJKI0KWFHpDWBY2tr%2BErFU6luubPWvLe12xMMcSL0GkpTVAbwPuhtEF1ozcTHTaQzP3xvrpsRuvou8CxkP%2FcOOTRfUES9j2XLARY5VlQxd%2FeTXK5J6WfczgZUZmYj1gtE&X-Amz-Signature=4947deb0c29cb040ad28be0922636e684bb9e479ffb89bb5ed89748d377ff3db&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
