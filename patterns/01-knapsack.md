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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ULVTXDX%2F20261105%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261105T160924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIQDJRF%2FSJQEh%2F105siEH8pZ%2FnJvNUv14rprH1sh%2FFxb2gwIgBAqqvlDzXfWLXCqPuMhjqZuAGcZ5QJprrGQjqXABBGAqiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMb5%2F9zw9i93U4IwQCrcAwRWMlybC77JKufMqHJbY1IMyEnLCx0YqPu3ezz9bprjkNcOwCUAiwZtf9%2FrrxdE4tn6H%2BCEyqoprPMMwJwJgGZoyljPN3Gx5H6BHDqrm8%2FnuCBfnLEoBXhS0qNpuo2hPRxPx%2BI6GvQ1YXL3GJ6UPWLIypb2%2Fzg%2B%2FlKSuxQ%2BMi%2BhoMPpbbzedCwEtm5zeYXteVePXkwNpbrZYKcG9lqUr%2FkImQHfb3QAfg8m%2FCyy9nyL%2BqA5Yu%2FNU8oi1o20hapCOT2DHIDdvxdB5%2FH9AqCZqwPAlH8%2FG7mbOWx0hozqemv%2Fswh7fjG70VmsjgNSssx02QsxfxfH5mT1ThU7MUD9xbBZv8fvER9cL2F%2BnEVqpvCmbCWI%2Fp%2F5qEuw9FiSWI22%2BzrUfa0VZ%2BZTti4aB%2F2ybXfbEorJ0k5K%2Fp%2BACceefjgoLhzQmjvIc5nx5q62ysysH2PxlZjV1CmgcU6ib5whW9uM6VS7b%2FJIaAgcOFZclUnxzGR0xNXtk3jXggda0tZO90YtdsSzx8ZhG3mpBd4PZpzy%2BiVLwiOPnOD41Yr8h%2B%2F28R0jEj2RUG2JpCXnFeXgCZLMU42UmfvadueeM7fz3UbzWZJ461x%2BuIAQQpCU2e6ps%2FSsz1GcKAC8XTTTMODDstcGOqUBi5YwOvpzfKOEGeIuV6HbIXS5jGUU%2FRm1l5dEV3cyC2wXDCHHXqChjU3uNpBZlJIotTTxPygaRxs%2FtSkniUtQbwGSdjLbq7q6xsKuFC%2F0EseeYhZnLNVdaCXWwGq21xSdmBmm%2B%2FOEMqmZfVm9IEwZd%2BvcFGyRDQvh6o8q8AI9APLEJ2DR3Gp6AVmIoCE1Pdeex4zrkJn0KSwG03VLfS36rY6HfiXB&X-Amz-Signature=571bbbd5be4b218343e4d9445cb7bfa1dc2a8988d13a5a67f69af6f04a339511&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ULVTXDX%2F20261105%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261105T160924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIQDJRF%2FSJQEh%2F105siEH8pZ%2FnJvNUv14rprH1sh%2FFxb2gwIgBAqqvlDzXfWLXCqPuMhjqZuAGcZ5QJprrGQjqXABBGAqiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMb5%2F9zw9i93U4IwQCrcAwRWMlybC77JKufMqHJbY1IMyEnLCx0YqPu3ezz9bprjkNcOwCUAiwZtf9%2FrrxdE4tn6H%2BCEyqoprPMMwJwJgGZoyljPN3Gx5H6BHDqrm8%2FnuCBfnLEoBXhS0qNpuo2hPRxPx%2BI6GvQ1YXL3GJ6UPWLIypb2%2Fzg%2B%2FlKSuxQ%2BMi%2BhoMPpbbzedCwEtm5zeYXteVePXkwNpbrZYKcG9lqUr%2FkImQHfb3QAfg8m%2FCyy9nyL%2BqA5Yu%2FNU8oi1o20hapCOT2DHIDdvxdB5%2FH9AqCZqwPAlH8%2FG7mbOWx0hozqemv%2Fswh7fjG70VmsjgNSssx02QsxfxfH5mT1ThU7MUD9xbBZv8fvER9cL2F%2BnEVqpvCmbCWI%2Fp%2F5qEuw9FiSWI22%2BzrUfa0VZ%2BZTti4aB%2F2ybXfbEorJ0k5K%2Fp%2BACceefjgoLhzQmjvIc5nx5q62ysysH2PxlZjV1CmgcU6ib5whW9uM6VS7b%2FJIaAgcOFZclUnxzGR0xNXtk3jXggda0tZO90YtdsSzx8ZhG3mpBd4PZpzy%2BiVLwiOPnOD41Yr8h%2B%2F28R0jEj2RUG2JpCXnFeXgCZLMU42UmfvadueeM7fz3UbzWZJ461x%2BuIAQQpCU2e6ps%2FSsz1GcKAC8XTTTMODDstcGOqUBi5YwOvpzfKOEGeIuV6HbIXS5jGUU%2FRm1l5dEV3cyC2wXDCHHXqChjU3uNpBZlJIotTTxPygaRxs%2FtSkniUtQbwGSdjLbq7q6xsKuFC%2F0EseeYhZnLNVdaCXWwGq21xSdmBmm%2B%2FOEMqmZfVm9IEwZd%2BvcFGyRDQvh6o8q8AI9APLEJ2DR3Gp6AVmIoCE1Pdeex4zrkJn0KSwG03VLfS36rY6HfiXB&X-Amz-Signature=7264ad519454a54f0830c0a3334e4b0f02c128446d1c90aa6985b925827c29fe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ULVTXDX%2F20261105%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261105T160924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIQDJRF%2FSJQEh%2F105siEH8pZ%2FnJvNUv14rprH1sh%2FFxb2gwIgBAqqvlDzXfWLXCqPuMhjqZuAGcZ5QJprrGQjqXABBGAqiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMb5%2F9zw9i93U4IwQCrcAwRWMlybC77JKufMqHJbY1IMyEnLCx0YqPu3ezz9bprjkNcOwCUAiwZtf9%2FrrxdE4tn6H%2BCEyqoprPMMwJwJgGZoyljPN3Gx5H6BHDqrm8%2FnuCBfnLEoBXhS0qNpuo2hPRxPx%2BI6GvQ1YXL3GJ6UPWLIypb2%2Fzg%2B%2FlKSuxQ%2BMi%2BhoMPpbbzedCwEtm5zeYXteVePXkwNpbrZYKcG9lqUr%2FkImQHfb3QAfg8m%2FCyy9nyL%2BqA5Yu%2FNU8oi1o20hapCOT2DHIDdvxdB5%2FH9AqCZqwPAlH8%2FG7mbOWx0hozqemv%2Fswh7fjG70VmsjgNSssx02QsxfxfH5mT1ThU7MUD9xbBZv8fvER9cL2F%2BnEVqpvCmbCWI%2Fp%2F5qEuw9FiSWI22%2BzrUfa0VZ%2BZTti4aB%2F2ybXfbEorJ0k5K%2Fp%2BACceefjgoLhzQmjvIc5nx5q62ysysH2PxlZjV1CmgcU6ib5whW9uM6VS7b%2FJIaAgcOFZclUnxzGR0xNXtk3jXggda0tZO90YtdsSzx8ZhG3mpBd4PZpzy%2BiVLwiOPnOD41Yr8h%2B%2F28R0jEj2RUG2JpCXnFeXgCZLMU42UmfvadueeM7fz3UbzWZJ461x%2BuIAQQpCU2e6ps%2FSsz1GcKAC8XTTTMODDstcGOqUBi5YwOvpzfKOEGeIuV6HbIXS5jGUU%2FRm1l5dEV3cyC2wXDCHHXqChjU3uNpBZlJIotTTxPygaRxs%2FtSkniUtQbwGSdjLbq7q6xsKuFC%2F0EseeYhZnLNVdaCXWwGq21xSdmBmm%2B%2FOEMqmZfVm9IEwZd%2BvcFGyRDQvh6o8q8AI9APLEJ2DR3Gp6AVmIoCE1Pdeex4zrkJn0KSwG03VLfS36rY6HfiXB&X-Amz-Signature=d6d3328faa769d9063a6a922ca0d06c232ca502db4c54efe19f8cedfae64c738&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSWQHPNO%2F20261105%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261105T160924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIAYh458k0wGXFzjLKkwyGsVc1M%2BmhXDWz4SJLuBUxOICAiEA%2FB5ygZVMXi7Qv7rQRmeFq1o2AFNfKjYJIHqIAzTmTIwqiAQIyP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLAk0SD9N5s058sO3yrcAxByVdUr6P6uiaInWJKx4lfTMGyZ4clnYxXe5VpuNfh7B0lojPAukvlUJB15RtBOQhb8v8BobfTxQ27M5XcmLCrzY6SgGX5BojaqNGRzTz8ZLNy4fy1vhLP9q72hqPes%2B9lHjs2jbEFIB4Fg6EXvUzwkQKZO0OqRqSro%2BjzO0uZDuOvHa9uiRrdeSfW75Lanw3kcisYMeka9GtbzNcP9TRdOr38crCuQgE7Nx6SE5HaqMb2Q2%2FClp0VOh5cvUGoojjWQHQn3Zi%2FJyDt0E%2BjDh7bi5p9GZSK3l2LicKJ86SIwuLm%2BNqvCCDCos1qxHR28xKEQVLB9Flow%2BAdXjf5MEo4sUF6PXOxhGDUS8OJkfB3fIvtF5f%2FnMbeh2H4tnDcPd07JwiVA%2FC8HOQdgOxwKpi%2Ffy%2B4fmt2Q%2BJdQxi3eIWWjx5hZ2lfWD%2F95i7pGyOBLiugBSz%2BRFr1gC7ZpzDqHc5l5A7Wsd3qARixoIhG5Krs41%2F6Z3pGb9jV5SbbakaMZ03LVum7gxK9b53QngI6%2BUDEchsaPEpLRo7%2BFDR90dLkte19cybEoxBYZgLKFdF7CTwW%2F7kPoQU%2BR7bN%2FkRRdUhBpCm1FjelV70je06azqKEDLKh4DJXCAAlxF2RvMOPFstcGOqUBap7onwljORlJMfuNFCM0XhxRe8g6%2BNZdxkrHHn6ShnH1IF4i2s2jozlItIWWvMZosJ%2BqaLxdXMnV%2BOTtUTEviCbkX0pQ4im2ftAwWKaTfRoNnE7KW8hR4js2v8KmuBfFN1K%2B90eIqfYKb6tGLQxoHRYnSwHnibqYXcW8TVIR5s%2BDR5M8o3FfYvABP9T4cy%2FZu%2BRJipDaZ4wMw78B5fKUv5zcdW6f&X-Amz-Signature=748eb836d1ba1698fbff4ca30758bc5adf87281eb02c1185d1f79b9c82e2b45b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSWQHPNO%2F20261105%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261105T160924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIAYh458k0wGXFzjLKkwyGsVc1M%2BmhXDWz4SJLuBUxOICAiEA%2FB5ygZVMXi7Qv7rQRmeFq1o2AFNfKjYJIHqIAzTmTIwqiAQIyP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLAk0SD9N5s058sO3yrcAxByVdUr6P6uiaInWJKx4lfTMGyZ4clnYxXe5VpuNfh7B0lojPAukvlUJB15RtBOQhb8v8BobfTxQ27M5XcmLCrzY6SgGX5BojaqNGRzTz8ZLNy4fy1vhLP9q72hqPes%2B9lHjs2jbEFIB4Fg6EXvUzwkQKZO0OqRqSro%2BjzO0uZDuOvHa9uiRrdeSfW75Lanw3kcisYMeka9GtbzNcP9TRdOr38crCuQgE7Nx6SE5HaqMb2Q2%2FClp0VOh5cvUGoojjWQHQn3Zi%2FJyDt0E%2BjDh7bi5p9GZSK3l2LicKJ86SIwuLm%2BNqvCCDCos1qxHR28xKEQVLB9Flow%2BAdXjf5MEo4sUF6PXOxhGDUS8OJkfB3fIvtF5f%2FnMbeh2H4tnDcPd07JwiVA%2FC8HOQdgOxwKpi%2Ffy%2B4fmt2Q%2BJdQxi3eIWWjx5hZ2lfWD%2F95i7pGyOBLiugBSz%2BRFr1gC7ZpzDqHc5l5A7Wsd3qARixoIhG5Krs41%2F6Z3pGb9jV5SbbakaMZ03LVum7gxK9b53QngI6%2BUDEchsaPEpLRo7%2BFDR90dLkte19cybEoxBYZgLKFdF7CTwW%2F7kPoQU%2BR7bN%2FkRRdUhBpCm1FjelV70je06azqKEDLKh4DJXCAAlxF2RvMOPFstcGOqUBap7onwljORlJMfuNFCM0XhxRe8g6%2BNZdxkrHHn6ShnH1IF4i2s2jozlItIWWvMZosJ%2BqaLxdXMnV%2BOTtUTEviCbkX0pQ4im2ftAwWKaTfRoNnE7KW8hR4js2v8KmuBfFN1K%2B90eIqfYKb6tGLQxoHRYnSwHnibqYXcW8TVIR5s%2BDR5M8o3FfYvABP9T4cy%2FZu%2BRJipDaZ4wMw78B5fKUv5zcdW6f&X-Amz-Signature=135dcb7df2674595f67d0ef7e9729b3685a154500f163a8a0b96ae628341c71f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSWQHPNO%2F20261105%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261105T160924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIAYh458k0wGXFzjLKkwyGsVc1M%2BmhXDWz4SJLuBUxOICAiEA%2FB5ygZVMXi7Qv7rQRmeFq1o2AFNfKjYJIHqIAzTmTIwqiAQIyP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLAk0SD9N5s058sO3yrcAxByVdUr6P6uiaInWJKx4lfTMGyZ4clnYxXe5VpuNfh7B0lojPAukvlUJB15RtBOQhb8v8BobfTxQ27M5XcmLCrzY6SgGX5BojaqNGRzTz8ZLNy4fy1vhLP9q72hqPes%2B9lHjs2jbEFIB4Fg6EXvUzwkQKZO0OqRqSro%2BjzO0uZDuOvHa9uiRrdeSfW75Lanw3kcisYMeka9GtbzNcP9TRdOr38crCuQgE7Nx6SE5HaqMb2Q2%2FClp0VOh5cvUGoojjWQHQn3Zi%2FJyDt0E%2BjDh7bi5p9GZSK3l2LicKJ86SIwuLm%2BNqvCCDCos1qxHR28xKEQVLB9Flow%2BAdXjf5MEo4sUF6PXOxhGDUS8OJkfB3fIvtF5f%2FnMbeh2H4tnDcPd07JwiVA%2FC8HOQdgOxwKpi%2Ffy%2B4fmt2Q%2BJdQxi3eIWWjx5hZ2lfWD%2F95i7pGyOBLiugBSz%2BRFr1gC7ZpzDqHc5l5A7Wsd3qARixoIhG5Krs41%2F6Z3pGb9jV5SbbakaMZ03LVum7gxK9b53QngI6%2BUDEchsaPEpLRo7%2BFDR90dLkte19cybEoxBYZgLKFdF7CTwW%2F7kPoQU%2BR7bN%2FkRRdUhBpCm1FjelV70je06azqKEDLKh4DJXCAAlxF2RvMOPFstcGOqUBap7onwljORlJMfuNFCM0XhxRe8g6%2BNZdxkrHHn6ShnH1IF4i2s2jozlItIWWvMZosJ%2BqaLxdXMnV%2BOTtUTEviCbkX0pQ4im2ftAwWKaTfRoNnE7KW8hR4js2v8KmuBfFN1K%2B90eIqfYKb6tGLQxoHRYnSwHnibqYXcW8TVIR5s%2BDR5M8o3FfYvABP9T4cy%2FZu%2BRJipDaZ4wMw78B5fKUv5zcdW6f&X-Amz-Signature=6589f5cce3ac3db783d369f677ffb3cc6010220135d5bbe51300968c32cb9f3a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSWQHPNO%2F20261105%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261105T160924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIAYh458k0wGXFzjLKkwyGsVc1M%2BmhXDWz4SJLuBUxOICAiEA%2FB5ygZVMXi7Qv7rQRmeFq1o2AFNfKjYJIHqIAzTmTIwqiAQIyP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLAk0SD9N5s058sO3yrcAxByVdUr6P6uiaInWJKx4lfTMGyZ4clnYxXe5VpuNfh7B0lojPAukvlUJB15RtBOQhb8v8BobfTxQ27M5XcmLCrzY6SgGX5BojaqNGRzTz8ZLNy4fy1vhLP9q72hqPes%2B9lHjs2jbEFIB4Fg6EXvUzwkQKZO0OqRqSro%2BjzO0uZDuOvHa9uiRrdeSfW75Lanw3kcisYMeka9GtbzNcP9TRdOr38crCuQgE7Nx6SE5HaqMb2Q2%2FClp0VOh5cvUGoojjWQHQn3Zi%2FJyDt0E%2BjDh7bi5p9GZSK3l2LicKJ86SIwuLm%2BNqvCCDCos1qxHR28xKEQVLB9Flow%2BAdXjf5MEo4sUF6PXOxhGDUS8OJkfB3fIvtF5f%2FnMbeh2H4tnDcPd07JwiVA%2FC8HOQdgOxwKpi%2Ffy%2B4fmt2Q%2BJdQxi3eIWWjx5hZ2lfWD%2F95i7pGyOBLiugBSz%2BRFr1gC7ZpzDqHc5l5A7Wsd3qARixoIhG5Krs41%2F6Z3pGb9jV5SbbakaMZ03LVum7gxK9b53QngI6%2BUDEchsaPEpLRo7%2BFDR90dLkte19cybEoxBYZgLKFdF7CTwW%2F7kPoQU%2BR7bN%2FkRRdUhBpCm1FjelV70je06azqKEDLKh4DJXCAAlxF2RvMOPFstcGOqUBap7onwljORlJMfuNFCM0XhxRe8g6%2BNZdxkrHHn6ShnH1IF4i2s2jozlItIWWvMZosJ%2BqaLxdXMnV%2BOTtUTEviCbkX0pQ4im2ftAwWKaTfRoNnE7KW8hR4js2v8KmuBfFN1K%2B90eIqfYKb6tGLQxoHRYnSwHnibqYXcW8TVIR5s%2BDR5M8o3FfYvABP9T4cy%2FZu%2BRJipDaZ4wMw78B5fKUv5zcdW6f&X-Amz-Signature=7a49b14bad107c77c7a56fd1f86feec0e1d74ebe7119e4ad57853b6c80d78db2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TLDNZKEY%2F20261105%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261105T160925Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIATxlx0JFZ%2Frek0TQ92hmu4vJZZoNNhmkHmzdYg%2B4BcPAiEAl7vFkQU62AO59mDofsQBdr2pq8hSXPxv%2FBwkd%2B882rsqiAQIyP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDACOr0phlzryEaVjgyrcAxj3L9tRhmCaQbuJwveXttsWIGVQCVLfVrGxNsVuU8CujI4lNN2c2F9R7C99ntNJK21wleH2l0qyZ6oZpelVZ2e2vNRzp1bQ8LoflEiICelk%2B1h0wiKtrAX0OPF3g%2FgwDwMV44bZOZA3yu7S30WINZJW8aK4jNjCSckLwHHYrjJSV4f7fjT%2Fm%2FZ22AJDQ20FnMlojiCPU2ABIjpBrV4x98lXotG%2FAZiK0QJ1SVYzY8xVm27zUFb9U2G63VVbpptuBrwhxebSsyrRsBTvAHvqlBrLvVLxdOr5vRmDTKPlAdf5J1LX%2F23Pvi68FQLpqplUi7K2vBYrH3TZUhaN1g2KpARoybSAj0hx45E0P%2BeQ6uc9eAlXlJQJz2C1cHqi5O8uibn5ur6SkJUogTIyA%2FpVlfbo0KZvwAXcz%2BaeEe%2B3aLswM2y7rdkq1VWfTichZIE8qYAptsMqrJ5Td%2BZtPy%2FeNXbwXJy23QOPXL%2Fx%2F41Ozc53Gqgro5rhDnY1Lzca601%2FWzlEzQJaxxeXePjkzxEyGopMaYxmFmym4ABkkThJ4QKIDvTWoffZBImRQlTkoX7vVxE6TDu2D%2BCbNF3E8GD1hYWMgKJv0%2FaayoiYnNqTpeZwpDKa2lstyNslPRIbMO3DstcGOqUBL31rh%2Fz0Wy7nq8un1Hx4JokWW9bhkLG2Lebo5AlJ7FCOqh1MoNI8rqOINO6eCYI69BKoI3d4PA3hD3odbXn9CvShtoUVB%2FZHkgvURmx1KYCPndu3DtCH5BCu2j8hLZvdEdfEWPkdcPwa3ivuaE5eC6teRWUbZIkvCNRLo8Uj4FlLBSi17EnDe%2B9nujA0p8WbXow1%2FNyRKwjrPImlLfTwPtezcHNP&X-Amz-Signature=fe72fd68c3b7cf45cf11e7a859d71bdc25630fdc6f173972f16e7c498890547a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666JHIYCXX%2F20261105%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261105T160925Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIHEOezW%2FaG0BIWbHlXbMy5r21ucWhYlJVGbCh%2B%2BvRXJ1AiEAnj7VjPkriRiick2QMp4FfFmp2hJBCoEi3PAtkxnlR%2B8qiAQIyP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBGo7iySbJAdEJrmXSrcA6GKZb%2B%2B7gk0iknAPhYFEFRX5%2BqWYqpKH0%2FZfB2GxVNjI852IO22JWWfM4WO8MFMnUCA1ci1B%2BpFMqRuHDNH%2FCBYukHs9TOyo49GsT9kYrB2H9uhLyKjLvyjWR1cjGmYQGgAQmQ%2Flw56tFDqkRMYO5sMoRQ473SsXsnHpJeBmF4VswvD6N479mjLqN%2BTRIrXGErxhce%2FctjHWbhtENoI2K%2BmKDgXyPtg5zzsKRuHIdSVCtTJEmQmE%2FiE6ViwuTrwMizWXs7JzbFD1lwWUdtp8FKtgXpOSHncwPS0nEDd%2FCjiHpuCyqEibnpB3ik3xxAJV14n3FsftFF1snWje8OIrtVTg7qJBhbXwrh6HdxWNXLYZqoq0%2BOeMAgngxCLxPKg5OwZ%2BuTo%2Bzf5CghxEP%2F48TR3ZpknLa7hk67%2B36LdEqwY1l1Ro23w%2FFoVnQGYfxsXywFRAO8c4fW1qodgtamdLu7NWvwd%2BrAlyc%2BGEGk7s2vBBMXATBA7r%2F08wRQn%2BqBB0JqA%2B83QQP4CIX7%2FwWIHuI%2FYEIF4xsFJIjXeNTqE663XEtw88TK51NzX7d6NMZ3BBv4SU6%2BZPhb3nos79J7bidJVKpw0MU1lPCSyW3dbWhwrEnJnGV4TZuw0LXeeMNDDstcGOqUBXvqVnrzG1yZ37ILVFK83xlsEsRDG9wpR2D03tgxgIhabgDt6HO7nqhrTksWIVwHWjp1DzmqwkMAjfCXiXaEhtopxa3trHSBA7IpNXXcKtkjLg9WKHg129rjmq3uFaBtyem4SuIar%2FauO36QQyHsNOWNtnyShUYcq%2F0KhUkU2kzz258JVGOXAWwFKvSnj9vrcn%2BY%2F3xRsjLx1%2B5XIVuKAObR4DFpg&X-Amz-Signature=b7fe38a04595c08ec8b4434d7b380937b9aae0d9810a8522c294058ff93e23aa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666JHIYCXX%2F20261105%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261105T160925Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAAaCXVzLXdlc3QtMiJHMEUCIHEOezW%2FaG0BIWbHlXbMy5r21ucWhYlJVGbCh%2B%2BvRXJ1AiEAnj7VjPkriRiick2QMp4FfFmp2hJBCoEi3PAtkxnlR%2B8qiAQIyP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBGo7iySbJAdEJrmXSrcA6GKZb%2B%2B7gk0iknAPhYFEFRX5%2BqWYqpKH0%2FZfB2GxVNjI852IO22JWWfM4WO8MFMnUCA1ci1B%2BpFMqRuHDNH%2FCBYukHs9TOyo49GsT9kYrB2H9uhLyKjLvyjWR1cjGmYQGgAQmQ%2Flw56tFDqkRMYO5sMoRQ473SsXsnHpJeBmF4VswvD6N479mjLqN%2BTRIrXGErxhce%2FctjHWbhtENoI2K%2BmKDgXyPtg5zzsKRuHIdSVCtTJEmQmE%2FiE6ViwuTrwMizWXs7JzbFD1lwWUdtp8FKtgXpOSHncwPS0nEDd%2FCjiHpuCyqEibnpB3ik3xxAJV14n3FsftFF1snWje8OIrtVTg7qJBhbXwrh6HdxWNXLYZqoq0%2BOeMAgngxCLxPKg5OwZ%2BuTo%2Bzf5CghxEP%2F48TR3ZpknLa7hk67%2B36LdEqwY1l1Ro23w%2FFoVnQGYfxsXywFRAO8c4fW1qodgtamdLu7NWvwd%2BrAlyc%2BGEGk7s2vBBMXATBA7r%2F08wRQn%2BqBB0JqA%2B83QQP4CIX7%2FwWIHuI%2FYEIF4xsFJIjXeNTqE663XEtw88TK51NzX7d6NMZ3BBv4SU6%2BZPhb3nos79J7bidJVKpw0MU1lPCSyW3dbWhwrEnJnGV4TZuw0LXeeMNDDstcGOqUBXvqVnrzG1yZ37ILVFK83xlsEsRDG9wpR2D03tgxgIhabgDt6HO7nqhrTksWIVwHWjp1DzmqwkMAjfCXiXaEhtopxa3trHSBA7IpNXXcKtkjLg9WKHg129rjmq3uFaBtyem4SuIar%2FauO36QQyHsNOWNtnyShUYcq%2F0KhUkU2kzz258JVGOXAWwFKvSnj9vrcn%2BY%2F3xRsjLx1%2B5XIVuKAObR4DFpg&X-Amz-Signature=e2203cf03546bd60b37bc5e5df015c70ee047922f4fba183868116e679b29ef7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
